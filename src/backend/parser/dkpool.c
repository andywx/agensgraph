/*
 * dkpool.c
 *
 *  Created on: 2019年11月21日
 *      Author: liu
 */
/*
 *  Dkpool.c
 *
 *  $Id$
 *
 *  Temp memory pool for objects that should be allocated one by one but freed
 *  together.
 *
 *  This file is part of the OpenLink Software Virtuoso Open-Source (VOS)
 *  project.
 *
 *  Copyright (C) 1998-2019 OpenLink Software
 *
 *  This project is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; only version 2 of the License, dated June 1991.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

#include "Dk.h"
#ifdef HAVE_SYS_MMAN_H
#include <sys/mman.h>
#endif
#undef log
#include "math.h"
#include "dkpool.h"
#include"sparql.h"
#include"sparql_l.h"
#include"sparql_func.h"

void
mp_free_reuse (mem_pool_t * mp)
{

}


#ifdef MP_MAP_CHECK
dk_hash_t * mp_registered;
dk_mutex_t mp_reg_mtx;

void
mp_register (mem_pool_t * mp)
{

}


void
mp_unregister (mem_pool_t * mp)
{

}

int
mp_map_count ()
{

}

void
mp_map_count_print (char * buf, size_t max)
{
  }

#else
#define mp_register(mp)
#define mp_unregister(mp)

void
mp_map_count_print (char * buf, size_t max)
{
  buf[0] = '\0';
}
#endif

void mp_free_all_large (mem_pool_t * mp);

#define DBG_MP_ALLOC_BOX(mp,len,tag) DBG_NAME(mp_alloc_box) (DBG_ARGS (mp), (len), (tag))
#define DBG_MP_ALLOC_BOX_NI(mp,len,tag) DBG_NAME(mp_alloc_box_ni) (DBG_ARGS (mp), (len), (tag))
#define DBG_T_ALLOC_BOX(len,tag) DBG_NAME(t_alloc_box) (DBG_ARGS (len), (tag))

void
mp_uname_free (const void *k, void *data)
{

}

#define MP_BYTES_INCREMENT(mp,sz) do {\
  mp->mp_bytes += (sz); \
  if ((NULL != mp->mp_size_cap.cbk) && (mp->mp_bytes >= mp->mp_size_cap.limit) && (mp->mp_size_cap.limit >= mp->mp_size_cap.last_cbk_limit)) \
    { \
      mp->mp_size_cap.cbk (mp, mp->mp_size_cap.cbk_env); \
      mp->mp_size_cap.last_cbk_limit = mp->mp_size_cap.limit+1; \
    } \
  } while (0);

#ifdef LACERATED_POOL

#if defined (DEBUG) || defined (MALLOC_DEBUG)
mem_pool_t *
dbg_mem_pool_alloc (const char *file, int line)
#else
mem_pool_t *
mem_pool_alloc (void)
#endif
{
  NEW_VARZ (mem_pool_t, mp);
  mp->mp_size = 0x100;
  mp->mp_allocs = (caddr_t *) DK_ALLOC (sizeof (caddr_t) * mp->mp_size);
  mp->mp_unames = hash_table_allocate (11);
  DBG_NAME(hash_table_init) (DBG_ARGS  &mp->mp_large, 121);
  mp->mp_large.ht_rehash_threshold = 2;
  mp_register (mp);
#if defined (DEBUG) || defined (MALLOC_DEBUG)
  mp->mp_alloc_file = (char *) file;
  mp->mp_alloc_line = line;
#endif
  return mp;
}


void
mp_free (mem_pool_t * mp)
{
#ifdef MALLOC_DEBUG
  if (mp->mp_box_to_dc)
    hash_table_free (mp->mp_box_to_dc);
#endif
  mp_unregister (mp);
  if (mp->mp_tlsf)
    tlsf_destroy (mp->mp_tlsf); /*  supporting structs, the mmaps are part of mp large allocs */
  DO_SET (caddr_t, box, &mp->mp_trash)
  {
    dk_free_tree (box);
  }
  END_DO_SET ();
  while (mp->mp_fill)
    {
      caddr_t buf;
      const char *err;
      mp->mp_fill -= 1;
      buf = mp->mp_allocs[mp->mp_fill];
      err = dk_find_alloc_error (buf, mp);
      if (NULL != err)
	GPF_T1 (err);
      dk_freep (buf, mp);
    }
  maphash (mp_uname_free, mp->mp_unames);
  hash_table_free (mp->mp_unames);
  dk_free ((caddr_t) mp->mp_allocs, mp->mp_size * sizeof (caddr_t));
  mp_free_all_large (mp);
  mp_free_reuse (mp);
  dk_free ((caddr_t) mp, sizeof (mem_pool_t));
}

