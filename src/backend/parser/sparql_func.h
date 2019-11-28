/*
 * sparql_func.h
 *
 *  Created on: 2019年11月16日
 *      Author: liu
 */
#include"sparql.h"
#include"sparql_l.h"
#include <string.h>
#include <stdlib.h>
#include "Dk.h"
#include "dkpool.h"
#ifndef SRC_BACKEND_PARSER_SPARQL_FUNC_H_
#define SRC_BACKEND_PARSER_SPARQL_FUNC_H_
#define DBG_NAME(nm) 		nm
#define DBG_PARAMS
#define DBG_PARAMS_0 		void
#define DBG_ARGS
#define DBG_ARGS_0
#define DK_ALLOC 		dk_alloc
#define DK_FREE 		dk_free
#define IS_BOX_POINTER(n) \
	(((unsigned ptrlong) (n)) >= (unsigned ptrlong)SMALLEST_POSSIBLE_POINTER)

#define SMALLEST_POSSIBLE_POINTER 	((ptrlong)(0x100000))
#ifdef MTX_DEBUG
# define ASSERT_IN_MTX(mtx)  \
  if (THREAD_CURRENT_THREAD != (mtx)->mtx_owner) GPF_T1 ("Not inside mutex.");

# define ASSERT_OUTSIDE_MTX(mtx)  \
  if (THREAD_CURRENT_THREAD == (mtx)->mtx_owner) GPF_T1 ("Not outside mutex.");

#else
# define ASSERT_IN_MTX(mtx)
# define ASSERT_OUTSIDE_MTX(mtx)
#endif
#define CLAQ_UNWIND_CK
#define ASSERT_OUTSIDE_TXN \
  ASSERT_OUTSIDE_MTX (wi_inst.wi_txn_mtx)
void DBG_NAME(sqlr_new_error) (DBG_PARAMS  const char *code, const char *virt_code, const char *string, ...);
void DBG_NAME(thr_set_error_code) (DBG_PARAMS  thread_t *thr, caddr_t err);
extern void spar_error (sparp_t *sparp, const char *format, ...)
#ifdef __GNUC__
                __attribute__ ((format (printf, 2, 3)))
#endif
;
extern uint32 dk_set_length (s_node_t * set);
extern void sparyyerror_impl (sparp_t *xpp, char *raw_text, const char *strg);
extern SPART **t_spartlist_concat (SPART **list1, SPART **list2);
extern void sparp_configure_storage_and_macro_libs (sparp_t *sparp);
extern SPART* spartlist (sparp_t *sparp, ptrlong length, ptrlong type, ...);
extern SPART *sparp_make_builtin_call (sparp_t *sparp, ptrlong bif_id, SPART **arguments);
extern void spar_error_if_unsupported_syntax_imp (sparp_t *sparp, int feature_in_use, const char *feature_name);
extern SPART *spar_gp_finalize (sparp_t *sparp, SPART **options);
extern SPART *spar_make_fake_action_solution (sparp_t *sparp);
extern SPART *spar_make_sparul_drop (sparp_t *sparp, SPART *graph_precode, int silent);
extern SPART *spar_make_sparul_create (sparp_t *sparp, SPART *graph_precode, int silent);
extern SPART *spar_make_sparul_load_service_data (sparp_t *sparp, SPART *proxy_iri_precode, SPART *service_iri_precode, int silent);
extern SPART *spar_make_sparul_load (sparp_t *sparp, SPART *graph_precode, SPART *src_precode, int silent);
extern SPART *spar_make_sparul_clear (sparp_t *sparp, SPART *graph_precode, int silent);
extern SPART *spar_make_top_or_special_case_from_wm (sparp_t *sparp, ptrlong subtype, SPART **retvals, SPART *wm );
extern void spar_compose_retvals_of_modify (sparp_t *sparp, SPART *top, SPART *graph_to_patch, SPART *del_ctor_gp, SPART *ins_ctor_gp);
extern void spar_compose_retvals_of_insert_or_delete (sparp_t *sparp, SPART *top, SPART *graph_to_patch, SPART *ctor_gp);
extern SPART *spar_make_drop_macro_lib (sparp_t *sparp, SPART *sml_precode, int silent);
#define SPAR_ERROR_IF_UNSUPPORTED_SYNTAX(feat,name) do { \
  if (!((feat) & sparp_arg->sparp_permitted_syntax)) \
    spar_error_if_unsupported_syntax_imp (sparp_arg, (feat), (name)); \
    } while (0)
