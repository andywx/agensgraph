#pragma once
#include <stddef.h>
 typedef char *caddr_t;
# ifndef ptrlong
#  define ptrlong long
# endif
#define DV_TYPE_OF(x) \
	(IS_BOX_POINTER (x) \
		? (dtp_t) box_tag(x) \
		: ((dtp_t)(DV_LONG_INT)) )
#define SPAR_ALIAS		(ptrlong)1001	/*!< Alias, (expn AS ?varname). spar_dealias() is identity function for non-aliases and returns expn for aliases. Alias of alias can be treated as an error. */
#define SPAR_BLANK_NODE_LABEL	(ptrlong)1002
#define SPAR_BUILT_IN_CALL	(ptrlong)1003
#define SPAR_CONV		(ptrlong)1004	/*!< Tree type for temporary use in SQL printer (conversion from one format to other) */
#define SPAR_FUNCALL		(ptrlong)1005
#define SPAR_GP			(ptrlong)1006	/*!< Tree type for group graph pattern, the subtype could be 0 for plain group, graph group or ctor, SELECT_L for subquery, WHERE_L for top-level, UNION_L for unions, OPTIONAL_L for optionals */
#define SPAR_REQ_TOP		(ptrlong)1007
#define SPAR_RETVAL		(ptrlong)1008	/*!< Tree type for temporary use in SQL printer; this is similar to variable but does not search for field via equiv */
#define SPAR_LIT		(ptrlong)1009
#define SPAR_QNAME		(ptrlong)1011
#define SPAR_SQLCOL		(ptrlong)1012
#define SPAR_VARIABLE		(ptrlong)1013
#define SPAR_TRIPLE		(ptrlong)1014
#define SPAR_QM_SQL_FUNCALL	(ptrlong)1015
#define SPAR_CODEGEN		(ptrlong)1016
#define SPAR_LIST		(ptrlong)1017
#define SPAR_GRAPH		(ptrlong)1018
#define SPAR_WHERE_MODIFS	(ptrlong)1019
#define SPAR_SERVICE_INV	(ptrlong)1020	/*!< Tree type for details of invocation of an external service endpoint */
#define SPAR_BINDINGS_INV	(ptrlong)1021	/*!< Tree type for details of bindings associated with gp */
#define SPAR_DEFMACRO		(ptrlong)1022
#define SPAR_MACROCALL		(ptrlong)1023
#define SPAR_MACROPU		(ptrlong)1024	/*!< Tree type for macro parameter usage --- the occurence of a variable name in a macro body */
#define SPAR_PPATH		(ptrlong)1025	/*!< Tree type for property path */
#define SPAR_MIN_TREE_TYPE	(ptrlong)1001
#define SPAR_MAX_TREE_TYPE	(ptrlong)1025	/* Don't forget to adjust */
/* Don't forget to update spart_count_specific_elems_by_type(), sparp_tree_full_clone_int(), sparp_tree_full_copy(), spart_dump() and comments inside typedef struct spar_tree_s */

#define SPAR_BOP_EQ_NONOPT		(ptrlong)1051	/*!< An equality that is not optimized into an equivalence class */
#define SPAR_BOP_EQNAMES		(ptrlong)1052	/*!< A special "equality": arguments are variables whose names are merged into one equivalence class */
#define SPAR_UNION_WO_ALL		(ptrlong)1053	/*!< A special union that will become SQL UNION, not SQL UNION ALL as we usually cheat */

#define SPAR_BIF_ABS				(ptrlong)1101
#define SPAR_BIF_BNODE				(ptrlong)1102
#define SPAR_BIF_CASEWHEN			(ptrlong)1103
#define SPAR_BIF_CASEX				(ptrlong)1104
#define SPAR_BIF_CEIL				(ptrlong)1105
#define SPAR_BIF_COALESCE			(ptrlong)1106
#define SPAR_BIF_CONCAT				(ptrlong)1107
#define SPAR_BIF_CONTAINS			(ptrlong)1108
#define SPAR_BIF_DAY				(ptrlong)1109
#define SPAR_BIF_EBV				(ptrlong)1110
#define SPAR_BIF_EBV_INT			(ptrlong)1111
#define SPAR_BIF_ENCODE_FOR_URI			(ptrlong)1112
#define SPAR_BIF_FLOOR				(ptrlong)1113
#define SPAR_BIF_HOURS				(ptrlong)1114
#define SPAR_BIF_IF				(ptrlong)1115
#define SPAR_BIF_ISBLANK			(ptrlong)1116
#define SPAR_BIF_ISIRI				(ptrlong)1117
#define SPAR_BIF_ISLITERAL			(ptrlong)1118
#define SPAR_BIF_ISNUMERIC			(ptrlong)1119
#define SPAR_BIF_ISREF				(ptrlong)1120
#define SPAR_BIF_ISURI				(ptrlong)1121
#define SPAR_BIF_LANGMATCHES			(ptrlong)1122
#define SPAR_BIF_LCASE				(ptrlong)1123
#define SPAR_BIF_MD5				(ptrlong)1124
#define SPAR_BIF_MINUTES			(ptrlong)1125
#define SPAR_BIF_MONTH				(ptrlong)1126
#define SPAR_BIF_NOW				(ptrlong)1127
#define SPAR_BIF_RAND				(ptrlong)1128
#define SPAR_BIF_REGEX				(ptrlong)1129
#define SPAR_BIF_REMOVE_UNICODE3_ACCENTS	(ptrlong)1130
#define SPAR_BIF_REPLACE			(ptrlong)1131
#define SPAR_BIF_ROUND				(ptrlong)1132
#define SPAR_BIF_SAMETERM			(ptrlong)1133
#define SPAR_BIF_SECONDS			(ptrlong)1134
#define SPAR_BIF_SHA1				(ptrlong)1135
#define SPAR_BIF_SHA224				(ptrlong)1136
#define SPAR_BIF_SHA256				(ptrlong)1137
#define SPAR_BIF_SHA384				(ptrlong)1138
#define SPAR_BIF_SHA512				(ptrlong)1139
#define SPAR_BIF_STR				(ptrlong)1140
#define SPAR_BIF_STRAFTER			(ptrlong)1141
#define SPAR_BIF_STRBEFORE			(ptrlong)1142
#define SPAR_BIF_STRDT				(ptrlong)1143
#define SPAR_BIF_STRENDS			(ptrlong)1144
#define SPAR_BIF_STRLANG			(ptrlong)1145
#define SPAR_BIF_STRLEN				(ptrlong)1146
#define SPAR_BIF_STRSTARTS			(ptrlong)1147
#define SPAR_BIF_STRUUID			(ptrlong)1148
#define SPAR_BIF_SUBSTR				(ptrlong)1149
#define SPAR_BIF_TIMEZONE			(ptrlong)1150
#define SPAR_BIF_TZ				(ptrlong)1151
#define SPAR_BIF_UCASE				(ptrlong)1152
#define SPAR_BIF_URI				(ptrlong)1153
#define SPAR_BIF_UUID				(ptrlong)1154
#define SPAR_BIF_VALID				(ptrlong)1155
#define SPAR_BIF_YEAR				(ptrlong)1156
#define SPAR_BIF__CUBE				(ptrlong)1157
#define SPAR_BIF__ITEM_IN_VECTOR		(ptrlong)1158
#define SPAR_BIF__GROUPING_LIST			(ptrlong)1159
#define SPAR_BIF__GROUPING_SET			(ptrlong)1160
#define SPAR_BIF__GROUPING_SETS			(ptrlong)1161
#define SPAR_BIF__ROLLUP			(ptrlong)1162

#define SPAR_SML_CREATE			(ptrlong)1201
#define SPAR_SML_DROP			(ptrlong)1202
#define SPAR_SML_ATTACH			(ptrlong)1203
#define SPAR_SML_DETACH			(ptrlong)1204

#define SPARP_MAX_LEX_DEPTH 150				/*!< Maximum allowed number of any opened parenthesis in SPARQL text. SQL lexer has its own limit of the sort, \c SCN3_MAX_LEX_DEPTH . Note that SCN3_MAX_LEX_DEPTH will stay in effect while SQL lexer is looking for end of SPARQL statement, deeper nesting of SPARQL subquery may mean smaller "remaining" limit on SPARQL. */
#define SPARP_MAX_BRACE_DEPTH 80			/*!< Maximum allowed number of any opened parenthesis outside pair of curly braces in SQL text. SQL lexer has its own limit of the sort, \c SCN3_MAX_BRACE_DEPTH */
#define SPARP_MAX_SYNTDEPTH SPARP_MAX_LEX_DEPTH+10