void
mp_check (mem_pool_t * mp)
{
  int fill;
  if (!mp)
    return;
  fill = mp->mp_fill;
  while (fill)
    {
      caddr_t buf;
      const char *err;
      fill -= 1;
      buf = mp->mp_allocs[fill];
      err = dk_find_alloc_error (buf, mp);
      if (NULL != err)
	GPF_T1 (err);
    }
}


void
mp_alloc_box_assert (mem_pool_t * mp, caddr_t box)
{
#ifdef DOUBLE_ALIGN
  const char *err = dk_find_alloc_error (box - 8, mp);
#else
  const char *err = dk_find_alloc_error (box - 4, mp);
#endif
  if (NULL != err)
    {
#ifdef DOUBLE_ALIGN
      dk_find_alloc_error (box - 8, mp); /* This is here to put a convenient breakpoint and look at the broken magic bytes with comfort */
#else
      dk_find_alloc_error (box - 4, mp); /* You can put only a breakpoint two lines above and not worry about #ifdef-s: if this branch is enabled then the debugger will move the breakpoint down */
#endif
      GPF_T1 (err);
    }
}


#else




#if defined (DEBUG) || defined (MALLOC_DEBUG)
mem_pool_t *
dbg_mem_pool_alloc (const char *file, int line)
#else
mem_pool_t *
mem_pool_alloc (void)
#endif
{

}

extern size_t mp_large_min;
size_t mp_block_size = 4096 * 20;


void
mp_free (mem_pool_t * mp)
{

}


size_t
mp_size (mem_pool_t * mp)
{

}
#endif

size_t mp_large_min = 80000;

caddr_t DBG_NAME (mp_alloc_box) (DBG_PARAMS mem_pool_t * mp, size_t len1, dtp_t dtp)
{

}

caddr_t
DBG_NAME (mp_alloc_box_ni) (DBG_PARAMS mem_pool_t * mp, int len, dtp_t dtp)
{

}

caddr_t
DBG_NAME (mp_box_string) (DBG_PARAMS mem_pool_t * mp, const char *str)
{

}


caddr_t
DBG_NAME (mp_box_dv_short_nchars) (DBG_PARAMS mem_pool_t * mp, const char *buf, size_t buf_len)
{
  box_t box;
  box = DBG_MP_ALLOC_BOX (mp, buf_len + 1, DV_SHORT_STRING);
  memcpy (box, buf, buf_len);
  ((char *) box)[buf_len] = '\0';
  return box;
}


caddr_t
DBG_NAME (mp_box_substr) (DBG_PARAMS mem_pool_t * mp, ccaddr_t str, int n1, int n2)
{
  int lstr = (int) (box_length (str)) - 1;
  int lres;
  char *res;
  if (n2 > lstr)
    n2 = lstr;
  lres = n2 - n1;
  if (lres <= 0)
    return (DBG_NAME (mp_box_string) (DBG_ARGS mp, ""));
  res = DBG_NAME (mp_alloc_box) (DBG_ARGS mp, lres + 1, DV_SHORT_STRING);
  memcpy (res, str + n1, lres);
  res[lres] = 0;
  return res;
}

caddr_t
DBG_NAME (mp_box_dv_short_concat) (DBG_PARAMS mem_pool_t * mp, ccaddr_t str1, ccaddr_t str2)
{
  int len1 = box_length (str1) - 1;
  int len2 = box_length (str2);
  caddr_t box;
  box = DBG_MP_ALLOC_BOX (mp, len1 + len2, DV_SHORT_STRING);
  memcpy (box, str1, len1);
  memcpy (box+len1, str2, len2);
  return (box_t) box;
}

