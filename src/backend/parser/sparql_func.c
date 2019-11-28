/*
 * sparql_func.c
 *
 *  Created on: 2019年11月14日
 *      Author: liu
 */
#include "sparql.h"
#include"sparql_l.h"
#include "sparql_p.h"
#include "sparql_func.h"
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>

uint32 dk_set_length(s_node_t *set) {
	uint32 count;

	for (count = 0; set; set = set->next)
		count++;

	return count;
}
void sparyyerror_impl (sparp_t *xpp, char *raw_text, const char *strg){

}
SPART **t_spartlist_concat (SPART **list1, SPART **list2){

}

void sparp_configure_storage_and_macro_libs (sparp_t *sparp){

}

SPART* spartlist (sparp_t *sparp, ptrlong length, ptrlong type, ...){

}

SPART *sparp_make_builtin_call (sparp_t *sparp, ptrlong bif_id, SPART **arguments){
	
}

void spar_error_if_unsupported_syntax_imp (sparp_t *sparp, int feature_in_use, const char *feature_name){
	
}

SPART *spar_gp_finalize (sparp_t *sparp, SPART **options){
	
}

SPART *spar_make_fake_action_solution (sparp_t *sparp){
	
}

SPART *spar_make_sparul_drop (sparp_t *sparp, SPART *graph_precode, int silent){
	
}

SPART *spar_make_sparul_create (sparp_t *sparp, SPART *graph_precode, int silent){
		
}

SPART *spar_make_sparul_load_service_data (sparp_t *sparp, SPART *proxy_iri_precode, SPART *service_iri_precode, int silent){
	
}

SPART *spar_make_sparul_load (sparp_t *sparp, SPART *graph_precode, SPART *src_precode, int silent){
	
}

SPART *spar_make_sparul_clear (sparp_t *sparp, SPART *graph_precode, int silent){
	
}

SPART *spar_make_top_or_special_case_from_wm (sparp_t *sparp, ptrlong subtype, SPART **retvals, SPART *wm ){
	
}

void spar_compose_retvals_of_modify (sparp_t *sparp, SPART *top, SPART *graph_to_patch, SPART *del_ctor_gp, SPART *ins_ctor_gp){
	
}

void spar_compose_retvals_of_insert_or_delete (sparp_t *sparp, SPART *top, SPART *graph_to_patch, SPART *ctor_gp){
	
}

SPART *spar_make_drop_macro_lib (sparp_t *sparp, SPART *sml_precode, int silent){
	
}

caddr_t spar_mkid (sparp_t * sparp, const char *prefix){
	
}

SPART *spar_make_blank_node (sparp_t *sparp, caddr_t name, int bracketed){
	
}

caddr_t sparp_expand_qname_prefix (sparp_t *sparp, caddr_t qname){
	
}

caddr_t sparp_expand_q_iri_ref (sparp_t *sparp, caddr_t ref){
	
}

SPART *spar_make_topmost_sparul_sql (sparp_t *sparp, SPART **actions){
	
}

void sparp_define (sparp_t *sparp, caddr_t param, ptrlong value_lexem_type, caddr_t value){
	
}

void spar_gp_init (sparp_t *sparp, ptrlong subtype){
	
}

SPART *spar_make_param_or_variable (sparp_t *sparp, caddr_t name){
	
}

void sparp_check_dm_arg_for_redecl (sparp_t *sparp, dk_set_t recent, caddr_t dm_arg_vname){
	
}

void sparp_make_defmacro_paramnames_from_template (sparp_t *sparp, SPART *defm){

}

void sparp_defmacro_finalize (sparp_t *sparp, SPART *body){
	
}

SPART *sparp_defmacro_init (sparp_t *sparp, caddr_t mname){
	
}

void sparp_defmacro_store (sparp_t *sparp, SPART *defm){
	
}

SPART *spar_make_qm_col_desc (sparp_t *sparp, SPART *col){
	
}