#define SPARP_CALLARG	1 /*!< The parser reads the macro call */
#define SPARP_DEFARG	2 /*!< The parser reads the arglist of a defmacro and remembers variable names as is in order to know what should be substituted in body */
#define SPARP_DEFBODY	4 /*!< The parser reads the body of a defmacro and remembers positions of variables in argument lists */

#define SPARP_PU_IN_TRIPLE	1
#define SPARP_PU_IN_READ	2
#define SPARP_PU_BGP		3
#define SSG_VALMODE_AUTO	((ssg_valmode_t)((ptrlong)(0x370))) /*!< Something simplest */
#define BOP_NOT			(ptrlong)1
#define BOP_OR			(ptrlong)3
#define BOP_AND			(ptrlong)4
#define BOP_PLUS		(ptrlong)5
#define BOP_MINUS		(ptrlong)6
#define BOP_TIMES		(ptrlong)7
#define BOP_DIV			(ptrlong)8
#define BOP_EQ			(ptrlong)9
#define BOP_NEQ			(ptrlong)10
#define BOP_LT			(ptrlong)11
#define BOP_LTE			(ptrlong)12
#define BOP_GT			(ptrlong)13
#define BOP_GTE			(ptrlong)14
#define BOP_LIKE		(ptrlong)15
#define BOP_NULL		(ptrlong)16
#define BOP_SAME		(ptrlong)17
#define BOP_NSAME		(ptrlong)18
#define BOP_AS			(ptrlong)21
#define BOP_IN_ATOM		(ptrlong)22
#define BOP_MOD	(ptrlong)23

#define DV_ARRAY_OF_POINTER 193
#define DV_DOUBLE_FLOAT 191
#define DV_LONG_INT 189
#define DV_NUMERIC 219
#define DV_DB_NULL  204

#define OPENLINKSW_BIF_NS_URI	"http://www.openlinksw.com/schemas/bif#"
#define OPENLINKSW_SQL_NS_URI	"http://www.openlinksw.com/schemas/sql#"

//

#define SPAR_ALIAS	(ptrlong)1001	/*!< Alias, (expn AS ?varname). spar_dealias() is identity function for non-aliases and returns expn for aliases. Alias of alias can be treated as an error. */
#define SPAR_BIF__CUBE	(ptrlong)1157
#define SPAR_BIF__GROUPING_LIST			(ptrlong)1159
#define SPAR_BIF__GROUPING_SET			(ptrlong)1160
#define SPAR_BIF__GROUPING_SETS			(ptrlong)1161
#define SPAR_BIF__ROLLUP	(ptrlong)1162
#define SPAR_BIF_CASEWHEN	(ptrlong)1103
#define SPAR_BIF_REGEX	(ptrlong)1129
#define SPAR_BIF_CASEX	(ptrlong)1104
#define SPAR_LIST	(ptrlong)1017
#define SPAR_LIT	(ptrlong)1009
#define SPAR_MACROPU	(ptrlong)1024	/*!< Tree type for macro parameter usage --- the occurence of a variable name in a macro body */
#define SPAR_QNAME	(ptrlong)1011
#define SPAR_REQ_TOP		(ptrlong)1007
#define SPAR_SERVICE_INV	(ptrlong)1020	/*!< Tree type for details of invocation of an external service endpoint */
#define SPAR_UNION_WO_ALL	(ptrlong)1053	/*!< A special union that will become SQL UNION, not SQL UNION ALL as we usually cheat */
#define SPAR_VARIABLE		(ptrlong)1013
#define SPARP_CALLARG	1 /*!< The parser reads the macro call */
#define SPARP_DEFARG	2 /*!< The parser reads the arglist of a defmacro and remembers variable names as is in order to know what should be substituted in body */
#define SPARP_DEFBODY	4 /*!< The parser reads the body of a defmacro and remembers positions of variables in argument lists */
#define SPARP_SSRC_FROZEN_BY_PROTOCOL	0x1	/*!< The query can not change the dataset by FROM / FROM NAMED / USING / WITH / dereferencing, because the dataset is specified by protocol parameters. However re-declaration of a URI is permitted (e.g, "define input:named-graph-uri" and FROM for one and the same URI is OK). */
#define SPART_GRAPH_FROM	0x1000
#define SPART_GRAPH_NAMED	0x1010
#define SPART_GRAPH_NOT_FROM	0x1080
#define SPART_GRAPH_NOT_NAMED	0x1090
#define SPART_TRIPLE_FIELDS_COUNT	4

#define tr_graph	tr_fields[0]


extern caddr_t uname_rdf_ns_uri_first;
extern caddr_t uname_rdf_ns_uri_nil;
extern caddr_t uname_rdf_ns_uri_rest;
extern caddr_t uname_rdf_ns_uri_type;
extern caddr_t uname_SPECIAL_cc_bif_c_AVG;
extern caddr_t uname_SPECIAL_cc_bif_c_COUNT;
extern caddr_t uname_SPECIAL_cc_bif_c_GROUPING;
extern caddr_t uname_SPECIAL_cc_bif_c_MAX;
extern caddr_t uname_SPECIAL_cc_bif_c_MIN;
extern caddr_t uname_SPECIAL_cc_bif_c_SUM;
extern caddr_t uname_virtrdf_ns_uri_DefaultServiceStorage;
extern caddr_t uname_virtrdf_ns_uri_QuadMapFormat;
extern caddr_t uname_virtrdf_ns_uri_QuadStorage;
extern caddr_t uname_xmlschema_ns_uri_hash_decimal;
extern caddr_t uname_xmlschema_ns_uri_hash_double;

#define SPAR_BIN_OP(dst,op,l,r) (dst) = spartlist (sparp_arg, 3, (op), (l), (r))

#define NUMERIC_PADDING	4

#define t_box_dv_short_string t_box_string

typedef unsigned char dtp_t;
typedef struct spar_tree_s SPART;
typedef struct s_node_s s_node_t, *dk_set_t;
extern dk_set_t dk_set_nreverse (dk_set_t set);
#define t_NEW_DB_NULL t_alloc_box (0, DV_DB_NULL)
typedef struct rdf_grab_config_s {
  int		rgc_pview_mode;		/*!< The query is executed using procedure view that will form a result-set by calling more than one statement via exec() */
  int		rgc_all;		/*!< Automatically add all IRI constants/vars (except P) to spare_src.ssrc_grab_consts */
  int		rgc_intermediate;	/*!< Automatically add all IRI constants/vars (except P) to spare_src.ssrc_grab_consts */
  dk_set_t	rgc_consts;		/*!< Constants to be used as names of additional graphs */
  dk_set_t	rgc_vars;		/*!< Names of variables whose values should be used as names of additional graphs */
  dk_set_t	rgc_sa_graphs;		/*!< SeeAlso graph names. Every time a value can be downloaded, its seeAlso values can also be downloaded */
  dk_set_t	rgc_sa_preds;		/*!< SeeAlso predicate names. Every time a value can be downloaded, its seeAlso values can also be downloaded */
  dk_set_t	rgc_sa_vars;		/*!< Names of variables whose values should be used as names of subjects (not objects!) for seeAlso predicates */
  caddr_t	rgc_depth;		/*!< Number of iterations that can be made to find additional graphs */
  caddr_t	rgc_limit;		/*!< Limit on number of grabbed remote documents */
  caddr_t	rgc_base;		/*!< Base IRI to use as a first argument to the grab IRI resolver */
  caddr_t	rgc_destination;	/*!< IRI of the graph to be extended */
  caddr_t	rgc_group_destination;	/*!< IRI of the commonly used graph to be extended, in addition to usual flow */
  caddr_t	rgc_resolver_name;	/*!< Name of function of the graph IRI resolver */
  caddr_t	rgc_loader_name;	/*!< Name of function that actually loads the resource */
} rdf_grab_config_t;
typedef struct sparp_sources_s
{
  rdf_grab_config_t	ssrc_grab;			/*!< Grabber configuration */
  dk_set_t		ssrc_common_sponge_options;	/*!< Options that are added to every FROM ... OPTION ( ... ) list */
  SPART *		ssrc_graph_set_by_with;		/*!< The precode expression of WITH clause, if exists */
  SPART *		ssrc_fallback_target;		/*!< For debugging purposes, it may be convenient to fallback to virtrdf:DefaultSparul11Target or the like instead of "No default graph specified in the preamble..." error. Set the value of this field to non-NULL (by define input:target-fallback-graph-uri) for this effect. */
  SPART *		ssrc_fallback_default_graph;	/*!< For debugging purposes, this can be used as an equivalent of "default graph specified by Graph Store" from spec. To set the value of this field to non-NULL, use define input:with-fallback-graph-uri. */
  dk_set_t		ssrc_default_graphs;		/*!< Default graphs and NOT FROM graphs as set by protocol or FROM graph-uri-precode. All NOT FROM are after all FROM! */
  dk_set_t		ssrc_named_graphs;		/*!< Named graphs and NOT FROM NAMED graphs as set by protocol or clauses. All NOT FROM NAMED are after all FROM NAMED! */
  int			ssrc_default_graphs_listed;	/*!< At least one default graph was set, so the list of default graphs is exhaustive even if empty or consists of solely NOT FROM (NOT FROM may remove all FROM, making the list empty) */
  int			ssrc_named_graphs_listed;	/*!< At least one named graph was set, so the list of named graphs is exhaustive even if empty or consists of solely NOT FROM NAMED */
  int			ssrc_freeze_status;		/*!< Default and named graphs can not be overwritten if set by protocol or using/with defines in service endpoint config. There's no locking for NOT FROM and NOT FROM NAMED */
  caddr_t		ssrc_frozen_pragma_example;	/*!< An example of name of pragma that prevents the user from dereferencing of variables and the like */
} sparp_sources_t;