extern SPART *sparp_make_builtin_call (sparp_t *sparp, ptrlong bif_id, SPART **arguments);
extern caddr_t spar_mkid (sparp_t * sparp, const char *prefix);
extern SPART *spar_make_blank_node (sparp_t *sparp, caddr_t name, int bracketed);
extern caddr_t sparp_expand_qname_prefix (sparp_t *sparp, caddr_t qname);
extern caddr_t sparp_expand_q_iri_ref (sparp_t *sparp, caddr_t ref);
extern void sparyyerror_impl (sparp_t *xpp, char *raw_text, const char *strg);
extern SPART *spar_make_topmost_sparul_sql (sparp_t *sparp, SPART **actions);
extern void sparp_define (sparp_t *sparp, caddr_t param, ptrlong value_lexem_type, caddr_t value);
extern SPART *spar_gp_finalize (sparp_t *sparp, SPART **options);
extern void spar_gp_init (sparp_t *sparp, ptrlong subtype);
extern SPART *spar_make_param_or_variable (sparp_t *sparp, caddr_t name);
extern void sparp_check_dm_arg_for_redecl (sparp_t *sparp, dk_set_t recent, caddr_t dm_arg_vname);
extern void sparp_make_defmacro_paramnames_from_template (sparp_t *sparp, SPART *defm);
extern void sparp_defmacro_finalize (sparp_t *sparp, SPART *body);
extern SPART *sparp_defmacro_init (sparp_t *sparp, caddr_t mname);
extern void sparp_defmacro_store (sparp_t *sparp, SPART *defm);
extern SPART *spar_make_qm_col_desc (sparp_t *sparp, SPART *col);
extern void spar_qm_add_aliased_table_or_sqlquery (sparp_t *sparp, caddr_t parent_qtable, caddr_t new_alias);
extern SPART *spar_make_qm_sql (sparp_t *sparp, const char *fname, SPART **fixed, SPART **named);
extern void sparp_jso_push_affected (sparp_t *sparp, ccaddr_t inst_iri);
extern void sparp_jso_push_deleted (sparp_t *sparp, ccaddr_t class_iri, ccaddr_t inst_iri);
extern void spar_qm_pop_bookmark (sparp_t *sparp);
extern void spar_qm_push_bookmark (sparp_t *sparp);
extern SPART *spar_make_vector_qm_sql (sparp_t *sparp, SPART **fixed);
extern SPART *spar_make_wm (sparp_t *sparp, SPART *pattern, SPART **groupings, SPART *having, SPART **order, SPART *limit, SPART *offset, SPART *binv);
extern void spar_gp_add_member (sparp_t *sparp, SPART *memb);
extern SPART *spar_default_sparul_target (sparp_t *sparp, const char *reason_to_use, int preliminary_call);
extern void spar_apply_fallback_default_graph (sparp_t *sparp, int target_fallback_first);
extern void spar_qm_add_text_literal (sparp_t *sparp, caddr_t ft_type, caddr_t ft_table_alias, SPART *ft_col, SPART **qmv_cols, SPART **options);
extern void spar_qm_add_table_filter (sparp_t *sparp, caddr_t tmpl);
extern void spar_qm_add_aliased_table_or_sqlquery (sparp_t *sparp, caddr_t parent_qtable, caddr_t new_alias);
extern void spar_qm_add_aliased_alias (sparp_t *sparp, caddr_t parent_alias, caddr_t new_alias);
extern SPART *spar_make_sparul_copymoveadd (sparp_t *sparp, ptrlong opcode, SPART *from_graph_precode, SPART *to_graph_precode, int silent);
extern SPART *spar_make_top_or_special_case_from_wm (sparp_t *sparp, ptrlong subtype, SPART **retvals, SPART *wm );
extern void spar_compose_retvals_of_insert_or_delete (sparp_t *sparp, SPART *top, SPART *graph_to_patch, SPART *ctor_gp);
extern int spar_ctor_uses_default_graph (SPART *ctor_gp);
extern SPART *spar_gp_finalize (sparp_t *sparp, SPART **options);
extern void spar_compose_retvals_of_delete_from_wm (sparp_t *sparp, SPART *tree, SPART *graph_to_patch);
extern void sparp_make_and_push_new_graph_source (sparp_t *sparp, ptrlong subtype, SPART *iri_expn, SPART **options, int freeze_ignore_mask);
extern void spar_qm_push_local (sparp_t *sparp, int key, SPART *value, int can_overwrite);
extern void spar_qm_clean_locals (sparp_t *sparp);
extern SPART *spar_make_qm_value (sparp_t *sparp, caddr_t format_name, SPART **cols);
extern SPART *spar_qm_make_empty_mapping (sparp_t *sparp, caddr_t qm_id, SPART **options);
extern SPART *spar_qm_get_local (sparp_t *sparp, int key, int error_if_missing);
extern void spar_qm_pop_key (sparp_t *sparp, int key_to_pop);
extern SPART *spar_qm_make_real_mapping (sparp_t *sparp, caddr_t qm_id, SPART **options);
extern SPART *spar_make_variable (sparp_t *sparp, caddr_t name);
extern SPART *spar_add_propvariable (sparp_t *sparp, SPART *lvar, int opcode, SPART *verb_qname, int verb_lexem_type, caddr_t verb_lexem_text);
extern int sparp_namesake_macro_param (sparp_t *sparp, SPART *dm, caddr_t param_name);
extern SPART *spar_make_macropu (sparp_t *sparp, caddr_t name, ptrlong pos);
extern SPART *spar_make_funcall (sparp_t *sparp, int aggregate_mode, const char *funname, SPART **arguments);
extern SPART *spar_gp_add_triplelike (sparp_t *sparp, SPART *graph, SPART *subject, SPART *predicate, SPART *object, SPART **sinv_idx_and_qms, SPART **options, int banned_tricks);
extern SPART **spar_make_sources_like_top (sparp_t *sparp, ptrlong top_subtype);
extern SPART *spar_make_service_inv (sparp_t *sparp, SPART *endpoint, dk_set_t all_options, ptrlong permitted_syntax, ptrlong syntax_exceptions, SPART **sources, caddr_t sinv_storage_uri, int silent);
extern void spar_add_service_inv_to_sg (sparp_t *sparp, SPART *sinv);
extern SPART *spar_make_top (sparp_t *sparp, ptrlong subtype, SPART **retvals,
  SPART *pattern, SPART **groupings, SPART *having, SPART **order, SPART *limit, SPART *offset, SPART *binv);
