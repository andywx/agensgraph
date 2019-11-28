/*
 * Dksets.h
 *
 *  Created on: 2019年11月16日
 *      Author: liu
 */
#include "sparql.h"
#include "sparql_l.h"

#ifndef SRC_BACKEND_PARSER_DKSETS_H_
#define SRC_BACKEND_PARSER_DKSETS_H_


struct mem_pool_s;
typedef struct mem_pool_s 	mem_pool_t;
typedef struct mem_block_s mem_block_t;
struct mem_block_s
{
  struct mem_block_s *	mb_next;
  size_t 		mb_fill;
  size_t 		mb_size;
};
typedef void *(*rc_constr_t) (void *cdata);
typedef void (*rc_destr_t) (void *item);
typedef struct mutex_s dk_mutex_t;
typedef struct resource_s
{
  uint32 		rc_fill;
  uint32 		rc_size;
  void **		rc_items;
  uint32 *		rc_item_time;
  void *		rc_client_data;
  rc_constr_t 		rc_constructor;
  rc_destr_t 		rc_destructor;
  rc_destr_t 		rc_clear_func;
  dk_mutex_t *		rc_mtx;
  /* Monitoring */
  uint32 		rc_gets;
  uint32 		rc_stores;
  uint32 		rc_n_empty;
  uint32 		rc_n_full;
  uint32 		rc_max_size;
#ifdef RC_DBG
  struct resource_s **rc_family;
  int                 rc_family_size;
#endif
} resource_t;
typedef void mem_pool_size_cap_cbk_t (mem_pool_t *mp, void *cbk_env);
typedef struct mem_pool_size_cap_s {
  mem_pool_size_cap_cbk_t *	cbk;
  size_t			limit;
  size_t			last_cbk_limit;
  void *			cbk_env;
} mem_pool_size_cap_t;
struct mem_pool_s
{
  mem_block_t *		mp_first;
  int 			mp_block_size;
  size_t 		mp_bytes;
  size_t		mp_max_bytes;
  size_t		mp_reserved;
  dk_hash_t		mp_large;
  resource_t **		mp_large_reuse;
  dk_hash_t *		mp_unames;
  dk_set_t 		mp_trash;
#if defined (DEBUG) || defined (MALLOC_DEBUG) || !defined(NDEBUG)
  const char *		mp_alloc_file;
  int 			mp_alloc_line;
#endif
  caddr_t	mp_comment;
  mem_pool_size_cap_t	mp_size_cap;
  struct TLSF_struct *	mp_tlsf;
};

#ifdef MALLOC_DEBUG
void dbg_mp_set_push (const char *file, int line, mem_pool_t * mp, dk_set_t * set, void *elt);
dk_set_t dbg_t_cons (const char *file, int line, void *car, dk_set_t cdr);
void dbg_t_set_push (const char *file, int line, dk_set_t * set, void *elt);
int dbg_t_set_pushnew (const char *file, int line, s_node_t ** set, void *item);
int dbg_t_set_push_new_string (const char *file, int line, s_node_t ** set, char *item);
void *dbg_t_set_pop (const char *file, int line, dk_set_t * set);
dk_set_t dbg_t_set_union (const char *file, int line, dk_set_t s1, dk_set_t s2);
dk_set_t dbg_t_set_intersect (const char *file, int line, dk_set_t s1, dk_set_t s2);
dk_set_t dbg_t_set_diff (const char *file, int line, dk_set_t s1, dk_set_t s2);
caddr_t *dbg_t_list_to_array (const char *file, int line, dk_set_t list);
caddr_t *dbg_t_revlist_to_array (const char *file, int line, dk_set_t list);
int dbg_t_set_delete (const char *file, int line, dk_set_t * set, void *item);
void * dbg_t_set_delete_nth (const char *file, int line, dk_set_t * set, int nth);
dk_set_t dbg_t_set_copy (const char *file, int line, dk_set_t s);
#define mp_set_push(mp,set,elt)			dbg_mp_set_push (__FILE__, __LINE__, (mp), (set), (elt))
#define t_cons(car,cdr)				dbg_t_cons (__FILE__, __LINE__, (car), (cdr))
#define t_set_push(set,elt)			dbg_t_set_push (__FILE__, __LINE__, (set), (elt))
#define t_set_pushnew(set,item)			dbg_t_set_pushnew (__FILE__, __LINE__, (set), (item))
#define t_set_push_new_string(set,item)		dbg_t_set_push_new_string (__FILE__, __LINE__, (set), (item))
#define t_set_pop(set)				dbg_t_set_pop (__FILE__, __LINE__, (set))
#define t_set_union(s1,s2)			dbg_t_set_union (__FILE__, __LINE__, (s1), (s2))
#define t_set_intersect(s1,s2)			dbg_t_set_intersect (__FILE__, __LINE__, (s1), (s2))
#define t_set_diff(s1,s2)			dbg_t_set_diff (__FILE__, __LINE__, (s1), (s2))
#define t_list_to_array(list)			dbg_t_list_to_array (__FILE__, __LINE__, (list))
#define t_revlist_to_array(list)		dbg_t_revlist_to_array (__FILE__, __LINE__, (list))
#define t_set_delete(set,item)			dbg_t_set_delete (__FILE__, __LINE__, (set), (item))
#define t_set_delete_nth(set,nth)		dbg_t_set_delete_nth (__FILE__, __LINE__, (set), (nth))
#define t_set_copy(s)				dbg_t_set_copy (__FILE__, __LINE__, (s))
#else
void mp_set_push (mem_pool_t * mp, dk_set_t * set, void *elt);
dk_set_t t_cons (void *car, dk_set_t cdr);
void t_set_push (dk_set_t * set, void *elt);
int t_set_pushnew (s_node_t ** set, void *item);
int t_set_push_new_string (s_node_t ** set, char *item);
void *t_set_pop (dk_set_t * set);
dk_set_t t_set_union (dk_set_t s1, dk_set_t s2);
dk_set_t t_set_intersect (dk_set_t s1, dk_set_t s2);
dk_set_t t_set_diff (dk_set_t s1, dk_set_t s2);
caddr_t *t_list_to_array (dk_set_t list);
caddr_t *t_revlist_to_array (dk_set_t list);
int t_set_delete (dk_set_t * set, void *item);
void * t_set_delete_nth (dk_set_t * set, int nth);
dk_set_t t_set_copy (dk_set_t s);
#endif
uint32 dk_set_length (s_node_t * set);
extern dk_set_t dk_set_nreverse (dk_set_t set);

#endif /* SRC_BACKEND_PARSER_DKSETS_H_ */