#define SPARP_MAX_LEX_DEPTH 150


typedef struct dk_session_s dk_session_t;
#define sparp_env() sparp_arg->sparp_env
struct s_node_s
{
   void *              data;
   s_node_t *          next;
};

struct numeric_s{
	char n_len;	/* The number of digits before the decimal point. */
	char n_scale;	/* The number of digits after the decimal point. */
	char n_invalid;	/* NDF_NAN or NDF_INF */
	char n_neg;	/* 0 or 1 */
	char n_value[NUMERIC_PADDING];
};

typedef struct sparp_env_s
{
  /*spar_query_t *	spare_sparqr;*/
  ptrlong		spare_start_lineno;		/*!< The first line number of the query, may be nonzero if inlined into SQL */
  ptrlong *		spare_param_counter_ptr;	/*!< Pointer to parameter counter used to convert '??' or '$?' to ':nnn' in the query */
  dk_set_t		spare_namespace_prefixes;	/*!< Pairs of ns prefixes and URIs */
  dk_set_t		spare_namespace_prefixes_outer;	/*!< Bookmark in spare_namespace_prefixes that points to the first inherited (not local) namespace */
  caddr_t		spare_base_uri;			/*!< Default base URI for fn:doc and fn:resolve-uri */
  caddr_t		spare_storage_name;		/*!< Name of quad_storage_t JSO object to control the use of quad mapping at input side and maybe at SPARUL output side */
  caddr_t		spare_inference_name;		/*!< Name of inference rule set to control the expansion of types */
  struct rdf_inf_ctx_s *	spare_inference_ctx;		/*!< Pointer to an inference structure, to expand transitive and add unions for inverses */
  caddr_t		spare_use_ifp;			/*!< Non-NULL pointer if the resulting SQL should contain OPTION(IFP) */
  caddr_t		spare_use_same_as;		/*!< Non-NULL pointer if the resulting SQL should contain OPTION(SAME_AS) */
  dk_set_t		spare_protocol_params;		/*!< Names of variables that are used as parameters of SPARQL protocol call */
  struct sparp_env_s *spare_parent_env;		/*!< Pointer to parent env */
#if 0 /* These will be used when libraries of inference rules are introduced. Don't forget to patch sparp_clone_for_variant()! */
  id_hash_t *		spare_fundefs;			/*!< In-scope function definitions */
  id_hash_t *		spare_vars;			/*!< Known variables as keys, equivs as values */
  id_hash_t *		spare_global_bindings;		/*!< Dictionary of global bindings, varnames as keys, default value expns as values. DV_DB_NULL box for no expn! */
#endif
  sparp_sources_t	spare_src;			/*!< Query sources, temporarily reset to all zeroes when entering SERVICE with nonempty set of sources */
  dk_set_t		spare_common_sql_table_options;	/*!< SQL 'TABLE OPTION' strings that are added to every table */
  dk_set_t		spare_groupings;		/*!< Variables that should be placed in GROUP BY list */
  dk_set_t		spare_sql_select_options;	/*!< SQL 'OPTION' strings that are added at the end of query (right after permanent QUIETCAST) */
  caddr_t		spare_describe_mode;		/*!< Version of DESCRIBE SQL 'OPTION' strings that are added at the end of query (right after permanent QUIETCAST) */
  dk_set_t		spare_context_sinvs;		/*!< Stack of not yet closed service invocations */
  dk_set_t		spare_context_qms;		/*!< IRIs of allowed quad maps (IRI if quad map is restricted, DEFAULT_L if default qm only, _STAR if not restricted) */
  dk_set_t		spare_context_graphs;		/*!< Expressions that are default values for graph field */
  dk_set_t		spare_context_subjects;		/*!< Expressions that are default values for subject field */
  dk_set_t		spare_context_predicates;	/*!< Expressions that are default values for predicate field */
  dk_set_t		spare_context_objects;		/*!< Expressions that are default values for objects field */
  dk_set_t		spare_context_gp_subtypes;	/*!< Subtypes of not-yet-completed graph patterns */
  dk_set_t		spare_acc_triples;		/*!< Sets of accumulated triples of GPs */
  dk_set_t		spare_acc_movable_filters;	/*!< Sets of accumulated position-independent filters of GPs. Position-independent means it can be moved around BIND() clause */
  dk_set_t		spare_acc_local_filters;	/*!< Sets of accumulated position-dependent filters of GPs. Filters of this sort are implicit restrictions on specific triples, like check of value of _::default_xxx bnode for graph. They fall into subquery when BIND divides a BGP on subquery "before" BIND and triples "after" BIND. */
  dk_set_t		spare_acc_bgp_varnames;		/*!< Sets of used BGP names of GPs, sets of children are merged into sets of parent on each pop from the stack */
  int			spare_ctor_dflt_g_tmpl_count;	/*!< For CONSTRUCT and the like --- count of triple templates in the default graph, should be reset to zero after ctor to deal with DELETE{...} INSERT{...} */
  int			spare_ctor_g_grp_count;		/*!< For CONSTRUCT and the like --- count of graph {...} groups of triple templates, should be reset to zero after ctor to deal with DELETE{...} INSERT{...} */
  int			spare_inline_data_colcount;	/*!< Number of variables in VALUES (...) {...} clause, not set for single-variable syntax because it's used only to check the width of data rows */
  SPART **		spare_bindings_vars;		/*!< List of variables enumerated in local BINDINGS Var+ list */
  SPART ***		spare_bindings_rowset;		/*!< Array of arrays of values in BINDINGS {...} */
  dk_set_t		spare_good_graph_varnames;	/*!< Varnames found in non-optional triples before or outside, (including non-optional inside previous non-optional siblings), but not after or inside */
  dk_set_t		spare_good_graph_varname_sets;	/*!< Pointers to the spare_known_gspo_varnames stack, to pop */
  dk_set_t		spare_good_graph_bmk;		/*!< Varnames found in non-optional triples before or outside, (including non-optional inside previous non-optional siblings), but not after or inside */
  dk_set_t		spare_global_var_names;		/*!< List of all distinct global names used in the query, to know what should be passed to 'rdf grab' procedure view */
  int			spare_disable_output_formatting;	/*!< Indicates that sg_output_xxx_format_name are all ignored, because the query is intermediate in iterative get with "seealso" */
  dk_set_t		spare_propvar_sets;		/*!< Stack of sets of propvars that should form triples */
  caddr_t		spare_sql_refresh_free_text;	/*!< Flags if there's any use of bif:contains or the like, so 'sql:refresh-free-text' 'yes' option should be added to any vector of sponge options. This is a _boxed_ integer even if it's zero; that is used to store a reference to a changing integer in a compiled tree. */
  SPART *               spare_found_default_sparul_target;	/*!< If \c spare_need_for_default_sparul_target is non-NULL, this remembers the result of spare_default_sparul_target() at the end of list of USING clauses. It can also be set after INSERT IN graph_precode, DELETE FROM graph_precode or MODIFY graph_precode */
  const char *		spare_need_for_default_sparul_target;	/*!< When non-NULL, a single default graph should be provided by single USING, WITH or fallback; missing all three means the error */
} sparp_env_t;
typedef struct sparp_e4qm_s {
  dk_set_t		e4qm_acc_sqls;			/*!< Backstack of first-level function calls that change quad maps, items are SPART * with SPAR_QM_SQL_FUNCALL type */
  caddr_t		e4qm_default_table;		/*!< The name of default table (when a single table name is used without an alias for everything. */
  caddr_t		e4qm_current_table_alias;	/*!< The last alias definition, used for processing of 'FROM table AS alias TEXT LITERAL ...' */
  dk_set_t		e4qm_parent_tables_of_aliases;	/*!< get_keyword-style list of aliases of relational tables, aliases are keys, tables are values. */
  dk_set_t		e4qm_parent_aliases_of_aliases;	/*!< get_keyword-style list of aliases of other aliases, parent aliases are values. */
  dk_set_t		e4qm_descendants_of_aliases;	/*!< get_keyword-style list of aliases of other aliases, bases are keys, sets of descendants are values. */
  dk_set_t		e4qm_ft_indexes_of_columns;	/*!< get_keyword-style list of free-text indexes of aliased columns, 'alias.col' are keys, spar_qm_ft_t are values. */
  dk_set_t		e4qm_where_conditions;		/*!< Set of 'where' conditions for tables represented by sparp_qm_table_condition_t structures. */
  dk_set_t		e4qm_locals;			/*!< Parameters in not-yet-closed '{...}' blocks. Names (as keyword ids) and values, with NULLs as bookmarks. */
  dk_set_t		e4qm_affected_jso_iris;		/*!< Backstack of affected JS objects */
  dk_set_t		e4qm_deleted;			/*!< Backstack of deleted JS objects, class IRI pushed first, instance IRI pushed after so it's above) */
} sparp_e4qm_t;
typedef struct sparp_globals_s {
  struct sparp_equiv_s **sg_equivs;	/*!< All variable equivalences made for the tree, in pointer to a growing buffer */
#ifdef SPARQL_DEBUG
  struct sparp_equiv_s **sg_removed_equivs;	/*!< Deleted equivalences, in pointer to a growing buffer of size equal to \c sg_equivs */
#endif
  ptrlong		sg_equiv_count;			/*!< A count of used items in the beginning of \c sg_equivs buffer */
  ptrlong		sg_cloning_serial;		/*!< The pointer to the serial used for current \c sparp_gp_full_clone() operation */
  struct spar_tree_s **	sg_sinvs;			/*!< All descriptions of service invocations, in pointer to a growing buffer */
  ptrlong		sg_sinv_count;			/*!< A count of used items in the beginning of \c sg_sinvs buffer */
  dk_set_t		sg_invalidated_bnode_labels;	/*!< All blank name labels used in basic graph patterns of that are now closed (in the query and all its subqueries) */
  dk_set_t		sg_bnode_label_sets;		/*!< A stack of dk_set_t-s of blank name labels in not-yet-closed basic graph patterns */
  int			sg_signal_void_variables;	/*!< Flag if 'Variable xxx can not be bound...' error (and the like) should be signalled. */
  void*		sg_input_param_valmode_name;	/*!< Name of valmode for global variables, including protocol parameters listed in \c sg_protocol_params */
  void*		sg_output_valmode_name;		/*!< Name of valmode for top-level result-set */
  void*		sg_output_format_name;		/*!< Name of format for serialization of top-level result-set */
  void*		sg_output_scalar_format_name;	/*!< Overrides generic \c sg_output_format_name for scalar result sets, like ASK */
  void*		sg_output_dict_format_name;	/*!< Overrides generic \c sg_output_format_name for "dictionary of triples" result sets, like CONSTRUCT and DESCRIBE */
  void*		sg_output_route_name;		/*!< Name of procedure that makes a decision re. method of writing SPARUL results (quad storage / DAV file / something else) */
  void*		sg_output_storage_name;		/*!< Name of quad_storage_t JSO object to control the use of quad mapping at SPARUL output side */
  void*		sg_output_maxrows;		/*!< boxed maximum expected number of rows to return */
  void* sg_output_compose_report;			/*!< Boxed non-NULL number that indicates wither a verbose report string should be created (value of 1) or just a number of changes (value of 0) */
  void*		sg_sparul_log_mode;		/*!< log_mode argument of SPARQL_MODIFY_BY_DICT_CONTENTS() and similar procedures; if set then it's a boxed integer or boxed zero */
  int			sg_comment_sql;			/*!< Flags that control storing comments in the resulting SQL text */
  int			sg_ebv_mode;			/*!< Mode for booleans, one of SPARL_EBV_xxx constants */
} sparp_globals_t;
typedef struct spar_lexbmk_s {
  s_node_t*	sparlb_lexem_bufs_tail;
  ptrlong	sparlb_offset;
} spar_lexbmk_t;
typedef struct spar_lexem_s {
  ptrlong sparl_lex_value;
  void* sparl_sem_value;
  ptrlong sparl_lineno;
  ptrlong sparl_depth;
  void* sparl_raw_text;
#ifdef SPARQL_DEBUG
  ptrlong sparl_state;
#endif
} spar_lexem_t;