extern void spar_env_pop (sparp_t *sparp);
extern SPART *spar_gp_finalize_with_subquery (sparp_t *sparp, SPART **options, SPART *subquery);
extern quad_storage_t *sparp_find_storage_by_name (sparp_t *sparp, ccaddr_t name);
extern SPART *spar_make_ppath (sparp_t *sparp, char subtype, SPART *part1, SPART *part2, ptrlong mincount, ptrlong maxcount);
#define SPARP_ENV_CONTEXT_GP_SUBTYPE(sparp) ((ptrlong)((sparp)->sparp_env->spare_context_gp_subtypes->data))
extern void sparp_expand_top_retvals (sparp_t *sparp, SPART *query, int safely_copy_all_vars, dk_set_t binds_revlist);
extern void spar_verify_funcall_security (sparp_t *sparp, int *is_agg_ret, const char **fname_ptr, SPART **args);
extern SPART *spar_make_regex_or_like_or_eq (sparp_t *sparp, SPART *strg, SPART *regexpn);
#define SPART_TYPE(st) ((DV_ARRAY_OF_POINTER == DV_TYPE_OF(st)) ? (st)->type : SPAR_LIT)
#define SPART_IS_DEFAULT_GRAPH_BLANK(g) ( \
  (SPAR_BLANK_NODE_LABEL == SPART_TYPE (g)) && \
  !strncmp (g->_.var.vname, "_::default", 10) )