void spar_qm_add_aliased_table_or_sqlquery (sparp_t *sparp, caddr_t parent_qtable, caddr_t new_alias){
	
}

SPART *spar_make_qm_sql (sparp_t *sparp, const char *fname, SPART **fixed, SPART **named){
	
}

void sparp_jso_push_affected (sparp_t *sparp, ccaddr_t inst_iri){
	
}

void sparp_jso_push_deleted (sparp_t *sparp, ccaddr_t class_iri, ccaddr_t inst_iri){
	
}

void spar_qm_pop_bookmark (sparp_t *sparp){
	
}

void spar_qm_push_bookmark (sparp_t *sparp){
	
}

SPART *spar_make_vector_qm_sql (sparp_t *sparp, SPART **fixed){
	
}

SPART *spar_make_wm (sparp_t *sparp, SPART *pattern, SPART **groupings, SPART *having, SPART **order, SPART *limit, SPART *offset, SPART *binv){
	
}

void spar_gp_add_member (sparp_t *sparp, SPART *memb){
	
}

SPART *spar_default_sparul_target (sparp_t *sparp, const char *reason_to_use, int preliminary_call){
	
}

void spar_apply_fallback_default_graph (sparp_t *sparp, int target_fallback_first){
	
}

void spar_qm_add_text_literal (sparp_t *sparp, caddr_t ft_type, caddr_t ft_table_alias, SPART *ft_col, SPART **qmv_cols, SPART **options){
	
}

void spar_qm_add_table_filter (sparp_t *sparp, caddr_t tmpl){
	
}


void spar_qm_add_aliased_alias (sparp_t *sparp, caddr_t parent_alias, caddr_t new_alias){
	
}

SPART *spar_make_sparul_copymoveadd (sparp_t *sparp, ptrlong opcode, SPART *from_graph_precode, SPART *to_graph_precode, int silent){
	
}

int spar_ctor_uses_default_graph (SPART *ctor_gp){
	
}

void spar_compose_retvals_of_delete_from_wm (sparp_t *sparp, SPART *tree, SPART *graph_to_patch){
	
}

void sparp_make_and_push_new_graph_source (sparp_t *sparp, ptrlong subtype, SPART *iri_expn, SPART **options, int freeze_ignore_mask){
	
}

void spar_qm_push_local (sparp_t *sparp, int key, SPART *value, int can_overwrite){
	
}

void spar_qm_clean_locals (sparp_t *sparp){
	
}

SPART *spar_make_qm_value (sparp_t *sparp, caddr_t format_name, SPART **cols){
	
}

SPART *spar_qm_make_empty_mapping (sparp_t *sparp, caddr_t qm_id, SPART **options){
	
}

SPART *spar_qm_get_local (sparp_t *sparp, int key, int error_if_missing){
	
}

void spar_qm_pop_key (sparp_t *sparp, int key_to_pop){

}

SPART *spar_qm_make_real_mapping (sparp_t *sparp, caddr_t qm_id, SPART **options){
	
}

SPART *spar_make_variable (sparp_t *sparp, caddr_t name){

}

SPART *spar_add_propvariable (sparp_t *sparp, SPART *lvar, int opcode, SPART *verb_qname, int verb_lexem_type, caddr_t verb_lexem_text){
	
}

int sparp_namesake_macro_param (sparp_t *sparp, SPART *dm, caddr_t param_name){
	
}

SPART *spar_make_macropu (sparp_t *sparp, caddr_t name, ptrlong pos){
	
}

SPART *spar_make_funcall (sparp_t *sparp, int aggregate_mode, const char *funname, SPART **arguments){
	
}

SPART *spar_gp_add_triplelike (sparp_t *sparp, SPART *graph, SPART *subject, SPART *predicate, SPART *object, SPART **sinv_idx_and_qms, SPART **options, int banned_tricks){
	
}

SPART **spar_make_sources_like_top (sparp_t *sparp, ptrlong top_subtype){
	
}