caddr_t
DBG_NAME (mp_box_dv_short_strconcat) (DBG_PARAMS mem_pool_t * mp, const char *str1, const char *str2)
{
  int len1 = strlen (str1);
  int len2 = strlen (str2) + 1;
  caddr_t box;
  box = DBG_MP_ALLOC_BOX (mp, len1 + len2, DV_SHORT_STRING);
  memcpy (box, str1, len1);
  memcpy (box+len1, str2, len2);
  return (box_t) box;
}

caddr_t DBG_NAME (mp_box_dv_uname_string) (DBG_PARAMS mem_pool_t * mp, const char *str)
{

}


caddr_t
DBG_NAME (mp_box_dv_uname_nchars) (DBG_PARAMS mem_pool_t * mp, const char *buf, size_t buf_len)
{

}


extern box_copy_f box_copier[256];
extern box_tmp_copy_f box_tmp_copier[256];


caddr_t
DBG_NAME (mp_box_copy) (DBG_PARAMS mem_pool_t * mp, caddr_t box)
{
}


caddr_t
DBG_NAME (mp_box_copy_tree) (DBG_PARAMS mem_pool_t * mp, caddr_t box)
{

}


caddr_t
DBG_NAME (mp_full_box_copy_tree) (DBG_PARAMS mem_pool_t * mp, caddr_t box)
{

}


caddr_t *
mp_list (mem_pool_t * mp, long n, ...)
{

}


caddr_t
DBG_NAME (mp_box_num) (DBG_PARAMS mem_pool_t * mp, boxint n)
{

}


caddr_t
DBG_NAME (t_box_num) (DBG_PARAMS boxint n)
{

}


caddr_t
DBG_NAME (t_box_num_and_zero) (DBG_PARAMS boxint n)
{

}



caddr_t
DBG_NAME (mp_box_double) (DBG_PARAMS mem_pool_t * mp, double n)
{

}


caddr_t
DBG_NAME (mp_box_float) (DBG_PARAMS mem_pool_t * mp, float n)
{

}


caddr_t
DBG_NAME (t_box_iri_id) (DBG_PARAMS int64 n)
{

}


box_t
DBG_NAME (t_box_double) (DBG_PARAMS double d)
{
  double *box = (double *) DBG_T_ALLOC_BOX (sizeof (double), DV_DOUBLE_FLOAT);
  *box = d;
  return (box_t) box;
}


box_t
DBG_NAME (t_box_float) (DBG_PARAMS float d)
{

}


#ifdef MALLOC_DEBUG
caddr_t *
t_list_impl (long n, ...)
{
  mem_pool_t *mp = THR_TMP_POOL;
  caddr_t *box;
  va_list ap;
  int inx;
  va_start (ap, n);
  box = (caddr_t *) dbg_mp_alloc_box (mp->mp_list_alloc_file, mp->mp_list_alloc_line, mp, sizeof (caddr_t) * n, DV_ARRAY_OF_POINTER);
  for (inx = 0; inx < n; inx++)
    {
      caddr_t child = va_arg (ap, caddr_t);
      if (IS_BOX_POINTER (child))
	mp_alloc_box_assert (THR_TMP_POOL, child);
      box[inx] = child;
    }
  va_end (ap);
  return ((caddr_t *) box);
}


t_list_impl_ptr_t
t_list_cock (const char *file, int line)
{
  mem_pool_t *mp = THR_TMP_POOL;
  mp->mp_list_alloc_file = file;
  mp->mp_list_alloc_line = line;
  return t_list_impl;
}


#else
caddr_t *
t_list (long n, ...)
{

}
#endif

caddr_t *
t_list_nc (long n, ...)
{

}

caddr_t *
t_list_memcpy (long n, ccaddr_t *src)
{
  caddr_t *box;
  size_t sz = sizeof (caddr_t) * n;
  box = (caddr_t *) t_alloc_box (sz, DV_ARRAY_OF_POINTER);
  memcpy (box, src, sz);
  return box;
}