extern void sparp_find_language_dialect_by_service (sparp_t *sparp, SPART *service_expn, int *dialect_ret, int *exceptions_ret);
caddr_t uname_xmlschema_ns_uri_hash_integer;
#define SPAR_MAKE_INT_LITERAL(sparp,v) (spartlist ((sparp), 5, SPAR_LIT, (SPART *)t_box_num_nonull(v), uname_xmlschema_ns_uri_hash_integer, NULL, NULL))
extern caddr_t spar_unescape_strliteral (sparp_t *sparp, const char *sparyytext, int count_of_quotes, int mode);
extern caddr_t spar_make_iri_from_template (sparp_t *sparp, caddr_t tmpl);
extern SPART *spar_compose_ctor_gp_from_where_gp (sparp_t *sparp, int subtype, SPART *where_gp, SPART *gtp);
extern void spar_compose_retvals_of_construct (sparp_t *sparp, SPART *top, SPART *ctor_gp, const char *formatter, const char *agg_formatter, const char *agg_mdata);
extern void spar_env_push (sparp_t *sparp);
extern void spar_gp_add_filter (sparp_t *sparp, SPART *filt, int filt_is_movable);
extern SPART *spar_gp_finalize_with_inline_data (sparp_t *sparp, SPART **vars, SPART ***rows);
extern void spar_gp_finalize_binds (sparp_t *sparp, dk_set_t bind_revlist);
extern SPART *spar_bind_prepare (sparp_t *sparp, SPART *expn, int bind_has_scalar_subqs);
extern SPART *spar_make_bindings_inv_with_fake_equivs (sparp_t *sparp, SPART **vars, SPART ***data_rows, SPART *wrapper_gp);
extern void sparp_validate_options_of_tree (sparp_t *sparp, SPART *tree, SPART **options);
caddr_t uname_xmlschema_ns_uri_hash_boolean;
#define SPAR_MAKE_EBV_LITERAL(sparp,v) (spartlist ((sparp), 5, SPAR_LIT, (SPART *)t_box_num_nonull((v)?1:0), uname_xmlschema_ns_uri_hash_boolean, NULL, t_box_string((v)?"true":"false")))
extern SPART *sparp_make_qm_sqlcol (sparp_t *sparp, ptrlong type, caddr_t name);
extern void spar_change_sign (caddr_t *lit_ptr);
extern SPART *spar_make_typed_literal (sparp_t *sparp, caddr_t strg, caddr_t type, caddr_t lang);
extern void spar_gp_add_filters_for_named_graph (sparp_t *sparp);
extern SPART *sparp_make_macro_call (sparp_t *sparp, const char * funname, int call_is_explicit, SPART **arguments);
extern SPART *spar_find_defmacro_by_iri_or_fields (sparp_t *sparp, const char *mname, SPART **fields);
extern SPART *spar_make_topmost_qm_sql (sparp_t *sparp);
extern void ssg_find_formatter_by_name_and_subtype (ccaddr_t name, ptrlong subtype,
  const char **ret_formatter, const char **ret_agg_formatter, const char **ret_agg_mdata );
extern int stricmp (const char *s1, const char *s2);
extern int numeric_from_string (numeric_t n, const char *s);
extern dk_set_t dk_set_nreverse (dk_set_t set);
extern void * dk_set_get_keyword (dk_set_t set, const char *key_strg, void *dflt_val);
extern dk_set_t dk_set_conc (dk_set_t s1, dk_set_t s2);
extern int dk_set_position (dk_set_t set, void *elt);
extern box_t box_tag(ccaddr_t box) ;
typedef long long 		int64;
typedef int64 boxint;
extern boxint unbox (ccaddr_t box);
extern int BOX_ELEMENTS(caddr_t b);
extern int BOX_ELEMENTS_0(caddr_t b);
extern caddr_t DBG_NAME(thr_get_error_code) (DBG_PARAMS  thread_t *thr);
extern box_t DBG_NAME (box_dv_uname_string) (DBG_PARAMS const char *string);
extern void DBG_NAME(thr_set_error_code) (DBG_PARAMS  thread_t *thr, caddr_t err);
int dk_free_tree (box_t box);
caddr_t dbg_mp_box_string (const char *file, int line, mem_pool_t * mp, const char *str);
#endif /* SRC_BACKEND_PARSER_SPARQL_FUNC_H_ */