SPART *spar_make_service_inv (sparp_t *sparp, SPART *endpoint, dk_set_t all_options, ptrlong permitted_syntax, ptrlong syntax_exceptions, SPART **sources, caddr_t sinv_storage_uri, int silent){
	
}

void spar_add_service_inv_to_sg (sparp_t *sparp, SPART *sinv){
	
}

SPART *spar_make_top (sparp_t *sparp, ptrlong subtype, SPART **retvals, SPART *pattern, SPART **groupings, SPART *having, SPART **order, SPART *limit, SPART *offset, SPART *binv){
	  
}

void spar_env_pop (sparp_t *sparp){

}

SPART *spar_gp_finalize_with_subquery (sparp_t *sparp, SPART **options, SPART *subquery){
	
}

quad_storage_t *sparp_find_storage_by_name (sparp_t *sparp, ccaddr_t name){
	
}

SPART *spar_make_ppath (sparp_t *sparp, char subtype, SPART *part1, SPART *part2, ptrlong mincount, ptrlong maxcount){
	
}

void sparp_expand_top_retvals (sparp_t *sparp, SPART *query, int safely_copy_all_vars, dk_set_t binds_revlist){
	
}

void spar_verify_funcall_security (sparp_t *sparp, int *is_agg_ret, const char **fname_ptr, SPART **args){
	
}

SPART *spar_make_regex_or_like_or_eq (sparp_t *sparp, SPART *strg, SPART *regexpn){
	
}

void sparp_find_language_dialect_by_service (sparp_t *sparp, SPART *service_expn, int *dialect_ret, int *exceptions_ret){
	
}
caddr_t spar_unescape_strliteral (sparp_t *sparp, const char *sparyytext, int count_of_quotes, int mode){

}
void spar_error (sparp_t *sparp, const char *format, ...){

}
caddr_t spar_make_iri_from_template (sparp_t *sparp, caddr_t tmpl){

}
SPART *spar_compose_ctor_gp_from_where_gp (sparp_t *sparp, int subtype, SPART *where_gp, SPART *gtp){

}
void spar_compose_retvals_of_construct (sparp_t *sparp, SPART *top, SPART *ctor_gp, const char *formatter, const char *agg_formatter, const char *agg_mdata){

}
void spar_env_push (sparp_t *sparp){

}
void spar_gp_add_filter (sparp_t *sparp, SPART *filt, int filt_is_movable){

}
SPART *spar_gp_finalize_with_inline_data (sparp_t *sparp, SPART **vars, SPART ***rows){

}
void spar_gp_finalize_binds (sparp_t *sparp, dk_set_t bind_revlist){

}
SPART *spar_bind_prepare (sparp_t *sparp, SPART *expn, int bind_has_scalar_subqs){

}
SPART *spar_make_bindings_inv_with_fake_equivs (sparp_t *sparp, SPART **vars, SPART ***data_rows, SPART *wrapper_gp){

}
void sparp_validate_options_of_tree (sparp_t *sparp, SPART *tree, SPART **options){

}
SPART *sparp_make_qm_sqlcol (sparp_t *sparp, ptrlong type, caddr_t name){

}
void spar_change_sign (caddr_t *lit_ptr){

}
SPART *spar_make_typed_literal (sparp_t *sparp, caddr_t strg, caddr_t type, caddr_t lang){

}
void spar_gp_add_filters_for_named_graph (sparp_t *sparp){

}
SPART *sparp_make_macro_call (sparp_t *sparp, const char * funname, int call_is_explicit, SPART **arguments){

}
SPART *spar_find_defmacro_by_iri_or_fields (sparp_t *sparp, const char *mname, SPART **fields){

}
SPART *spar_make_topmost_qm_sql (sparp_t *sparp){

}
void ssg_find_formatter_by_name_and_subtype (ccaddr_t name, ptrlong subtype,
  const char **ret_formatter, const char **ret_agg_formatter, const char **ret_agg_mdata ){

}
caddr_t dbg_mp_box_string (const char *file, int line, mem_pool_t * mp, const char *str){

}
/*
 *  Assign a string to a number
 */