caddr_t *
t_list_concat_tail (caddr_t list, long n, ...)
{

}


caddr_t *
t_list_concat (caddr_t list1, caddr_t list2)
{
  caddr_t res;
  size_t len1, len2;
  if (NULL == list1)
    return (caddr_t *) list2;
  if (NULL == list2)
    return (caddr_t *) list1;
  len1 = box_length (list1);
  len2 = box_length (list2);
  res = t_alloc_box (len1 + len2, box_tag (list1));
  memcpy (res, list1, len1);
  memcpy (res + len1, list2, len2);
  return (caddr_t *) res;
}


caddr_t *
t_list_remove_nth (caddr_t list, int pos)
{

}


caddr_t *
t_list_insert_before_nth (caddr_t list, caddr_t new_item, int pos)
{

}


caddr_t *
t_list_insert_many_before_nth (caddr_t list, caddr_t * new_items, int ins_count, int pos)
{

}


caddr_t *
t_sc_list (long n, ...)
{

}


void
DBG_NAME (mp_set_push) (DBG_PARAMS mem_pool_t * mp, dk_set_t * set, void *elt)
{

}


dk_set_t
DBG_NAME (t_cons) (DBG_PARAMS void *car, dk_set_t cdr)
{

}


void
DBG_NAME (t_set_push) (DBG_PARAMS dk_set_t * set, void *elt)
{
  *set = DBG_NAME (t_cons) (DBG_ARGS elt, *set);
}


void *
DBG_NAME (t_set_pop) (DBG_PARAMS s_node_t ** set)
{
  if (*set)
    {
      void *item;
      s_node_t *old = *set;
      *set = old->next;
      item = old->data;

      return item;
    }

  return NULL;
}


int
DBG_NAME (t_set_pushnew) (DBG_PARAMS s_node_t ** set, void *item)
{

}


int
DBG_NAME (t_set_push_new_string) (DBG_PARAMS s_node_t ** set, char *item)
{

}


dk_set_t
DBG_NAME (t_set_union) (DBG_PARAMS dk_set_t s1, dk_set_t s2)
{

}


dk_set_t
DBG_NAME (t_set_intersect) (DBG_PARAMS dk_set_t s1, dk_set_t s2)
{

}


dk_set_t
DBG_NAME (t_set_diff) (DBG_PARAMS dk_set_t s1, dk_set_t s2)
{

}


caddr_t *
DBG_NAME (t_list_to_array) (DBG_PARAMS s_node_t * set)
{

}


caddr_t *
DBG_NAME (t_revlist_to_array) (DBG_PARAMS s_node_t * set)
{

}


int
DBG_NAME (t_set_delete) (DBG_PARAMS dk_set_t * set, void *item)
{
  s_node_t *node = *set;
  dk_set_t *previous = set;
  while (node)
    {
      if (node->data == item)
	{
	  *previous = node->next;
	  return 1;
	}
      previous = &(node->next);
      node = node->next;
    }
  return 0;
}

void *
DBG_NAME (t_set_delete_nth) (DBG_PARAMS dk_set_t * set, int idx)
{
  s_node_t *node = *set;
  dk_set_t *previous = set;
  if (0 > idx)
    return NULL;
  while (node)
    {
      if (0 == idx)
	{
	  void *res = node->data;
	  *previous = node->next;
	  return res;
	}
      previous = &(node->next);
      node = node->next;
      idx--;
    }
  return NULL;
}



dk_set_t
DBG_NAME (t_set_copy) (DBG_PARAMS dk_set_t s)
{

}


#ifdef MALLOC_DEBUG

void
mp_check_tree (mem_pool_t * mp, box_t box)
{
  uint32 count;
  dtp_t tag;
  if (!IS_BOX_POINTER (box))
    return;
  if (BF_VALID_JSO & box_flags (box))
    {
      dk_alloc_box_assert (box);
      return;
    }
  mp_alloc_box_assert (mp, (caddr_t) box);
  tag = box_tag (box);
  if (IS_NONLEAF_DTP (tag))
    {
      box_t *obj = (box_t *) box;
      for (count = box_length ((caddr_t) box) / sizeof (caddr_t); count; count--)
        mp_check_tree (mp, *obj++);
    }
}
#endif