typedef struct scn3_include_frag_s {
  dk_session_t *sif_skipped_part;
  int sif_saved_lineno;
  int sif_saved_plineno;
  int sif_saved_lineno_increment;
  int sif_saved_lexdepth;
} scn3_include_frag_t;

typedef struct spar_query_env_s
{
  scn3_include_frag_t *	sparqre_src;	/*!< This is not for use in the parser! This is for inliner inside scn3.l only */
  int			sparqre_direct_client_call;	/*!< The result-set produced by the compiled query will go directly to the ODBC/JDBC client */
  ptrlong		sparqre_start_lineno;
  int *			sparqre_param_ctr;
  const char *		sparqre_tail_sql_text;
  int			sparqre_allow_sql_extensions;
  void*		sparqre_base_uri;
#if 0
  xp_node_t * sparqre_nsctx_xn;		/*!< Namespace context as xp_node_t * */
  xml_entity_t *sparqre_nsctx_xe;	/*!< Namespace context as xml_entity_t * */
#endif
  //query_instance_t *	sparqre_qi;		/*!< NULL if parsing is inside SQL compiler, current qi for runtime */
  //client_connection_t *	sparqre_cli;		/*!< Client connection, can be NULL or what sqlc_client() return */
  struct sql_comp_s *	sparqre_super_sc;	/*!< The context of the compilation, if nested into SQL code */
  struct user_s *	sparqre_exec_user;	/*!< User that will execute the query */
  //wcharset_t *		sparqre_query_charset;
  int			sparqre_query_charset_is_set;
  dk_set_t		sparqre_external_namespaces;
  /*dk_set_t *		sparqre_checked_functions;*/
  /*dk_set_t *		sparqre_sql_columns;*/
  int			sparqre_key_gen;
  void*		sparqre_compiled_text;
  void*		sparqre_catched_error;
  //rwlock_t *		sparqre_metadata_rwlock;
  const char *		sparqre_dbg_query_text;	/*!< A source text as passed to the top-level sparql compilation. For debug purposes and for mem pool callback only. Can be NULL. */
  struct sparp_s *	sparqre_dbg_sparp;  /*!< A top-level instance of sparql compiler. For debug purposes and for mem pool callback only. Can be NULL; when non-NULL then the structure under pointer may be half-full. */
} spar_query_env_t;

typedef struct qm_format_s *ssg_valmode_t;

typedef const char *		ccaddr_t;

typedef struct rdf_val_range_s{
        ptrlong	rvrRestrictions;	/*!< Natural restrictions on values stored at the field */
        ccaddr_t	rvrDatatype;	/*!< Datatype of stored values, if fixed */
        ccaddr_t	rvrLanguage;	/*!< Language, if fixed */
        ccaddr_t	rvrFixedValue;	/*!< Value of stored values, if fixed */
        ccaddr_t	rvrFixedOrigText;	/*!< Original text representing fixed value, if value is fixed and the storing it is appriximate (e.g., double), and the text is known */
        ccaddr_t *	rvrSprintffs;	/*!< Sprintf formats that cover possible IRI values */
        ptrlong	rvrSprintffCount;	/*!< Number of used items of rvrSprintffs */
        ccaddr_t *	rvrIriClasses;	/*!< Possible types of the IRI, if the IRI is calculable */
        ptrlong	rvrIriClassCount;	/*!< Number of used items of rvrIRIClasses */
        ccaddr_t *	rvrRedCuts;	/*!< Impossible values, blocked by option (EXCLUSIVE) of earlier quad maps */
        ptrlong	rvrRedCutCount;	/*!< Number of used items of rvrRedCuts */
      /* Don't forget to add NULLS to SPART_RVR_LIST_OF_NULLS when adding fields here */
      } rdf_val_range_t;

