#pragma once
#define DV_STRING 			182
#define MAX_XML_LNAME_LENGTH 500				/* for local names, namespace prefixes and namespace URIs */
#define MAX_XML_QNAME_LENGTH (2*MAX_XML_LNAME_LENGTH + 1)	/* for qualified names (that have semicolons) */
#define NUMERIC_MAX_SCALE		15
#define NUMERIC_STS_INVALID_STR	4	/* Invalid string */
#define NUMERIC_MAX_PRECISION		40
#define NUMERIC_EXTRA_SCALE		5
#define NUMERIC_MAX_PRECISION_INT	(NUMERIC_MAX_PRECISION + NUMERIC_EXTRA_SCALE)
#define NUMERIC_MAX_DATA_BYTES		(2 * NUMERIC_MAX_PRECISION_INT + 4)
#define NUMERIC_MAX_SCALE_INT		(NUMERIC_MAX_SCALE + NUMERIC_EXTRA_SCALE)

#include "sparql.h"
#ifdef OS2
#include <process.h>
#endif
#include <setjmp.h>
#include <sys/select.h>
#include <time.h>
#define box_length(box) 		((uint32)(0x00ffffff & ((const uint32 *)(box))[-1]))

typedef struct jmp_buf_splice_s
  {
    jmp_buf buf;
#ifdef JMP_CKSUM
    uint32	j_cksum;
#endif
#ifdef SIGNAL_DEBUG
    const char *j_file;
    int j_line;
    struct jmp_buf_splice_s *j_parent;
#endif
  } jmp_buf_splice;

#define current_thread  thread_current()
#define THREAD_CURRENT_THREAD   current_thread
#define du_thread_t		thread_t
typedef struct thread_hdr_s	thread_hdr_t;
typedef struct thread_queue_s	thread_queue_t;
typedef int (*thread_init_func) (void *arg);

/*
 *  Thread queue
 */
typedef struct semaphore_s semaphore_t;
struct thread_hdr_s
  {
    thread_hdr_t *	thr_next;
    thread_hdr_t *	thr_prev;
  };

struct thread_queue_s
  {
    thread_hdr_t	thq_head;
    int			thq_count;
  };
struct thread_s
{
    /* pointers for a thread queue */
    thread_hdr_t	thr_hdr;

    /* running status, see below */
    int			thr_status;

    /* current priority */
    int			thr_priority;

    /* thread specific attributes (thread local storage) */
    void *		thr_attributes;

    /* thread specific errno */
    int			thr_err;

    /* if WAITING, thr_timer can interrupt */
    void *		thr_event;
    timer_t *		thr_timer;

    /* used in thread_select */
    int			thr_retcode;
    int			thr_nfds;
    fd_set		thr_rfds;
    fd_set		thr_wfds;

    /* restart context for a "dead" or new thread */
    jmp_buf		thr_init_context;
    thread_init_func	thr_initial_function;
    void *		thr_initial_argument;

    /* stack size, if applicable */
    unsigned long	thr_stack_size;
    void *		thr_stack_base; /* address near bottom, use for overflow detection */

    /* saved during a context switch */
    jmp_buf		thr_context;		/* simulated threads */

    /* stack protection */
    unsigned int *	thr_stack_marker;	/* simulated threads */

    void *		thr_cv;			/* condition variable */

    void *		thr_handle;		/* os specific handle */

#ifdef WIN32
    void *		thr_sec_token;		/* Win security token */
#endif

    /* Compatibility dk_thread */
    semaphore_t	*	thr_sem;
    semaphore_t	*	thr_schedule_sem;
    void *		thr_client_data;
    void *		thr_alloc_cache;
  struct TLSF_struct *	thr_tlsf;
  struct TLSF_struct *	thr_own_tlsf;
  /* preallocated thread attributes */
  jmp_buf_splice *	thr_reset_ctx;
  caddr_t		thr_reset_code;
  caddr_t		thr_func_value;
  void *		thr_tmp_pool;
  void *		thr_sql_scs;
  int                   thr_attached;
  caddr_t		thr_dbg;
  struct lock_trx_s *	thr_lt; /* use to access lt during checkpoint wait */
#ifndef NDEBUG
  void *		thr_pg_dbg;
#endif
};
typedef struct thread_s thread_t;
typedef struct numeric_s *numeric_t;
thread_t * thread_current (void);
#define NUMERIC_STS_SUCCESS	0	/* OK */
#define SPAR_STRLITERAL_SPARQL_STRING	0
#define SPAR_STRLITERAL_JSON_STRING	1
#define SPAR_STRLITERAL_SPARQL_QNAME	2
#define SPARP_MAX_BRACE_DEPTH 80			/*!< Maximum allowed number of any opened parenthesis outside pair of curly braces in SQL text. SQL lexer has its own limit of the sort, \c SCN3_MAX_BRACE_DEPTH */
#define MAX_FLI		(30)
#define FLI_OFFSET	(6)     /* tlsf structure just will manage blocks bigger */
#define REAL_FLI	(MAX_FLI - FLI_OFFSET)
#define MAX_LOG2_SLI	(5)
#define MAX_SLI		(1 << MAX_LOG2_SLI)     /* MAX_SLI = 2^MAX_LOG2_SLI */
typedef struct hash_elt_s hash_elt_t;