caddr_t
t_box_vsprintf (size_t buflen_eval, const char *format, va_list tail)
{

}

caddr_t
t_box_vsprintf_uname (size_t buflen_eval, const char *format, va_list tail)
{

}

caddr_t
t_box_sprintf (size_t buflen_eval, const char *format, ...)
{

}

caddr_t
t_box_sprintf_uname (size_t buflen_eval, const char *format, ...)
{

}


void
mp_trash (mem_pool_t * mp, caddr_t box)
{
  mp_set_push (mp, &mp->mp_trash, (void *) box);
}


caddr_t
ap_alloc_box (auto_pool_t * ap, int len, dtp_t dtp)
{

}


caddr_t
ap_box_num (auto_pool_t * ap, int64 n)
{

}


caddr_t
ap_box_iri_id (auto_pool_t * ap, int64 n)
{

}


caddr_t *
ap_list (auto_pool_t * apool, long n, ...)
{

}

/* large allocs */

size_t mp_large_in_use;
size_t mp_max_large_in_use;
size_t mp_max_cache = 10000000;
int64 mp_mmap_clocks;
size_t mp_large_warn_threshold;
dk_mutex_t mp_large_g_mtx;
size_t mp_mmap_min = 80000;
size_t mm_page_sz = 4096;
int mm_n_large_sizes;
#define N_LARGE_SIZES 30
size_t mm_sizes[N_LARGE_SIZES];
du_thread_t * mm_after_failed_unmap;
dk_mutex_t map_fail_mtx;
dk_hash_t mm_failed_unmap;
resource_t * mm_rc[N_LARGE_SIZES];
int32 mm_uses[N_LARGE_SIZES + 1];
int mp_local_rc_sz = 1;
size_t mp_large_reserved;
size_t mp_max_large_reserved;
size_t mp_large_reserve_limit;
dk_mutex_t mp_reserve_mtx;
size_t mp_large_soft_cap;
size_t mp_large_hard_cap;


size_t
mm_next_size (size_t n, int * nth)
{
  size_t *last = &mm_sizes[mm_n_large_sizes - 1];
  size_t *base = mm_sizes;

  if (!mm_n_large_sizes || n > *last)
    {
      *nth = -1;
      return n;
    }
  while (last >= base)
    {
      size_t *p = &base[(int) ((last - base) >> 1)];
      int64 res = (int64) n - *p;

      if (res == 0)
	{
	  *nth = p - &mm_sizes[0];
	  return n;
	}
      if (res < 0)
	last = p - 1;
      else
	base = p + 1;
    }
  *nth = (last - &mm_sizes[0]) + 1;
  return last[1];
}


void
mm_cache_init (size_t sz, size_t min, size_t max, int steps, float step)
{

}



size_t
mp_block_size_sc (size_t sz)
{
  int ign;
  if (sz >= mm_sizes[mm_n_large_sizes - 1])
    return mm_sizes[mm_n_large_sizes - 1];
  if (sz < mm_sizes[0])
    return mm_sizes[0];
  return mm_next_size (sz, &ign);
}



#ifdef MP_MAP_CHECK

dk_mutex_t mp_mmap_mark_mtx;
dk_pool_4g_t * dk_pool_map[256 * 256];
int dk_pool_map_inited;

void
mp_mmap_mark (void * __ptr, size_t sz, int flag)
{

}


void
mp_check_not_in_pool (int64 __ptr)
{

}



int
mp_list_marks (int first, int n_print)
{

}


void
mp_mark_check ()
{
}


#else
#define mp_mmap_mark(ptr, sz, f)
#endif

void mm_cache_clear ();

int64 dk_n_mmaps;

void *
mp_mmap (size_t sz)
{

}


void
mp_munmap (void* ptr, size_t sz)
{

}


#define MM_FREE_BATCH 100

size_t
mm_free_n  (int nth, size_t target_bytes, int age_limit, uint32 now)
{

}



size_t
mm_cache_trim (size_t target_sz, int age_limit, int old_only)
{
}



