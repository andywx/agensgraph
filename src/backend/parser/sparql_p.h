/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_SPARYY_SPARQL_P_H_INCLUDED
# define YY_SPARYY_SPARQL_P_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sparyydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    __SPAR_PUNCT_BEGIN = 258,
    _AMP_AMP = 259,
    _BACKQUOTE = 260,
    _BANG = 261,
    _BAR = 262,
    _BAR_BAR = 263,
    _CARET = 264,
    _CARET_CARET = 265,
    _COMMA = 266,
    _DOT = 267,
    _EQ = 268,
    _GE = 269,
    _GT = 270,
    _LBRA = 271,
    _LE = 272,
    _LPAR = 273,
    _LSQBRA = 274,
    _LT = 275,
    _MINUS = 276,
    _NOT_EQ = 277,
    _PLUS = 278,
    _PLUS_GT = 279,
    _QMARK = 280,
    _RBRA = 281,
    _RPAR = 282,
    _RSQBRA = 283,
    _SEMI = 284,
    _SLASH = 285,
    _STAR = 286,
    _STAR_GT = 287,
    a_L = 288,
    ADD_L = 289,
    ALL_L = 290,
    ALTER_L = 291,
    AS_L = 292,
    ASC_L = 293,
    ASK_L = 294,
    ASSUME_L = 295,
    ATTACH_L = 296,
    AVG_L = 297,
    BASE_L = 298,
    BIJECTION_L = 299,
    BIND_L = 300,
    BINDINGS_L = 301,
    BOUND_L = 302,
    BY_L = 303,
    CASE_L = 304,
    CLASS_L = 305,
    CLEAR_L = 306,
    CREATE_L = 307,
    CONSTRUCT_L = 308,
    COPY_L = 309,
    COUNT_L = 310,
    COUNT_LPAR = 311,
    COUNT_DISTINCT_L = 312,
    CUBE_L = 313,
    DATA_L = 314,
    DATATYPE_L = 315,
    DEFAULT_L = 316,
    DEFINE_L = 317,
    DEFMACRO_L = 318,
    DELETE_L = 319,
    DEREF_L = 320,
    DESC_L = 321,
    DESCRIBE_L = 322,
    DETACH_L = 323,
    DISTINCT_L = 324,
    DROP_L = 325,
    ELSE_L = 326,
    END_L = 327,
    EXCLUSIVE_L = 328,
    EXISTS_L = 329,
    false_L = 330,
    FILTER_L = 331,
    FROM_L = 332,
    FUNCTION_L = 333,
    GEO_L = 334,
    GRAPH_L = 335,
    GROUP_L = 336,
    GROUP_CONCAT_L = 337,
    GROUPING_L = 338,
    HAVING_L = 339,
    IDENTIFIED_L = 340,
    IFP_L = 341,
    IN_L = 342,
    INF_L = 343,
    INDEX_L = 344,
    INFERENCE_L = 345,
    INSERT_L = 346,
    INTO_L = 347,
    IRI_L = 348,
    LANG_L = 349,
    LIBRARY_L = 350,
    LIKE_L = 351,
    LIMIT_L = 352,
    LITERAL_L = 353,
    LOCAL_L = 354,
    LOAD_L = 355,
    MACRO_L = 356,
    MAKE_L = 357,
    MAP_L = 358,
    MAX_L = 359,
    MIN_L = 360,
    MINUS_L = 361,
    MODIFY_L = 362,
    MOVE_L = 363,
    NAMED_L = 364,
    NAN_L = 365,
    NIL_L = 366,
    NOT_L = 367,
    NOT_EXISTS_L = 368,
    NOT_FROM_L = 369,
    NOT_IN_L = 370,
    NOT_NULL_L = 371,
    NOT_USING_L = 372,
    NULL_L = 373,
    OBJECT_L = 374,
    OF_L = 375,
    OFFBAND_L = 376,
    OFFSET_L = 377,
    OPTIONAL_L = 378,
    OPTION_L = 379,
    ORDER_L = 380,
    PRECISION_L = 381,
    PREDICATE_L = 382,
    PREFIX_L = 383,
    QUAD_L = 384,
    REDUCED_L = 385,
    RETURNS_L = 386,
    ROLLUP_L = 387,
    SAME_AS_L = 388,
    SAME_AS_O_L = 389,
    SAME_AS_P_L = 390,
    SAME_AS_S_L = 391,
    SAME_AS_S_O_L = 392,
    SAMPLE_L = 393,
    SCORE_L = 394,
    SCORE_LIMIT_L = 395,
    SELECT_L = 396,
    SERVICE_L = 397,
    SETS_L = 398,
    SILENT_L = 399,
    SOFT_L = 400,
    SQLQUERY_L = 401,
    STORAGE_L = 402,
    SUBCLASS_L = 403,
    SUBJECT_L = 404,
    SUM_L = 405,
    TABID_L = 406,
    TABLE_OPTION_L = 407,
    TEXT_L = 408,
    THEN_L = 409,
    TIES_L = 410,
    TO_L = 411,
    TOP_L = 412,
    TRANSITIVE_L = 413,
    T_CYCLES_ONLY_L = 414,
    T_DIRECTION_L = 415,
    T_DISTINCT_L = 416,
    T_END_FLAG_L = 417,
    T_EXISTS_L = 418,
    T_FINAL_AS_L = 419,
    T_IN_L = 420,
    T_MAX_L = 421,
    T_MIN_L = 422,
    T_OUT_L = 423,
    T_NO_CYCLES_L = 424,
    T_NO_ORDER_L = 425,
    T_SHORTEST_ONLY_L = 426,
    T_STEP_L = 427,
    true_L = 428,
    UNBOUND_L = 429,
    UNDEF_L = 430,
    UNION_L = 431,
    USING_L = 432,
    VALUES_L = 433,
    WHEN_L = 434,
    WHERE_L = 435,
    WITH_L = 436,
    XML_L = 437,
    __SPAR_PUNCT_END = 438,
    START_OF_SPARQL_TEXT = 439,
    END_OF_SPARQL_TEXT = 440,
    SPARUL_RUN_SUBTYPE = 441,
    SPARUL_INSERT_DATA = 442,
    SPARUL_DELETE_DATA = 443,
    __SPAR_NONPUNCT_START = 444,
    SPARQL_BIF = 445,
    SPARQL_INTEGER = 446,
    SPARQL_DECIMAL = 447,
    SPARQL_DOUBLE = 448,
    SPARQL_STRING = 449,
    SPARQL_SQLTEXT = 450,
    LANGTAG = 451,
    QNAME = 452,
    QNAME_NS = 453,
    BLANK_NODE_LABEL = 454,
    Q_IRI_REF = 455,
    QD_VARNAME = 456,
    QD_COLON_PARAMNAME = 457,
    QD_COLON_PARAMNUM = 458,
    SPARQL_PLAIN_ID = 459,
    SPARQL_SQL_ALIASCOLNAME = 460,
    SPARQL_SQL_QTABLENAME = 461,
    SPARQL_SQL_QTABLECOLNAME = 462,
    __SPAR_NONPUNCT_END = 463,
    PRECODE_EXPN_PREC = 464,
    _COLON = 465,
    MATH_UPLUS = 466,
    MATH_UMINUS = 467,
    PPATH_ALTERNATIVE = 468,
    PPATH_SEQUENCE = 469,
    PPATH_CARET = 470,
    PPATH_MOD = 471,
    PPATH_BANG = 472
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 93 "sparql_p.y" /* yacc.c:1909  */

  void * box;
  void * *boxes;
  ptrlong token_type;
  ptrlong nonboxed_int;
  SPART *tree;
  SPART **trees;
  dk_set_t list;
  dk_set_t backstack;
  spar_lexbmk_t *bookmark;
  void *nothing;

#line 285 "sparql_p.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sparyyparse (sparp_t * sparp_arg);

#endif /* !YY_SPARYY_SPARQL_P_H_INCLUDED  */