int
stricmp (const char *s1, const char *s2)
{
  int cmp;

  while (*s1)
    {
      if ((cmp = toupper (*s1) - toupper (*s2)) != 0)
	return cmp;
      s1++;
      s2++;
    }
  return (*s2) ? -1 : 0;
}
int
numeric_from_string (numeric_t n, const char *s)
{

}
dk_set_t
dk_set_nreverse (dk_set_t set)
{
  dk_set_t next;
  dk_set_t next2;

  if (!set)
    return NULL;

  next = set->next;
  set->next = NULL;

  for (;;)
    {
      if (!next)
	return set;

      next2 = next->next;
      next->next = set;
      set = next;
      next = next2;
    }
}
void *
dk_set_get_keyword (dk_set_t set, const char *key_strg, void *dflt_val)
{
  while (set)
    {
      if (!strcmp ((const char *) set->data, key_strg))
	return set->next->data;
      set = set->next->next;
    }
  return dflt_val;
}
dk_set_t
dk_set_conc (dk_set_t s1, dk_set_t s2)
{

}
int
dk_set_position (dk_set_t set, void *elt)
{
  int nth = 0;
  while (set)
    {
      if (set->data == elt)
	return nth;
      nth++;
      set = set->next;
    }
  return -1;
}
box_t box_tag(ccaddr_t box)
{
	return (*((const dtp_t *) &(((const unsigned char *)((box)))[-1])));
}
boxint
unbox (ccaddr_t box)
{
  if (!IS_BOX_POINTER (box))
    return (boxint) (ptrlong) box;

  if (box_tag (box) == DV_LONG_INT)
    return *(boxint *) box;

  return (boxint) (ptrlong) box;
}
caddr_t
DBG_NAME(thr_get_error_code) (DBG_PARAMS  thread_t *thr)
{
  caddr_t ret = thr->thr_reset_code;
  thr->thr_reset_code = NULL;
#ifdef ERR_DEBUG
  fprintf (stderr, "thr_get_error_code (%p)=%p [%s]\n",
      thr, ret, ret ? (ERROR_REPORT_P (ret) ? ((caddr_t *)ret)[2] : "<not found>") : "<none>");
#endif
#ifdef SIGNAL_DEBUG
  if (ERROR_REPORT_P(ret))
    log_error_report_event (ret, 0, "THR_GET at %s:%d", file, line);
#endif
  return ret;
}
int BOX_ELEMENTS(caddr_t b){
	return (box_length ((box_t) (b)) / sizeof (box_t));
}
int BOX_ELEMENTS_0(caddr_t b){
	return ((NULL != (b)) ? BOX_ELEMENTS(b) : (size_t)0);
}
box_t
DBG_NAME (box_dv_uname_string) (DBG_PARAMS const char *string)
{
  //return DBG_NAME (box_dv_uname_nchars) (DBG_ARGS string, strlen (string));
}

int
dk_free_tree (box_t box)
{
}
void
DBG_NAME(thr_set_error_code) (DBG_PARAMS  thread_t *thr, caddr_t err)
{
#ifdef ERR_DEBUG
  fprintf (stderr, "thr_set_error_code (%p, %p [%s]) -> free %p [%s]\n",
      thr, err, err ? (ERROR_REPORT_P (err) ? ((caddr_t *)err)[2] : "<not found>") : "<none>",
      thr->thr_reset_code, thr->thr_reset_code ? (ARRAYP (thr->thr_reset_code) ?  ((caddr_t *)thr->thr_reset_code)[2] : "<not found>") : "<none>");
#endif
#ifdef SIGNAL_DEBUG
  if (ERROR_REPORT_P(err))
    log_error_report_event (err, 0, "THR_SET at %s:%d", file, line);
#endif
  dk_free_tree (thr->thr_reset_code);
  thr->thr_reset_code = err;
}