void*
mm_large_alloc (size_t sz)
{



void
mp_warn (mem_pool_t * mp)
{
}


void *
mp_large_alloc (mem_pool_t * mp, size_t sz)
{

}


void
mp_set_tlsf (mem_pool_t * mp, size_t  sz)
{

}



void
mm_free_sized (void* ptr, size_t sz)
{

}


void
mp_free_large (mem_pool_t * mp, void * ptr)
{

}

void
mp_free_all_large (mem_pool_t * mp)
{

}

void
mp_large_report ()
{
  uint32 now = approx_msec_real_time ();
  int inx;
  int64 bytes = 0;
  for (inx = 0; inx < mm_n_large_sizes; inx++)
    {
      int inx2, max_age = 0, min_age = INT32_MAX, age_sum = 0;
      resource_t * rc = mm_rc[inx];
      int fill = rc->rc_fill;
      for (inx2 = 0; inx2 < fill; inx2++)
	{
	  int age = now - rc->rc_item_time[inx2];
	  if (age > max_age)
	    max_age = age;
	  if (age < min_age)
	    min_age = age;
	  age_sum += age;
	}
      printf ("size %lu fill %lu max %lu  gets %lu stores %lu full %lu empty %lu ages %d/%d/%d\n",
        (unsigned long)(mm_sizes[inx]), (unsigned long)(rc->rc_fill), (unsigned long)(rc->rc_size),
        (unsigned long)(rc->rc_gets), (unsigned long)(rc->rc_stores), (unsigned long)(rc->rc_n_full), (unsigned long)(rc->rc_n_empty),
	      fill ? min_age : 0, fill ? age_sum / fill : 0, max_age);
      bytes += mm_sizes[inx] * rc->rc_fill;
    }
  printf ("total %Ld in reserve\n", bytes);
}


int
mp_reuse_large (mem_pool_t * mp, void * ptr)
{

}


int
mp_reserve (mem_pool_t * mp, size_t inc)
{
  int ret = 0;
  mutex_enter (&mp_reserve_mtx);
  if (mp_large_reserved + inc < mp_large_reserve_limit)
    {
      mp_large_reserved += inc;
      mp->mp_reserved += inc;
      if (mp_max_large_reserved < mp_large_reserved)
	mp_max_large_reserved = mp_large_reserved;
      ret = 1;
    }
  mutex_leave (&mp_reserve_mtx);
  return ret;
}

void
mp_comment (mem_pool_t * mp, const char * str1, const char * str2)
{

}


typedef struct ptr_and_sz_s
{
  uptrlong	ps_ptr;
  uint32	ps_n_pages;
} ptr_and_size_t;


int
ps_compare (const void *s1, const void *s2)
{
  uptrlong p1 = ((ptr_and_size_t*)s1)->ps_ptr;
  uptrlong p2 = ((ptr_and_size_t*)s2)->ps_ptr;
  return p1 < p2 ? -1 : p1 == p2 ? 0 : 1;
}

int
munmap_ck (void* ptr, size_t sz)
{

}


int
mm_unmap_asc (ptr_and_size_t * maps, int low, int high)
{
  int inx;
  int rc = munmap_ck ((void*)maps[low].ps_ptr, maps[low].ps_n_pages * mm_page_sz);
  if (-1 == rc)
    return 0;
  maps[low].ps_ptr = 0;
  for (inx = low + 1; inx < high; inx++)
    {
      if (0 == munmap_ck ((void*)maps[inx].ps_ptr, maps[inx].ps_n_pages * mm_page_sz))
	maps[inx].ps_ptr = 0;
    }
  return 1;
}

int
mm_unmap_desc (ptr_and_size_t * maps, int low, int high)
{
  int inx;
  int rc = munmap_ck ((void*)maps[high - 1].ps_ptr, maps[high - 1].ps_n_pages * mm_page_sz);
  if (-1 == rc)
    return 0;
  maps[high - 1].ps_ptr = 0;
  for (inx = high - 2; inx >=  low; inx--)
    {
      if (0 == munmap_ck ((void*)maps[inx].ps_ptr, maps[inx].ps_n_pages * mm_page_sz))
	maps[inx].ps_ptr = 0;
    }
  return 1;
}

void
mm_unmap_contiguous (ptr_and_size_t * maps, int n_maps)
{

}

void
mm_cache_clear ()
{

}
}
/* Stubs for plugins */
/* This section _must_ be last in the source file, like any similar section in other files. */