typedef struct triple_case_s{
	struct quad_map_s *tc_qm;	/*!< Quad map that can generate data that match the triple */
	ccaddr_t *tc_red_cuts[SPART_TRIPLE_FIELDS_COUNT];	/*!< Red cuts for values bound by the triple when they are generated by \c tc_qm */
} triple_case_t;

typedef struct quad_map_s * *quad_map_array_t;
typedef struct sparp_equiv_s
  {
    ptrlong e_own_idx;		/*!< Index of this instance (in \c req_top.equivs) */
    SPART *e_gp;		/*!< Graph pattern where these variable resides */
    caddr_t *e_varnames;	/*!< Array of distinct names of equivalent variables. Usually one element, if there's no ?x=?y in FILTER */
    caddr_t e_front_varname;	/*!< it may be ambiguous how to name a result column of an equiv if the equiv is printed as SELECT, this name is treated as preferable */
    SPART **e_vars;		/*!< Array of all equivalent variables, including different occurrences of same name in different triples */
    ptrlong e_var_count;	/*!< Number of used items in e_vars. This can be zero if equiv passes top-level var from alias to alias without local uses */
    ptrlong e_gspo_uses;	/*!< Number of all local uses in members (+1 for each in G, P, S or O in triples). Note that nonzero e_gspo_uses does not imply SPART_VARR_NOT_NULL if some members has triple.subtype == OPTIONAL_L */
    ptrlong e_nested_bindings;	/*!< Number of all nested uses in members (+1 for each in G, P, S or O in triples, +1 for each sub-gp use, +1 if \c e_gp is of subtype VALUES_L) */
    ptrlong e_nested_optionals;	/*!< Number of all nested uses in OPTIONAL_L members, VALUES_L memebers with UNDEF for the variable in question and"pure chains" to such OPTIONALs and VALUEs (+1 for each such sub-gp use) */
    ptrlong e_const_reads;	/*!< Number of constant-read uses in filters and in 'graph' of members */
    ptrlong e_optional_reads;	/*!< Number of uses in scalar subqueries of filters; both local and member filter are counted */
    ptrlong e_subquery_uses;	/*!< Number of all local uses in subquery (0 for plain queries, 1 in groups of subtype SELECT_L) */
    ptrlong e_replaces_filter;	/*!< Bitmask of SPART_RVR_XXX bits, nonzero if a filter has been replaced (and removed) by tightening of this equiv or by merging this and some other equiv, so the equiv is the only bearer of knowledge about the restriction. */
    rdf_val_range_t e_rvr;	/*!< Restrictions that are common for all variables. They are combined from rvrs of variables and subvalues, however rvrs of variables can be tightened by ancestor equivs, making the dependencies circular. */
    ptrlong *e_subvalue_idxs;	/*!< Subselects where values of these variables come from, as array of indexes of equivs. The order is not defined, but subvalues from OPTIONALs are after all other. */
    ptrlong *e_receiver_idxs;	/*!< Aliases of surrounding query where values of variables from this equiv are used, as array of indexes of equivs */
    ptrlong e_clone_idx;	/*!< Index of the current clone of the equiv */
    ptrlong e_cloning_serial;	/*!< The serial used when \c e_clone_idx is set, should be equal to \c sparp->sparp_sg->sg_cloning_serial */
    ptrlong e_external_src_idx;	/*!< Index in \c req_top.equivs of the binding of external variable at ancestor of scalar subquery */
    ptrlong *e_uses_as_params;	/*!< Equivs where the given equiv is used as an external source, as array of indexes of equivs */
    ptrlong e_deprecated;	/*!< The equivalence class belongs to a gp that is no longer usable */
    ptrlong e_pos1_t_in;	/*!< 1-based position of variable in T_IN list */
    ptrlong e_pos1_t_out;	/*!< 1-based position of variable in T_OUT list */
#ifdef DEBUG
    ptrlong e_dbg_merge_dest;	/*!< After the merge of equiv into some destination equiv, \c e_dbg_merge_dest keeps destination */
    SPART **e_dbg_saved_gp;	/*!< \c e_gp that is boxed as ptrlong, to save the pointer after \c e_gp is set to NULL */
    sparp_t *e_dbg_allocator;	/*!< The sparp where the equiv is created. This is to differentiate equivs with same gp selids from, e.g., three different variants of grabbing query */
#endif
  } sparp_equiv_t;

  typedef struct id_hash_s id_hash_t;
  typedef struct spar_tree_s SPART;
  typedef struct encoding_handler_s encoding_handler_t;
  typedef struct lang_handler_s lang_handler_t;
  typedef struct sparp_s {
  /* Generic environment */
    spar_query_env_t *sparp_sparqre;	/*!< External environment of the query */
    void * sparp_err_hdr;
    SPART * sparp_entire_query;		/*!< The query as a whole, the root of the whole parsed tree. */
    encoding_handler_t *sparp_enc;
    lang_handler_t *sparp_lang;
    int sparp_synthighlight;
    dk_set_t *sparp_checked_functions;
    int sparp_reject_extensions;		/*!< Reject Virtuoso-specific extensions */
    int sparp_save_pragmas;		/*!< This instructs the lexer to preserve pragmas for future use. This is not in use right now but may be used pretty soon */
    int sparp_key_gen;			/*!< 0 = do not fill xqr_key, 1 = save source text only, 2 = save source text and custom namespace decls */
  #ifdef XPYYDEBUG
    int sparp_yydebug;
  #endif
    ccaddr_t sparp_text;
    int sparp_permitted_syntax;		/*!< Bitmask of permitted syntax extensions, 0 for default */
    int sparp_syntax_exceptions;		/*!< Bitmask of syntax exceptions, 0 for default, can be nonzero for remote endpoints or for testing etc. */
    int sparp_inner_permitted_syntax;	/*!< The value of last define lang:dialect, it will be assigned to sparp_permitted_syntax for the subquery, -1 before set */
    int sparp_unictr;			/*!< Unique counter for objects */
  /* Environment of yacc */
    sparp_env_t * sparp_env;
    int sparp_lexem_buf_len;
    int sparp_total_lexems_parsed;
    spar_lexem_t *sparp_curr_lexem;
    spar_lexbmk_t sparp_curr_lexem_bmk;
    int sparp_in_precode_expn;		/*!< If nonzero (usually 1) then the parser reads precode-safe expression so it can not contain non-global variables, if bit 2 is set then even global variables are prohibited (like it is in INSERT DATA statement) */
    int sparp_in_ctor_from_where;		/*!< If nonzero then the parser reads WHERE clause of CONSTRUCT WHERE or DELETE WHERE statement */
    int sparp_allow_aggregates_in_expn;	/*!< The parser reads result-set expressions, GROUP BY, ORDER BY, or HAVING. Each bit is responsible for one level of nesting. */
    int sparp_scalar_subq_count;		/*!< Counter of scalar subqueries. It's primary purpose is to track whether BIND expression contain scalar subqueries and hence is non-repeatable. */
    int sparp_query_uses_aggregates;	/*!< Nonzero if there is at least one aggregate in the whole source query, (not in the current SELECT!). This is solely for bypassing expanding top retvals for "plain SPARQL" queries, not for other logic of the compiler */
    int sparp_query_uses_sinvs;		/*!< Nonzero if there is at least one SERVICE invocation in the whole source query, (not in the current SELECT!). This forces (re) composing of \c sinv.param_varnames and \c sinv.rset_varnames lists */
    int sparp_disable_big_const;		/*!< INSERT DATA requires either an sql_comp_t for ssl or define sql:big-data-const 0. The define sets this value to 1 */
    dk_set_t sparp_created_jsos;		/*!< Get-keyword style list of created JS objects. Object IRIs are keys, types (as free-text const char *) are values. This is solely for early (and incomplete) detection of probable errors. */
  /* Environment of lex */
    size_t sparp_text_ofs;
    size_t sparp_text_len;
    int sparp_lexlineno;			/*!< Source line number, starting from 1 */
    int sparp_lexdepth;			/*!< Lexical depth, it's equal to the current position in \c sparp_lexpars and \c sparp_lexstates */
    int sparp_rset_lexdepth_plus_1;	/*!< Lexical depth of current result set, increased by 1 (so when it's zero it means not in rset) */
    int sparp_lexpars[SPARP_MAX_LEX_DEPTH+2];	/*!< Stack of not-yet-closed parenthesis */
    int sparp_lexstates[SPARP_MAX_LEX_DEPTH+2];	/*!< Stack of lexical states */
    int sparp_string_literal_lexval;	/*!< Lexical value of string literal that is now in process. */
    dk_set_t sparp_output_lexem_bufs;	/*!< Reversed list of lexem buffers that are 100% filled by lexems */
    spar_lexem_t * sparp_curr_lexem_buf;	/*!< Lexem buffer that is filled now */
    spar_lexem_t * sparp_curr_lexem_buf_fill;	/*!< Number of lexems in \c sparp_curr_lexem_buf */
  /* Environment of term rewriter of the SPARQL-to-SQL compiler */
    dk_set_t sparp_propvars;		/*!< Set of propvars with distinct \c sparv_key fields that were ever used in the query */
    struct quad_storage_s	*sparp_storage;	/*!< Default storage that handles arbitrary quads of any sort plus maybe SPMJVs and relational mappings made by user, usually rdf_sys_storage */
    int sparp_storage_is_set;		/*!< The field sparp_storage is set (or at least tried to set with error and the attempt to set should not be retried) */
    dk_set_t sparp_macro_libs;		/*!< List of IRIs of used macro libraries. */
    int sparp_disable_storage_macro_lib;	/*!< If nonzero, the macro library of the quad storage is not used. This is set e.g. when the query to compile is the declaration of the macro lib by itself. */
    struct sparp_trav_params_s *sparp_stp;	/*!< Parameters of traverse (callbacks in use). It is filled in by sparp_gp_grav() only, not by sparp_gp_grav_int() */
    struct sparp_trav_state_s *sparp_stss;	/*!< Stack of traverse states. [0] is fake for parent on 'where', [1] is for 'where' etc. */
    struct sparp_trav_params_s *sparp_suspended_stps;	/*!< Pointer to a chained stack of suspended traversals */
    sparp_globals_t *sparp_sg;		/*!< Pointer to data common for all sparp_t-s for whole stack of nested sparp-s */
    sparp_e4qm_t *sparp_e4qm;		/*!< Pointer to data for compilation of quad map metadata manipulation statements */
    int sparp_macrolib_ignore_create;	/*!< True if define input:macrolib-ignore-create is set */
    void * sparp_macrolib_to_create;	/*!< IRI of macro lib that should be created, NULL if that's not a CREATE MACRO LIBRARY statement */
    int sparp_macro_mode;			/*!< Indicator of special mode of parsing DEFMACRO arguments, body, or invocation */
    SPART **sparp_macro_defs;		/*!< Array of locally defined macro defs, with an unused end */
    int sparp_macro_def_count;		/*!< Count of used items in \c sparp_macro_defs */
    dk_set_t sparp_funnames_in_defmacros;	/*!< All names of functions used inside bodies of macro definitions. They should not be used later as names of new macro defs, to avoid confusion. */
    SPART * sparp_current_macro;		/*!< The body of the macro that is being defined now */
    int sparp_macro_call_count;		/*!< If nonzero then macroexpansion should be made */
    int sparp_first_equiv_idx;		/*!< The index of the first equivalence class allocated in this sparp, to avoid integrity checks of incomplete equivs of outer sparps */
    int sparp_rewrite_dirty;		/*!< An integer that is incremented when any optimization subroutine rewrites the tree. */
    ccaddr_t *sparp_sprintff_isect_buf;	/*!< Temporary buffer to calculate intersections of value ranges; solely for sparp_rvr_intersect_sprintffs() */
    void * sparp_boxed_exec_uid;		/*!< Cached value returned by spar_boxed_exec_uid(). Do not use directly, call spar_boxed_exec_uid() instead! */
    void * sparp_immortal_exec_uname;	/*!< Cached value returned by spar_immortal_exec_uname(). Do not use directly, call spar_immortal_exec_uname() instead! */
    void * sparp_gs_app_callback;	/*!< NULL or name of application-specific callback function */
    void * sparp_gs_app_uid;		/*!< NULL or ID (supposedly app user ID) for application-specific callback */
    int sparp_internal_error_runs_audit;	/*!< Flags whether the sparp_internal_error has called audit so inner sparp_internal_error should not try to re-run audit or signal but should simply report */
    int sparp_globals_mode;		/*!< Flags if all global parameters are translated into ':N' because they're passed via 'params' argument of exec() inside a procedure view, */
    int sparp_global_num_offset;		/*!< If \c sparp_globals_mode is set to \c SPARE_GLOBALS_ARE_COLONUMBERED then numbers of 'app-specific' global parameters starts from \c sparp_global_num_offset up, some number of first params are system-specific. */
  } sparp_t;
  extern caddr_t spar_unescape_strliteral (sparp_t *sparp, const char *sparyytext, int count_of_quotes, int mode);