int numeric_from_string (numeric_t n, const char *s);
typedef unsigned int u32_t;     /* NOTE: Make sure that this type is 4 bytes long on your computer */
typedef unsigned char u8_t;     /* NOTE: Make sure that this type is 1 byte on your computer */
typedef  unsigned  int   uint;
typedef  uint  uint32;
typedef struct free_ptr_struct {
    struct bhdr_struct *prev;
    struct bhdr_struct *next;
} free_ptr_t;
typedef struct bhdr_struct {
    /* This pointer is just valid if the first bit of size is set */
    struct bhdr_struct *prev_hdr;
    /* The size is stored in bytes */
    uint32 size;                /* bit 0 indicates whether the block is used and */
    /* bit 1 allows to know whether the previous block is free */
  uint32	bhdr_info; /* source tlsf and optional code  of alloc file/line */
    union {
        struct free_ptr_struct free_ptr;
        u8_t buffer[1];         /*sizeof(struct free_ptr_struct)]; */
    } ptr;
} bhdr_t;
typedef struct area_info_struct {
    bhdr_t *end;
    struct area_info_struct *next;
} area_info_t;

typedef struct
  {
    hash_elt_t *	ht_elements;
    uint32		ht_count;
    uint32		ht_actual_size;
    uint32		ht_rehash_threshold;
#ifdef MTX_DEBUG
    dk_mutex_t *	ht_required_mtx;
#endif
#ifdef HT_STATS
    uint32		ht_max_colls;
    uint32		ht_stats[30];
    uint32		ht_ngets;
    uint32		ht_nsets;
#endif
  } dk_hash_t;
typedef struct TLSF_struct {
    /* the TLSF's structure signature */
    u32_t tlsf_signature;
#if TLSF_USE_LOCKS
  dk_mutex_t tlsf_mtx;
#endif

#if TLSF_STATISTIC
    /* These can not be calculated outside tlsf because we
     * do not know the sizes when freeing/reallocing memory. */
    size_t used_size;
    size_t max_size;
#endif
    size_t	tlsf_total_mapped;
    /* A linked list holding all the existing areas */
    area_info_t *area_head;

  char	tlsf_on_thread;
  short	tlsf_id; /* index in table of all tlsfs */
    /* the first-level bitmap */
    /* This array should have a size of REAL_FLI bits */
    u32_t fl_bitmap;

    /* the second-level bitmap */
    u32_t sl_bitmap[REAL_FLI];

    bhdr_t *matrix[REAL_FLI][MAX_SLI];
  size_t	tlsf_grow_quantum;
  dk_hash_t	tlsf_large_alloc;
  caddr_t	tlsf_comment;
  struct mem_pool_s *	tlsf_mp;
#ifdef MALLOC_DEBUG
  id_hash_t *	tlsf_allocs;
#endif
} tlsf_t;

#ifdef JMP_CKSUM
#define longjmp_splice(b,f)	longjmp_brk ((b), f)
uint32 j_cksum (jmp_buf j);
int j_set_cksum (jmp_buf_splice * j, int rc);

#define setjmp_splice(b)	j_set_cksum (b, setjmp ((b)->buf))

void longjmp_brk (jmp_buf_splice * j, int rc);

#else
#define setjmp_splice(b)	setjmp ((b)->buf)
#define longjmp_splice(b,f)	longjmp ((b)->buf, f)
#endif
#ifdef SIGNAL_DEBUG

#define QR_RESET_CTX_T_CTX_IMPL(thr, __ctx, file, line)	\
  du_thread_t * __self = (thr); \
  int reset_code; \
  struct TLSF_struct * __tlsf = __self->thr_tlsf; \
  jmp_buf_splice * __old_ctx = __self->thr_reset_ctx; \
  (__ctx)->j_file = (file); \
  (__ctx)->j_line = (line); \
  (__ctx)->j_parent = (__old_ctx); \
  __self->thr_reset_ctx = (__ctx); \
  if (0 == (reset_code = setjmp_splice ((__ctx)))) \
    {

#else

#define QR_RESET_CTX_T_CTX_IMPL(thr, __ctx, file, line)	\
  du_thread_t * __self = (thr); \
  int reset_code;  \
  struct TLSF_struct * __tlsf = __self->thr_tlsf; \
  jmp_buf_splice * __old_ctx = __self->thr_reset_ctx;\
  __self->thr_reset_ctx = (__ctx); \
  if (0 == (reset_code = setjmp_splice ((__ctx)))) \
    {

#endif

#define QR_RESET_CTX_T_CTX(thr, __ctx)		\
{ QR_RESET_CTX_T_CTX_IMPL(thr, __ctx, __FILE__, __LINE__)

#define QR_RESET_CTX_T(thr) \
{ jmp_buf_splice __ctx; QR_RESET_CTX_T_CTX_IMPL(thr, &__ctx, __FILE__, __LINE__)

#define QR_RESET_CTX  QR_RESET_CTX_T (THREAD_CURRENT_THREAD)

#define QR_RESET_CODE \
    } \
  else \
    { __self->thr_tlsf = __tlsf;


#define END_QR_RESET \
    } \
    POP_QR_RESET; \
    __self->thr_tlsf = __tlsf;			\
}

#define POP_QR_RESET \
  __self->thr_reset_ctx = __old_ctx