#if defined (DEBUG) || defined (MALLOC_DEBUG)
#undef mem_pool_alloc
mem_pool_t *mem_pool_alloc (void) { return dbg_mem_pool_alloc (__FILE__, __LINE__); }
#endif

#ifdef MALLOC_DEBUG
#undef mp_alloc_box
caddr_t mp_alloc_box (mem_pool_t * mp, size_t len, dtp_t dtp) { return dbg_mp_alloc_box (__FILE__, __LINE__, mp, len, dtp); }
#undef mp_alloc_box_ni
caddr_t mp_alloc_box_ni (mem_pool_t * mp, int len, dtp_t dtp) { return dbg_mp_alloc_box_ni (__FILE__, __LINE__, mp, len, dtp); }
#undef mp_box_string
caddr_t mp_box_string (mem_pool_t * mp, const char *str) { return dbg_mp_box_string (__FILE__, __LINE__, mp, str); }
#undef mp_box_substr
caddr_t mp_box_substr (mem_pool_t * mp, ccaddr_t str, int n1, int n2) { return dbg_mp_box_substr (__FILE__, __LINE__, mp, str, n1, n2); }
#undef mp_box_dv_short_nchars
caddr_t mp_box_dv_short_nchars (mem_pool_t * mp, const char *str, size_t len) { return dbg_mp_box_dv_short_nchars (__FILE__, __LINE__, mp, str, len); }
#undef mp_box_dv_short_concat
caddr_t mp_box_dv_short_concat (mem_pool_t * mp, ccaddr_t str1, ccaddr_t str2) { return dbg_mp_box_dv_short_concat (__FILE__, __LINE__, mp, str1, str2); }
#undef mp_box_dv_short_strconcat
caddr_t mp_box_dv_short_strconcat (mem_pool_t * mp, const char *str1, const char *str2) { return dbg_mp_box_dv_short_strconcat (__FILE__, __LINE__, mp, str1, str2); }
#undef mp_box_dv_uname_string
caddr_t mp_box_dv_uname_string (mem_pool_t * mp, const char *str) { return dbg_mp_box_dv_uname_string (__FILE__, __LINE__, mp, str); }
#undef mp_box_dv_uname_nchars
caddr_t mp_box_dv_uname_nchars (mem_pool_t * mp, const char *str, size_t len) { return dbg_mp_box_dv_uname_nchars (__FILE__, __LINE__, mp, str, len); }
#undef mp_box_copy
caddr_t mp_box_copy (mem_pool_t * mp, caddr_t box) { return dbg_mp_box_copy (__FILE__, __LINE__, mp, box); }
#undef mp_box_copy_tree
caddr_t mp_box_copy_tree (mem_pool_t * mp, caddr_t box) { return dbg_mp_box_copy_tree (__FILE__, __LINE__, mp, box); }
#undef mp_full_box_copy_tree
caddr_t mp_full_box_copy_tree (mem_pool_t * mp, caddr_t box) { return dbg_mp_full_box_copy_tree (__FILE__, __LINE__, mp, box); }
#undef mp_box_num
caddr_t mp_box_num (mem_pool_t * mp, boxint num) { return dbg_mp_box_num (__FILE__, __LINE__, mp, num); }
#undef mp_box_iri_id
caddr_t mp_box_iri_id (mem_pool_t * mp, iri_id_t num) { return dbg_mp_box_iri_id (__FILE__, __LINE__, mp, num); }
#undef mp_box_double
caddr_t mp_box_double (mem_pool_t * mp, double num) { return dbg_mp_box_double (__FILE__, __LINE__, mp, num); }
#undef mp_box_float
caddr_t mp_box_float (mem_pool_t * mp, float num) { return dbg_mp_box_float (__FILE__, __LINE__, mp, num); }
#endif
thread_t * thread_current (void){

}
numeric_t t_numeric_allocate (void){

}