extern void spar_fill_lexem_bufs (sparp_t *sparp);
typedef struct spar_sqlgen_s
{
/* Query data */
  /*spar_query_t		*ssg_query;*/	/*!< Query to process */
  struct sql_comp_s	*ssg_sc;		/*!< Environment for sqlc_exp_print and similar functions. */
  sparp_t		*ssg_sparp;		/*!< Pointer to general parser data */
  SPART			*ssg_tree;		/*!< Select tree to process, of type SPAR_REQ_TOP */
  sparp_equiv_t		**ssg_equivs;		/*!< Shorthand for ssg_sparp->sparp_sg->sg_equivs */
  ptrlong		ssg_equiv_count;	/*!< Shorthand for ssg_sparp->sparp_sg->sg_equiv_count */
  struct spar_sqlgen_s	*ssg_parent_ssg;	/*!< Ssg that prints outer subquery */
  struct spar_sqlgen_s	*ssg_nested_ssg;	/*!< Ssg that prints some fragment for the current one, like a text of query to send to a remote service. This is used for GC on abort */
  SPART *		ssg_wrapping_gp;	/*!< A gp of subtype SELECT_L or SERVICE_L that contains the current subquery */
  SPART *		ssg_wrapping_sinv;	/*!< Service invocation description of \c ssg_wrapping_p in case of SERVICE_L gp subtype */
  int			ssg_comment_sql;	/*!< The mode of putting comments into the generated SQL, as set by define sql:comments (default 0 for release, 1 otherwise) */
/* Run-time environment */
  SPART			**ssg_sources;		/*!< Data sources from ssg_tree->_.req_top.sources and/or environment */
/* SQL Codegen temporary values */
  dk_session_t		*ssg_out;		/*!< Output for SQL text */
  int			ssg_where_l_printed;	/*!< Flags what to print before a filter: " WHERE" if 0, " AND" otherwise */
  const char *		ssg_where_l_text;	/*!< Text to print when (0 == ssg_where_l_printed), usually " WHERE" */
  int			ssg_indent;		/*!< Number of whitespaces to indent. Actually, pairs of whitespaces, not singles */
  int			ssg_line_count;		/*!< Number of lines of generated SQL code */
  dk_set_t		ssg_valid_ret_selids;	/*!< stack of selids of GPs that can be safely used to generate SQL code for retvals (i.e. their selids are in current scope) */
  dk_set_t		ssg_valid_ret_tabids;	/*!< stack like ssg_valid_ret_selids, but for tabids */
  dk_set_t		ssg_outer_valid_ret_selids;	/*!< Initial content of \c ssg_valid_ret_selids. This content is passed to sub-ssgs that make non-scalar subqueries, because they do not access selids of neigbours but can access selids outside some surrounding scalar subquery */
  dk_set_t		ssg_outer_valid_ret_tabids;	/*!< Initial content of \c ssg_valid_ret_tabids. */
  int			ssg_seealso_enabled;	/*!< Flags if \c ssg_print_fld_var_restrictions_ex() (or the like) should generate calls of RDF_GRAB_SEEALSO; they should for "init" and "iter" of a pview, but not for "final" */
/* SPARQL-D Codegen temporary values */
  SPART *		ssg_sd_current_sinv;	/*!< Service invocation that will receive the fragment that is printed ATM (for error reporting) */
  caddr_t		ssg_sd_service_naming;	/*!< The text like "SERVICE <iri>" or "SERVICE called via ?var" (for error reporting) */
  int			ssg_sd_flags;		/*!< Bitmask of SSG_SD_xxx flags, see rdf_mapping.jso */
  int			ssg_sd_no;		/*!< Bitmask of SSG_SD_NO_xxx flags, see rdf_mapping.jso */
  id_hash_t		*ssg_sd_used_namespaces;	/*!< Dictionary of namespaces used for prettyprinting of IRIs */
  dk_set_t		ssg_sd_outer_gps;	/*!< Parent GP of the current tree */
  int			ssg_sd_forgotten_graph;	/*!< Flags that a '}' is not printed after the last triple (in hope that the next member of a group is a triple with same graph so '} GRAPH ... {' is not required */
  int			ssg_sd_forgotten_dot;	/*!< Flags that a dot is not printed after the last triple (in hope that the next member of a group is a triple with same subject so ';' or ',' shorthand can be used) */
  SPART *		ssg_sd_prev_graph;	/*!< Graph of the previous triple in a group, to make a decision about avoiding print of '} GRAPH ... {' */
  SPART *		ssg_sd_prev_subj;	/*!< Subject of the previous triple in a group, to make a decision about using ';' or ',' shorthand */
  SPART *		ssg_sd_prev_pred;	/*!< Predicate of the previous triple in a group, to make a decision about using ',' shorthand */
  SPART *		ssg_sd_req_top;		/*!< Current SPAR_RQ_TOP ancestor-or-self, used, e.g., to convert ORDER BY 1 into ORDER_BY ?first_column */
  caddr_t		ssg_sd_single_from;	/*!< The IRI in FROM clause, if there's only one FROM clause, NULL otherwise */
  int			ssg_sd_graph_gp_nesting;	/*!< Count of GRAPH {...} gps that are opened but not yet closed */
  dk_set_t		ssg_param_pos_set;	/*!< revlist of byte offsets of params in text and numbers of params in question, for sinv templates with unsupported named params */
  int			ssg_inside_t_inouts;	/*!< The list of T_IN or T_OUT values is being printed */
  dk_set_t		ssg_param_t_inouts;	/*!< list of variables that are used in T_IN and T_OUT options but passed as parameters to a remote, so the option should use internal name and a separate FILTER should appear later */
/* RDB2RDF Codegen temporary values */
  const char *		ssg_alias_to_search;	/*!< Alias to select for search-and-replace (say, to replace "main alias" with prefixes for old or new columns) */
  const char *		ssg_alias_to_replace;	/*!< Replacing alias for search-and-replace */
} spar_sqlgen_t;
typedef void ssg_codegen_callback_t (struct spar_sqlgen_s *ssg, struct spar_tree_s *spart, ...);

typedef struct quad_storage_s
{
  quad_map_array_t	qsMjvMaps;	/*!<  */
  quad_map_array_t	qsUserMaps;	/*!<  */
  struct quad_map_s *	qsDefaultMap;	/*!<  */
  struct sparql_macro_library_s *	qsMacroLibrary;	/*!<  */
  ptrlong	qsMatchingFlags;	/*!<  */
  ccaddr_t	qsAlterInProgress;	/*!<  */
} quad_storage_t;

typedef struct spar_tree_s
{
  ptrlong	type;
  caddr_t	srcline;
  union {
    struct {
        /* #define SPAR_ALIAS		(ptrlong)1001 */
        SPART *arg;
        caddr_t aname;
        ssg_valmode_t native;		/*!< temporary use in SQL printer */
        ptrlong reruns_may_vary;	/*!< nonzero for BIND aliases that have scalar subqueries in \c arg so there is no warranty that \c arg will repeatedly return same value */
        ptrlong was_expanded;		/*!< There was a variable originally, but it's declared before in BIND..AS or other aliasing so it's expanded */
      } alias; /*!< only for use in top-level result-set list */
    struct {
        SPART *left;
        SPART *right;
      } bin_exp;
    struct {
        /* #define SPAR_BUILT_IN_CALL	(ptrlong)1003 */
        ptrlong btype;		/*!< Type of particular BIF, as lexem (for lexems other than SPARQL_BIF) or SPAR_BIF_xxx */
        ptrlong desc_ofs;	/*!< The offset of BIF description in \c sparp_bif_descs array */
        SPART **args;
      } builtin;
    struct {
        SPART *arg;
        ssg_valmode_t native;
        ssg_valmode_t needed;
      } conv; /*!< temporary use in SQL printer */
    struct {
        /* #define SPAR_FUNCALL		(ptrlong)1005 */
        caddr_t qname;
        SPART **argtrees;
        ptrlong agg_mode;		/*!< Zero for non-aggreagetes */
        ptrlong disabled_optimizations;	/*!< So far only bit 1 is used, meaning that the run of a function in the sandbox will never be possible */
      } funcall;
    struct {
        /* #define SPAR_GP			(ptrlong)1006 */
        ptrlong subtype;
        SPART **members;
        SPART **filters;
        SPART *subquery;
        caddr_t selid;
        ptrlong *equiv_indexes;		/*!< Array of indexes of equivs used in triples and filters of this GP, some items at the tail of the array may be spare and temporarily not in use */
        ptrlong equiv_count;		/*!< Number of items in \c equiv_indexes array that contains valid data. */
        ptrlong glued_filters_count;	/*!< Last \c glued_filters_count members of \c filters are expressions for ON statement of LEFT OUTER JOIN. They can not be moved to some other GP because they were moved already and next move will break semantics. */
        SPART **options;
      } gp;
    struct {
        /* #define SPAR_GRAPH		(ptrlong)1018 */
        ptrlong subtype;		/*!< One of SPART_GRAPH_FROM, SPART_GRAPH_GROUP, SPART_GRAPH_NAMED, SPART_GRAPH_NOT_FROM, SPART_GRAPH_NOT_GROUP, SPART_GRAPH_NOT_NAMED */
        caddr_t iri;			/*!< Constant IRI of a source */
        SPART *expn;			/*!< A QNAME with IRI of "plain" source or an expression that returns an IRI (or NULL) and makes some side effects such as sponging */
        ptrlong use_expn_in_gs_checks;	/*!< Nonzero if \c _.graph.expn acts in such a way that it can change graph-level permissions, so it should be used instead of \c _.graph.iri in run-time security checks */
      } graph;
    struct { /* Note that all first members of \c lit case should match to \c qname case */
        /* #define SPAR_LIT		(ptrlong)1009 */
        caddr_t val;
        caddr_t datatype;
        caddr_t language;
        caddr_t original_text;
      } lit;
    struct { /* Note that all first members of \c qname case should match to \c lit case */
        /* #define SPAR_QNAME		(ptrlong)1011 */
        caddr_t val;
      } qname;
    struct {
        /* #define SPAR_REQ_TOP		(ptrlong)1007 */
        ptrlong subtype;
        caddr_t retvalmode_name;
        caddr_t formatmode_name;
        caddr_t storage_name;
        SPART **retvals;
#if 0
        SPART **orig_retvals;		/*!< Retvals as they were after expanding '*' and wrapping in MAX() */
#endif
        SPART **expanded_orig_retvals;	/*!< Retvals as they were after expanding '*' and wrapping in MAX() and adding vars to grab */
        caddr_t retselid;
        SPART **sources;		/*!< Ordered list of FROM, FROM NAMED, NOT FROM and NOT FROM NAMED clauses */
        SPART *pattern;			/*!< Top-level group pattern that comes from WHERE {...} clause */
        SPART **groupings;		/*!< NULL or array of grouping expressions */
        SPART *having;			/*!< NULL or HAVING expression */
        SPART **order;			/*!< NULL or array of column numbers or oby expressions */
        SPART *limit;			/*!< NULL or limit expression (boxed integer or a precode) */
        SPART *offset;			/*!< NULL or offset expression (boxed integer or a precode) */
        SPART *binv;			/*!< NULL or SPAR_BINDINGS_INV */
        caddr_t shared_spare_box;	/*!< An environment that is shared among all clones of the tree, the pointer to it is wrapped into DV_LONG_INT */
      } req_top;
    struct {
        /* #define SPAR_TRIPLE		(ptrlong)1014 */
        ptrlong subtype;
        SPART *tr_fields[SPART_TRIPLE_FIELDS_COUNT];
        SPART **sinv_idx_and_qms;	/* Right now this is a list of a serial of a service invocation in first item and either _STAR as second item for no restriction or DEFAULT_L for built-in mapping or an UNAME of top quad map in every item of the list after the first one */
        caddr_t selid;
        caddr_t tabid;
        triple_case_t **tc_list;
        struct qm_format_s *native_formats[SPART_TRIPLE_FIELDS_COUNT];
        SPART **options;
        caddr_t ft_type;
        ptrlong src_serial;	/*!< Assigned once at parser and preserved in all clone operations */
      } triple;




    struct { /* Note that all first members of \c retval and bnode cases should match to \c var case */
        /* #define SPAR_BLANK_NODE_LABEL	(ptrlong)1002 */
        /* #define SPAR_VARIABLE		(ptrlong)1013 */
        caddr_t vname;
        caddr_t selid;
        caddr_t tabid;
        ptrlong tr_idx;		/*!< Index in quad (0 = graph ... 3 = obj) */
        ptrlong equiv_idx;
        rdf_val_range_t rvr;
        ptrlong restr_of_col;	/*!< Bitmask that indicate which bits of rvr.rvrRestrictions are set by used qmv(s) or actual values of BINDINGS/VALUES */
      } var;
    struct { /* Note that all first members of \c retval and bnode cases should match to \c var case */
        /* #define SPAR_BLANK_NODE_LABEL	(ptrlong)1002 */
        /* #define SPAR_VARIABLE		(ptrlong)1013 */
        caddr_t vname;
        caddr_t selid;
        caddr_t tabid;
        ptrlong tr_idx;		/*!< Index in quad (0 = graph ... 3 = obj) */
        ptrlong equiv_idx;
        rdf_val_range_t rvr;
        ptrlong restr_of_col;	/*!< Bitmask that indicate which bits of rvr.rvrRestrictions are set by used qmv(s) or actual values of BINDINGS/VALUES */
        ptrlong bracketed;  /*!< 0 for plain, 1 for [...], 2 for fake and bnodes made for default graphs */
      } bnode;
    struct { /* Note that all first members of \c retval and bnode cases should match to \c var case */
        /* #define SPAR_RETVAL		(ptrlong)1008 */
        caddr_t vname;
        caddr_t selid;
        caddr_t tabid;
        ptrlong tr_idx;		/*!< Index in quad (0 = graph ... 3 = obj) */
        ptrlong equiv_idx;
        rdf_val_range_t rvr;
        ptrlong restr_of_col;	/*!< Bitmask that indicate which bits of rvr.rvrRestrictions are set by used qmv(s) or actual values of BINDINGS/VALUES */
        SPART *gp;
        SPART *triple;
        ptrlong optional_makes_nullable;
      } retval;
    struct {
        ptrlong direction;
        SPART *expn;
      } oby;
    struct {
        /* #define SPAR_QM_SQL_FUNCALL	(ptrlong)1015 */
        caddr_t fname;	/*!< Function to call (bif or Virtuoso/PL) */
        SPART **fixed;	/*!< Array of 'positional' arguments */
        SPART **named;	/*!< Array of 'named' arguments that are passed as get-keyword style vector as a last arg */
      } qm_sql_funcall;
    struct {
        /* #define SPAR_SQLCOL		(ptrlong)1012 */
        caddr_t qtable;	/*!< Qualified table name */
        caddr_t alias;  /*!< Table alias */
        caddr_t col;	/*!< Column name */
      } qm_sqlcol;

    struct {
        /* #define SPAR_CODEGEN		(ptrlong)1016 */
        ssg_codegen_callback_t **cgen_cbk;	/*!< Pointer to the code generation function as a boxed number */
        SPART *args[1];				/*!< Data for the callback, maybe more then one SPART *, depending on structure size */
      } codegen;
    struct {
        /* #define SPAR_LIST		(ptrlong)1017 */
        SPART **items;	/*!< Some trees, say, items of T_IN_L list of variables */
      } list;
    struct {
        /* #define SPAR_WHERE_MODIFS	(ptrlong)1019 */
        SPART *where_gp;	/*!< Group pattern of WHERE clause, or NULL */
        SPART **groupings;	/*!< Array of groupings */
        SPART *having;		/*!< Expression of HAVING clause, or NULL */
        SPART **obys;		/*!< Array of ORDER BY criteria */
        SPART *lim;		/*!< Boxed LIMIT value or an expression tree */
        SPART *ofs;		/*!< Boxed OFFSET value or an expression tree */
        SPART *binv;		/*!< NULL or SPAR_BINDINGS_INV */
      } wm;
    struct {
        /* define SPAR_SERVICE_INV	(ptrlong)1020 */
        ptrlong own_idx;	/*!< Serial of the sinv in the parser */
        SPART *endpoint;	/*!< An IRI of web service endpoint without static parameters */
        SPART **iri_params;	/*!< A get_keyword style array of parameters to pass in the IRI, like maxrows */
        caddr_t syntax;		/*!< Boxed bitmask of SSG_SD_xxx flags of allowed query serialization features */
        caddr_t syntax_exceptions;	/*!< Boxed bitmask of SSG_SD_NO_xxx flags of exceptions from standard syntax that breaks the standard compliance of the service */
        caddr_t *param_varnames;	/*!< Names of variables that are passed as parameters */
        ptrlong in_list_implicit;	/*!< Flags if IN variables were specified using '*' or not specified at all */
        caddr_t *rset_varnames;	/*!< Names of variables that are returned in the result set from the endpoint, in the order in the rset */
        SPART **defines;	/*!< List of defines to pass, as a get_keyword style list of qnames and values or arrays of values */
        SPART **sources;	/*!< List of sources, similar to one in req_top. If NULL then sources of parent req_top are used */
        caddr_t storage_uri;	/*!< Storage to use: JSO UNAME if specified explicitly for a service IRI, uname_virtrdf_ns_uri_DefaultServiceStorage if unknown service */
        ptrlong silent;		/*!< nonzero if SERVICE SILENT syntax is used */
      } sinv;
    struct {
        /* define SPAR_BINDINGS_INV		(ptrlong)1021 */
        ptrlong own_idx;	/*!< Serial of the bindings invocation in the parser */
        SPART **vars;		/*!< Names of variables that are passed as parameters */
        SPART ***data_rows;	/*!< Rows of data. Note that they're not copied from spare_bindings_rowset and not duplicated if enclosing GP is duplicated. */
        char *data_rows_mask;	/*!< Characters, one per data row, indicating whether the row is in use (char '/') or not in use due to ban by some cell (char '0' + column index or '\x7f', whatever is less, for debugging) or not in use due to LIMIT (char '.') */
        ptrlong *counters_of_unbound;	/*!< Counters of unbound values in columns (rows not in use are excluded from counting). Cheating: This array is allocated as DV_STRING, not DV_ARRAY_OF_POINTER */
        ptrlong rows_in_use;	/*!< Count of rows still in use */
        ptrlong rows_last_rvr;	/*!< Count of rows in use when rvrs were refreshed last time */
      } binv;
    struct {
        /* define SPAR_DEFMACRO			(ptrlong)1022 */
        ptrlong subtype;
        caddr_t mname;		/*!< IRI of the macro */
        caddr_t sml_iri;	/*!< IRI UNAME of SPARQL macro library where the macro comes from (as a result of define input:macro-lib... ) */
        caddr_t *paramnames;	/*!< Names of parameters */
        caddr_t *localnames;	/*!< Names of variables listed in LOCAL (...) clause */
        SPART **quad_pattern;	/*!< The template of triple (or quad) patterns */
        SPART *body;		/*!< The body of the macro, as group graph pattern or scalar expression */
        caddr_t selid;		/*!< Outermost selid of the \c defmacro.body */
        ptrlong aggregate_count;  /*!< Count of aggregate functions used inside the \c defmacro.body */
      } defmacro;
    struct {
        /* #define SPAR_MACROCALL		(ptrlong)1023 */
        caddr_t mname;
        SPART **argtrees;
        SPART *context_graph;
        caddr_t mid;
      } macrocall;
    struct {
        /* #define SPAR_MACROPU		(ptrlong)1024 */
        caddr_t pname;
        ptrlong pindex;
        ptrlong pumode;
      } macropu;
    struct {
        /* #define SPAR_PPATH		(ptrlong)1025 */
        ptrlong subtype;	/*!< Node subtype: '/', '|', 'D' or '*' for non-leafs ('D' is union of path with T_DISTINCT), 0 or '!' for plain or negative leafs.
					Leafs are '|' of iris and ^iris.
					There may be a single forward and/or single reverse leaf (SPART *)_STAR, it can't be mixed with IRIs of same direction.
					When type is 0, (SPART *)_STAR means that any predicate will do, such as after optimization of x|!x
					When type is '!', (SPART *)_STAR _also_ means that any predicate will do; negation for _STAR is no leafs of that direction. */
        SPART **parts;		/*!< Descendants of type SPAR_PPATH for non-leafs, QNames for leafs. For '|' subtype, the (only) 0 part is always first, the (only) '!' part is either first or next after 0 part */
        caddr_t minrepeat;	/*!< Minimal number of repetitions for '*' non-leaf node: 0 for '?' and '*' operators, 1 for '+', an M integer for {M,N} modifier */
        caddr_t maxrepeat;	/*!< Maximal number of repetitions for '*' non-leaf node: 1 for '?', an N integer for {M,N} modifier however it is NEGATIVE for infinity */
        ptrlong num_of_invs;	/*!< Number of inverted predicates in a leaf. All inverted predicates are always after all forward predicates */
      } ppath;
  } _;
} sparp_tree_t;



