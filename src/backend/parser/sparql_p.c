/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sparyyparse
#define yylex           sparyylex
#define yyerror         sparyyerror
#define yydebug         sparyydebug
#define yynerrs         sparyynerrs


/* Copy the first part of user declarations.  */
#line 44 "sparql_p.y" /* yacc.c:339  */

#include "dkpool.h"
#include "sparql.h"

#include "sparql_l.h"
#include "sparql_func.h"

#ifdef DEBUG
#define sparyyerror(sparp_arg, strg) sparyyerror_impl_1(sparp_arg, NULL, yystate, yyssa, yyssp, (strg))
#else
#define sparyyerror(sparp_arg, strg) sparyyerror_impl(sparp_arg, NULL, (strg))
#endif

#ifdef XPYYDEBUG
#define YYDEBUG 1
#endif

#define sparyylex(lval_ptr, param) sparyylex_from_sparp_bufs ((void * *)(lval_ptr), ((sparp_t *)(param)))

#define SPAR_BIN_OP(dst,op,l,r) (dst) = spartlist (sparp_arg, 3, (op), (l), (r))


#define bmk_offset sparp_curr_lexem_bmk.sparlb_offset
#define bmk_bufs_tail sparp_curr_lexem_bmk.sparlb_lexem_bufs_tail

int sparyylex_from_sparp_bufs (void * *yylval, sparp_t *sparp)
{
  spar_lexem_t *sparl;
  while (sparp->bmk_offset >= sparp->sparp_lexem_buf_len)
    {
      sparp->bmk_bufs_tail = sparp->bmk_bufs_tail->next;
      if (NULL == sparp->bmk_bufs_tail)
	{
	  /*sparp->sparp_curr_lexem = NULL; -- commented out to have at least 'some' current lexem */
	  return 0;
	}
      sparp->sparp_lexem_buf_len = box_length (sparp->bmk_bufs_tail->data) / sizeof (spar_lexem_t);
      sparp->bmk_offset = 0;
    }
  sparl = ((spar_lexem_t *)(sparp->bmk_bufs_tail->data)) + sparp->bmk_offset;
  yylval[0] = sparl->sparl_sem_value;
  sparp->sparp_curr_lexem = sparl;
  sparp->bmk_offset += 1;
  return (int) sparl->sparl_lex_value;
}


#line 120 "sparql_p.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sparql_p.h".  */
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
#line 93 "sparql_p.y" /* yacc.c:355  */

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

#line 391 "sparql_p.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int sparyyparse (sparp_t * sparp_arg);

#endif /* !YY_SPARYY_SPARQL_P_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 407 "sparql_p.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  218
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  373
/* YYNRULES -- Number of rules.  */
#define YYNRULES  857
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1425

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   472

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   625,   625,   626,   627,   629,   633,   635,   637,   643,
     644,   645,   646,   651,   655,   656,   660,   660,   670,   671,
     675,   676,   677,   678,   679,   683,   684,   688,   692,   693,
     697,   703,   704,   707,   709,   709,   718,   719,   725,   725,
     738,   740,   738,   746,   749,   746,   756,   761,   766,   771,
     779,   780,   781,   785,   786,   787,   791,   796,   803,   804,
     811,   812,   816,   817,   818,   823,   824,   825,   826,   827,
     828,   833,   833,   838,   839,   845,   845,   859,   860,   861,
     862,   866,   866,   871,   873,   874,   880,   880,   893,   897,
     893,   915,   915,   928,   929,   933,   933,   943,   944,   952,
     957,   961,   967,   968,   969,   970,   974,   975,   976,   977,
     981,   982,   982,   987,   988,   992,   994,   999,   999,  1005,
    1008,  1012,  1012,  1020,  1020,  1031,  1032,  1039,  1040,  1041,
    1045,  1046,  1046,  1054,  1055,  1059,  1060,  1065,  1066,  1067,
    1068,  1069,  1070,  1074,  1075,  1076,  1080,  1081,  1085,  1088,
    1091,  1097,  1102,  1104,  1106,  1108,  1113,  1114,  1115,  1119,
    1120,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,
    1134,  1138,  1139,  1139,  1147,  1148,  1152,  1153,  1153,  1161,
    1162,  1163,  1167,  1168,  1172,  1173,  1178,  1179,  1180,  1181,
    1182,  1183,  1187,  1188,  1189,  1193,  1194,  1198,  1202,  1203,
    1207,  1211,  1212,  1219,  1222,  1219,  1226,  1234,  1234,  1245,
    1246,  1250,  1251,  1255,  1256,  1260,  1261,  1265,  1272,  1273,
    1277,  1278,  1279,  1280,  1281,  1282,  1283,  1287,  1290,  1294,
    1294,  1330,  1331,  1332,  1333,  1350,  1351,  1352,  1353,  1354,
    1355,  1356,  1357,  1358,  1359,  1367,  1367,  1368,  1372,  1373,
    1374,  1372,  1381,  1382,  1380,  1389,  1389,  1390,  1390,  1407,
    1408,  1412,  1413,  1417,  1417,  1424,  1424,  1430,  1435,  1435,
    1443,  1444,  1448,  1449,  1453,  1454,  1458,  1465,  1466,  1470,
    1471,  1472,  1473,  1474,  1475,  1476,  1480,  1481,  1482,  1486,
    1487,  1491,  1491,  1511,  1527,  1538,  1511,  1561,  1562,  1566,
    1567,  1571,  1572,  1582,  1583,  1587,  1587,  1607,  1608,  1609,
    1610,  1614,  1615,  1616,  1620,  1621,  1622,  1623,  1627,  1628,
    1632,  1633,  1637,  1638,  1637,  1645,  1645,  1647,  1647,  1649,
    1653,  1654,  1660,  1660,  1663,  1662,  1665,  1666,  1667,  1671,
    1672,  1673,  1674,  1675,  1676,  1680,  1685,  1686,  1687,  1687,
    1697,  1698,  1702,  1705,  1708,  1711,  1714,  1717,  1723,  1725,
    1730,  1732,  1733,  1734,  1736,  1740,  1742,  1744,  1749,  1751,
    1756,  1758,  1760,  1762,  1764,  1766,  1768,  1770,  1772,  1774,
    1776,  1778,  1780,  1782,  1784,  1785,  1790,  1791,  1795,  1796,
    1797,  1798,  1799,  1803,  1804,  1805,  1806,  1807,  1811,  1812,
    1816,  1817,  1821,  1822,  1823,  1824,  1828,  1829,  1830,  1831,
    1832,  1836,  1840,  1841,  1842,  1843,  1847,  1848,  1849,  1850,
    1851,  1852,  1853,  1857,  1857,  1862,  1862,  1874,  1878,  1879,
    1883,  1887,  1900,  1901,  1905,  1906,  1910,  1911,  1915,  1916,
    1917,  1918,  1922,  1923,  1924,  1925,  1929,  1930,  1934,  1935,
    1939,  1940,  1943,  1944,  1945,  1948,  1951,  1952,  1953,  1961,
    1965,  1966,  1967,  1968,  1969,  1970,  1974,  1977,  1978,  1982,
    1983,  1987,  2004,  2009,  2017,  2022,  2023,  2028,  2029,  2030,
    2031,  2032,  2033,  2034,  2038,  2038,  2063,  2064,  2066,  2069,
    2073,  2074,  2074,  2077,  2077,  2092,  2092,  2108,  2109,  2110,
    2111,  2112,  2116,  2120,  2122,  2123,  2125,  2127,  2158,  2161,
    2161,  2178,  2178,  2199,  2205,  2206,  2206,  2239,  2240,  2241,
    2242,  2243,  2244,  2245,  2249,  2266,  2268,  2270,  2272,  2274,
    2279,  2284,  2291,  2292,  2293,  2297,  2297,  2328,  2328,  2350,
    2351,  2355,  2356,  2357,  2361,  2362,  2363,  2364,  2368,  2369,
    2373,  2374,  2375,  2379,  2380,  2381,  2382,  2386,  2387,  2387,
    2393,  2394,  2395,  2396,  2399,  2405,  2406,  2407,  2415,  2419,
    2420,  2424,  2425,  2426,  2430,  2431,  2435,  2436,  2440,  2441,
    2442,  2443,  2447,  2448,  2452,  2456,  2460,  2464,  2468,  2469,
    2473,  2474,  2478,  2484,  2490,  2491,  2492,  2501,  2502,  2503,
    2504,  2505,  2506,  2507,  2508,  2509,  2510,  2511,  2512,  2513,
    2514,  2518,  2525,  2527,  2525,  2540,  2540,  2556,  2558,  2556,
    2571,  2571,  2588,  2590,  2588,  2603,  2609,  2611,  2616,  2618,
    2623,  2628,  2633,  2634,  2641,  2642,  2646,  2650,  2651,  2655,
    2659,  2660,  2661,  2662,  2666,  2667,  2671,  2672,  2676,  2677,
    2684,  2685,  2689,  2690,  2699,  2701,  2699,  2715,  2720,  2715,
    2737,  2739,  2737,  2748,  2749,  2753,  2759,  2760,  2761,  2767,
    2768,  2768,  2774,  2775,  2776,  2782,  2783,  2784,  2785,  2786,
    2792,  2801,  2813,  2823,  2826,  2832,  2833,  2834,  2838,  2842,
    2849,  2851,  2853,  2855,  2857,  2859,  2865,  2866,  2870,  2884,
    2870,  2895,  2896,  2900,  2907,  2900,  2918,  2929,  2935,  2944,
    2950,  2959,  2960,  2960,  2965,  2968,  2968,  2974,  2979,  2980,
    2984,  2991,  2992,  2996,  2997,  3001,  3002,  3006,  3010,  3017,
    3018,  3022,  3023,  3024,  3028,  3029,  3029,  3036,  3037,  3039,
    3041,  3043,  3048,  3057,  3063,  3072,  3073,  3074,  3078,  3079,
    3079,  3087,  3086,  3089,  3096,  3104,  3103,  3113,  3117,  3119,
    3118,  3133,  3147,  3147,  3152,  3153,  3157,  3158,  3159,  3160,
    3161,  3160,  3169,  3170,  3170,  3176,  3176,  3181,  3185,  3188,
    3188,  3196,  3200,  3202,  3204,  3196,  3207,  3211,  3212,  3216,
    3217,  3218,  3219,  3223,  3224,  3225,  3229,  3230,  3231,  3235,
    3236,  3240,  3241,  3242,  3243,  3246,  3251,  3252,  3256,  3257,
    3261,  3262,  3266,  3267,  3271,  3272,  3273,  3277,  3281,  3288,
    3289,  3290,  3291,  3295,  3296,  3300,  3301,  3305,  3306,  3310,
    3316,  3320,  3321,  3325,  3326,  3330,  3336,  3337,  3338,  3339,
    3343,  3344,  3348,  3349,  3350,  3354,  3355,  3356,  3357,  3358,
    3363,  3364,  3369,  3370,  3374,  3375,  3379,  3380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "__SPAR_PUNCT_BEGIN", "_AMP_AMP",
  "_BACKQUOTE", "_BANG", "_BAR", "_BAR_BAR", "_CARET", "_CARET_CARET",
  "_COMMA", "_DOT", "_EQ", "_GE", "_GT", "_LBRA", "_LE", "_LPAR",
  "_LSQBRA", "_LT", "_MINUS", "_NOT_EQ", "_PLUS", "_PLUS_GT", "_QMARK",
  "_RBRA", "_RPAR", "_RSQBRA", "_SEMI", "_SLASH", "_STAR", "_STAR_GT",
  "a_L", "ADD_L", "ALL_L", "ALTER_L", "AS_L", "ASC_L", "ASK_L", "ASSUME_L",
  "ATTACH_L", "AVG_L", "BASE_L", "BIJECTION_L", "BIND_L", "BINDINGS_L",
  "BOUND_L", "BY_L", "CASE_L", "CLASS_L", "CLEAR_L", "CREATE_L",
  "CONSTRUCT_L", "COPY_L", "COUNT_L", "COUNT_LPAR", "COUNT_DISTINCT_L",
  "CUBE_L", "DATA_L", "DATATYPE_L", "DEFAULT_L", "DEFINE_L", "DEFMACRO_L",
  "DELETE_L", "DEREF_L", "DESC_L", "DESCRIBE_L", "DETACH_L", "DISTINCT_L",
  "DROP_L", "ELSE_L", "END_L", "EXCLUSIVE_L", "EXISTS_L", "false_L",
  "FILTER_L", "FROM_L", "FUNCTION_L", "GEO_L", "GRAPH_L", "GROUP_L",
  "GROUP_CONCAT_L", "GROUPING_L", "HAVING_L", "IDENTIFIED_L", "IFP_L",
  "IN_L", "INF_L", "INDEX_L", "INFERENCE_L", "INSERT_L", "INTO_L", "IRI_L",
  "LANG_L", "LIBRARY_L", "LIKE_L", "LIMIT_L", "LITERAL_L", "LOCAL_L",
  "LOAD_L", "MACRO_L", "MAKE_L", "MAP_L", "MAX_L", "MIN_L", "MINUS_L",
  "MODIFY_L", "MOVE_L", "NAMED_L", "NAN_L", "NIL_L", "NOT_L",
  "NOT_EXISTS_L", "NOT_FROM_L", "NOT_IN_L", "NOT_NULL_L", "NOT_USING_L",
  "NULL_L", "OBJECT_L", "OF_L", "OFFBAND_L", "OFFSET_L", "OPTIONAL_L",
  "OPTION_L", "ORDER_L", "PRECISION_L", "PREDICATE_L", "PREFIX_L",
  "QUAD_L", "REDUCED_L", "RETURNS_L", "ROLLUP_L", "SAME_AS_L",
  "SAME_AS_O_L", "SAME_AS_P_L", "SAME_AS_S_L", "SAME_AS_S_O_L", "SAMPLE_L",
  "SCORE_L", "SCORE_LIMIT_L", "SELECT_L", "SERVICE_L", "SETS_L",
  "SILENT_L", "SOFT_L", "SQLQUERY_L", "STORAGE_L", "SUBCLASS_L",
  "SUBJECT_L", "SUM_L", "TABID_L", "TABLE_OPTION_L", "TEXT_L", "THEN_L",
  "TIES_L", "TO_L", "TOP_L", "TRANSITIVE_L", "T_CYCLES_ONLY_L",
  "T_DIRECTION_L", "T_DISTINCT_L", "T_END_FLAG_L", "T_EXISTS_L",
  "T_FINAL_AS_L", "T_IN_L", "T_MAX_L", "T_MIN_L", "T_OUT_L",
  "T_NO_CYCLES_L", "T_NO_ORDER_L", "T_SHORTEST_ONLY_L", "T_STEP_L",
  "true_L", "UNBOUND_L", "UNDEF_L", "UNION_L", "USING_L", "VALUES_L",
  "WHEN_L", "WHERE_L", "WITH_L", "XML_L", "__SPAR_PUNCT_END",
  "START_OF_SPARQL_TEXT", "END_OF_SPARQL_TEXT", "SPARUL_RUN_SUBTYPE",
  "SPARUL_INSERT_DATA", "SPARUL_DELETE_DATA", "__SPAR_NONPUNCT_START",
  "SPARQL_BIF", "SPARQL_INTEGER", "SPARQL_DECIMAL", "SPARQL_DOUBLE",
  "SPARQL_STRING", "SPARQL_SQLTEXT", "LANGTAG", "QNAME", "QNAME_NS",
  "BLANK_NODE_LABEL", "Q_IRI_REF", "QD_VARNAME", "QD_COLON_PARAMNAME",
  "QD_COLON_PARAMNUM", "SPARQL_PLAIN_ID", "SPARQL_SQL_ALIASCOLNAME",
  "SPARQL_SQL_QTABLENAME", "SPARQL_SQL_QTABLECOLNAME",
  "__SPAR_NONPUNCT_END", "PRECODE_EXPN_PREC", "_COLON", "MATH_UPLUS",
  "MATH_UMINUS", "PPATH_ALTERNATIVE", "PPATH_SEQUENCE", "PPATH_CARET",
  "PPATH_MOD", "PPATH_BANG", "$accept", "sparql",
  "spar_query_or_ul_operations", "spar_query_body", "spar_prolog",
  "spar_defines_opt", "spar_define", "$@1", "spar_define_val_commalist",
  "spar_define_val", "spar_base_decl_opt", "spar_prefix_decls_opt",
  "spar_prefix_decl", "spar_create_macro_lib_opt", "$@2",
  "spar_defmacros_opt", "spar_defmacro", "$@3", "spar_dm_args_and_body",
  "$@4", "$@5", "$@6", "$@7", "spar_dm_match_template",
  "spar_dm_local_args_opt", "spar_dm_args_opt", "spar_dm_arg_commalist",
  "spar_dm_args", "spar_dm_patitem_gs", "spar_dm_patitem_p",
  "spar_dm_patitem_o", "spar_dm_gp_or_expn", "$@8", "spar_select_query",
  "$@9", "spar_select_query_mode", "spar_select_rset", "@10",
  "spar_select_rset_1", "spar_construct_query", "$@11", "$@12", "$@13",
  "spar_describe_query", "$@14", "spar_describe_rset", "spar_ask_query",
  "$@15", "spar_dataset_clauses_opt", "spar_dataset_clause",
  "spar_dataset_clause_subtype", "spar_dataset_clause_subtype_from",
  "spar_dataset_clause_subtype_using", "spar_sponge_optionlist_opt",
  "$@16", "spar_sponge_option_commalist_opt_rpar",
  "spar_sponge_option_commalist", "spar_precode_expn", "$@17",
  "spar_where_clause_opt", "spar_where_clause", "$@18", "$@19",
  "spar_where_clause_tail", "spar_solution_modifier",
  "spar_group_clause_opt", "$@20", "spar_group_expns_or_sets",
  "spar_group_expns", "spar_group_expn", "spar_grouping_sets",
  "spar_grouping_set_list", "spar_grouping_set",
  "spar_options_of_top_lpar", "spar_all_distinct_opt", "spar_ties_opt",
  "spar_bin_op_sign", "spar_having_clause_opt", "$@21",
  "spar_constraint_list_as_and", "spar_order_clause_opt", "$@22",
  "spar_order_conditions", "spar_order_condition_nocommalist",
  "spar_order_condition_commalist", "spar_order_condition",
  "spar_asc_or_desc_opt", "spar_limit_clause_opt", "spar_limit_clause",
  "spar_offset_clause_opt", "spar_offset_clause",
  "spar_bindings_clause_opt", "spar_bindings_clause_int", "$@23", "$@24",
  "$@25", "spar_bindings_vars", "spar_bindings_var", "spar_bindings_opt",
  "spar_bindings", "spar_binding", "spar_bindvals", "spar_bindval",
  "spar_group_gp", "spar_group_gp_with_subselect", "@26", "spar_gp",
  "spar_gp_not_triples", "spar_optional_gp", "$@27", "spar_quad_map_gp",
  "$@28", "$@29", "$@30", "spar_graph_gp", "$@31", "$@32",
  "spar_group_or_union_gp", "$@33", "$@34", "spar_union_type",
  "spar_binds", "spar_bind", "@35", "spar_inline_data", "$@36",
  "spar_inline_data_tail", "$@37", "spar_inline_data_vars_opt",
  "spar_inline_data_var", "spar_inline_data_rows_opt",
  "spar_inline_data_row", "spar_inline_data_values_opt",
  "spar_inline_data_value", "spar_constraint", "spar_exists_or_not_exists",
  "spar_constraint_exists_int", "$@38", "spar_service_req", "@39", "@40",
  "$@41", "spar_service_options_list_opt", "spar_service_options_opt",
  "spar_service_option", "spar_ctor_template_nolbra", "$@42",
  "spar_ctor_triples_or_quads_opt", "spar_ctor_triples_or_quads_triples",
  "spar_ctor_triples_or_quads_quads", "spar_triples_opt", "spar_triples",
  "spar_quads1", "$@43", "$@44", "spar_triples1", "$@45", "$@46",
  "spar_props_opt", "spar_props", "$@47", "$@48", "spar_objects",
  "spar_ograph_node", "spar_triple_optionlist_opt", "$@49",
  "spar_triple_option_commalist", "spar_triple_option",
  "spar_triple_inference_option", "spar_triple_freetext_option",
  "spar_triple_geo_option", "spar_triple_transit_option",
  "spar_triple_option_var_commalist", "spar_same_as_option", "spar_verb",
  "spar_ppath", "spar_ppath_seq", "spar_ppath_fwd_or_inv",
  "spar_ppath_fwd_or_inv_repcounts", "spar_ppath_leaf_or_sub",
  "spar_triples_node", "$@50", "$@51", "spar_triples_opt_semi_rsqbra",
  "spar_cons_collection", "spar_graph_node", "spar_var_or_term",
  "spar_var_or_iriref_or_pexpn_or_backquoteds",
  "spar_var_or_iriref_or_pexpn_or_backquoted",
  "spar_var_or_blank_node_or_iriref_or_backquoted",
  "spar_retcol_commalist", "spar_retcols", "spar_ret_agg_call",
  "spar_agg_name", "spar_agg_name_int", "spar_group_concat_begin",
  "spar_group_concat_begin_int", "spar_var_or_iriref", "spar_var",
  "spar_global_var", "spar_global_var_int", "spar_graph_term",
  "spar_backquoted", "@52", "spar_expn", "$@53", "$@54", "$@55", "$@56",
  "$@57", "@58", "spar_built_in_call", "spar_caselist",
  "spar_function_call", "@59", "spar_macro_call", "@60",
  "spar_arg_list_opt", "spar_arg_list", "spar_expns",
  "spar_macro_arg_list_opt", "spar_macro_arg_list", "spar_expn_or_ggps",
  "spar_expn_or_ggp", "$@61", "spar_nonsigned_numeric_literal",
  "spar_optsigned_numeric_literal", "spar_integer_literal",
  "spar_optminus_integer_literal", "spar_rdf_literal",
  "spar_boolean_literal", "spar_iriref_or_default_list_or_star",
  "spar_iriref_or_default_list", "spar_arrow", "spar_arrow_iriref",
  "spar_iriref", "spar_qname", "spar_blank_node",
  "spar_sparul1x_action_or_drop_macro_libs",
  "spar_sparul1x_action_or_drop_macro_lib", "spar_drop_macro_lib",
  "spar_sparul_insert", "$@62", "$@63", "spar_sparul_insertdata", "$@64",
  "spar_sparul_delete", "$@65", "$@66", "spar_sparul_deletedata", "$@67",
  "spar_sparul_modify", "$@68", "$@69", "spar_sparul_clear",
  "spar_sparul_load", "spar_sparul_load_service_data",
  "spar_sparul_create", "spar_sparul_drop", "spar_action_solution",
  "spar_in_graph_precode_opt", "spar_in_graph_precode",
  "spar_from_graph_precode_opt", "spar_from_graph_precode",
  "spar_all_or_named_or_default_or_graph_precode",
  "spar_default_or_graph_precode", "spar_graph_precode_opt",
  "spar_with_graph_precode_opt", "spar_in_or_into", "spar_silent_opt",
  "spar_sparul11_deleteinsert", "$@70", "$@71", "$@72", "$@73",
  "spar_sparul11_insert", "$@74", "$@75", "spar_sparul11_insert_opt",
  "spar_sparul11_copymoveadd", "spar_sparul11_copymoveadd_op",
  "spar_qm_stmts", "$@76", "spar_qm_stmt", "spar_qm_simple_stmt",
  "spar_qm_create_iol_class", "spar_qm_drop_iol_class",
  "spar_qm_create_iri_subclass", "spar_qm_iol_class_optionlist_opt",
  "spar_qm_iol_class_option_commalist", "spar_qm_iol_class_option",
  "spar_qm_sprintff_list", "spar_qm_create_quad_storage", "$@77", "$@78",
  "spar_iol", "spar_qm_alter_quad_storage", "$@79", "$@80",
  "spar_qm_drop_quad_storage", "spar_qm_drop_quad_map_mapping",
  "spar_qm_drop_mapping", "spar_qm_from_where_list_opt", "$@81", "$@82",
  "spar_qm_text_literal_list_opt", "spar_qm_text_literal_decl",
  "spar_xml_opt", "spar_of_sqlcol_opt", "spar_qm_text_literal_options_opt",
  "spar_qm_text_literal_option_commalist", "spar_qm_text_literal_option",
  "spar_qm_map_top_group", "spar_qm_map_top_dotlist", "$@83",
  "spar_qm_map_top_op", "spar_qm_attach_macro_lib",
  "spar_qm_detach_macro_lib", "spar_qm_map_group", "spar_qm_map_dotlist",
  "$@84", "spar_qm_map_op", "$@85", "$@86", "spar_qm_map_iddef", "$@87",
  "spar_qm_map_single", "spar_qm_triples1", "$@88",
  "spar_qm_named_fields_opt", "spar_qm_named_field", "$@89", "$@90",
  "spar_qm_props", "$@91", "spar_qm_prop", "$@92",
  "spar_qm_obj_field_commalist", "$@93", "spar_qm_obj_field", "$@94",
  "$@95", "$@96", "$@97", "spar_qm_as_id_opt", "spar_qm_obj_datatype_opt",
  "spar_qm_obj_language_opt", "spar_qm_verb", "spar_qm_field_or_blank",
  "spar_qm_field", "spar_qm_where_list_opt", "spar_qm_where_list",
  "spar_qm_where", "spar_qm_sqlquery", "spar_qm_options_opt",
  "spar_qm_option_commalist", "spar_qm_option",
  "spar_qm_sqlcol_commalist_opt", "spar_qm_sqlcol_commalist",
  "spar_qm_sqlfunc_header_commalist", "spar_qm_sqlfunc_header",
  "spar_qm_sqlfunc_arglist", "spar_qm_sqlfunc_arg_commalist_opt",
  "spar_qm_sqlfunc_arg_commalist", "spar_qm_sqlfunc_arg",
  "spar_qm_sqltype", "spar_qm_sql_in_out_inout", "spar_qm_sqlcol",
  "spar_qm_sql_id", "spar_qm_iriref_const_expn",
  "spar_graph_identified_by_opt", "spar_graph_identified_by",
  "spar_opt_dot_and_end", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472
};
# endif

#define YYPACT_NINF -1174

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1174)))

#define YYTABLE_NINF -647

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-647)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59, -1174,   156,   257, -1174,   111,  3147,   408, -1174,   344,
    1252, -1174, -1174,   214,   313,   749, -1174,   134,   313,   109,
     313,   370,    94, -1174,   551,  1344, -1174, -1174, -1174, -1174,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174,   313,    78, -1174, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174, -1174,    36, -1174, -1174, -1174,   267,   287,   313,   252,
   -1174,   678, -1174, -1174,   374,   364,   444,   487, -1174,   465,
     444,   550,   562,  1028, -1174,    57, -1174, -1174,   571,   444,
     463,   340, -1174, -1174, -1174, -1174, -1174,   464,   560,   584,
   -1174, -1174, -1174,   677, -1174,   266, -1174, -1174, -1174, -1174,
   -1174, -1174, -1174,   313, -1174,   385,   491, -1174, -1174, -1174,
   -1174,   547,   621, -1174,   695,   403, -1174, -1174, -1174, -1174,
   -1174,   439,   403, -1174,   403, -1174,   738, -1174, -1174, -1174,
   -1174,   679,    37, -1174,   736, -1174,   777, -1174, -1174, -1174,
   -1174,    57,  4241,   604,   403,   708,   768,   821, -1174, -1174,
   -1174,   445,   328, -1174, -1174, -1174, -1174, -1174, -1174,   683,
   -1174, -1174,   581,  1044,    22, -1174,   145,   822, -1174, -1174,
   -1174, -1174, -1174,     5,   752,  1906, -1174, -1174,  2583, -1174,
   -1174,   501,   403,   403, -1174, -1174, -1174, -1174,   787,   444,
    4241,  2939,   824,  4241,  4241,   839,   841,  3427, -1174,   848,
   -1174, -1174,   867,   877, -1174,   888,   895,   439,   907,   913,
   -1174, -1174,   914,   925, -1174, -1174,   237, -1174, -1174, -1174,
      28, -1174, -1174, -1174, -1174, -1174, -1174,  3103, -1174,  4241,
   -1174,   473, -1174, -1174,  5291, -1174, -1174, -1174, -1174, -1174,
   -1174, -1174,   918,   799,   403, -1174, -1174,   400, -1174,   849,
     850,   855,   856,   952, -1174,   439, -1174, -1174, -1174,  4241,
   -1174, -1174,   395, -1174,   473, -1174, -1174, -1174,  3591,   385,
   -1174,   309,   313, -1174, -1174, -1174, -1174, -1174,   959, -1174,
   -1174, -1174,   772,   439,   444, -1174, -1174, -1174,   963, -1174,
     902,   964,   965, -1174,   969,   824,   617,   617, -1174, -1174,
     960,    83,  1906, -1174, -1174, -1174, -1174,   473, -1174, -1174,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,   978,   981,
     739, -1174,   979, -1174, -1174, -1174,   403, -1174, -1174,   626,
   -1174, -1174,   831, -1174,  3080, -1174, -1174,  4128, -1174, -1174,
   -1174, -1174,   721,  4241,  3404,    40,  4241,   942, -1174,  4241,
    4241, -1174, -1174, -1174,  3753, -1174,  3915, -1174, -1174,   439,
   -1174, -1174, -1174,   986,  4079,  4218,  4628, -1174, -1174,    42,
   -1174,  4241,  4241,  4241,  4241,  4241,  4241,  4241,  4241,  4241,
    4241,  4241,  4241,   814, -1174, -1174, -1174,   237, -1174,   898,
   -1174, -1174, -1174,  1003, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174,   896,  4241,  4696,   400, -1174,   400, -1174, -1174,  1014,
    4241,  4731, -1174,   361,  1044, -1174, -1174, -1174,   184, -1174,
     255,   820,    91, -1174,   751,   905, -1174,   626, -1174,  2774,
    1839, -1174, -1174,   534, -1174,  1906, -1174, -1174, -1174,  2438,
    1839, -1174,  2583, -1174, -1174,   635, -1174,   635,   534, -1174,
     499,   930,   313, -1174,  2512, -1174, -1174, -1174,   -11,  1012,
   -1174, -1174, -1174,  2677,   626, -1174,   400, -1174, -1174,   626,
     906, -1174, -1174, -1174, -1174,   970,  4037,    80, -1174,  4241,
    4241,  4767, -1174,  4792,  4822,   311,  4241,  4847, -1174,  5291,
     414, -1174,   400, -1174,  1031,  4883, -1174,  4241, -1174,   857,
   -1174, -1174, -1174, -1174,  3080,  1454,  3475,   946,   946,   946,
     946,   585,  3475,   585, -1174, -1174, -1174,   237,  4241,   237,
   -1174, -1174,   403,   968,  2545, -1174,   400,  2583,  1046, -1174,
    4918, -1174,   984, -1174,   984,  4241,  5291,  4241, -1174,   639,
     896, -1174,   181,    64, -1174,   107, -1174,   964,   902,  1050,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174,  1035,  1058, -1174,
     -16, -1174, -1174, -1174, -1174, -1174,  2736, -1174, -1174,  1078,
      97,   514,    79, -1174,  1052,   696, -1174,  1065,  1051, -1174,
     840,   473, -1174, -1174, -1174, -1174,   473, -1174, -1174, -1174,
   -1174, -1174, -1174,  1045,  1045, -1174,   984,  2545,  4241, -1174,
   -1174, -1174, -1174,  1064, -1174, -1174, -1174, -1174, -1174, -1174,
     945,    30,  2583, -1174,   900, -1174,  1067, -1174, -1174, -1174,
     984, -1174, -1174,   400, -1174, -1174,  4241,  4241,  4943,  4576,
   -1174, -1174, -1174,  3265, -1174, -1174, -1174,  4973, -1174, -1174,
    2295, -1174,    -5, -1174, -1174,  5004,  1071, -1174,  1024, -1174,
   -1174,  1069, -1174, -1174, -1174,  1061,  2545,   984,  1062, -1174,
   -1174,  1043, -1174,  1011, -1174,  5291,  5291, -1174,   852,   899,
    1017,   852, -1174, -1174, -1174,  4378,    71,  1066,  1068,   915,
   -1174, -1174,  4378,   971, -1174,   761, -1174,   751,   -16, -1174,
   -1174,    79, -1174, -1174,   871,   334,    79, -1174,   466, -1174,
    1579,    79,    79,    62, -1174, -1174, -1174,  1093,  1790, -1174,
   -1174, -1174,  1087,  5034,   237,  4241,  1101,  2545,   375, -1174,
     473, -1174, -1174, -1174, -1174,  1108, -1174, -1174, -1174, -1174,
   -1174, -1174,    -5,   400,  5291,  5059, -1174,  4241, -1174, -1174,
    5291,   619, -1174, -1174, -1174,  5291,  1109,   924, -1174, -1174,
    4241, -1174, -1174, -1174, -1174, -1174, -1174,    87, -1174, -1174,
    1007, -1174,   360, -1174,  1122,  1111,  1123,   934,  1120,  1124,
    1042,  1125, -1174,  1049,   501,   313,   313, -1174, -1174, -1174,
   -1174, -1174, -1174, -1174,   195, -1174, -1174, -1174, -1174, -1174,
     483, -1174, -1174, -1174, -1174,  1133,   966, -1174,  1126,   958,
     961, -1174, -1174,   -16, -1174, -1174,   403, -1174,   801,   972,
     341, -1174, -1174, -1174,   748,   475,    62, -1174, -1174, -1174,
   -1174,   558,  1825, -1174, -1174, -1174, -1174,  1153, -1174,    -5,
    1051, -1174,   977,   660, -1174,  2677,    -5, -1174, -1174,  5095,
   -1174, -1174, -1174, -1174, -1174,   276, -1174,  1151,   115, -1174,
    2545,  1143,   984, -1174,  5291,  2583, -1174,  1870, -1174, -1174,
   -1174,  5120, -1174, -1174,   984, -1174, -1174, -1174,   429,  4289,
     635,  1127,   308, -1174, -1174,   830, -1174,   975, -1174,   976,
   -1174,   852,   852,  1155,  1163, -1174,  1076,    25,   403,  1079,
     411,  1157, -1174,  3126,  3126,  1168,  3126,  3126, -1174,  1165,
    1312,   503, -1174,   990, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174,  1020,   629, -1174, -1174,  1072, -1174, -1174, -1174,  1579,
    2392, -1174,  1164,    27, -1174,  1169, -1174, -1174,  2545,  1187,
   -1174, -1174, -1174, -1174, -1174, -1174,  2066, -1174, -1174,    -5,
    1178, -1174, -1174,  5256, -1174,   626,   400, -1174, -1174,  1008,
   -1174, -1174, -1174, -1174, -1174,  4241,  4241, -1174, -1174, -1174,
   -1174, -1174, -1174,  1190,  1073,  1194, -1174,  2097, -1174, -1174,
   -1174,   473, -1174, -1174,   635, -1174, -1174, -1174, -1174, -1174,
      48,  1097,  1118, -1174, -1174, -1174, -1174,  1195, -1174, -1174,
   -1174, -1174, -1174,  1042, -1174,   360,   360,   899, -1174,   403,
   -1174,  1075,  1047,  1128,  1130, -1174,   403, -1174,  4357, -1174,
   -1174,   461, -1174, -1174, -1174, -1174,  1200, -1174,  1201, -1174,
   -1174, -1174,  1202,  1223, -1174, -1174, -1174,  1048, -1174, -1174,
    1153, -1174, -1174, -1174, -1174, -1174, -1174,  1214, -1174, -1174,
   -1174,    77, -1174,  1227, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174, -1174, -1174,  1222, -1174,  4241, -1174,   812,   721,  4241,
   -1174, -1174, -1174, -1174, -1174,   721,  4241,  1053,  1060, -1174,
   -1174,  1070, -1174,  1074, -1174,   721,  1234,  4241,  4241,  1237,
   -1174, -1174, -1174,  1240,   651, -1174, -1174, -1174, -1174, -1174,
    1244, -1174,   984, -1174,  5150,  5175,  2968,  1245,  2968, -1174,
   -1174,  2968,   733, -1174, -1174, -1174,  1248,   110, -1174,   110,
   -1174, -1174, -1174,   830,   830,   693,    66,  2583, -1174,  3463,
     403,  1119,   403, -1174, -1174,  1208, -1174, -1174,  1080,  1196,
    1077,   734, -1174,  3889, -1174, -1174,  1553, -1174,   503, -1174,
    1121, -1174, -1174,  2545, -1174,  1082,   353,  1044, -1174,   333,
   -1174, -1174,  5291, -1174, -1174, -1174, -1174,   473,  5291,   473,
    5291, -1174, -1174, -1174, -1174,   473,   721,  5291,  5291,   721,
     718,  5256, -1174,  4241,  1246, -1174, -1174, -1174, -1174, -1174,
    1249,  2463,    89,   473, -1174, -1174,   123,  1253, -1174, -1174,
      24, -1174, -1174,   259, -1174, -1174, -1174,  2132,  1247,  1257,
   -1174, -1174,  1258, -1174, -1174,   483,  2609,  1170,   403, -1174,
     565, -1174, -1174, -1174, -1174,   272, -1174, -1174, -1174,   481,
   -1174,  1312, -1174,  1276,  1255, -1174, -1174,  1121,  1113, -1174,
   -1174,  1044, -1174,  1278,   473,   959, -1174,   724,   762,   767,
    1266,  1019, -1174,   791,    -5, -1174,  2968,  2807, -1174,  4241,
    4241, -1174,  3642,  1254,   786, -1174, -1174, -1174, -1174, -1174,
    2174, -1174, -1174, -1174,  5291, -1174, -1174, -1174,  1280,  1553,
   -1174,  1170,  1279, -1174, -1174,  1206, -1174,  1275, -1174, -1174,
   -1174,   403, -1174,  1208, -1174,  1209,   959,   721,  2545, -1174,
   -1174, -1174, -1174, -1174,  1273,  1274, -1174, -1174,  1301, -1174,
   -1174,  5211,  5236, -1174,  1288,   397,   123, -1174,  1300,  1303,
   -1174,  2583, -1174, -1174, -1174,  1132,   744, -1174, -1174,  4433,
    1553, -1174, -1174,   503,   473, -1174,  3069,   721,   721,  2968,
   -1174, -1174, -1174, -1174, -1174,  2968,   116, -1174,  2873,  1294,
    1300, -1174, -1174,  1295,  3889,  1305, -1174, -1174, -1174,  1255,
    1206,  1207, -1174,   473,   473, -1174,  1307, -1174,    81, -1174,
   -1174,  3199, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,
     882, -1174, -1174, -1174, -1174, -1174,  1310,  1212, -1174,  4241,
   -1174,   117, -1174, -1174, -1174,  1158,   503,  1319, -1174,  4662,
      61,  1184,  1323, -1174,  1158, -1174,   790,  1138,  4241,  1166,
    1159, -1174,  1166, -1174, -1174,  1170, -1174, -1174,  1150,   809,
   -1174,  5266,  1328, -1174,  1330, -1174, -1174,  1138, -1174,  1166,
   -1174, -1174, -1174,  1333, -1174
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     5,    14,     0,    14,     0,    33,    25,     1,     0,
      33,     2,   668,     0,   652,   652,   666,     0,   652,     0,
     652,     0,   852,   667,     0,     7,   594,   607,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   608,   609,
     610,   652,     0,   669,   672,   675,   676,   677,   673,   674,
     678,   679,     0,    16,    15,    28,     0,   652,   652,     0,
     653,     0,   701,   702,     0,     0,     0,     0,   654,   637,
     852,     0,     0,     0,   660,   634,   650,   651,     0,   852,
     117,     0,   590,   591,   588,   850,   589,     0,   854,     0,
     117,   853,    95,    97,    91,    77,     8,     9,    75,    10,
      11,    12,    14,   652,   595,   852,   670,   856,     4,    27,
      26,     0,    36,     3,     0,     0,   640,   641,   642,   625,
     117,     0,     0,   117,     0,   305,     0,   638,   117,   657,
     617,     0,     0,   631,     0,   305,     0,   635,   612,   117,
     117,   626,     0,     0,     0,     0,     0,     0,   647,    97,
      86,     0,     0,    80,    79,    78,    81,   596,   644,     0,
     117,   857,     0,     0,     0,    29,   648,     0,   703,   643,
      34,   698,   630,     0,   663,   307,   620,   639,   318,   305,
     117,     0,     0,     0,   661,   615,   305,   636,     0,   852,
       0,     0,     0,     0,     0,     0,     0,     0,   460,     0,
     289,   575,     0,     0,   563,     0,     0,     0,     0,     0,
     564,   290,     0,     0,   574,   523,     0,   560,   561,   562,
     571,   592,   471,   475,   476,   291,   513,     0,   459,     0,
     466,   521,   472,   474,   118,   514,   522,   518,   517,   519,
     515,   520,     0,     0,     0,   855,   622,     0,   305,   102,
     104,   108,   106,     0,    98,     0,   100,   101,   484,     0,
      93,    97,    94,   436,   438,   440,   439,    97,     0,   852,
     645,     0,   652,   671,    23,    22,    20,    21,    17,    18,
      24,    32,    31,     0,   852,    37,    13,   711,     0,   711,
       0,     0,     0,   655,   425,   423,     0,     0,   322,   482,
       0,   309,   308,   314,   311,   327,   325,   434,   435,   483,
     329,   565,   479,   478,   480,   477,   481,   305,   471,     0,
     231,   319,   320,   618,   611,   707,     0,   706,   682,   632,
     305,   613,   628,   117,   505,   509,   511,     0,   593,   507,
     506,   461,     0,     0,     0,     0,     0,   467,   462,     0,
       0,   537,   464,   463,     0,   465,     0,   541,   524,     0,
     572,   529,    97,     0,     0,     0,     0,   582,   583,     0,
     473,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   493,   491,   495,   539,   851,     0,
     684,   305,   123,     0,    96,    97,   103,   105,   109,   107,
      88,   110,     0,     0,   119,   437,     0,    83,    82,    85,
      84,   448,   665,     0,     0,    30,    38,   117,     0,    36,
       0,     0,   685,   827,   831,   685,   305,   632,   427,     0,
       0,   567,   566,     0,   306,   310,   316,   317,   313,     0,
       0,   621,   318,   658,   255,     0,   263,     0,     0,   291,
       0,     0,   652,   265,   318,   236,   235,   238,   237,   240,
     261,   241,   239,   318,   632,   708,     0,   662,   616,   632,
       0,   627,    97,    81,   508,     0,     0,     0,   534,     0,
       0,     0,   468,     0,     0,   548,     0,     0,   542,   544,
       0,   573,     0,   451,     0,     0,   450,     0,   456,     0,
     587,   585,   586,   584,   488,   487,   489,   500,   498,   499,
     497,   502,   490,   501,   504,   503,   486,     0,     0,     0,
     516,   540,     0,     0,   318,   121,     0,   318,     0,    99,
       0,   441,   130,   120,   130,     0,   449,     0,    19,     0,
     110,   704,     0,     0,   717,     0,   699,     0,     0,     0,
     681,   846,   840,   847,   848,   849,   845,     0,   832,   833,
       0,   841,   680,   664,   656,   433,     0,   430,   432,   397,
       0,     0,     0,   422,     0,     0,   332,   395,   398,   400,
     411,   393,   396,   421,   394,   323,   442,   445,   444,   443,
     315,   312,   328,   331,   326,   234,   130,   318,     0,   243,
     287,   288,   535,     0,   242,   252,   244,   247,   245,   248,
       0,     0,   318,   232,     0,   259,     0,   262,   321,   619,
     130,   614,   117,     0,    97,   528,     0,     0,     0,     0,
     527,   525,   526,     0,   550,   538,   549,     0,   454,   547,
       0,   543,   346,   452,   453,     0,     0,   494,   492,   496,
     683,     0,   229,   124,   126,     0,   318,   130,     0,   111,
     485,     0,    92,   171,    76,   447,   446,    46,     0,    53,
       0,     0,    39,    43,   649,   764,     0,     0,     0,     0,
     811,    35,   764,     0,   828,     0,   830,     0,     0,   426,
     431,     0,   420,   419,   406,     0,     0,   428,     0,   424,
       0,     0,     0,     0,   409,   407,   408,     0,     0,   659,
     256,   228,     0,     0,     0,     0,     0,   318,     0,   293,
     469,   470,   270,   272,   266,     0,   273,   233,   260,   257,
     633,   629,   346,     0,   532,     0,   531,     0,   558,   551,
     557,     0,   553,   455,   546,   545,     0,     0,   292,   457,
       0,   305,    81,   125,   122,    87,    89,     0,   131,   172,
     176,    60,     0,    61,    58,     0,    55,    54,     0,     0,
      50,     0,   731,     0,     0,   652,   652,   843,   844,   802,
     803,   739,   738,   705,     0,   734,   740,   741,   737,   757,
     814,   762,   799,   805,   842,   801,     0,   813,     0,     0,
       0,   810,   700,     0,   686,   693,     0,   694,     0,     0,
       0,   688,   834,   835,   836,     0,     0,   404,   402,   403,
     417,     0,   397,   336,   429,   334,   344,   333,   339,   346,
     399,   401,     0,     0,   410,     0,   346,   286,   536,     0,
     253,   246,   577,   578,   249,   576,   579,   297,     0,   277,
     318,     0,   130,   530,   533,   318,   556,     0,   552,   348,
     347,     0,   623,    97,   130,   113,   117,   112,     0,     0,
       0,     0,   201,    63,    62,     0,    64,     0,    40,     0,
      59,     0,     0,     0,     0,   800,     0,     0,     0,     0,
       0,   735,   732,     0,     0,     0,     0,     0,   765,     0,
       0,   823,   812,     0,   714,   712,   829,   690,   691,   692,
     696,   695,     0,   687,   838,   837,   418,   405,   416,     0,
       0,   345,     0,     0,   412,     0,   227,   264,   318,     0,
     580,   581,   299,   294,   268,   271,     0,   258,   510,   346,
       0,   555,   554,     0,   458,   632,     0,    90,   115,     0,
     114,   165,   170,   168,   169,     0,     0,   167,   162,   166,
     161,   164,   163,     0,     0,     0,   132,   133,   135,   134,
     142,   141,   139,   140,   173,   174,   177,   203,   117,   117,
       0,   198,   195,   127,   202,    67,    65,     0,    66,    68,
      69,    70,    56,    50,    57,     0,     0,     0,    44,     0,
     751,     0,     0,     0,     0,   709,     0,   733,   764,   766,
     769,     0,   768,   767,   755,   777,     0,   798,   763,   772,
     775,   796,     0,   824,   825,   715,   718,     0,   689,   839,
     335,   343,   342,   341,   340,   414,   415,     0,   324,   254,
     250,     0,    97,     0,   267,   284,   285,   278,   280,   281,
     282,   279,   283,     0,   559,     0,   358,     0,     0,     0,
     388,   389,   390,   391,   392,     0,     0,     0,     0,   385,
     370,     0,   372,     0,   374,     0,     0,     0,     0,     0,
     379,   380,   382,     0,     0,   350,   354,   355,   356,   357,
     364,   624,   130,   117,     0,     0,   192,     0,   192,   136,
     175,   192,     0,   197,   200,   270,     0,   201,   199,   201,
     196,    47,    41,     0,     0,     0,     0,   318,   742,   764,
       0,     0,   744,   710,   736,   789,   815,   820,     0,     0,
       0,     0,   817,   764,   797,   773,     0,   804,     0,   718,
     713,   697,   413,   318,   298,     0,     0,     0,   300,     0,
     274,   512,   368,   362,   360,   361,   359,   365,   369,   366,
     367,   353,   352,   371,   373,   375,     0,   378,   377,     0,
       0,     0,   349,     0,     0,   116,   137,   138,   193,   194,
       0,   179,     0,   191,   189,   190,     0,     0,   178,   211,
       0,   209,   212,     0,   277,   128,   129,     0,     0,     0,
      52,    51,     0,   752,   758,   814,     0,   814,     0,   743,
       0,   770,   821,   819,   822,     0,   816,   745,   756,     0,
     748,     0,   786,   776,   787,   781,   826,   716,   721,   719,
     251,     0,   304,   303,   386,   301,   295,     0,     0,     0,
       0,     0,   351,     0,   346,   145,   192,   180,   182,     0,
       0,   188,   192,     0,     0,   146,   144,   204,   210,   207,
       0,    74,    71,    42,    73,    49,    48,    45,     0,     0,
     753,   814,     0,   790,   792,   793,   818,   749,   746,   774,
     779,     0,   778,   789,   722,     0,   302,     0,   318,   277,
     269,   275,   376,   381,     0,     0,   363,   230,   181,   184,
     183,     0,     0,   148,     0,   156,     0,   143,   213,     0,
     206,   318,   759,   761,   754,     0,     0,   771,   747,   764,
       0,   788,   782,     0,   387,   296,     0,     0,     0,   192,
     186,   187,   149,   157,   158,   192,     0,   147,     0,     0,
     214,   215,   274,     0,   764,     0,   794,   795,   750,   787,
     793,   723,   276,   384,   383,   185,     0,   151,     0,   225,
     226,     0,   218,   221,   222,   223,   220,   224,   205,   216,
       0,    72,   760,   791,   780,   783,     0,   725,   150,     0,
     568,   159,   217,   219,   208,   806,     0,     0,   720,     0,
       0,     0,     0,   784,   807,   808,     0,     0,     0,   159,
       0,   569,   159,   160,   152,   814,   809,   724,   729,     0,
     727,     0,     0,   570,     0,   785,   730,     0,   726,   159,
     153,   154,   728,     0,   155
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1174, -1174,  1349, -1174,   318, -1174, -1174, -1174, -1042,   940,
   -1174, -1174, -1174, -1174, -1174,   936, -1174, -1174, -1174, -1174,
   -1174, -1174, -1174, -1174,   363, -1174,   365,   366,  -636,  -229,
    -302, -1174, -1174, -1174, -1174,   100,  -469, -1174, -1174, -1174,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,   -80, -1174,
   -1174, -1174, -1174,   817, -1174, -1174, -1174,   -89, -1174, -1174,
    -394, -1174, -1174,   702,  -528, -1174, -1174, -1174, -1174,   398,
   -1174, -1174,    58, -1174, -1174,  -776, -1174, -1174, -1174, -1174,
   -1174, -1174, -1069, -1174, -1174, -1120, -1174, -1174,   384, -1174,
     391,  -435, -1174, -1174, -1174, -1174, -1174,   185, -1174, -1174,
      39, -1174,    16,  -714,  -353, -1174,  -167, -1174, -1174, -1174,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174, -1174,   922, -1174, -1174, -1174, -1174, -1174,   277,  -594,
      41, -1174, -1077, -1174,  -431, -1174,   935, -1174, -1174, -1174,
   -1174, -1174, -1174, -1174, -1174,  -127, -1174, -1174, -1174, -1174,
     923,   552,  -123, -1174, -1174,  -150, -1174, -1174, -1174,   471,
   -1174, -1174,   469,   470,  -723, -1174, -1174,   218, -1174, -1174,
   -1174, -1174,  -800, -1174,  -563,  -486,   684,   690,   587,   826,
    -411, -1174, -1174, -1174, -1174,  -276,  -407, -1174,  1139,   956,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,  1107,  -158,
   -1174, -1174,   -77, -1174,     1, -1174, -1174, -1174, -1174, -1174,
   -1174,  -210,  1063,  -426, -1174,  -133, -1174, -1174,  -313,   233,
   -1174, -1174, -1174,   554, -1174,   317,   595, -1174, -1174,   474,
     764, -1174, -1174, -1174, -1174,   -21, -1174,  -129, -1174,  1387,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,  -399,
   -1174,  1338, -1174,  1346,  1355,  1148, -1174, -1174,  1277,     6,
   -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174, -1174,
   -1174, -1174, -1174,  1259, -1174, -1174, -1174, -1174,   994, -1174,
     511, -1174, -1174, -1174, -1174,   -46, -1174, -1174, -1174, -1174,
      51, -1174,  1135, -1174, -1174,   286, -1174, -1174, -1174, -1174,
   -1174,     9,   745, -1174, -1174,   420, -1174, -1174,    85, -1174,
   -1174, -1097, -1174, -1174, -1174, -1174, -1174, -1174, -1174,   314,
   -1174, -1174, -1174, -1174, -1174,   211, -1174, -1174, -1174, -1173,
   -1174, -1174, -1174, -1174,    88,   157,    92,   235, -1052,  -817,
   -1174, -1174, -1054, -1174, -1151, -1174,   224, -1174,    60, -1174,
     897,   901, -1174, -1174,   756,   644, -1174,  -868,  -380,    -6,
       8,   -59, -1174
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     5,    96,     6,     7,    54,   111,   278,   279,
      55,   112,   165,    24,   288,   166,   285,   539,   672,   993,
    1197,   770,  1117,   673,   884,   765,   766,   767,   762,   875,
     987,  1263,  1311,    97,   156,   652,   267,   268,   408,    99,
     248,   527,   864,   100,   152,   261,   101,   149,   466,   254,
     255,   256,   257,   529,   757,   867,   868,   141,   142,   532,
     394,   656,   524,   653,   662,   663,   869,   966,   967,   968,
     969,  1254,  1255,  1335,  1336,  1392,   970,   760,   870,   974,
     872,  1101,  1180,  1247,  1298,  1181,  1182,  1109,   981,  1107,
     982,   983,   984,  1102,  1308,  1309,  1190,  1191,  1339,  1340,
    1341,  1361,  1362,   710,   711,   752,   712,   454,   455,   717,
     456,   718,   929,  1143,   457,   716,   928,   458,   597,   850,
     616,   459,   460,   603,   461,   611,   724,  1043,   848,   935,
    1237,  1291,   936,  1047,   599,   225,   361,   362,   462,   847,
    1042,  1288,   933,  1041,  1148,   174,   175,   300,   301,   302,
     320,   321,   303,   433,   707,   322,   440,   439,   592,   575,
     700,   919,   827,   828,   748,   943,  1084,  1085,  1086,  1087,
    1088,  1089,  1233,  1090,   576,   577,   578,   579,   834,   580,
     305,   430,   429,   699,   566,   829,   306,   262,   263,   585,
     409,   410,   226,   227,   228,   229,   230,   719,   231,   232,
     233,   308,   309,   402,   489,   518,   517,   519,   472,   473,
     387,   235,   345,  1185,   714,   236,   485,   520,   358,   490,
     635,   636,   741,   742,   855,   237,   312,  1381,  1402,   238,
     239,   844,   845,   369,   370,   240,    86,   241,    25,    26,
      27,    28,   186,   469,    29,   330,    30,   179,   464,    31,
     317,    32,   391,   945,    33,    34,    35,    36,    37,   467,
     136,    78,   126,    72,   133,   159,    89,   286,    79,    66,
      38,   125,   427,   178,   596,    39,   135,   329,   293,    40,
      41,    42,   162,    43,    44,    45,    46,    47,   550,   810,
     811,   911,    48,   289,   682,    67,    49,   287,   675,    50,
     781,   782,   418,  1026,  1139,  1140,  1229,  1285,  1377,  1388,
    1409,  1410,   783,   784,  1008,   785,   786,   787,  1218,  1219,
    1319,   788,  1119,  1133,  1203,  1344,  1204,   789,   900,   790,
     898,  1125,  1275,  1018,  1221,  1019,  1136,  1223,  1320,  1224,
    1283,  1350,  1385,  1405,  1282,  1211,  1317,  1020,   791,   792,
    1393,  1394,   544,   798,   899,  1131,  1132,  1022,  1023,   422,
     423,   425,   557,   558,   559,   813,   560,   793,   794,   795,
     160,    91,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,   148,   120,   841,   624,   280,   664,   123,   184,   851,
     533,   319,   534,   151,   120,    87,   604,   725,   565,   601,
      61,   601,   568,   281,    73,   304,    80,   134,   564,  1187,
      90,   169,  1188,  1024,   172,   769,  1220,   109,   359,   177,
    1257,   478,   310,   500,   561,   310,   316,   105,   722,   316,
     187,   188,   323,  1036,  1268,   120,  1270,    51,   614,   331,
       1,  1248,  1000,   551,   114,   619,  1105,  1206,   709,   247,
     621,   270,   620,   832,   521,   265,  1009,  1010,   128,  1012,
    1013,   478,   679,  1021,  1225,   570,   695,   139,   571,   796,
     106,   324,   730,  1201,    85,   435,  1313,   572,   642,  1379,
     170,    85,   548,    85,  1144,  1235,   921,  1249,  1250,   168,
     553,   479,   573,   926,   865,   691,   171,  1260,   173,   746,
    1314,   395,   326,    85,    98,    74,  1299,  1300,  1390,   755,
     692,   266,   657,   681,  1357,   825,   937,   554,   243,  1145,
     181,  1252,   934,   234,    76,   825,   747,  1349,   574,    77,
      68,   627,   438,   567,   315,   565,   977,   315,  -646,   568,
      85,    85,    85,   298,  1146,   615,   555,  1400,    75,   310,
     283,   654,     4,   316,    88,   325,   327,   328,   436,   437,
     688,   404,   290,  1304,   182,   265,   351,   406,   556,  1286,
     441,   334,   337,    69,   339,   340,    76,   333,   344,   291,
     541,    77,  1001,   468,   647,   815,   649,   891,   283,  1355,
     821,    70,  1326,    51,  1039,   549,  1053,  1225,  1037,   480,
     282,   892,  1348,    85,   360,  1189,   223,   224,   365,   732,
     366,   723,   223,   224,   401,   600,   110,   600,   390,   501,
     502,   266,   503,     2,   471,   995,   996,  1220,  1253,   723,
     223,   224,  1401,   833,  1415,   356,   280,     8,   680,   480,
     403,   542,   416,   107,   523,   797,  1356,   880,  1225,   411,
    1226,   546,  1380,  1358,  1147,   595,    82,    83,   413,    84,
    1251,   315,   492,   863,   866,   591,  1259,   613,   980,   565,
     690,   336,   417,   568,    82,    83,    11,    84,  1391,   563,
     316,   584,   310,   654,   589,    85,   316,   561,   814,   310,
     584,   584,   590,   316,    71,   526,   723,   223,   224,   589,
     465,   310,    10,   153,   939,   316,   284,   676,   540,   633,
     310,  1395,   542,   258,   316,   154,   947,   930,   491,   852,
    1406,   701,  1274,    59,   476,  1127,   259,   481,   357,  1236,
     483,   484,   912,   582,   977,   487,   587,   655,   143,   260,
     658,   820,   582,   582,   543,   495,  1238,   134,   913,  1239,
      56,   587,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,  1232,   677,  1106,   678,    64,  1021,
     144,   310,   623,   873,   310,   316,   155,  1128,   316,   115,
     258,   838,    62,   530,  1021,   978,   842,    63,   315,   583,
     249,   536,   588,   259,   315,   639,   392,  1129,   583,   583,
     157,   315,   634,   814,   602,   640,   602,   588,   909,  1230,
     979,    60,  1333,   315,   915,   543,   843,   316,    65,   975,
     949,   641,   315,   973,   601,   727,   158,   250,  1347,  1130,
     251,    52,   113,   726,    62,  1351,   950,    60,   610,    63,
     723,   223,   224,    81,   310,    88,  1334,   822,   316,   121,
      53,   258,   570,    82,    83,   571,    84,   249,   823,   310,
     628,   629,   701,   316,   572,   192,   980,   637,  1126,   655,
     132,    88,   311,  1277,   824,   311,   167,   367,   645,   573,
     607,    85,   916,   315,   167,   368,   315,  1278,   565,   565,
     252,   122,   568,   568,   250,   608,   650,   251,  1024,   648,
     570,  1297,   249,   310,    88,    82,    83,   316,    84,   222,
     223,   224,   572,   731,  1127,   574,   665,   124,   666,   258,
    1004,   973,    70,  1100,   733,   315,  1091,   573,   601,   693,
     583,   583,  1092,   192,   222,   223,   224,    82,    83,   250,
      84,   874,   251,   893,  1174,   701,   129,    82,    83,   584,
      84,   316,    82,    83,  1325,    84,   315,   252,   130,   584,
     393,    88,   551,   574,   310,   918,  1128,   138,   316,   721,
      92,   315,    82,    83,   167,    84,   222,   223,   224,   713,
      82,    83,   894,    84,    93,   140,  1129,   895,    82,    83,
     896,    84,   145,   431,   432,   381,   382,    13,    94,   311,
     856,   582,   252,  1412,   862,   253,  1414,   734,   735,   553,
     857,   582,   897,   271,   740,   315,    82,    83,  1130,    84,
     667,   745,   -97,  1423,   551,   146,   858,   763,   147,   313,
     763,   272,   313,   598,    85,   668,   554,   669,  1272,   972,
     600,    85,  1171,    82,    83,   221,    84,   222,   223,   224,
     583,   923,  1195,   805,  1196,   583,   161,   583,  1172,   315,
     583,   583,   196,    21,   197,   555,   924,   583,   940,   806,
     726,   553,    95,   150,   807,   199,   315,   846,    82,    83,
     670,    84,   310,   -97,   879,   204,   316,   556,   777,   200,
     778,    82,    83,   116,    84,   888,   839,   310,   554,   671,
    1200,   316,   310,   808,   697,   698,   316,   210,   205,   206,
     116,    82,    83,   221,    84,   222,   223,   224,   854,   117,
     -97,   876,  1289,   -97,   163,  1215,   311,   555,   211,   164,
    1290,   861,   311,    85,   176,   444,   117,   972,    88,   311,
     809,  1216,    82,    83,   600,    84,  1113,  1114,   887,   556,
     777,   311,   778,  1287,   180,    88,   313,   948,  1287,   445,
     311,   889,   890,   946,   446,    85,   183,   118,   804,  1292,
     316,   316,   639,   185,  1293,   310,   131,  1306,   242,   316,
     907,  1138,   640,   -97,   118,   805,   -97,  1052,   217,   218,
     219,  1198,  1199,  1307,   315,   447,   245,  1407,  1296,   448,
    1417,   806,   726,   551,   931,   216,   807,   551,   244,   315,
     551,  1006,    82,    83,   315,    84,  1418,   246,   552,   269,
     143,   311,    62,   292,   311,   449,   332,    63,   602,   602,
      64,   296,   338,   297,   991,   808,   703,   341,   740,   342,
     763,   763,   450,   704,   914,   705,   346,    85,   451,    85,
     553,   706,    85,    85,   553,    85,    85,   553,    65,    85,
     551,   452,  1002,   311,  1005,   347,  1184,   816,  1184,  1103,
    1104,  1184,   809,    60,   817,   348,   818,   554,   315,   315,
    1289,   554,   819,   313,   554,   201,   349,   315,  1384,   313,
     593,   594,  1240,   350,   311,  1051,   313,   453,   204,   222,
     223,   224,   222,   223,   224,   352,   555,   553,   313,   311,
     555,   353,   354,   555,  1189,   223,   224,   313,  1346,   314,
     210,   985,   314,   355,  1192,   388,   602,   389,   556,   777,
    1202,   778,   556,   602,   554,   556,  1094,  1095,   396,   397,
    -647,  -647,  1149,  -647,   398,   399,  -647,   378,   400,   380,
     414,  1184,   415,   311,   876,   876,   381,   382,    85,   419,
     421,   426,   424,   555,   310,    85,   434,    85,   316,   280,
     442,   463,   311,  1118,   367,   908,   428,   625,   313,   311,
    1123,   313,   368,   214,  1175,   556,  1153,   443,   470,  1154,
     310,   482,  1155,   493,   316,   516,  1156,   311,   522,   525,
     528,   217,   218,   219,   220,   535,   547,    82,    83,   549,
      84,   986,  1192,   609,   311,   726,  1184,  1184,   374,   375,
     313,   376,  1184,   367,   377,   378,  1295,   380,   622,    82,
      83,   368,    84,   761,   381,   382,  1152,   446,   643,   651,
    1158,   646,   686,   116,   659,   661,   314,  1160,   685,   687,
     696,   313,   701,   280,   708,   602,   728,   602,  1167,  1168,
     602,   702,   715,   729,   750,   751,   313,   753,   756,   117,
    -338,   758,   991,   991,  -338,   759,   315,   768,    85,    85,
     764,    85,   803,   799,  -338,   800,  -338,  -338,    88,   835,
     801,  -647,    85,   836,  1207,    85,  1209,   840,  -338,  1184,
    -647,    62,   315,  -338,   849,  1184,    63,   859,   860,   131,
     313,  1052,   871,   877,   879,   880,   881,   118,   878,  -647,
     882,   883,    82,    83,  1343,    84,   222,   223,   224,   780,
     886,   901,   311,   885,  -338,   310,   780,   132,  -338,   316,
     602,   902,   904,   903,   920,   905,   910,   311,   922,   932,
     938,   999,   311,   997,   313,   976,   992,   994,   310,   998,
    1003,  1014,   316,  1007,  -338,    85,  1011,    85,  1029,  1273,
    1035,   313,   311,   314,  1025,  1038,  1027,  1052,  1264,   314,
      85,  -338,  1271,  1040,  1054,  1093,   314,  -338,  1096,  1367,
     311,   311,  1098,   311,   311,   978,  1097,   311,   314,   979,
    -338,  1111,  1120,  1122,  1121,   602,   602,   314,  1134,  1137,
    1135,   602,  1367,   181,  1138,   274,   311,   311,   275,  1051,
    1142,   276,  1141,  1150,   277,   311,   223,   224,    85,  1151,
    1301,  1302,  1166,   311,  1162,  1169,  -338,  1161,  1170,   264,
      85,  1163,  1173,  1186,  1194,  1164,  1208,   315,  1210,  1213,
     779,  1212,  1244,  1265,  1228,  1321,  1245,   779,    -6,  1231,
    1256,  1214,   307,  1266,  1267,   307,    12,  1280,   314,  1287,
     315,   314,  1281,  1294,   895,  1284,  1312,  1315,    85,    85,
    1316,  1318,  1305,    14,    57,  1051,    16,  1323,   602,   313,
    1327,  1328,  1329,  1015,   602,  1332,    17,  1366,  1338,  1342,
    1368,  1371,    58,    85,   313,   311,  1345,  1376,  1386,   313,
     314,  1016,  1373,   296,  1378,   297,  1387,  1397,   543,  1403,
    1366,  1404,  1408,    19,  1416,  1017,  1420,  1391,  1421,   989,
    1413,  1424,    20,     9,   538,   545,  1112,   674,   754,    22,
      23,   314,  1115,  1116,  1337,  1099,  1110,   780,   780,   264,
     780,   780,  1108,   102,   780,  1258,   314,  1383,    12,  1369,
    1389,   617,  1193,  1370,   606,   830,   618,   925,  1030,  1242,
    1034,   551,   831,   313,   313,    14,   103,   694,    16,  1411,
     204,   405,   313,   917,   605,   167,  1243,   477,    17,   307,
    1049,   942,   104,   137,    58,   127,   119,   412,   189,   562,
     314,   273,   210,  1028,   420,  1227,  1422,   802,  1124,  1372,
     311,   311,  1279,  1205,   311,    19,   311,  1374,   553,  1276,
    1322,  1269,  1375,   812,    20,   684,  1396,   906,   683,   475,
     311,    22,    23,   311,     0,     0,     0,     0,   371,     0,
     311,     0,     0,     0,   314,   554,     0,   373,   374,   375,
     988,   376,     0,     0,   377,   378,   379,   380,     0,     0,
       0,   314,   780,     0,   381,   382,     0,     0,   779,   779,
       0,   779,   779,     0,   555,   779,     0,     0,     0,     0,
       0,     0,     0,   217,   218,   219,   220,     0,     0,    82,
      83,     0,    84,     0,     0,     0,   556,   777,     0,   778,
       0,     0,     0,   311,     0,     0,     0,     0,     0,     0,
       0,  1048,     0,     0,     0,     0,   307,   581,   311,     0,
     586,   384,   307,     0,     0,     0,   581,   581,     0,   307,
     385,     0,     0,     0,  1222,   586,     0,     0,     0,     0,
       0,   307,     0,     0,     0,     0,     0,     0,     0,   386,
     307,     0,   771,     0,   296,     0,   297,   311,     0,     0,
     826,     0,     0,     0,   258,     0,   311,   989,   989,     0,
       0,   313,     0,   780,     0,     0,     0,   294,   295,   314,
     296,     0,   297,   779,     0,   311,     0,   780,     0,     0,
     780,     0,     0,     0,   314,     0,     0,   313,     0,   314,
       0,     0,     0,     0,     0,     0,     0,     0,   311,     0,
       0,   307,   551,     0,   307,     0,   311,   311,     0,   990,
       0,   204,     0,   311,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,   201,   311,     0,     0,     0,     0,
       0,   311,     0,   210,     0,     0,     0,   204,     0,     0,
       0,     0,     0,   307,     0,     0,     0,     0,   311,   553,
     780,     0,     0,   314,   314,     0,     0,     0,     0,   210,
     299,     0,   314,     0,     0,   780,     0,     0,     0,     0,
    1050,     0,     0,     0,   307,     0,   554,     0,   988,   988,
       0,     0,     0,     0,   779,     0,     0,   720,     0,   307,
       0,     0,     0,     0,     0,     0,     0,     0,   779,     0,
       0,   779,     0,     0,  1049,   555,     0,     0,     0,     0,
       0,     0,     0,   780,   217,   218,   219,   220,     0,     0,
      82,    83,   214,    84,     0,     0,     0,   556,   777,     0,
     778,     0,   313,   307,     0,     0,     0,     0,     0,     0,
     217,   218,   219,   220,     0,     0,    82,    83,   221,    84,
     222,   223,   224,     0,     0,   313,     0,     0,     0,     0,
       0,   822,     0,   780,   780,   258,   570,     0,     0,   571,
    1049,   779,   823,     0,     0,   581,     0,   307,   572,   192,
       0,     0,  1364,     0,     0,   581,   779,     0,   780,     0,
       0,     0,     0,   573,   307,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1364,     0,  -337,     0,     0,
     569,  -337,     0,     0,   258,   570,     0,     0,   571,     0,
       0,  -337,     0,  -337,  -337,  1048,     0,   572,   192,   574,
       0,     0,     0,     0,   779,  -337,     0,     0,     0,     0,
    -337,   941,   573,     0,     0,     0,   190,   990,   990,     0,
       0,   314,     0,     0,     0,     0,   738,     0,   191,   192,
       0,   193,     0,   194,     0,     0,     0,     0,     0,     0,
       0,  -337,     0,     0,     0,  -337,     0,   314,   574,     0,
       0,   258,   195,     0,   779,   779,     0,   196,     0,   197,
       0,  1048,     0,     0,   294,   295,   198,   296,     0,   297,
     199,  -337,     0,  1363,     0,     0,     0,     0,     0,   779,
       0,     0,   307,     0,   200,   201,     0,     0,  -337,     0,
       0,     0,   202,   203,  -337,     0,  1363,   307,   204,     0,
       0,     0,   307,   205,   206,     0,     0,  -337,     0,     0,
       0,   207,     0,     0,   208,   209,   971,     0,     0,     0,
     210,   201,     0,   211,     0,     0,   298,    82,    83,   221,
      84,   222,   223,   224,   204,     0,     0,     0,     0,     0,
       0,     0,     0,  -337,     0,     0,     0,   207,   212,     0,
       0,     0,     0,     0,     0,     0,   210,   299,     0,     0,
     213,     0,     0,     0,  1050,     0,   307,   307,     0,     0,
       0,     0,     0,     0,     0,   307,    82,    83,   221,    84,
     222,   223,   224,   214,     0,   215,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,     0,     0,     0,     0,
     216,   217,   218,   219,   220,     0,     0,    82,    83,   221,
      84,   222,   223,   224,   971,   314,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   192,     0,   296,     0,   297,
    1050,     0,  1044,     0,     0,     0,     0,   217,   218,   219,
     220,     0,  1365,    82,    83,   221,    84,   222,   223,   224,
     951,   952,   953,     0,   954,   955,   956,   957,   958,   959,
     960,     0,     0,     0,     0,  1365,     0,   961,   962,     0,
       0,     0,     0,  1261,     0,     0,     0,     0,   190,     0,
       0,   201,     0,     0,   196,     0,   197,     0,  1262,     0,
     191,   192,     0,   193,   204,   194,     0,   199,     0,     0,
       0,     0,     0,     0,     0,  1157,     0,     0,     0,     0,
       0,   200,  1159,     0,   195,     0,   210,     0,     0,   196,
       0,   197,  1165,     0,     0,     0,     0,     0,   198,     0,
     205,   206,   199,   192,     0,   296,     0,   297,     0,     0,
    1310,     0,     0,  1183,     0,  1183,   200,   201,  1183,     0,
     211,     0,     0,     0,   202,   203,     0,     0,     0,     0,
     204,     0,     0,     0,   307,   205,   206,     0,     0,     0,
       0,     0,     0,   207,     0,     0,   208,   209,     0,   214,
    1045,  1046,   210,     0,     0,   211,     0,     0,     0,   201,
     307,     0,     0,  1234,     0,     0,     0,   217,   218,   219,
     220,     0,   204,    82,    83,   221,    84,     0,     0,     0,
     212,     0,     0,  1234,     0,     0,  1234,  1241,     0,     0,
       0,     0,   213,     0,   210,     0,     0,   216,  1183,     0,
       0,     0,     0,     0,    82,    83,   744,    84,   222,   223,
     224,   190,     0,     0,     0,   214,     0,   215,     0,     0,
       0,     0,     0,   191,   192,     0,   193,     0,   194,     0,
       0,     0,   216,   217,   218,   219,   220,     0,     0,    82,
      83,   221,    84,   222,   223,   224,     0,   195,     0,     0,
       0,     0,   196,     0,   197,     0,     0,   214,  1045,  1046,
       0,   198,     0,  1183,  1183,   199,     0,     0,     0,  1183,
       0,     0,     0,     0,     0,   217,   218,   219,   220,   200,
     201,    82,    83,   221,    84,     0,     0,   202,   203,     0,
       0,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,  1031,  1324,   307,   207,   258,     0,   208,
     209,     0,     0,     0,  1032,   210,     0,     0,   211,     0,
     294,   295,     0,   296,     0,   297,     0,     0,   307,     0,
       0,  1033,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   212,  1353,  1354,  1183,     0,     0,   569,
       0,     0,  1183,   258,   570,   213,     0,   571,     0,     0,
    -330,     0,     0,     0,  -330,     0,   572,   192,     0,     0,
       0,     0,     0,     0,  -330,     0,     0,   201,   214,     0,
     215,   573,     0,     0,  1246,     0,     0,     0,  -330,     0,
     204,  -192,  -192,  -330,     0,   216,   217,   218,   219,   220,
       0,     0,    82,    83,   221,    84,   222,   223,   224,     0,
       0,  1178,   210,   299,     0,     0,     0,   574,     0,     0,
     196,     0,   197,     0,  -330,     0,     0,   258,  -330,     0,
       0,     0,     0,   199,   612,     0,     0,     0,     0,  1179,
     294,   295,     0,   296,     0,   297,     0,   200,     0,     0,
       0,     0,     0,     0,  -330,     0,     0,     0,     0,     0,
     258,     0,     0,     0,     0,     0,   205,   206,     0,     0,
       0,  -330,     0,   294,   295,   214,   296,  -330,   297,     0,
       0,     0,     0,     0,     0,     0,   211,     0,     0,     0,
    -330,     0,     0,   217,   218,   219,   220,   201,   258,    82,
      83,   221,    84,   222,   223,   224,     0,     0,     0,     0,
     204,   294,   295,     0,   296,     0,   297,     0,     0,     0,
       0,     0,     0,   207,     0,     0,  -330,     0,     0,     0,
     201,     0,   210,   299,     0,     0,     0,     0,  1016,     0,
     296,     0,   297,   204,     0,    82,    83,   221,    84,   222,
     223,   224,  1017,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,   216,  -192,   210,   299,     0,   201,     0,
      82,    83,     0,    84,   222,   223,   224,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,     0,   207,   214,    95,     0,   551,     0,
       0,     0,     0,   210,   299,   294,   295,   204,   296,     0,
     297,     0,   167,   217,   218,   219,   220,     0,     0,    82,
      83,   221,    84,   318,   223,   224,     0,     0,   214,   210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   553,   217,   218,   219,   220,
       0,   258,    82,    83,   221,    84,   318,   223,   224,     0,
       0,     0,   201,     0,   294,   295,   214,   296,     0,   297,
       0,     0,   554,   689,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   218,   219,   220,   207,   258,
      82,    83,   221,    84,   318,   223,   224,   210,   299,     0,
       0,   555,   294,   295,     0,   296,     0,   297,     0,     0,
     217,   218,   219,   220,     0,     0,    82,    83,     0,    84,
       0,   201,     0,   556,   777,     0,   778,     0,     0,     0,
       0,     0,     0,     0,   204,  -192,  -192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1178,   210,   299,     0,   201,
     214,     0,     0,     0,   196,     0,   197,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,   199,   217,   218,
     219,   220,     0,  1179,    82,    83,   221,    84,   222,   223,
     224,   200,     0,     0,   210,   299,     0,     0,     0,     0,
       0,     0,   192,     0,   296,     0,   297,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     211,     0,     0,     0,     0,     0,     0,   217,   218,   219,
     220,     0,     0,    82,    83,   221,    84,   222,   223,   224,
       0,     0,     0,     0,     0,   190,     0,   214,   201,     0,
       0,     0,     0,     0,     0,     0,     0,   191,   192,     0,
     193,   204,   194,     0,     0,   217,   218,   219,   220,     0,
       0,    82,    83,   221,    84,   222,   223,   224,   335,     0,
       0,   195,     0,   210,     0,     0,   196,     0,   197,     0,
       0,     0,     0,     0,     0,   198,     0,   216,  -192,   199,
       0,     0,     0,     0,    82,    83,  1178,    84,   222,   223,
     224,     0,     0,   200,   201,   196,     0,   197,     0,     0,
       0,   202,   203,     0,     0,     0,     0,   204,   199,     0,
       0,     0,   205,   206,  1179,     0,     0,     0,     0,     0,
     207,     0,   200,   208,   209,     0,   214,  1359,  1360,   210,
       0,     0,   211,     0,     0,     0,     0,     0,     0,     0,
       0,   205,   206,     0,   217,   218,   219,   220,     0,     0,
      82,    83,   221,    84,     0,     0,     0,   212,     0,     0,
      95,   211,     0,     0,     0,     0,     0,     0,   192,   213,
     296,     0,   297,   373,   374,   375,  1352,   376,     0,     0,
     377,   378,   379,   380,     0,     0,     0,     0,     0,   190,
     381,   382,   214,     0,   215,     0,     0,     0,     0,     0,
       0,   191,   192,     0,   193,     0,   194,     0,     0,   216,
     217,   218,   219,   220,   363,     0,    82,    83,   221,    84,
     222,   223,   224,     0,   201,   195,     0,   296,     0,   297,
     196,     0,   197,     0,     0,     0,     0,   204,   216,   198,
       0,     0,     0,   199,     0,    82,    83,   384,    84,   222,
     223,   224,   364,     0,     0,     0,   385,   200,   201,   210,
       0,    12,     0,    13,     0,   202,   203,     0,     0,     0,
       0,   204,     0,     0,     0,   386,   205,   206,    14,    15,
       0,    16,     0,     0,   207,   551,     0,   208,   209,     0,
       0,    17,     0,   210,   204,     0,   211,    18,   192,   167,
     296,     0,   297,     0,     0,     0,  1382,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   210,     0,    19,     0,
       0,   212,   214,  1045,  1046,     0,     0,    20,     0,    21,
       0,     0,   553,   213,    22,    23,     0,     0,     0,     0,
     217,   218,   219,   220,     0,     0,    82,    83,   221,    84,
       0,   190,     0,     0,   201,     0,   214,     0,   215,   554,
       0,   738,     0,   191,   192,     0,   193,   204,   194,     0,
       0,     0,   739,   216,   217,   218,   219,   220,     0,     0,
      82,    83,   221,    84,   222,   223,   224,   195,   555,   210,
       0,     0,   196,     0,   197,     0,     0,   217,   218,   219,
     220,   198,     0,    82,    83,   199,    84,     0,     0,     0,
     556,   777,    -6,   778,     0,     0,     0,     0,     0,   200,
     201,     0,     0,     0,     0,     0,     0,   202,   203,     0,
       0,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,     0,     0,   208,
     209,     0,   214,  1359,  1360,   210,     0,     0,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   218,   219,   220,     0,     0,    82,    83,   221,    84,
       0,     0,     0,   212,     0,     0,     0,     0,   371,     0,
       0,     0,   372,     0,     0,   213,     0,   373,   374,   375,
       0,   376,     0,     0,   377,   378,   379,   380,     0,     0,
       0,     0,     0,   190,   381,   382,     0,     0,   214,     0,
     215,   383,     0,     0,     0,   191,   192,     0,   193,     0,
     194,     0,     0,     0,     0,   216,   217,   218,   219,   220,
       0,     0,    82,    83,   221,    84,   222,   223,   224,   195,
       0,     0,     0,     0,   196,     0,   197,     0,     0,     0,
       0,     0,   771,   198,   296,     0,   297,   199,  -647,   374,
     375,   384,   376,     0,     0,   377,   378,  -647,   380,     0,
     385,   200,   201,     0,     0,   381,   382,     0,     0,   202,
     203,     0,     0,     0,     0,   204,     0,     0,     0,   386,
     205,   206,     0,     0,     0,     0,     0,     0,   207,     0,
       0,   208,   209,     0,     0,     0,     0,   210,     0,     0,
     211,     0,   551,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,   167,     0,     0,     0,
       0,     0,   384,     0,     0,   212,     0,     0,     0,     0,
       0,   385,     0,   210,     0,     0,     0,   213,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,   553,
     386,     0,     0,     0,     0,     0,     0,   190,     0,     0,
     214,     0,   215,     0,     0,     0,   343,     0,     0,   191,
     192,     0,   193,     0,   194,     0,   554,   216,   217,   218,
     219,   220,   407,     0,    82,    83,   221,    84,   222,   223,
     224,     0,     0,   195,     0,     0,     0,     0,   196,     0,
     197,     0,     0,     0,     0,   555,     0,   198,     0,     0,
       0,   199,     0,     0,   217,   218,   219,   220,     0,     0,
      82,    83,     0,    84,     0,   200,   201,   556,   777,  1303,
     778,     0,     0,   202,   203,     0,     0,     0,     0,   204,
    1178,     0,     0,     0,   205,   206,     0,     0,     0,   196,
       0,   197,   207,     0,     0,   208,   209,     0,     0,     0,
       0,   210,   199,     0,   211,     0,     0,     0,  1179,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,   205,   206,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,   190,
       0,     0,     0,     0,   214,     0,   215,     0,     0,     0,
       0,   191,   192,     0,   193,     0,   194,     0,     0,     0,
       0,   216,   217,   218,   219,   220,     0,     0,    82,    83,
     221,    84,   222,   223,   224,   195,     0,     0,     0,     0,
     196,     0,   197,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,   199,     0,     0,     0,     0,     0,     0,
       0,     0,   486,     0,     0,     0,     0,   200,   201,     0,
       0,     0,   216,     0,     0,   202,   203,     0,     0,    82,
      83,   204,    84,   222,   223,   224,   205,   206,     0,     0,
       0,     0,     0,     0,   207,     0,     0,   208,   209,     0,
       0,     0,     0,   210,     0,     0,   211,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   212,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,   771,     0,
     296,     0,   297,     0,     0,  1217,     0,     0,     0,     0,
       0,   190,     0,     0,     0,     0,   214,     0,   215,     0,
       0,     0,     0,   191,   192,     0,   193,     0,   194,     0,
       0,   774,   488,   216,   217,   218,   219,   220,     0,     0,
      82,    83,   221,    84,   222,   223,   224,   195,     0,     0,
       0,     0,   196,     0,   197,     0,     0,     0,   551,     0,
       0,   198,     0,     0,     0,   199,     0,   204,     0,     0,
       0,     0,   167,     0,     0,     0,     0,     0,     0,   200,
     201,     0,     0,     0,     0,     0,     0,   202,   203,   210,
       0,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,   553,   207,     0,     0,   208,
     209,     0,     0,     0,     0,   210,     0,     0,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,   554,     0,     0,   372,     0,     0,     0,     0,
     373,   374,   375,   212,   376,     0,     0,   377,   378,   379,
     380,     0,     0,     0,     0,   213,     0,   381,   382,     0,
       0,   555,     0,     0,   383,     0,     0,     0,     0,     0,
     217,   218,   219,   220,     0,   190,    82,    83,   214,    84,
     215,     0,     0,   556,   777,     0,   778,   191,   192,     0,
     193,     0,   194,     0,     0,   216,   217,   218,   219,   220,
     494,     0,    82,    83,   221,    84,   222,   223,   224,     0,
       0,   195,     0,     0,   384,     0,   196,     0,   197,     0,
       0,     0,   371,   385,     0,   198,   372,     0,     0,   199,
       0,   373,   374,   375,     0,   376,     0,     0,   377,   378,
     379,   380,   386,   200,   201,   474,     0,     0,   381,   382,
       0,   202,   203,     0,     0,   383,     0,   204,     0,     0,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     207,     0,     0,   208,   209,     0,     0,     0,     0,   210,
       0,   626,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   384,     0,   212,     0,     0,
       0,     0,   371,     0,   385,     0,   372,     0,     0,   213,
       0,   373,   374,   375,     0,   376,     0,     0,   377,   378,
     379,   380,     0,   386,     0,   496,     0,   190,   381,   382,
       0,     0,   214,     0,   215,   383,     0,     0,     0,   191,
     192,     0,   193,     0,   194,     0,     0,     0,     0,   216,
     217,   218,   219,   220,     0,     0,    82,    83,   221,    84,
     222,   223,   224,   195,     0,     0,     0,     0,   196,     0,
     197,     0,     0,     0,     0,     0,     0,   198,     0,     0,
       0,   199,   951,   952,   953,   384,   954,   955,   956,   957,
     958,   959,   960,     0,   385,   200,   201,     0,     0,   961,
     962,     0,     0,   202,   203,     0,     0,     0,     0,   204,
       0,     0,     0,   386,   205,   206,   196,     0,   197,     0,
       0,     0,   207,     0,     0,   208,   209,   963,     0,   199,
       0,   210,     0,     0,   211,     0,     0,     0,     0,     0,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
       0,     0,   964,     0,     0,     0,   771,     0,   296,   212,
     297,     0,   205,   206,     0,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,   771,   773,   296,
       0,   297,   211,     0,   772,     0,     0,     0,     0,   774,
       0,     0,     0,     0,   214,     0,   215,     0,     0,   773,
       0,   965,     0,     0,     0,   775,     0,   776,     0,     0,
     774,   216,   217,   218,   219,   220,   551,     0,    82,    83,
     221,    84,   222,   223,   224,   204,   775,     0,   776,     0,
     167,     0,   771,     0,   296,     0,   297,   551,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   210,     0,     0,
       0,   167,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,     0,   553,     0,   774,    82,    83,   210,    84,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   553,     0,     0,     0,     0,     0,
     554,     0,   551,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,   167,     0,     0,     0,
       0,   554,     0,     0,     0,     0,     0,     0,     0,   555,
       0,     0,     0,   210,     0,     0,     0,     0,   217,   218,
     219,   220,     0,     0,    82,    83,     0,    84,     0,   553,
     555,   556,   777,     0,   778,     0,     0,     0,     0,   217,
     218,   219,   220,     0,     0,    82,    83,     0,    84,     0,
     371,     0,   556,   777,   372,   778,   554,     0,     0,   373,
     374,   375,     0,   376,     0,     0,   377,   378,   379,   380,
       0,     0,     0,     0,     0,     0,   381,   382,     0,     0,
       0,     0,     0,   383,     0,   555,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   218,   219,   220,     0,     0,
      82,    83,   371,    84,     0,     0,   372,   556,   777,   497,
     778,   373,   374,   375,     0,   376,     0,     0,   377,   378,
     379,   380,     0,     0,     0,   498,     0,   499,   381,   382,
       0,     0,     0,   384,     0,   383,   371,     0,     0,     0,
     372,     0,   385,  1398,     0,   373,   374,   375,     0,   376,
       0,     0,   377,   378,   379,   380,     0,     0,     0,  1399,
       0,   386,   381,   382,     0,     0,     0,     0,     0,   383,
     371,     0,     0,     0,   372,     0,     0,     0,     0,   373,
     374,   375,     0,   376,     0,   384,   377,   378,   379,   380,
       0,     0,     0,   531,   385,     0,   381,   382,     0,     0,
     737,     0,     0,   383,     0,   371,     0,     0,     0,   372,
       0,     0,   537,   386,   373,   374,   375,     0,   376,   384,
       0,   377,   378,   379,   380,     0,     0,     0,   385,     0,
       0,   381,   382,     0,     0,     0,     0,     0,   383,     0,
       0,   371,     0,     0,     0,   372,     0,   386,     0,     0,
     373,   374,   375,   384,   376,     0,     0,   377,   378,   379,
     380,     0,   385,     0,   630,     0,   371,   381,   382,     0,
     372,     0,     0,     0,   383,   373,   374,   375,     0,   376,
       0,   386,   377,   378,   379,   380,     0,     0,   384,   631,
       0,     0,   381,   382,     0,     0,   371,   385,     0,   383,
     372,     0,     0,     0,     0,   373,   374,   375,     0,   376,
       0,     0,   377,   378,   379,   380,   386,     0,     0,   632,
       0,   371,   381,   382,   384,   372,     0,     0,     0,   383,
     373,   374,   375,   385,   376,     0,     0,   377,   378,   379,
     380,     0,     0,     0,   638,     0,     0,   381,   382,   384,
       0,     0,   386,     0,   383,     0,     0,   371,   385,     0,
       0,   372,     0,     0,     0,     0,   373,   374,   375,     0,
     376,     0,     0,   377,   378,   379,   380,   386,     0,   384,
     644,     0,     0,   381,   382,     0,     0,     0,   385,     0,
     383,     0,   371,   660,     0,     0,   372,     0,     0,     0,
       0,   373,   374,   375,   384,   376,     0,   386,   377,   378,
     379,   380,     0,   385,     0,     0,     0,   371,   381,   382,
       0,   372,     0,     0,     0,   383,   373,   374,   375,     0,
     376,     0,   386,   377,   378,   379,   380,     0,     0,     0,
     384,     0,     0,   381,   382,     0,     0,   371,     0,   385,
     383,   372,     0,     0,     0,     0,   373,   374,   375,     0,
     376,     0,     0,   377,   378,   379,   380,     0,   386,     0,
     743,     0,     0,   381,   382,   384,     0,     0,   371,     0,
     383,     0,   372,     0,   385,   736,     0,   373,   374,   375,
       0,   376,     0,     0,   377,   378,   379,   380,     0,     0,
     384,   749,     0,   386,   381,   382,     0,     0,   371,   385,
       0,   383,   372,     0,     0,     0,     0,   373,   374,   375,
       0,   376,     0,     0,   377,   378,   379,   380,   386,     0,
     384,   837,     0,   371,   381,   382,     0,   372,     0,   385,
       0,   383,   373,   374,   375,     0,   376,     0,     0,   377,
     378,   379,   380,     0,     0,     0,     0,     0,   386,   381,
     382,   384,     0,     0,     0,     0,   383,     0,     0,   371,
     385,     0,     0,   372,     0,     0,     0,     0,   373,   374,
     375,     0,   376,     0,     0,   377,   378,   379,   380,   386,
       0,   384,   927,     0,   371,   381,   382,     0,   372,     0,
     385,   853,   383,   373,   374,   375,     0,   376,     0,     0,
     377,   378,   379,   380,     0,     0,   384,   944,     0,   386,
     381,   382,     0,     0,   371,   385,     0,   383,   372,     0,
       0,     0,     0,   373,   374,   375,     0,   376,     0,     0,
     377,   378,   379,   380,   386,     0,     0,  1176,     0,   371,
     381,   382,   384,   372,     0,     0,     0,   383,   373,   374,
     375,   385,   376,     0,     0,   377,   378,   379,   380,     0,
       0,     0,     0,  1177,     0,   381,   382,   384,     0,     0,
     386,     0,   383,     0,     0,   371,   385,     0,     0,   372,
       0,     0,     0,     0,   373,   374,   375,     0,   376,     0,
       0,   377,   378,   379,   380,   386,     0,   384,  1330,     0,
     371,   381,   382,     0,   372,     0,   385,     0,   383,   373,
     374,   375,     0,   376,     0,     0,   377,   378,   379,   380,
       0,     0,   384,     0,  1331,   386,   381,   382,     0,     0,
     371,   385,     0,   383,   372,     0,     0,     0,     0,   373,
     374,   375,     0,   376,     0,     0,   377,   378,   379,   380,
     386,     0,     0,  1419,     0,   371,   381,   382,   384,   372,
       0,     0,     0,   383,   373,   374,   375,   385,   376,     0,
       0,   377,   378,   379,   380,     0,     0,     0,     0,     0,
       0,   381,   382,   384,     0,     0,   386,     0,   383,     0,
       0,     0,   385,     0,     0,  1055,     0,     0,     0,     0,
       0,     0,  1056,     0,     0,     0,  1057,     0,     0,     0,
       0,   386,     0,   384,     0,     0,     0,     0,     0,     0,
       0,     0,   385,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1058,   384,     0,
       0,   386,  1059,     0,     0,     0,     0,   385,     0,  1060,
    1061,  1062,  1063,  1064,     0,  1065,  1066,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   386,  1067,  1068,     0,
       0,     0,     0,     0,  1069,  1070,  1071,  1072,  1073,  1074,
    1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083
};

static const yytype_int16 yycheck[] =
{
      21,    90,    61,   717,   473,   163,   534,    66,   135,   732,
     404,   178,   406,    93,    73,    21,   447,   611,   429,   445,
      14,   447,   429,     1,    18,   175,    20,    73,   427,  1098,
      22,   120,  1101,   901,   123,   671,  1133,     1,    10,   128,
      16,     1,   175,     1,   424,   178,   175,    41,    18,   178,
     139,   140,   179,    26,  1205,   114,  1207,     6,    69,   186,
       1,  1181,    37,    79,    58,   464,    18,  1119,   596,   149,
     469,   160,   466,    11,   387,   152,   893,   894,    70,   896,
     897,     1,    18,   900,  1136,     6,   572,    79,     9,    18,
      12,   180,   620,    27,   115,    12,  1269,    18,   492,    18,
     121,   122,    11,   124,    27,  1147,   829,    18,    19,   115,
     126,    71,    33,   836,    27,    18,   122,  1194,   124,   124,
    1271,   248,   181,   144,    24,    16,  1246,  1247,    11,   657,
      33,   152,   526,    26,    18,   698,   850,   153,   144,    62,
     103,    18,    27,   142,    87,   708,   151,  1320,    69,    92,
      16,    71,   302,   429,   175,   566,    46,   178,    64,   566,
     181,   182,   183,    80,    87,   176,   182,   106,    59,   302,
      63,   524,    16,   302,    80,   181,   182,   183,   301,   302,
     560,   261,   177,  1252,   147,   262,   207,   267,   204,  1231,
     317,   190,   191,    59,   193,   194,    87,   189,   197,   194,
      16,    92,   177,   330,   517,   691,   519,    12,    63,  1329,
     696,    77,  1289,   162,   928,   124,   939,  1269,   191,   179,
     198,    26,  1319,   244,   196,   201,   202,   203,   227,   623,
     229,   201,   202,   203,   255,   445,   200,   447,   244,   197,
     198,   262,   200,   184,   333,   881,   882,  1344,   125,   201,
     202,   203,   191,   191,  1405,    18,   414,     0,   194,   179,
     259,    77,   283,   185,   391,   194,  1335,   201,  1320,   268,
    1138,    16,   191,   157,   197,   442,   197,   198,   272,   200,
     191,   302,   362,   752,   197,   435,    27,   454,   178,   700,
     566,   191,   284,   700,   197,   198,   185,   200,   181,   426,
     429,   430,   435,   656,   433,   326,   435,   687,   688,   442,
     439,   440,   435,   442,   180,   395,   201,   202,   203,   448,
     326,   454,     4,    57,   852,   454,   181,   146,   417,    18,
     463,  1385,    77,     5,   463,    69,   864,    61,   359,   733,
    1394,     7,  1210,   129,   343,    73,    18,   346,   111,    16,
     349,   350,    11,   430,    46,   354,   433,   524,    18,    31,
     527,    27,   439,   440,   180,   364,  1166,   413,    27,  1169,
      26,   448,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,    31,   204,   980,   206,   101,  1206,
      50,   524,   472,    33,   527,   524,   130,   125,   527,   147,
       5,   714,    93,   402,  1221,    97,    31,    98,   429,   430,
      77,   410,   433,    18,   435,     1,    16,   145,   439,   440,
     102,   442,   111,   803,   445,    11,   447,   448,   808,  1143,
     122,   144,    35,   454,   814,   180,    61,   566,   129,   870,
      11,    27,   463,   869,   870,   612,    61,   114,  1316,   177,
     117,    43,   185,   611,    93,  1323,    27,   144,   452,    98,
     201,   202,   203,    93,   597,    80,    69,     1,   597,    95,
      62,     5,     6,   197,   198,     9,   200,    77,    12,   612,
     479,   480,     7,   612,    18,    19,   178,   486,    27,   656,
     129,    80,   175,    12,    28,   178,    93,    24,   497,    33,
       1,   522,    27,   524,    93,    32,   527,    26,   919,   920,
     177,   147,   919,   920,   114,    16,   522,   117,  1386,   518,
       6,  1244,    77,   656,    80,   197,   198,   656,   200,   201,
     202,   203,    18,   622,    73,    69,   535,    50,   537,     5,
     129,   967,    77,   974,   624,   566,   945,    33,   974,   570,
     571,   572,   946,    19,   201,   202,   203,   197,   198,   114,
     200,   201,   117,    80,  1092,     7,    16,   197,   198,   698,
     200,   700,   197,   198,  1288,   200,   597,   177,    16,   708,
     180,    80,    79,    69,   717,    27,   125,    16,   717,   610,
      39,   612,   197,   198,    93,   200,   201,   202,   203,   598,
     197,   198,   119,   200,    53,   142,   145,   124,   197,   198,
     127,   200,   148,   296,   297,    30,    31,    36,    67,   302,
       1,   698,   177,  1399,   751,   180,  1402,   626,   627,   126,
      11,   708,   149,    52,   633,   656,   197,   198,   177,   200,
       1,   640,    16,  1419,    79,    85,    27,   668,    64,   175,
     671,    70,   178,    18,   675,    16,   153,    18,    93,   869,
     870,   682,    11,   197,   198,   199,   200,   201,   202,   203,
     691,    11,  1107,    44,  1109,   696,   185,   698,    27,   700,
     701,   702,    47,   102,    49,   182,    26,   708,   855,    60,
     848,   126,   141,    16,    65,    60,   717,   718,   197,   198,
      61,   200,   835,    77,    11,    88,   835,   204,   205,    74,
     207,   197,   198,    35,   200,   774,   715,   850,   153,    80,
      27,   850,   855,    94,    28,    29,   855,   110,    93,    94,
      35,   197,   198,   199,   200,   201,   202,   203,   737,    61,
     114,   762,    18,   117,   197,    11,   429,   182,   113,   128,
      26,   750,   435,   774,    16,    16,    61,   967,    80,   442,
     131,    27,   197,   198,   974,   200,   995,   996,   774,   204,
     205,   454,   207,    11,    95,    80,   302,   866,    11,    40,
     463,   775,   776,   863,    45,   806,    50,   109,    27,    27,
     919,   920,     1,    16,    27,   928,   101,    11,   194,   928,
     806,    11,    11,   177,   109,    44,   180,   936,   191,   192,
     193,  1113,  1114,    27,   835,    76,    48,    27,    27,    80,
      11,    60,   980,    79,   845,   190,    65,    79,   120,   850,
      79,   890,   197,   198,   855,   200,    27,    16,    87,   156,
      18,   524,    93,    91,   527,   106,    59,    98,   869,   870,
     101,    21,    28,    23,   875,    94,    16,    18,   857,    18,
     881,   882,   123,    23,   116,    25,    18,   888,   129,   890,
     126,    31,   893,   894,   126,   896,   897,   126,   129,   900,
      79,   142,   888,   566,   890,    18,  1096,    16,  1098,   978,
     979,  1101,   131,   144,    23,    18,    25,   153,   919,   920,
      18,   153,    31,   429,   153,    75,    18,   928,    26,   435,
     439,   440,   194,    18,   597,   936,   442,   178,    88,   201,
     202,   203,   201,   202,   203,    18,   182,   126,   454,   612,
     182,    18,    18,   182,   201,   202,   203,   463,   194,   175,
     110,   111,   178,    18,  1102,    27,   967,   148,   204,   205,
    1117,   207,   204,   974,   153,   204,   955,   956,   109,   109,
      14,    15,  1042,    17,   109,   109,    20,    21,    16,    23,
      11,  1181,   200,   656,   995,   996,    30,    31,   999,    16,
      78,    16,    18,   182,  1117,  1006,    26,  1008,  1117,  1147,
      12,    12,   675,   999,    24,   194,    27,    27,   524,   682,
    1006,   527,    32,   173,  1093,   204,   194,    26,   177,   197,
    1143,    69,   200,    27,  1143,   201,   204,   700,   120,    16,
     124,   191,   192,   193,   194,    11,   206,   197,   198,   124,
     200,   201,  1190,   103,   717,  1193,  1246,  1247,    14,    15,
     566,    17,  1252,    24,    20,    21,    27,    23,   142,   197,
     198,    32,   200,   201,    30,    31,  1055,    45,    27,    91,
    1059,   204,    27,    35,    18,    81,   302,  1066,    18,    11,
      18,   597,     7,  1231,    29,  1096,   176,  1098,  1077,  1078,
    1101,    30,    18,    16,    13,    16,   612,    26,    26,    61,
      12,    48,  1113,  1114,    16,    84,  1117,    80,  1119,  1120,
     201,  1122,   131,    37,    26,    37,    28,    29,    80,    16,
     195,    87,  1133,    26,  1120,  1136,  1122,    16,    40,  1329,
      96,    93,  1143,    45,    16,  1335,    98,    18,   204,   101,
     656,  1260,   125,    11,    11,   201,    16,   109,    27,   115,
      16,    99,   197,   198,  1311,   200,   201,   202,   203,   675,
     101,    18,   835,    28,    76,  1288,   682,   129,    80,  1288,
    1181,   195,   204,    37,    11,   204,   194,   850,   191,    18,
      27,    95,   855,    18,   700,    48,   201,   201,  1311,    16,
     101,    16,  1311,    26,   106,  1206,    18,  1208,   116,  1210,
      26,   717,   875,   429,   204,    26,   176,  1326,  1197,   435,
    1221,   123,  1208,    16,    26,   197,   442,   129,    18,  1338,
     893,   894,    18,   896,   897,    97,   143,   900,   454,   122,
     142,    26,   147,    95,   177,  1246,  1247,   463,    28,    27,
      29,  1252,  1361,   103,    11,   191,   919,   920,   194,  1260,
      26,   197,   194,    16,   200,   928,   202,   203,  1269,    27,
    1249,  1250,    18,   936,   194,    18,   178,   204,    18,   152,
    1281,   191,    18,    18,    16,   191,   147,  1288,    60,    73,
     675,   191,    26,    26,   153,  1281,    27,   682,    26,   197,
      27,   204,   175,    26,    26,   178,    34,    11,   524,    11,
    1311,   527,    37,    27,   124,   182,    16,    18,  1319,  1320,
      94,    26,    48,    51,    52,  1326,    54,    98,  1329,   835,
      37,    37,    11,     1,  1335,    27,    64,  1338,    18,    16,
      26,    26,    70,  1344,   850,  1008,   194,   120,    18,   855,
     566,    19,    27,    21,    27,    23,   124,    18,   180,   155,
    1361,    18,   204,    91,   194,    33,    18,   181,    18,   875,
     191,    18,   100,     4,   414,   419,   993,   540,   656,   107,
     108,   597,   997,   997,  1306,   967,   982,   893,   894,   262,
     896,   897,   981,    29,   900,  1190,   612,  1361,    34,  1340,
    1379,   459,  1105,  1342,   449,   701,   463,   835,   919,  1171,
     920,    79,   702,   919,   920,    51,    52,   571,    54,  1398,
      88,   262,   928,   816,   448,    93,  1173,   344,    64,   302,
     936,   857,    25,    75,    70,    69,    61,   269,   141,   425,
     656,   162,   110,   912,   289,  1139,  1417,   682,  1008,  1344,
    1113,  1114,  1221,  1119,  1117,    91,  1119,  1349,   126,  1215,
    1283,  1206,  1350,   687,   100,   548,  1386,   803,   547,   342,
    1133,   107,   108,  1136,    -1,    -1,    -1,    -1,     4,    -1,
    1143,    -1,    -1,    -1,   700,   153,    -1,    13,    14,    15,
     875,    17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,   717,  1008,    -1,    30,    31,    -1,    -1,   893,   894,
      -1,   896,   897,    -1,   182,   900,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,   197,
     198,    -1,   200,    -1,    -1,    -1,   204,   205,    -1,   207,
      -1,    -1,    -1,  1206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   936,    -1,    -1,    -1,    -1,   429,   430,  1221,    -1,
     433,    87,   435,    -1,    -1,    -1,   439,   440,    -1,   442,
      96,    -1,    -1,    -1,     1,   448,    -1,    -1,    -1,    -1,
      -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
     463,    -1,    19,    -1,    21,    -1,    23,  1260,    -1,    -1,
       1,    -1,    -1,    -1,     5,    -1,  1269,  1113,  1114,    -1,
      -1,  1117,    -1,  1119,    -1,    -1,    -1,    18,    19,   835,
      21,    -1,    23,  1008,    -1,  1288,    -1,  1133,    -1,    -1,
    1136,    -1,    -1,    -1,   850,    -1,    -1,  1143,    -1,   855,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1311,    -1,
      -1,   524,    79,    -1,   527,    -1,  1319,  1320,    -1,   875,
      -1,    88,    -1,  1326,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,  1338,    -1,    -1,    -1,    -1,
      -1,  1344,    -1,   110,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,   566,    -1,    -1,    -1,    -1,  1361,   126,
    1206,    -1,    -1,   919,   920,    -1,    -1,    -1,    -1,   110,
     111,    -1,   928,    -1,    -1,  1221,    -1,    -1,    -1,    -1,
     936,    -1,    -1,    -1,   597,    -1,   153,    -1,  1113,  1114,
      -1,    -1,    -1,    -1,  1119,    -1,    -1,   610,    -1,   612,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1133,    -1,
      -1,  1136,    -1,    -1,  1260,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1269,   191,   192,   193,   194,    -1,    -1,
     197,   198,   173,   200,    -1,    -1,    -1,   204,   205,    -1,
     207,    -1,  1288,   656,    -1,    -1,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   197,   198,   199,   200,
     201,   202,   203,    -1,    -1,  1311,    -1,    -1,    -1,    -1,
      -1,     1,    -1,  1319,  1320,     5,     6,    -1,    -1,     9,
    1326,  1206,    12,    -1,    -1,   698,    -1,   700,    18,    19,
      -1,    -1,  1338,    -1,    -1,   708,  1221,    -1,  1344,    -1,
      -1,    -1,    -1,    33,   717,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1361,    -1,    12,    -1,    -1,
       1,    16,    -1,    -1,     5,     6,    -1,    -1,     9,    -1,
      -1,    26,    -1,    28,    29,  1260,    -1,    18,    19,    69,
      -1,    -1,    -1,    -1,  1269,    40,    -1,    -1,    -1,    -1,
      45,     1,    33,    -1,    -1,    -1,     6,  1113,  1114,    -1,
      -1,  1117,    -1,    -1,    -1,    -1,    16,    -1,    18,    19,
      -1,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,  1143,    69,    -1,
      -1,     5,    42,    -1,  1319,  1320,    -1,    47,    -1,    49,
      -1,  1326,    -1,    -1,    18,    19,    56,    21,    -1,    23,
      60,   106,    -1,  1338,    -1,    -1,    -1,    -1,    -1,  1344,
      -1,    -1,   835,    -1,    74,    75,    -1,    -1,   123,    -1,
      -1,    -1,    82,    83,   129,    -1,  1361,   850,    88,    -1,
      -1,    -1,   855,    93,    94,    -1,    -1,   142,    -1,    -1,
      -1,   101,    -1,    -1,   104,   105,   869,    -1,    -1,    -1,
     110,    75,    -1,   113,    -1,    -1,    80,   197,   198,   199,
     200,   201,   202,   203,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,   101,   138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,    -1,
     150,    -1,    -1,    -1,  1260,    -1,   919,   920,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   928,   197,   198,   199,   200,
     201,   202,   203,   173,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,  1288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,   191,   192,   193,   194,    -1,    -1,   197,   198,   199,
     200,   201,   202,   203,   967,  1311,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    23,
    1326,    -1,    26,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,    -1,  1338,   197,   198,   199,   200,   201,   202,   203,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,  1361,    -1,    30,    31,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    75,    -1,    -1,    47,    -1,    49,    -1,    16,    -1,
      18,    19,    -1,    21,    88,    23,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1058,    -1,    -1,    -1,    -1,
      -1,    74,  1065,    -1,    42,    -1,   110,    -1,    -1,    47,
      -1,    49,  1075,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      93,    94,    60,    19,    -1,    21,    -1,    23,    -1,    -1,
      26,    -1,    -1,  1096,    -1,  1098,    74,    75,  1101,    -1,
     113,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,  1117,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,   104,   105,    -1,   173,
     174,   175,   110,    -1,    -1,   113,    -1,    -1,    -1,    75,
    1143,    -1,    -1,  1146,    -1,    -1,    -1,   191,   192,   193,
     194,    -1,    88,   197,   198,   199,   200,    -1,    -1,    -1,
     138,    -1,    -1,  1166,    -1,    -1,  1169,  1170,    -1,    -1,
      -1,    -1,   150,    -1,   110,    -1,    -1,   190,  1181,    -1,
      -1,    -1,    -1,    -1,   197,   198,     1,   200,   201,   202,
     203,     6,    -1,    -1,    -1,   173,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    21,    -1,    23,    -1,
      -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,   197,
     198,   199,   200,   201,   202,   203,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,   173,   174,   175,
      -1,    56,    -1,  1246,  1247,    60,    -1,    -1,    -1,  1252,
      -1,    -1,    -1,    -1,    -1,   191,   192,   193,   194,    74,
      75,   197,   198,   199,   200,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,     1,  1287,  1288,   101,     5,    -1,   104,
     105,    -1,    -1,    -1,    12,   110,    -1,    -1,   113,    -1,
      18,    19,    -1,    21,    -1,    23,    -1,    -1,  1311,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,  1327,  1328,  1329,    -1,    -1,     1,
      -1,    -1,  1335,     5,     6,   150,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    75,   173,    -1,
     175,    33,    -1,    -1,    11,    -1,    -1,    -1,    40,    -1,
      88,    18,    19,    45,    -1,   190,   191,   192,   193,   194,
      -1,    -1,   197,   198,   199,   200,   201,   202,   203,    -1,
      -1,    38,   110,   111,    -1,    -1,    -1,    69,    -1,    -1,
      47,    -1,    49,    -1,    76,    -1,    -1,     5,    80,    -1,
      -1,    -1,    -1,    60,    12,    -1,    -1,    -1,    -1,    66,
      18,    19,    -1,    21,    -1,    23,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,
      -1,   123,    -1,    18,    19,   173,    21,   129,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,
     142,    -1,    -1,   191,   192,   193,   194,    75,     5,   197,
     198,   199,   200,   201,   202,   203,    -1,    -1,    -1,    -1,
      88,    18,    19,    -1,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,   178,    -1,    -1,    -1,
      75,    -1,   110,   111,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    88,    -1,   197,   198,   199,   200,   201,
     202,   203,    33,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   110,   111,    -1,    75,    -1,
     197,   198,    -1,   200,   201,   202,   203,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,   101,   173,   141,    -1,    79,    -1,
      -1,    -1,    -1,   110,   111,    18,    19,    88,    21,    -1,
      23,    -1,    93,   191,   192,   193,   194,    -1,    -1,   197,
     198,   199,   200,   201,   202,   203,    -1,    -1,   173,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,   191,   192,   193,   194,
      -1,     5,   197,   198,   199,   200,   201,   202,   203,    -1,
      -1,    -1,    75,    -1,    18,    19,   173,    21,    -1,    23,
      -1,    -1,   153,    27,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,   101,     5,
     197,   198,   199,   200,   201,   202,   203,   110,   111,    -1,
      -1,   182,    18,    19,    -1,    21,    -1,    23,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   197,   198,    -1,   200,
      -1,    75,    -1,   204,   205,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,   110,   111,    -1,    75,
     173,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    60,   191,   192,
     193,   194,    -1,    66,   197,   198,   199,   200,   201,   202,
     203,    74,    -1,    -1,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    23,    -1,    -1,    -1,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,    -1,    -1,   197,   198,   199,   200,   201,   202,   203,
      -1,    -1,    -1,    -1,    -1,     6,    -1,   173,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      21,    88,    23,    -1,    -1,   191,   192,   193,   194,    -1,
      -1,   197,   198,   199,   200,   201,   202,   203,    39,    -1,
      -1,    42,    -1,   110,    -1,    -1,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,   190,   191,    60,
      -1,    -1,    -1,    -1,   197,   198,    38,   200,   201,   202,
     203,    -1,    -1,    74,    75,    47,    -1,    49,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    88,    60,    -1,
      -1,    -1,    93,    94,    66,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    74,   104,   105,    -1,   173,   174,   175,   110,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,   191,   192,   193,   194,    -1,    -1,
     197,   198,   199,   200,    -1,    -1,    -1,   138,    -1,    -1,
     141,   113,    -1,    -1,    -1,    -1,    -1,    -1,    19,   150,
      21,    -1,    23,    13,    14,    15,    27,    17,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,     6,
      30,    31,   173,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    -1,    23,    -1,    -1,   190,
     191,   192,   193,   194,    31,    -1,   197,   198,   199,   200,
     201,   202,   203,    -1,    75,    42,    -1,    21,    -1,    23,
      47,    -1,    49,    -1,    -1,    -1,    -1,    88,   190,    56,
      -1,    -1,    -1,    60,    -1,   197,   198,    87,   200,   201,
     202,   203,    69,    -1,    -1,    -1,    96,    74,    75,   110,
      -1,    34,    -1,    36,    -1,    82,    83,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,   115,    93,    94,    51,    52,
      -1,    54,    -1,    -1,   101,    79,    -1,   104,   105,    -1,
      -1,    64,    -1,   110,    88,    -1,   113,    70,    19,    93,
      21,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    91,    -1,
      -1,   138,   173,   174,   175,    -1,    -1,   100,    -1,   102,
      -1,    -1,   126,   150,   107,   108,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   197,   198,   199,   200,
      -1,     6,    -1,    -1,    75,    -1,   173,    -1,   175,   153,
      -1,    16,    -1,    18,    19,    -1,    21,    88,    23,    -1,
      -1,    -1,    27,   190,   191,   192,   193,   194,    -1,    -1,
     197,   198,   199,   200,   201,   202,   203,    42,   182,   110,
      -1,    -1,    47,    -1,    49,    -1,    -1,   191,   192,   193,
     194,    56,    -1,   197,   198,    60,   200,    -1,    -1,    -1,
     204,   205,   185,   207,    -1,    -1,    -1,    -1,    -1,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,   104,
     105,    -1,   173,   174,   175,   110,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,   197,   198,   199,   200,
      -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,     8,    -1,    -1,   150,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,     6,    30,    31,    -1,    -1,   173,    -1,
     175,    37,    -1,    -1,    -1,    18,    19,    -1,    21,    -1,
      23,    -1,    -1,    -1,    -1,   190,   191,   192,   193,   194,
      -1,    -1,   197,   198,   199,   200,   201,   202,   203,    42,
      -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    19,    56,    21,    -1,    23,    60,    13,    14,
      15,    87,    17,    -1,    -1,    20,    21,    22,    23,    -1,
      96,    74,    75,    -1,    -1,    30,    31,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,   115,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    96,    -1,   110,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,   126,
     115,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
     173,    -1,   175,    -1,    -1,    -1,   179,    -1,    -1,    18,
      19,    -1,    21,    -1,    23,    -1,   153,   190,   191,   192,
     193,   194,    31,    -1,   197,   198,   199,   200,   201,   202,
     203,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    -1,    -1,    -1,    -1,   182,    -1,    56,    -1,    -1,
      -1,    60,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
     197,   198,    -1,   200,    -1,    74,    75,   204,   205,    27,
     207,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      38,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,    47,
      -1,    49,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,   110,    60,    -1,   113,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    -1,   173,    -1,   175,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    -1,    23,    -1,    -1,    -1,
      -1,   190,   191,   192,   193,   194,    -1,    -1,   197,   198,
     199,   200,   201,   202,   203,    42,    -1,    -1,    -1,    -1,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,   190,    -1,    -1,    82,    83,    -1,    -1,   197,
     198,    88,   200,   201,   202,   203,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,   104,   105,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    19,    -1,
      21,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    -1,   173,    -1,   175,    -1,
      -1,    -1,    -1,    18,    19,    -1,    21,    -1,    23,    -1,
      -1,    52,    27,   190,   191,   192,   193,   194,    -1,    -1,
     197,   198,   199,   200,   201,   202,   203,    42,    -1,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    79,    -1,
      -1,    56,    -1,    -1,    -1,    60,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,   110,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    -1,   126,   101,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,   153,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      13,    14,    15,   138,    17,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,   150,    -1,    30,    31,    -1,
      -1,   182,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,     6,   197,   198,   173,   200,
     175,    -1,    -1,   204,   205,    -1,   207,    18,    19,    -1,
      21,    -1,    23,    -1,    -1,   190,   191,   192,   193,   194,
      31,    -1,   197,   198,   199,   200,   201,   202,   203,    -1,
      -1,    42,    -1,    -1,    87,    -1,    47,    -1,    49,    -1,
      -1,    -1,     4,    96,    -1,    56,     8,    -1,    -1,    60,
      -1,    13,    14,    15,    -1,    17,    -1,    -1,    20,    21,
      22,    23,   115,    74,    75,    27,    -1,    -1,    30,    31,
      -1,    82,    83,    -1,    -1,    37,    -1,    88,    -1,    -1,
      -1,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,
      -1,   154,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,   138,    -1,    -1,
      -1,    -1,     4,    -1,    96,    -1,     8,    -1,    -1,   150,
      -1,    13,    14,    15,    -1,    17,    -1,    -1,    20,    21,
      22,    23,    -1,   115,    -1,    27,    -1,     6,    30,    31,
      -1,    -1,   173,    -1,   175,    37,    -1,    -1,    -1,    18,
      19,    -1,    21,    -1,    23,    -1,    -1,    -1,    -1,   190,
     191,   192,   193,   194,    -1,    -1,   197,   198,   199,   200,
     201,   202,   203,    42,    -1,    -1,    -1,    -1,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,    13,    14,    15,    87,    17,    18,    19,    20,
      21,    22,    23,    -1,    96,    74,    75,    -1,    -1,    30,
      31,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,   115,    93,    94,    47,    -1,    49,    -1,
      -1,    -1,   101,    -1,    -1,   104,   105,    58,    -1,    60,
      -1,   110,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    19,    -1,    21,   138,
      23,    -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    19,    41,    21,
      -1,    23,   113,    -1,    26,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,   173,    -1,   175,    -1,    -1,    41,
      -1,   132,    -1,    -1,    -1,    68,    -1,    70,    -1,    -1,
      52,   190,   191,   192,   193,   194,    79,    -1,   197,   198,
     199,   200,   201,   202,   203,    88,    68,    -1,    70,    -1,
      93,    -1,    19,    -1,    21,    -1,    23,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,   110,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
      -1,    -1,    -1,   126,    -1,    52,   197,   198,   110,   200,
     201,   202,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,    -1,    -1,   197,   198,    -1,   200,    -1,   126,
     182,   204,   205,    -1,   207,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,    -1,    -1,   197,   198,    -1,   200,    -1,
       4,    -1,   204,   205,     8,   207,   153,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,   182,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
     197,   198,     4,   200,    -1,    -1,     8,   204,   205,    11,
     207,    13,    14,    15,    -1,    17,    -1,    -1,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    87,    -1,    37,     4,    -1,    -1,    -1,
       8,    -1,    96,    11,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      -1,   115,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,
       4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    87,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    96,    -1,    30,    31,    -1,    -1,
     154,    -1,    -1,    37,    -1,     4,    -1,    -1,    -1,     8,
      -1,    -1,    11,   115,    13,    14,    15,    -1,    17,    87,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    96,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,     4,    -1,    -1,    -1,     8,    -1,   115,    -1,    -1,
      13,    14,    15,    87,    17,    -1,    -1,    20,    21,    22,
      23,    -1,    96,    -1,    27,    -1,     4,    30,    31,    -1,
       8,    -1,    -1,    -1,    37,    13,    14,    15,    -1,    17,
      -1,   115,    20,    21,    22,    23,    -1,    -1,    87,    27,
      -1,    -1,    30,    31,    -1,    -1,     4,    96,    -1,    37,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    20,    21,    22,    23,   115,    -1,    -1,    27,
      -1,     4,    30,    31,    87,     8,    -1,    -1,    -1,    37,
      13,    14,    15,    96,    17,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    87,
      -1,    -1,   115,    -1,    37,    -1,    -1,     4,    96,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    21,    22,    23,   115,    -1,    87,
      27,    -1,    -1,    30,    31,    -1,    -1,    -1,    96,    -1,
      37,    -1,     4,     5,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    13,    14,    15,    87,    17,    -1,   115,    20,    21,
      22,    23,    -1,    96,    -1,    -1,    -1,     4,    30,    31,
      -1,     8,    -1,    -1,    -1,    37,    13,    14,    15,    -1,
      17,    -1,   115,    20,    21,    22,    23,    -1,    -1,    -1,
      87,    -1,    -1,    30,    31,    -1,    -1,     4,    -1,    96,
      37,     8,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    21,    22,    23,    -1,   115,    -1,
      27,    -1,    -1,    30,    31,    87,    -1,    -1,     4,    -1,
      37,    -1,     8,    -1,    96,    72,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,
      87,    27,    -1,   115,    30,    31,    -1,    -1,     4,    96,
      -1,    37,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    20,    21,    22,    23,   115,    -1,
      87,    27,    -1,     4,    30,    31,    -1,     8,    -1,    96,
      -1,    37,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,   115,    30,
      31,    87,    -1,    -1,    -1,    -1,    37,    -1,    -1,     4,
      96,    -1,    -1,     8,    -1,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    20,    21,    22,    23,   115,
      -1,    87,    27,    -1,     4,    30,    31,    -1,     8,    -1,
      96,    72,    37,    13,    14,    15,    -1,    17,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    87,    27,    -1,   115,
      30,    31,    -1,    -1,     4,    96,    -1,    37,     8,    -1,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      20,    21,    22,    23,   115,    -1,    -1,    27,    -1,     4,
      30,    31,    87,     8,    -1,    -1,    -1,    37,    13,    14,
      15,    96,    17,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    87,    -1,    -1,
     115,    -1,    37,    -1,    -1,     4,    96,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    21,    22,    23,   115,    -1,    87,    27,    -1,
       4,    30,    31,    -1,     8,    -1,    96,    -1,    37,    13,
      14,    15,    -1,    17,    -1,    -1,    20,    21,    22,    23,
      -1,    -1,    87,    -1,    28,   115,    30,    31,    -1,    -1,
       4,    96,    -1,    37,     8,    -1,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    20,    21,    22,    23,
     115,    -1,    -1,    27,    -1,     4,    30,    31,    87,     8,
      -1,    -1,    -1,    37,    13,    14,    15,    96,    17,    -1,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    87,    -1,    -1,   115,    -1,    37,    -1,
      -1,    -1,    96,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,   115,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    87,    -1,
      -1,   115,   126,    -1,    -1,    -1,    -1,    96,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   151,   152,    -1,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   184,   219,    16,   220,   222,   223,     0,   220,
     222,   185,    34,    36,    51,    52,    54,    64,    70,    91,
     100,   102,   107,   108,   231,   456,   457,   458,   459,   462,
     464,   467,   469,   472,   473,   474,   475,   476,   488,   493,
     497,   498,   499,   501,   502,   503,   504,   505,   510,   514,
     517,   518,    43,    62,   224,   228,    26,    52,    70,   129,
     144,   487,    93,    98,   101,   129,   487,   513,    16,    59,
      77,   180,   481,   487,    16,    59,    87,    92,   479,   486,
     487,    93,   197,   198,   200,   453,   454,   587,    80,   484,
     588,   589,    39,    53,    67,   141,   221,   251,   253,   257,
     261,   264,    29,    52,   457,   487,    12,   185,   590,     1,
     200,   225,   229,   185,   487,   147,    35,    61,   109,   482,
     589,    95,   147,   589,    50,   489,   480,   481,   588,    16,
      16,   101,   129,   482,   513,   494,   478,   479,    16,   588,
     142,   275,   276,    18,    50,   148,    85,    64,   275,   265,
      16,   266,   262,    57,    69,   130,   252,   222,    61,   483,
     588,   185,   500,   197,   128,   230,   233,    93,   587,   275,
     453,   587,   275,   587,   363,   364,    16,   275,   491,   465,
      95,   103,   147,    50,   363,    16,   460,   275,   275,   486,
       6,    18,    19,    21,    23,    42,    47,    49,    56,    60,
      74,    75,    82,    83,    88,    93,    94,   101,   104,   105,
     110,   113,   138,   150,   173,   175,   190,   191,   192,   193,
     194,   199,   201,   202,   203,   353,   410,   411,   412,   413,
     414,   416,   417,   418,   422,   429,   433,   443,   447,   448,
     453,   455,   194,   587,   120,    48,    16,   266,   258,    77,
     114,   117,   177,   180,   267,   268,   269,   270,     5,    18,
      31,   263,   405,   406,   416,   420,   453,   254,   255,   156,
     275,    52,    70,   501,   191,   194,   197,   200,   226,   227,
     417,     1,   198,    63,   181,   234,   485,   515,   232,   511,
     177,   194,    91,   496,    18,    19,    21,    23,    80,   111,
     365,   366,   367,   370,   373,   398,   404,   416,   419,   420,
     433,   443,   444,   447,   448,   453,   455,   468,   201,   324,
     368,   369,   373,   363,   275,   587,   589,   587,   587,   495,
     463,   363,    59,   588,   422,    39,   253,   422,    28,   422,
     422,    18,    18,   179,   422,   430,    18,    18,    18,    18,
      18,   453,    18,    18,    18,    18,    18,   111,   436,    10,
     196,   354,   355,    31,    69,   422,   422,    24,    32,   451,
     452,     4,     8,    13,    14,    15,    17,    20,    21,    22,
      23,    30,    31,    37,    87,    96,   115,   428,    27,   148,
     587,   470,    16,   180,   278,   363,   109,   109,   109,   109,
      16,   453,   421,   422,   266,   406,   266,    31,   256,   408,
     409,   422,   483,   487,    11,   200,   453,   588,   520,    16,
     520,    78,   577,   578,    18,   579,    16,   490,    27,   400,
     399,   443,   443,   371,    26,    12,   370,   370,   373,   375,
     374,   363,    12,    26,    16,    40,    45,    76,    80,   106,
     123,   129,   142,   178,   325,   326,   328,   332,   335,   339,
     340,   342,   356,    12,   466,   587,   266,   477,   363,   461,
     177,   275,   426,   427,    27,   416,   422,   430,     1,    71,
     179,   422,    69,   422,   422,   434,    69,   422,    27,   422,
     437,   453,   266,    27,    31,   422,    27,    11,    27,    29,
       1,   197,   198,   200,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   201,   424,   423,   425,
     435,   436,   120,   363,   280,    16,   266,   259,   124,   271,
     422,    27,   277,   278,   278,    11,   422,    11,   227,   235,
     275,    16,    77,   180,   570,   233,    16,   206,    11,   124,
     506,    79,    87,   126,   153,   182,   204,   580,   581,   582,
     584,   586,   506,   363,   477,   398,   402,   403,   404,     1,
       6,     9,    18,    33,    69,   377,   392,   393,   394,   395,
     397,   416,   420,   453,   455,   407,   416,   420,   453,   455,
     370,   373,   376,   377,   377,   324,   492,   336,    18,   352,
     429,   431,   453,   341,   352,   407,   354,     1,    16,   103,
     487,   343,    12,   324,    69,   176,   338,   340,   368,   477,
     278,   477,   142,   266,   254,    27,   154,    71,   422,   422,
      27,    27,    27,    18,   111,   438,   439,   422,    27,     1,
      11,    27,   278,    27,    27,   422,   204,   436,   422,   436,
     587,    91,   253,   281,   322,   324,   279,   278,   324,    18,
       5,    81,   282,   283,   282,   422,   422,     1,    16,    18,
      61,    80,   236,   241,   271,   516,   146,   204,   206,    18,
     194,    26,   512,   579,   578,    18,    27,    11,   586,    27,
     403,    18,    33,   453,   397,   393,    18,    28,    29,   401,
     378,     7,    30,    16,    23,    25,    31,   372,    29,   282,
     321,   322,   324,   422,   432,    18,   333,   327,   329,   415,
     416,   453,    18,   201,   344,   347,   417,   324,   176,    16,
     282,   275,   278,   266,   422,   422,    72,   154,    16,    27,
     422,   440,   441,    27,     1,   422,   124,   151,   382,    27,
      13,    16,   323,    26,   281,   282,    26,   272,    48,    84,
     295,   201,   246,   453,   201,   243,   244,   245,    80,   246,
     239,    19,    26,    41,    52,    68,    70,   205,   207,   444,
     447,   518,   519,   530,   531,   533,   534,   535,   539,   545,
     547,   566,   567,   585,   586,   587,    18,   194,   571,    37,
      37,   195,   530,   131,    27,    44,    60,    65,    94,   131,
     507,   508,   582,   583,   586,   393,    16,    23,    25,    31,
      27,   393,     1,    12,    28,   392,     1,   380,   381,   403,
     394,   395,    11,   191,   396,    16,    26,    27,   436,   422,
      16,   321,    31,    61,   449,   450,   453,   357,   346,    16,
     337,   382,   278,    72,   422,   442,     1,    11,    27,    18,
     204,   422,   363,   254,   260,    27,   197,   273,   274,   284,
     296,   125,   298,    33,   201,   247,   453,    11,    27,    11,
     201,    16,    16,    99,   242,    28,   101,   587,   589,   487,
     487,    12,    26,    80,   119,   124,   127,   149,   548,   572,
     546,    18,   195,    37,   204,   204,   583,   587,   194,   586,
     194,   509,    11,    27,   116,   586,    27,   396,    27,   379,
      11,   382,   191,    11,    26,   369,   382,    27,   334,   330,
      61,   453,    18,   360,    27,   347,   350,   321,    27,   282,
     324,     1,   441,   383,    27,   471,   266,   282,   275,    11,
      27,    13,    14,    15,    17,    18,    19,    20,    21,    22,
      23,    30,    31,    58,    83,   132,   285,   286,   287,   288,
     294,   416,   429,   431,   297,   352,    48,    46,    97,   122,
     178,   306,   308,   309,   310,   111,   201,   248,   444,   447,
     448,   453,   201,   237,   201,   246,   246,    18,    16,    95,
      37,   177,   587,   101,   129,   587,   589,    26,   532,   567,
     567,    18,   567,   567,    16,     1,    19,    33,   551,   553,
     565,   567,   575,   576,   585,   204,   521,   176,   508,   116,
     380,     1,    12,    29,   381,    26,    26,   191,    26,   321,
      16,   361,   358,   345,    26,   174,   175,   351,   444,   447,
     448,   453,   455,   382,    26,    79,    86,    90,   121,   126,
     133,   134,   135,   136,   137,   139,   140,   151,   152,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   384,   385,   386,   387,   388,   389,
     391,   477,   278,   197,   422,   422,    18,   143,    18,   287,
     352,   299,   311,   275,   275,    18,   347,   307,   308,   305,
     306,    26,   242,   247,   247,   244,   245,   240,   587,   540,
     147,   177,    95,   587,   533,   549,    27,    73,   125,   145,
     177,   573,   574,   541,    28,    29,   554,    27,    11,   522,
     523,   194,    26,   331,    27,    62,    87,   197,   362,   266,
      16,    27,   422,   194,   197,   200,   204,   416,   422,   416,
     422,   204,   194,   191,   191,   416,    18,   422,   422,    18,
      18,    11,    27,    18,   282,   275,    27,    28,    38,    66,
     300,   303,   304,   416,   429,   431,    18,   300,   300,   201,
     314,   315,   417,   346,    16,   309,   309,   238,   248,   248,
      27,    27,   324,   542,   544,   547,   566,   587,   147,   587,
      60,   563,   191,    73,   204,    11,    27,    26,   536,   537,
     539,   552,     1,   555,   557,   566,   585,   523,   153,   524,
     321,   197,    31,   390,   416,   226,    16,   348,   390,   390,
     194,   416,   385,   437,    26,    27,    11,   301,   303,    18,
      19,   191,    18,   125,   289,   290,    27,    16,   315,    27,
     350,     1,    16,   249,   422,    26,    26,    26,   572,   565,
     572,   587,    93,   453,   585,   550,   574,    12,    26,   553,
      11,    37,   562,   558,   182,   525,   226,    11,   359,    18,
      26,   349,    27,    27,    27,    27,    27,   382,   302,   303,
     303,   422,   422,    27,   300,    48,    11,    27,   312,   313,
      26,   250,    16,   557,   572,    18,    94,   564,    26,   538,
     556,   587,   563,    98,   416,   321,   350,    37,    37,    11,
      27,    28,    27,    35,    69,   291,   292,   290,    18,   316,
     317,   318,    16,   324,   543,   194,   194,   585,   539,   557,
     559,   585,    27,   416,   416,   303,   300,    18,   157,   174,
     175,   319,   320,   444,   447,   448,   453,   455,    26,   318,
     348,    26,   536,    27,   562,   564,   120,   526,    27,    18,
     191,   445,    27,   320,    26,   560,    18,   124,   527,   422,
      11,   181,   293,   568,   569,   570,   576,    18,    11,    27,
     106,   191,   446,   155,    18,   561,   570,    27,   204,   528,
     529,   422,   293,   191,   293,   572,   194,    11,    27,    27,
      18,    18,   529,   293,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   218,   219,   219,   219,   219,   220,   220,   220,   221,
     221,   221,   221,   222,   223,   223,   225,   224,   226,   226,
     227,   227,   227,   227,   227,   228,   228,   228,   229,   229,
     230,   230,   230,   231,   232,   231,   233,   233,   235,   234,
     237,   238,   236,   239,   240,   236,   236,   241,   241,   241,
     242,   242,   242,   243,   243,   243,   244,   244,   245,   245,
     246,   246,   247,   247,   247,   248,   248,   248,   248,   248,
     248,   250,   249,   249,   249,   252,   251,   253,   253,   253,
     253,   255,   254,   256,   256,   256,   258,   257,   259,   260,
     257,   262,   261,   263,   263,   265,   264,   266,   266,   267,
     268,   268,   269,   269,   269,   269,   270,   270,   270,   270,
     271,   272,   271,   273,   273,   274,   274,   276,   275,   277,
     277,   279,   278,   280,   278,   281,   281,   282,   282,   282,
     283,   284,   283,   285,   285,   286,   286,   287,   287,   287,
     287,   287,   287,   288,   288,   288,   289,   289,   290,   290,
     290,   291,   291,   291,   291,   291,   292,   292,   292,   293,
     293,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   295,   296,   295,   297,   297,   298,   299,   298,   300,
     300,   300,   301,   301,   302,   302,   303,   303,   303,   303,
     303,   303,   304,   304,   304,   305,   305,   306,   307,   307,
     308,   309,   309,   311,   312,   310,   310,   313,   310,   314,
     314,   315,   315,   316,   316,   317,   317,   318,   319,   319,
     320,   320,   320,   320,   320,   320,   320,   321,   321,   323,
     322,   324,   324,   324,   324,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   327,   326,   326,   329,   330,
     331,   328,   333,   334,   332,   336,   335,   337,   335,   338,
     338,   339,   339,   341,   340,   343,   342,   344,   345,   344,
     346,   346,   347,   347,   348,   348,   349,   350,   350,   351,
     351,   351,   351,   351,   351,   351,   352,   352,   352,   353,
     353,   355,   354,   357,   358,   359,   356,   360,   360,   361,
     361,   362,   362,   362,   362,   364,   363,   365,   365,   365,
     365,   366,   366,   366,   367,   367,   367,   367,   368,   368,
     369,   369,   371,   372,   370,   374,   373,   375,   373,   373,
     376,   376,   378,   377,   379,   377,   377,   377,   377,   380,
     380,   380,   380,   380,   380,   381,   382,   382,   383,   382,
     384,   384,   385,   385,   385,   385,   385,   385,   386,   386,
     386,   386,   386,   386,   386,   387,   387,   387,   388,   388,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   390,   390,   391,   391,
     391,   391,   391,   392,   392,   392,   392,   392,   393,   393,
     394,   394,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   396,   396,   396,   396,   397,   397,   397,   397,
     397,   397,   397,   399,   398,   400,   398,   398,   401,   401,
     402,   402,   403,   403,   404,   404,   405,   405,   406,   406,
     406,   406,   407,   407,   407,   407,   408,   408,   409,   409,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   411,
     412,   412,   412,   412,   412,   412,   413,   414,   414,   415,
     415,   416,   416,   416,   417,   418,   418,   419,   419,   419,
     419,   419,   419,   419,   421,   420,   422,   422,   422,   422,
     422,   423,   422,   424,   422,   425,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   426,
     422,   427,   422,   422,   422,   428,   422,   422,   422,   422,
     422,   422,   422,   422,   429,   429,   429,   429,   429,   429,
     429,   429,   430,   430,   430,   432,   431,   434,   433,   435,
     435,   436,   436,   436,   437,   437,   437,   437,   438,   438,
     439,   439,   439,   440,   440,   440,   440,   441,   442,   441,
     443,   443,   443,   443,   443,   444,   444,   444,   445,   446,
     446,   447,   447,   447,   448,   448,   449,   449,   450,   450,
     450,   450,   451,   451,   452,   452,   452,   452,   453,   453,
     454,   454,   455,   455,   456,   456,   456,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   458,   460,   461,   459,   463,   462,   465,   466,   464,
     468,   467,   470,   471,   469,   472,   473,   473,   474,   474,
     475,   476,   477,   477,   478,   478,   479,   480,   480,   481,
     482,   482,   482,   482,   483,   483,   484,   484,   485,   485,
     486,   486,   487,   487,   489,   490,   488,   491,   492,   488,
     494,   495,   493,   496,   496,   497,   498,   498,   498,   499,
     500,   499,   501,   501,   501,   502,   502,   502,   502,   502,
     503,   503,   504,   505,   505,   506,   506,   506,   507,   507,
     508,   508,   508,   508,   508,   508,   509,   509,   511,   512,
     510,   513,   513,   515,   516,   514,   517,   518,   518,   519,
     519,   520,   521,   520,   520,   522,   520,   520,   523,   523,
     524,   525,   525,   526,   526,   527,   527,   528,   528,   529,
     529,   530,   530,   530,   531,   532,   531,   533,   533,   533,
     533,   533,   534,   535,   535,   536,   536,   536,   537,   538,
     537,   540,   539,   539,   539,   541,   539,   539,   542,   543,
     542,   544,   546,   545,   547,   547,   548,   548,   548,   549,
     550,   548,   551,   552,   551,   554,   553,   553,   555,   556,
     555,   558,   559,   560,   561,   557,   557,   562,   562,   563,
     563,   563,   563,   564,   564,   564,   565,   565,   565,   566,
     566,   567,   567,   567,   567,   567,   568,   568,   569,   569,
     570,   570,   571,   571,   572,   572,   572,   573,   573,   574,
     574,   574,   574,   575,   575,   576,   576,   577,   577,   578,
     579,   580,   580,   581,   581,   582,   583,   583,   583,   583,
     584,   584,   585,   585,   585,   586,   586,   586,   586,   586,
     587,   587,   588,   588,   589,   589,   590,   590
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     4,     1,     1,     2,     3,     1,
       1,     1,     1,     5,     0,     2,     0,     4,     1,     3,
       1,     1,     1,     1,     1,     0,     2,     2,     0,     2,
       3,     2,     2,     0,     0,     8,     0,     2,     0,     4,
       0,     0,     7,     0,     0,     7,     1,     5,     7,     7,
       0,     4,     4,     0,     1,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     0,     6,     1,     2,     2,
       2,     0,     2,     1,     1,     1,     0,     7,     0,     0,
       9,     0,     6,     1,     1,     0,     4,     0,     2,     3,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       0,     0,     4,     1,     2,     2,     4,     0,     2,     0,
       1,     0,     4,     0,     3,     2,     1,     4,     6,     6,
       0,     0,     4,     1,     1,     1,     2,     3,     3,     1,
       1,     1,     1,     5,     4,     4,     1,     3,     2,     3,
       5,     2,     5,     7,     7,     9,     0,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     3,     1,     2,     0,     0,     4,     1,
       2,     3,     1,     2,     1,     3,     4,     4,     2,     1,
       1,     1,     0,     1,     1,     0,     1,     2,     0,     1,
       2,     0,     1,     0,     0,     7,     5,     0,     8,     1,
       2,     1,     1,     0,     1,     1,     2,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     0,
       8,     1,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     0,     4,     2,     0,     0,
       0,     8,     0,     0,     6,     0,     3,     0,     5,     1,
       2,     1,     2,     0,     5,     0,     3,     4,     0,     7,
       0,     2,     1,     1,     0,     2,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     0,     4,     0,     0,     0,    10,     0,     3,     0,
       2,     2,     3,     2,     2,     0,     3,     0,     1,     1,
       2,     1,     3,     2,     1,     3,     2,     2,     0,     1,
       1,     3,     0,     0,     7,     0,     3,     0,     3,     1,
       0,     1,     0,     3,     0,     5,     3,     3,     1,     1,
       3,     3,     3,     3,     1,     2,     0,     2,     0,     5,
       1,     3,     2,     2,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     4,     1,     2,     2,     2,     2,     2,
       1,     2,     1,     2,     1,     2,     4,     2,     2,     1,
       1,     4,     1,     6,     6,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     3,     3,     4,     2,     2,     2,     2,
       3,     1,     2,     4,     3,     3,     4,     3,     4,     2,
       2,     1,     1,     0,     4,     0,     4,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     2,
       3,     3,     4,     4,     4,     5,     3,     5,     7,     1,
       1,     2,     2,     2,     2,     2,     1,     2,     3,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     3,     3,     3,     3,
       3,     0,     4,     0,     4,     0,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     0,
       7,     0,     9,     1,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     4,     2,
       6,     5,     4,     5,     2,     0,     3,     0,     4,     0,
       1,     1,     2,     3,     1,     3,     3,     2,     0,     1,
       1,     2,     3,     1,     3,     3,     2,     1,     0,     4,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     2,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     0,     7,     0,     6,     0,     0,     7,
       0,     6,     0,     0,    11,     3,     3,     6,     5,     8,
       4,     3,     0,     3,     0,     1,     3,     0,     1,     3,
       1,     1,     1,     2,     1,     2,     0,     2,     0,     4,
       1,     1,     0,     1,     0,     0,     7,     0,     0,     8,
       0,     0,     6,     0,     3,     5,     1,     1,     1,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     7,     5,     7,     5,     0,     3,     4,     1,     3,
       2,     2,     2,     1,     1,     2,     1,     3,     0,     0,
       9,     1,     1,     0,     0,     9,     5,     5,     6,     3,
       4,     0,     0,     7,     5,     0,     8,     2,     0,     2,
       6,     0,     1,     0,     4,     0,     4,     1,     3,     1,
       2,     1,     2,     3,     1,     0,     4,     1,     1,     1,
       1,     1,     4,     5,     4,     1,     2,     3,     1,     0,
       4,     0,     5,     6,     7,     0,     5,     1,     1,     0,
       5,     3,     0,     3,     0,     2,     2,     2,     2,     0,
       0,     6,     1,     0,     4,     0,     3,     1,     2,     0,
       5,     0,     0,     0,     0,     9,     1,     0,     2,     0,
       2,     5,     2,     0,     2,     2,     1,     2,     1,     1,
       2,     1,     1,     1,     4,     1,     0,     1,     1,     2,
       3,     2,     2,     1,     0,     3,     4,     1,     3,     2,
       1,     2,     2,     0,     1,     1,     3,     1,     3,     5,
       3,     0,     1,     1,     3,     3,     1,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     0,     1,     1,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (sparp_arg, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, sparp_arg); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sparp_t * sparp_arg)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (sparp_arg);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sparp_t * sparp_arg)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, sparp_arg);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, sparp_t * sparp_arg)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , sparp_arg);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, sparp_arg); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, sparp_t * sparp_arg)
{
  YYUSE (yyvaluep);
  YYUSE (sparp_arg);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (sparp_t * sparp_arg)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, sparp_arg);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 625 "sparql_p.y" /* yacc.c:1646  */
    { sparp_arg->sparp_entire_query = (yyval.tree) = (yyvsp[-1].tree); }
#line 3522 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 3:
#line 626 "sparql_p.y" /* yacc.c:1646  */
    { sparp_arg->sparp_entire_query = (yyval.tree) = (yyvsp[-2].tree); }
#line 3528 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 4:
#line 627 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_entire_query = (yyval.tree) = spar_make_topmost_qm_sql (sparp_arg); }
#line 3535 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 5:
#line 629 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "(internal SPARQL processing error) SPARQL mark expected"); }
#line 3541 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 6:
#line 633 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_topmost_sparul_sql (sparp_arg, (SPART **)t_list (0) ); }
#line 3548 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 7:
#line 635 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_topmost_sparul_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[0].backstack)) ); }
#line 3555 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 8:
#line 637 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3561 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 14:
#line 655 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 3567 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 15:
#line 656 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 3573 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 16:
#line 660 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "DEFINE"); }
#line 3579 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 17:
#line 661 "sparql_p.y" /* yacc.c:1646  */
    {
		dk_set_t vals = (yyvsp[0].backstack);
		while (NULL != vals) {
		    void * *val = (void * *)t_set_pop (&vals);
		    sparp_define (sparp_arg, (yyvsp[-1].box), (ptrlong)(val[0]), val[1]);
		  } }
#line 3590 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 18:
#line 670 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 3596 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 19:
#line 671 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 3602 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 20:
#line 675 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)QNAME, (yyvsp[0].box)); }
#line 3608 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 21:
#line 676 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)Q_IRI_REF, (yyvsp[0].box)); }
#line 3614 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 22:
#line 677 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)SPARQL_STRING, (yyvsp[0].box)); }
#line 3620 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 23:
#line 678 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)SPARQL_INTEGER, (yyvsp[0].box)); }
#line 3626 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 24:
#line 679 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)SPAR_VARIABLE, (void *)(yyvsp[0].tree)); }
#line 3632 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 25:
#line 683 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 3638 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 26:
#line 684 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != sparp_env()->spare_base_uri)
		  sparyyerror (sparp_arg, "Only one base declaration is allowed");
		sparp_env()->spare_base_uri = (yyvsp[0].box); }
#line 3647 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 27:
#line 688 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Missing <iri-string> after BASE keyword"); }
#line 3653 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 28:
#line 692 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 3659 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 29:
#line 693 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 3665 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 30:
#line 697 "sparql_p.y" /* yacc.c:1646  */
    {
                if ((!strcmp ("sql:", (yyvsp[-1].box)) && strcmp ("sql:", (yyvsp[0].box)) && strcmp (OPENLINKSW_SQL_NS_URI, (yyvsp[0].box)))
                  || (!strcmp ("bif:", (yyvsp[-1].box)) && strcmp ("bif:", (yyvsp[0].box)) && strcmp (OPENLINKSW_BIF_NS_URI, (yyvsp[0].box))))
		  sparyyerror (sparp_arg, "Prefixes 'sql:' and 'bif:' are reserved for SQL names");
		t_set_push (&(sparp_env()->spare_namespace_prefixes), sparp_expand_q_iri_ref (sparp_arg, (yyvsp[0].box)));
		t_set_push (&(sparp_env()->spare_namespace_prefixes), t_box_dv_short_nchars ((yyvsp[-1].box), box_length ((yyvsp[-1].box))-2)); }
#line 3676 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 31:
#line 703 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Missing <namespace-iri-string> in PREFIX declaration"); }
#line 3682 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 32:
#line 704 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Missing namespace prefix after PREFIX keyword"); }
#line 3688 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 34:
#line 709 "sparql_p.y" /* yacc.c:1646  */
    {
		if (sparp_arg->sparp_macro_def_count)
		  sparyyerror (sparp_arg, "Some macro are defined before CREATE MACRO LIBRARY");
		sparp_arg->sparp_macrolib_to_create = (yyvsp[0].tree)->_.qname.val;
		sparp_arg->sparp_disable_storage_macro_lib = 2; }
#line 3698 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 36:
#line 718 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 3704 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 37:
#line 719 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 3710 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 38:
#line 725 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *new_macro;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		sparp_arg->sparp_macro_mode = SPARP_DEFARG;
		new_macro = sparp_arg->sparp_current_macro = sparp_defmacro_init (sparp_arg, (yyvsp[0].tree)->_.qname.val);
		sparp_defmacro_store (sparp_arg, new_macro); }
#line 3722 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 39:
#line 732 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_defmacro_finalize (sparp_arg, (yyvsp[0].tree));
		sparp_arg->sparp_macro_mode = 0; }
#line 3730 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 40:
#line 738 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_current_macro->_.defmacro.paramnames = t_revlist_to_array ((yyvsp[-1].backstack));	 }
#line 3737 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 41:
#line 740 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		if (NULL != (yyvsp[0].backstack))
		  curr->_.defmacro.localnames = t_revlist_to_array ((yyvsp[0].backstack));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
#line 3747 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 42:
#line 745 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 3753 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 43:
#line 746 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *curr = sparp_arg->sparp_current_macro;
	    sparp_make_defmacro_paramnames_from_template (sparp_arg, curr); }
#line 3761 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 44:
#line 749 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		if (NULL != (yyvsp[-1].backstack))
		  curr->_.defmacro.localnames = t_revlist_to_array ((yyvsp[-1].backstack));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY;
		spar_gp_init (sparp_arg, DEFMACRO_L); }
#line 3772 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 45:
#line 755 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
#line 3778 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 46:
#line 756 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "List of arguments or template is expected after macro name"); }
#line 3784 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 47:
#line 761 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = 0;
		curr->_.defmacro.quad_pattern = (SPART **)t_list (4, NULL, (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[-1].tree));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
#line 3794 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 48:
#line 766 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = GRAPH_L;
		curr->_.defmacro.quad_pattern = (SPART **)t_list (4, (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[-1].tree));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
#line 3804 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 49:
#line 771 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = DEFAULT_L;
		curr->_.defmacro.quad_pattern = (SPART **)t_list (4, NULL, (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[-1].tree));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
#line 3814 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 50:
#line 779 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 3820 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 51:
#line 780 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); }
#line 3826 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 52:
#line 781 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); }
#line 3832 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 53:
#line 785 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 3838 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 56:
#line 791 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[-2].box));
		sparp_check_dm_arg_for_redecl (sparp_arg, (yyval.backstack), (yyvsp[0].box));
		t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 3848 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 57:
#line 796 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = (yyvsp[-2].backstack);
		sparp_check_dm_arg_for_redecl (sparp_arg, (yyval.backstack), (yyvsp[0].box));
		t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 3857 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 58:
#line 803 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 3863 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 59:
#line 804 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = (yyvsp[-1].backstack);
		sparp_check_dm_arg_for_redecl (sparp_arg, (yyval.backstack), (yyvsp[0].box));
		t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 3872 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 60:
#line 811 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[0].box)); }
#line 3878 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 62:
#line 816 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[0].box)); }
#line 3884 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 63:
#line 817 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_type); }
#line 3890 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 65:
#line 823 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[0].box)); }
#line 3896 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 67:
#line 825 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil); }
#line 3902 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 71:
#line 833 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = 0;
		spar_gp_init (sparp_arg, DEFMACRO_L); }
#line 3911 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 72:
#line 837 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
#line 3917 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 74:
#line 839 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Graph group pattern or expression is expected as the body of the macro"); }
#line 3923 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 75:
#line 845 "sparql_p.y" /* yacc.c:1646  */
    {
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
#line 3931 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 76:
#line 849 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[0].tree);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, (yyvsp[-5].token_type), (yyvsp[-3].trees), wm );
		if (SPAR_REQ_TOP == (yyval.tree)->type)
		  sparp_expand_top_retvals (sparp_arg, (yyval.tree), 0 /* never cloned, hence 0 == safely_copy_all_vars */, NULL); }
#line 3943 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 77:
#line 859 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SELECT_L; }
#line 3949 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 78:
#line 860 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SELECT_L; }
#line 3955 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 79:
#line 861 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = DISTINCT_L; }
#line 3961 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 80:
#line 862 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = COUNT_DISTINCT_L; }
#line 3967 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 81:
#line 866 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = sparp_arg->sparp_rset_lexdepth_plus_1; sparp_arg->sparp_rset_lexdepth_plus_1 = sparp_arg->sparp_lexdepth + 1; }
#line 3973 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 82:
#line 867 "sparql_p.y" /* yacc.c:1646  */
    { sparp_arg->sparp_rset_lexdepth_plus_1 = (yyvsp[-1].token_type); (yyval.trees) = (yyvsp[0].trees); }
#line 3979 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 83:
#line 871 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **) _STAR; }
#line 3985 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 84:
#line 873 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **) t_revlist_to_array ((yyvsp[0].backstack)); }
#line 3991 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 85:
#line 874 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "comma-delimited list of result set expressions");
		(yyval.trees) = (SPART **) t_revlist_to_array ((yyvsp[0].backstack)); }
#line 3999 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 86:
#line 880 "sparql_p.y" /* yacc.c:1646  */
    {
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 4006 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 87:
#line 883 "sparql_p.y" /* yacc.c:1646  */
    {
		const char *fmt_mode_name;
                const char *formatter, *agg_formatter, *agg_mdata;
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[0].tree);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, CONSTRUCT_L, NULL, wm );
		fmt_mode_name = (yyval.tree)->_.req_top.formatmode_name;
		ssg_find_formatter_by_name_and_subtype (fmt_mode_name, CONSTRUCT_L, &formatter, &agg_formatter, &agg_mdata);
		spar_compose_retvals_of_construct (sparp_arg, (yyval.tree), (yyvsp[-3].tree), formatter, agg_formatter, agg_mdata); }
#line 4021 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 88:
#line 893 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		sparp_arg->sparp_in_ctor_from_where = 1;
		spar_gp_init (sparp_arg, WHERE_L); }
#line 4030 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 89:
#line 897 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_in_ctor_from_where = 0; }
#line 4037 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 90:
#line 899 "sparql_p.y" /* yacc.c:1646  */
    {
		const char *fmt_mode_name;
		const char *formatter, *agg_formatter, *agg_mdata;
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[0].tree);
		SPART *tmpl_gp;
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, CONSTRUCT_L, NULL, wm );
		fmt_mode_name = (yyval.tree)->_.req_top.formatmode_name;
		ssg_find_formatter_by_name_and_subtype (fmt_mode_name, CONSTRUCT_L, &formatter, &agg_formatter, &agg_mdata);
		tmpl_gp = spar_compose_ctor_gp_from_where_gp (sparp_arg, CONSTRUCT_L, where_gp, NULL);
		spar_compose_retvals_of_construct (sparp_arg, (yyval.tree), tmpl_gp, formatter, agg_formatter, agg_mdata); }
#line 4054 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 91:
#line 915 "sparql_p.y" /* yacc.c:1646  */
    {
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 4061 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 92:
#line 918 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART * where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[0].tree);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DESCRIBE_L, (yyvsp[-3].trees), wm );
		if (((SPART **)_STAR == (yyvsp[-3].trees)) && (SPAR_REQ_TOP == (yyval.tree)->type))
		  sparp_expand_top_retvals (sparp_arg, (yyval.tree), 0 /* never cloned, hence 0 == safely_copy_all_vars */, NULL); }
#line 4073 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 93:
#line 928 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **) _STAR; }
#line 4079 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 94:
#line 929 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **) t_list_to_array ((yyvsp[0].backstack)); }
#line 4085 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 95:
#line 933 "sparql_p.y" /* yacc.c:1646  */
    {
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 4092 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 96:
#line 936 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART * where_gp = spar_gp_finalize (sparp_arg, NULL);
		(yyval.tree) = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0), NULL ); }
#line 4101 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 97:
#line 943 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4107 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 98:
#line 944 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4113 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 99:
#line 952 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_make_and_push_new_graph_source (sparp_arg, (yyvsp[-2].token_type), (yyvsp[-1].tree), (yyvsp[0].trees), SPARP_SSRC_FROZEN_BY_PROTOCOL); }
#line 4120 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 100:
#line 957 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != sparp_arg->sparp_env->spare_src.ssrc_graph_set_by_with)
		  sparyyerror (sparp_arg, "FROM can not be used in combination with WITH, use either consistent SPARUL syntax or SPARQL 1.1 syntax, not a mix");
		(yyval.token_type) = (yyvsp[0].token_type); }
#line 4129 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 101:
#line 961 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "USING keyword");
		(yyval.token_type) = (yyvsp[0].token_type); }
#line 4137 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 102:
#line 967 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_FROM; }
#line 4143 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 103:
#line 968 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_NAMED; }
#line 4149 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 104:
#line 969 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_NOT_FROM; }
#line 4155 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 105:
#line 970 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_NOT_NAMED; }
#line 4161 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 106:
#line 974 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_FROM; }
#line 4167 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 107:
#line 975 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_NAMED; }
#line 4173 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 108:
#line 976 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_NOT_FROM; }
#line 4179 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 109:
#line 977 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPART_GRAPH_NOT_NAMED; }
#line 4185 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 110:
#line 981 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = NULL; }
#line 4191 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 111:
#line 982 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0002, "OPTION () sponge configuration"); }
#line 4197 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 112:
#line 983 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (yyvsp[0].trees); }
#line 4203 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 113:
#line 987 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (0); }
#line 4209 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 114:
#line 988 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 4215 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 115:
#line 992 "sparql_p.y" /* yacc.c:1646  */
    {	/* [Virt]	SpongeOption	 ::=  QNAME PrecodeExpn */
		(yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[-1].box)); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4222 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 116:
#line 994 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = (yyvsp[-3].backstack); t_set_push (&((yyval.backstack)), (yyvsp[-1].box)); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4229 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 117:
#line 999 "sparql_p.y" /* yacc.c:1646  */
    { sparp_arg->sparp_in_precode_expn = 1; }
#line 4235 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1001 "sparql_p.y" /* yacc.c:1646  */
    { sparp_arg->sparp_in_precode_expn = 0; (yyval.tree) = (yyvsp[0].tree); }
#line 4241 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1005 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
#line 4249 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1008 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4255 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1012 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != sparp_arg->sparp_env->spare_need_for_default_sparul_target) /* trick for bug 16901 */
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, sparp_arg->sparp_env->spare_need_for_default_sparul_target, 0);
		if (NULL != sparp_arg->sparp_env->spare_src.ssrc_fallback_default_graph)
		  spar_apply_fallback_default_graph (sparp_arg, 0);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
#line 4267 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1019 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4273 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1020 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != sparp_arg->sparp_env->spare_need_for_default_sparul_target) /* trick for bug 16901 */
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, sparp_arg->sparp_env->spare_need_for_default_sparul_target, 0);
		if (NULL != sparp_arg->sparp_env->spare_src.ssrc_fallback_default_graph)
		  spar_apply_fallback_default_graph (sparp_arg, 0);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
#line 4285 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1027 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4291 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1031 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4297 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1032 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 4303 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1039 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (yyvsp[-3].trees), (yyvsp[-2].tree), (yyvsp[-1].trees), NULL, (SPART *)t_box_num (0), (yyvsp[0].tree)); }
#line 4309 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1040 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (yyvsp[-5].trees), (yyvsp[-4].tree), (yyvsp[-3].trees), (yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)); }
#line 4315 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1041 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (yyvsp[-5].trees), (yyvsp[-4].tree), (yyvsp[-3].trees), (yyvsp[-1].tree), (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 4321 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1045 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = NULL; }
#line 4327 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1046 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
#line 4334 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1048 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[0].backstack));
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
#line 4342 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1054 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[0].backstack); }
#line 4348 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1055 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4354 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1059 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4360 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1060 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4366 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1065 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 4372 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1066 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 4378 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1070 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "GROUP BY clause contains a binary operator expression that is not enclosed in (...)"); }
#line 4384 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1074 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF__GROUPING_SETS, (SPART **)t_revlist_to_array ((yyvsp[-1].backstack))); }
#line 4390 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1075 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF__ROLLUP, (SPART **)t_revlist_to_array ((yyvsp[-1].backstack))); }
#line 4396 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1076 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF__CUBE, (SPART **)t_revlist_to_array ((yyvsp[-1].backstack))); }
#line 4402 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1080 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4408 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1081 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4414 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1085 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF__GROUPING_SET, (SPART **)t_list (2, NULL,
		    sparp_make_builtin_call (sparp_arg, SPAR_BIF__GROUPING_LIST, (SPART **)t_list (0)) ) ); }
#line 4422 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1088 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF__GROUPING_SET,  (SPART **)t_list (2, NULL,
		    sparp_make_builtin_call (sparp_arg, SPAR_BIF__GROUPING_LIST, (SPART **)t_revlist_to_array ((yyvsp[-1].backstack))) ) ); }
#line 4430 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1091 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF__GROUPING_SET,  (SPART **)t_list (2, (yyvsp[-2].tree),
		    sparp_make_builtin_call (sparp_arg, SPAR_BIF__GROUPING_LIST, (SPART **)t_revlist_to_array ((yyvsp[-1].backstack))) ) ); }
#line 4438 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1097 "sparql_p.y" /* yacc.c:1646  */
    {
		if (0 == (yyvsp[-1].token_type))
		  (yyval.tree) = NULL;
		else
		  (yyval.tree) = sparp_make_builtin_call (sparp_arg, TOP_L, (SPART **)t_list (4, (yyvsp[-1].token_type), NULL, NULL, NULL)); }
#line 4448 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1102 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, TOP_L, (SPART **)t_list (4, (yyvsp[-4].token_type), (yyvsp[-2].tree), NULL, (yyvsp[-1].token_type))); }
#line 4455 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1104 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, TOP_L, (SPART **)t_list (4, (yyvsp[-6].token_type), (yyvsp[-3].tree), NULL, (yyvsp[-1].token_type))); }
#line 4462 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1106 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, TOP_L, (SPART **)t_list (4, (yyvsp[-6].token_type), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[-1].token_type))); }
#line 4469 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1108 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, TOP_L, (SPART **)t_list (4, (yyvsp[-8].token_type), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].token_type))); }
#line 4476 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1113 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 0; }
#line 4482 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1114 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = ALL_L; }
#line 4488 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1115 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = DISTINCT_L; }
#line 4494 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1119 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 0; }
#line 4500 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1120 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 1; }
#line 4506 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1138 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 4512 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1139 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
#line 4519 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1141 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = (yyvsp[0].tree);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
#line 4527 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1147 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 4533 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1148 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_BIN_OP ((yyval.tree), BOP_AND, (yyvsp[-1].tree), (yyvsp[0].tree)); }
#line 4539 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1152 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = NULL; }
#line 4545 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1153 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
#line 4552 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1155 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[0].backstack));
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
#line 4560 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1161 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4566 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1162 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = dk_set_conc ((yyvsp[0].backstack), t_cons ((void*) (yyvsp[-1].tree), NULL)); }
#line 4572 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1163 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = dk_set_conc ((yyvsp[0].backstack), t_cons ((void*) (yyvsp[-2].tree), NULL)); }
#line 4578 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1167 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4584 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1168 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4590 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1172 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4596 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1173 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4602 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1178 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[-3].token_type), (yyvsp[-1].tree)); }
#line 4608 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1179 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[-3].token_type), (yyvsp[-1].tree)); }
#line 4614 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1180 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[-1].token_type), (yyvsp[0].box)); }
#line 4620 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1181 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[0].tree)); }
#line 4626 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1182 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[0].tree)); }
#line 4632 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1183 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[0].tree)); }
#line 4638 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1187 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 0; }
#line 4644 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1188 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = ASC_L; }
#line 4650 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1189 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = DESC_L; }
#line 4656 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1193 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 4662 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1198 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = ((NULL != (yyvsp[0].tree)) ? (yyvsp[0].tree) : (SPART *)(t_box_num_nonull (0))); }
#line 4668 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1202 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 4674 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1207 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = ((NULL != (yyvsp[0].tree)) ? (yyvsp[0].tree) : ((SPART *)t_box_num_nonull (0))); }
#line 4680 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1211 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 4686 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1212 "sparql_p.y" /* yacc.c:1646  */
    {
		if (sparp_arg->sparp_macro_mode)
		  sparyyerror (sparp_arg, "BINDINGS and trailing VALUES can not be used inside macro");
		(yyval.tree) = spar_make_bindings_inv_with_fake_equivs (sparp_arg,
		  sparp_arg->sparp_env->spare_bindings_vars, sparp_arg->sparp_env->spare_bindings_rowset, NULL); }
#line 4696 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1219 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != sparp_arg->sparp_env->spare_bindings_vars)
		  sparyyerror (sparp_arg, "Only one BINDINGS or trailing VALUES clause per query is allowed"); }
#line 4704 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1222 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_env->spare_bindings_vars = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 4711 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1224 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_env->spare_bindings_rowset = (SPART ***)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 4718 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1226 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART ***mtrx = (SPART ***)t_revlist_to_array ((yyvsp[-1].backstack));
		int ctr = BOX_ELEMENTS (mtrx);
		while (ctr--) mtrx[ctr] = (SPART **)t_list (1, mtrx[ctr]);
		if (NULL != sparp_arg->sparp_env->spare_bindings_vars)
		  sparyyerror (sparp_arg, "Only one BINDINGS or trailing VALUES clause per query is allowed");
		sparp_arg->sparp_env->spare_bindings_vars = (SPART **)t_list (1, spar_make_variable (sparp_arg, (yyvsp[-3].box)));
		sparp_arg->sparp_env->spare_bindings_rowset = mtrx; }
#line 4731 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1234 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART **vars = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack));
		if (NULL != sparp_arg->sparp_env->spare_bindings_vars)
		  sparyyerror (sparp_arg, "Only one BINDINGS or trailing VALUES clause per query is allowed");
		sparp_arg->sparp_env->spare_bindings_vars = vars;
		sparp_arg->sparp_env->spare_inline_data_colcount = BOX_ELEMENTS (vars); }
#line 4742 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1240 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_env->spare_bindings_rowset = (SPART ***)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 4749 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1245 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), spar_make_variable (sparp_arg, (yyvsp[0].box))); }
#line 4755 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1246 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), spar_make_variable (sparp_arg, (yyvsp[0].box))); }
#line 4761 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1250 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4767 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1251 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Global variable can not be used in the header of BINDINGS"); }
#line 4773 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1255 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 4779 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1260 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].trees)); }
#line 4785 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1261 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].trees)); }
#line 4791 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1265 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack));
		if (BOX_ELEMENTS ((yyval.trees)) != BOX_ELEMENTS (sparp_arg->sparp_env->spare_bindings_vars))
		  sparyyerror (sparp_arg, "Number of values in a binding does not match number of variables to bind"); }
#line 4800 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1272 "sparql_p.y" /* yacc.c:1646  */
    {(yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4806 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1273 "sparql_p.y" /* yacc.c:1646  */
    {(yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 4812 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1282 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "UNBOUND in BINDINGS is deprecated, use UNDEF instead"); (yyval.tree) = NULL; }
#line 4818 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1283 "sparql_p.y" /* yacc.c:1646  */
    {(yyval.tree) = NULL; }
#line 4824 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1287 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_gp_finalize (sparp_arg, (yyvsp[0].trees));
		sparp_validate_options_of_tree (sparp_arg, (yyval.tree), (yyval.tree)->_.gp.options); }
#line 4832 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1290 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 4838 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1294 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.token_type) = (ptrlong)(sparp_env()->spare_context_gp_subtypes->data);
		if (NULL == sparp_env()->spare_context_sinvs) { /* There's an exception related to codegen-time optimization SERVICE { SELECT {x}} like it is SERVICE {x}, so no error right here. */
		    SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0111, "subquery"); }
		if ((SERVICE_L == (yyval.token_type)) || (OPTIONAL_L == (yyval.token_type)) || (WHERE_L == (yyval.token_type)))
		  spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1;
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
#line 4853 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1306 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *subselect_top;
		SPART *where_gp;
		SPART *wm = (yyvsp[-2].tree);
		SPART *res;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		wm->_.wm.where_gp = where_gp;
		subselect_top = spar_make_top_or_special_case_from_wm (sparp_arg, (yyvsp[-7].token_type), (yyvsp[-5].trees), wm );
		if (SPAR_REQ_TOP == subselect_top->type)
		  sparp_expand_top_retvals (sparp_arg, subselect_top, 1 /* safely_copy_all_vars */, NULL);
		spar_env_pop (sparp_arg);
		if ((NULL != (yyvsp[0].trees)) && (WHERE_L == (yyval.token_type)))
		  sparyyerror (sparp_arg, "The use of OPTIONS requires WHERE { { SELECT { ... } } OPTIONS (...) } syntax, to avoid ambiguity");
		res = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[0].trees), subselect_top);
		if ((SERVICE_L == (yyvsp[-6].token_type)) || (OPTIONAL_L == (yyvsp[-6].token_type)) || (WHERE_L == (yyval.token_type)))
		  {
		    spar_gp_add_member (sparp_arg, res);
		    res = spar_gp_finalize (sparp_arg, NULL);
		  }
		(yyval.tree) = res;
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
#line 4879 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1330 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4885 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1331 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4891 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1332 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 4897 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1333 "sparql_p.y" /* yacc.c:1646  */
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  {
		    SPART *curmacro = sparp_arg->sparp_current_macro;
		    SPART *mpu;
		    int pos = sparp_namesake_macro_param (sparp_arg, curmacro, (yyvsp[-2].box));
		    if (0 > pos)
		      spar_error (sparp_arg, "Pattern variable '%.100s' inside the body of a macro '%.100s' is not listed in list of macro parameters",
		        (yyvsp[-2].box), curmacro->_.defmacro.mname );
		    mpu = spar_make_macropu (sparp_arg, (yyvsp[-2].box), pos);
		    spar_gp_add_member (sparp_arg, mpu);
		  }
		else
		  sparyyerror (sparp_arg, "Ill formed triple pattern or macro pattern variable outside a macro body"); }
#line 4916 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1350 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 4922 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1351 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 4928 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1352 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 4934 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1353 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 4940 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1354 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 4946 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1355 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_finalize_binds (sparp_arg, (yyvsp[0].backstack)); }
#line 4952 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1356 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 4958 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1357 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_filter (sparp_arg, (yyvsp[0].tree), 1); }
#line 4964 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1358 "sparql_p.y" /* yacc.c:1646  */
    {  spar_gp_add_filter (sparp_arg, sparp_make_builtin_call (sparp_arg, ASSUME_L, (SPART **)t_list (1, (yyvsp[0].tree))), 1); }
#line 4970 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1359 "sparql_p.y" /* yacc.c:1646  */
    {					/*... | 'MINUS' DatasetClause* WhereClause */
		/*!!! Dirty hack! Works wrong if MINUS is at the middle of the GP (before smth or not a 2-nd item) */
		  SPART *expn;
		  SPAR_BIN_OP (expn, BOP_NOT, (yyvsp[0].tree), NULL);
		  spar_gp_add_filter (sparp_arg, expn, 1); }
#line 4980 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1367 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_init (sparp_arg, OPTIONAL_L); }
#line 4986 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1367 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 4992 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1368 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Missing '{' after OPTIONAL keyword"); }
#line 4998 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1372 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0001, "QUAD MAP { ... } group pattern"); }
#line 5004 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1373 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&(sparp_env()->spare_context_qms), (yyvsp[0].trees)); }
#line 5010 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1374 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_gp_init (sparp_arg, 0); }
#line 5017 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1376 "sparql_p.y" /* yacc.c:1646  */
    { t_set_pop (&(sparp_env()->spare_context_qms)); (yyval.tree) = (yyvsp[0].tree); }
#line 5023 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1381 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&(sparp_env()->spare_context_graphs), (yyvsp[0].tree)); }
#line 5029 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1382 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_gp_init (sparp_arg, 0);
		spar_gp_add_filters_for_named_graph (sparp_arg); }
#line 5037 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1385 "sparql_p.y" /* yacc.c:1646  */
    { t_set_pop (&(sparp_env()->spare_context_graphs)); (yyval.tree) = (yyvsp[0].tree); }
#line 5043 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1389 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_init (sparp_arg, 0); }
#line 5049 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1389 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 5055 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1390 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_env()->spare_good_graph_varnames = sparp_env()->spare_good_graph_bmk;
		if ((yyvsp[-1].token_type) != (yyvsp[-2].tree)->_.gp.subtype) {
		    spar_gp_init (sparp_arg, (yyvsp[-1].token_type));
		    spar_gp_add_member (sparp_arg, (yyvsp[-2].tree)); }
		spar_gp_init (sparp_arg, 0); }
#line 5066 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1396 "sparql_p.y" /* yacc.c:1646  */
    {
		if ((yyvsp[-3].token_type) != (yyvsp[-4].tree)->_.gp.subtype) {
		    spar_gp_add_member (sparp_arg, (yyvsp[0].tree));
		    (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
		else {
		    (yyval.tree)->_.gp.members = (SPART **)t_list_concat_tail ((void *)((yyval.tree)->_.gp.members), 1, (yyvsp[0].tree));
		    (yyval.tree) = (yyvsp[-4].tree); }
		}
#line 5079 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1407 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = UNION_L; }
#line 5085 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1408 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SPAR_UNION_WO_ALL; }
#line 5091 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1412 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 5097 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1413 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 5103 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1417 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.nonboxed_int) = sparp_arg->sparp_scalar_subq_count; }
#line 5109 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1418 "sparql_p.y" /* yacc.c:1646  */
    {
		int bind_has_scalar_subqs = ((yyvsp[-3].nonboxed_int) == sparp_arg->sparp_scalar_subq_count);
		(yyval.tree) = spar_bind_prepare (sparp_arg, (yyvsp[-1].tree), bind_has_scalar_subqs); }
#line 5117 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1424 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_gp_init (sparp_arg, VALUES_L); }
#line 5124 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1426 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 5130 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1430 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART ***mtrx = (SPART ***)t_revlist_to_array ((yyvsp[-1].backstack));
		int ctr = BOX_ELEMENTS (mtrx);
		while (ctr--) mtrx[ctr] = (SPART **)t_list (1, mtrx[ctr]);
		(yyval.tree) = spar_gp_finalize_with_inline_data (sparp_arg, (SPART **)t_list (1, spar_make_variable (sparp_arg, (yyvsp[-3].box))), mtrx); }
#line 5140 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1435 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_env->spare_inline_data_colcount = dk_set_length ((yyvsp[-1].backstack)); }
#line 5147 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1437 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_gp_finalize_with_inline_data (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[-5].backstack)), (SPART ***)t_revlist_to_array ((yyvsp[-1].backstack))); }
#line 5154 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1443 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 5160 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1444 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), spar_make_variable (sparp_arg, (yyvsp[0].box))); }
#line 5166 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1448 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (yyvsp[0].box); }
#line 5172 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1449 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Global variable can not be used in the header of VALUES"); }
#line 5178 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1453 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 5184 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1454 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].trees)); }
#line 5190 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1458 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack));
		if (BOX_ELEMENTS ((yyval.trees)) != sparp_arg->sparp_env->spare_inline_data_colcount)
		  sparyyerror (sparp_arg, "Number of values in an inline data row does not match number of variables in the list after VALUES"); }
#line 5199 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1465 "sparql_p.y" /* yacc.c:1646  */
    {(yyval.backstack) = NULL; }
#line 5205 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1466 "sparql_p.y" /* yacc.c:1646  */
    {(yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 5211 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1474 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "The use of blank nodes in VALUES is not allowed by SPARQL 1.1 specification"); (yyval.tree) = NULL; }
#line 5217 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1475 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "UNBOUND in VALUES is deprecated, use UNDEF instead"); (yyval.tree) = NULL; }
#line 5223 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1476 "sparql_p.y" /* yacc.c:1646  */
    {(yyval.tree) = NULL; }
#line 5229 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1480 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 5235 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1481 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 5241 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1482 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 5247 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1486 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 1; }
#line 5253 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1487 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 0; }
#line 5259 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1491 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "SPARQL 1.1 FILTER EXISTS / FILTER NOT EXISTS test");
		spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1; }
#line 5270 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1499 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *subselect_top;
		SPART *where_gp;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		subselect_top = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0), NULL );
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[0].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
#line 5284 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1511 "sparql_p.y" /* yacc.c:1646  */
    {
		void * sinv_storage_uri;
		sparp_arg->sparp_query_uses_sinvs++;
		sinv_storage_uri = uname_virtrdf_ns_uri_DefaultServiceStorage; /*!!! TBD config */
		/* if config is added above then tweak the check in sparp_gp_trav_add_graph_perm_read_filters and in SPAR_REQ_TOP case of ssg_sdprint_tree() */
		(yyval.boxes) = t_list (5,
		  t_box_num(sparp_arg->sparp_permitted_syntax),
		  sparp_arg->sparp_env->spare_storage_name,
		  sparp_arg->sparp_storage,
		  (ptrlong)(sparp_arg->sparp_storage_is_set),
		  sinv_storage_uri );
		sparp_arg->sparp_inner_permitted_syntax = -1;
		sparp_arg->sparp_env->spare_storage_name = sinv_storage_uri;
		sparp_arg->sparp_storage = sparp_find_storage_by_name (sparp_arg, sinv_storage_uri);
		sparp_arg->sparp_storage_is_set = 1;
		}
#line 5305 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1527 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.box) = t_alloc (sizeof (sparp_sources_t));
		if (-1 == sparp_arg->sparp_inner_permitted_syntax)
		  {
		    sparp_find_language_dialect_by_service (sparp_arg, (yyvsp[-2].tree), &(sparp_arg->sparp_permitted_syntax), &(sparp_arg->sparp_syntax_exceptions));
		    sparp_arg->sparp_permitted_syntax |= 0x0080;
		  }
		else
		  sparp_arg->sparp_permitted_syntax = 0x0080 | sparp_arg->sparp_inner_permitted_syntax;
		memcpy ((yyval.box), &(sparp_arg->sparp_env->spare_src), sizeof (sparp_sources_t));
		memset (&(sparp_arg->sparp_env->spare_src), 0, sizeof (sparp_sources_t)); }
#line 5321 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1538 "sparql_p.y" /* yacc.c:1646  */
    {
		void * sinv_storage_uri = (yyvsp[-4].boxes)[4];
		SPART **sources;
		SPART *sinv;
		if ((NULL == sparp_arg->sparp_env->spare_src.ssrc_default_graphs) && (NULL == sparp_arg->sparp_env->spare_src.ssrc_named_graphs))
		  memcpy (&(sparp_arg->sparp_env->spare_src), (yyvsp[-2].box), sizeof (sparp_sources_t));
		sources = spar_make_sources_like_top (sparp_arg, SELECT_L);
		sinv = spar_make_service_inv (sparp_arg, (yyvsp[-5].tree), (yyvsp[-3].backstack), sparp_arg->sparp_permitted_syntax, sparp_arg->sparp_syntax_exceptions, sources, sinv_storage_uri, (yyvsp[-6].token_type));
		spar_add_service_inv_to_sg (sparp_arg, sinv);
		t_set_push (&(sparp_env()->spare_context_sinvs), sinv);
		spar_gp_init (sparp_arg, SERVICE_L); }
#line 5337 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1549 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_permitted_syntax = unbox((yyvsp[-6].boxes)[0]);
		sparp_arg->sparp_env->spare_storage_name = (yyvsp[-6].boxes)[1];
		sparp_arg->sparp_storage = (quad_storage_t *)((yyvsp[-6].boxes)[2]);
		sparp_arg->sparp_storage_is_set = (ptrlong)((yyvsp[-6].boxes)[3]);
		(yyvsp[0].tree)->_.gp.options = (SPART **)t_list_concat_tail (
		  (void *)((yyvsp[0].tree)->_.gp.options), 2,
		  SPAR_SERVICE_INV, t_set_pop (&(sparp_env()->spare_context_sinvs)) );
		memcpy (&(sparp_arg->sparp_env->spare_src), (yyvsp[-4].box), sizeof (sparp_sources_t));
		(yyval.tree) = (yyvsp[0].tree); }
#line 5352 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1561 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)IN_L)); t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)_STAR)); }
#line 5358 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1562 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); }
#line 5364 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1566 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 5370 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1567 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[0]); t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[1]); }
#line 5376 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1571 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[-1].box), (yyvsp[0].backstack)); }
#line 5382 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1572 "sparql_p.y" /* yacc.c:1646  */
    {
		void * defname = (yyvsp[-1].box);
		dk_set_t defvals = (yyvsp[0].backstack);
		if (!strcmp (defname, "lang:dialect"))
		  {
		    if ((NULL == defvals) || (NULL != defvals->next) || (SPARQL_INTEGER != ((ptrlong *)(defvals->data))[0]))
		      sparyyerror (sparp_arg, "define lang:dialect needs an integer");
		    sparp_arg->sparp_inner_permitted_syntax = unbox (((void * *)(defvals->data))[1]) | 0x0080;
		  }
		(yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)DEFINE_L), t_list (2, defname, t_revlist_to_array(defvals))); }
#line 5397 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1582 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)IN_L), t_revlist_to_array ((yyvsp[0].backstack))); }
#line 5403 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1583 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)IN_L), (SPART *)((ptrlong)_STAR)); }
#line 5409 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1587 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_init (sparp_arg, CONSTRUCT_L); }
#line 5415 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1588 "sparql_p.y" /* yacc.c:1646  */
    {
		int g_grp_count = sparp_env()->spare_ctor_g_grp_count;
		int g_may_vary = 0;
		(yyval.tree) = spar_gp_finalize (sparp_arg, NULL);
		if (1 < (g_grp_count + (sparp_env()->spare_ctor_dflt_g_tmpl_count ? 1 : 0)))
		  g_may_vary = 1;
		if ((0 == g_may_vary) && (0 < BOX_ELEMENTS ((yyval.tree)->_.gp.members)))
		  {
		    SPART *g = (yyval.tree)->_.gp.members[0]->_.triple.tr_graph;
		    if ((SPAR_QNAME != SPART_TYPE (g)) && !SPART_IS_DEFAULT_GRAPH_BLANK (g))
		      g_may_vary = 1;
		  }
		if (g_may_vary)
		  (yyval.tree)->_.gp.options = (SPART **)t_list (2, (SPART *)((ptrlong)QUAD_L), t_box_num_nonull (g_grp_count));
		sparp_env()->spare_ctor_g_grp_count = 0;
		sparp_env()->spare_ctor_dflt_g_tmpl_count = 0; }
#line 5436 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1607 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5442 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1608 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5448 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1609 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5454 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1610 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5460 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1614 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5466 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1615 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5472 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1616 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5478 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1620 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5484 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1621 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5490 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1622 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5496 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1623 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5502 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1627 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5508 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1628 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5514 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1632 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5520 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1633 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5526 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1637 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "SPARQL 1.1 quad constructor template"); }
#line 5532 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1638 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_env()->spare_ctor_g_grp_count++;
		t_set_push (&(sparp_env()->spare_context_graphs), (yyvsp[0].tree)); }
#line 5540 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1641 "sparql_p.y" /* yacc.c:1646  */
    { t_set_pop (&(sparp_env()->spare_context_graphs)); }
#line 5546 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1645 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&(sparp_env()->spare_context_subjects), (yyvsp[0].tree)); }
#line 5552 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1646 "sparql_p.y" /* yacc.c:1646  */
    { t_set_pop (&(sparp_env()->spare_context_subjects)); (yyval.nothing) = (yyvsp[0].nothing); }
#line 5558 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1647 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&(sparp_env()->spare_context_subjects), (yyvsp[0].tree)); }
#line 5564 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1648 "sparql_p.y" /* yacc.c:1646  */
    { t_set_pop (&(sparp_env()->spare_context_subjects)); }
#line 5570 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1649 "sparql_p.y" /* yacc.c:1646  */
    { spar_gp_add_member (sparp_arg, (yyvsp[0].tree)); }
#line 5576 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1653 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5582 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1654 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5588 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1660 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&(sparp_env()->spare_context_predicates), (yyvsp[0].tree)); }
#line 5594 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1661 "sparql_p.y" /* yacc.c:1646  */
    { t_set_pop (&(sparp_env()->spare_context_predicates)); }
#line 5600 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1663 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&(sparp_env()->spare_context_predicates), (yyvsp[0].tree)); }
#line 5606 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1664 "sparql_p.y" /* yacc.c:1646  */
    { t_set_pop (&(sparp_env()->spare_context_predicates)); }
#line 5612 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1665 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Dot immediately after semicolon is permitted in pure SPARQL but not in SPARQL-BI"); }
#line 5618 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1666 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Predicate expected after semicolon"); }
#line 5624 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1667 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Predicate expected"); }
#line 5630 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1671 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5636 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1672 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 5642 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1673 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Semicolon immediately after colon is permitted in pure SPARQL but not in SPARQL-BI"); }
#line 5648 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1674 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Dot immediately after colon is permitted in pure SPARQL but not in SPARQL-BI"); }
#line 5654 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1675 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Object expected after comma"); }
#line 5660 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1676 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Object expected"); }
#line 5666 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1680 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_gp_add_triplelike (sparp_arg, NULL, NULL, NULL, (yyvsp[-1].tree), NULL, (yyvsp[0].trees), 0x0); }
#line 5673 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1685 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = NULL; }
#line 5679 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1686 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, TABID_L, (yyvsp[0].box)); }
#line 5685 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1687 "sparql_p.y" /* yacc.c:1646  */
    {
		if (CONSTRUCT_L == SPARP_ENV_CONTEXT_GP_SUBTYPE(sparp_arg))
		  sparyyerror (sparp_arg, "Triple options are not allowed in constructor template");
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0002, "OPTION () triple matching configuration"); }
#line 5694 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1691 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART **opts = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack));
		(yyval.trees) = opts; }
#line 5702 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1697 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[0].trees)))[0]); t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[0].trees)))[1]); }
#line 5708 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1698 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack);  t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[0].trees)))[0]); t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[0].trees)))[1]); }
#line 5714 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1702 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "TABLE OPTION hint for SQL optimizer");
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)TABLE_OPTION_L, (yyvsp[0].box)); }
#line 5722 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1705 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "TABID OPTION hint for using in SQL code");
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)TABID_L, (yyvsp[0].box)); }
#line 5730 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1708 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "inference option");
		(yyval.trees) = (yyvsp[0].trees); }
#line 5738 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1711 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "free-text option");
		(yyval.trees) = (yyvsp[0].trees); }
#line 5746 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1714 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "geo/spatial option");
		(yyval.trees) = (yyvsp[0].trees); }
#line 5754 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1717 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x1000, "TRANSITIVE and related options");
		(yyval.trees) = (yyvsp[0].trees); }
#line 5762 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1723 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'IFP'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)IFP_L, (ptrlong)1); }
#line 5769 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1725 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'INFERENCE' ( QNAME | Q_IRI_REF | SPARQL_STRING )	*/
		if (strcasecmp ((yyvsp[0].box), "none"))
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (yyvsp[0].box));
		else
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (ptrlong)1); }
#line 5779 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1730 "sparql_p.y" /* yacc.c:1646  */
    {
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, sparp_expand_qname_prefix (sparp_arg, (yyvsp[0].box))); }
#line 5786 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1732 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[0].box))); }
#line 5792 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1733 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (yyvsp[0].box)); }
#line 5798 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1734 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | ( 'SAME_AS' | 'SAME_AS_O' | 'SAME_AS_P_L' | 'SAME_AS_S' | 'SAME_AS_S_O_L' ) ( '(' Expns ')' )?	*/
		(yyval.trees) = (SPART **)t_list (2, (yyvsp[-3].token_type), spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[-1].backstack)))); }
#line 5805 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1736 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[0].token_type), (ptrlong)1); }
#line 5811 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1740 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'OFFBAND' Var	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)OFFBAND_L, (yyvsp[0].tree)); }
#line 5818 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1742 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'SCORE' Var	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)SCORE_L, (yyvsp[0].tree)); }
#line 5825 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1744 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'SCORE_LIMIT' Expn	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)SCORE_LIMIT_L, (yyvsp[0].tree)); }
#line 5832 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1749 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'GEO' Expn	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)GEO_L, (yyvsp[0].tree)); }
#line 5839 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1751 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'PRECISION' Expn	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)PRECISION_L, (yyvsp[0].tree)); }
#line 5846 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1756 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_CYCLES_ONLY'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_CYCLES_ONLY_L, (ptrlong)1); }
#line 5853 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1758 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_DIRECTION' SPARQL_INTEGER	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_DIRECTION_L, (yyvsp[0].box)); }
#line 5860 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1760 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_DISTINCT'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_DISTINCT_L, (ptrlong)1); }
#line 5867 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1762 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | ''	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_END_FLAG_L, (yyvsp[0].box)); }
#line 5874 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1764 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_EXISTS'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_EXISTS_L, (ptrlong)1); }
#line 5881 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1766 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_FINAL_AS' Var	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_FINAL_AS_L, (yyvsp[0].tree)); }
#line 5888 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1768 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_IN' '(' Var ( ',' Var )* ')'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_IN_L, spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[-1].backstack)))); }
#line 5895 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1770 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_MIN' Expn	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_MIN_L, (yyvsp[0].tree)); }
#line 5902 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1772 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_MAX' Expn	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_MAX_L, (yyvsp[0].tree)); }
#line 5909 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1774 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_NO_CYCLES'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_NO_CYCLES_L, (ptrlong)1); }
#line 5916 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1776 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_NO_ORDER'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_NO_ORDER_L, (ptrlong)1); }
#line 5923 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1778 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_OUT' '(' Var ( ',' Var )* ')'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_OUT_L, spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[-1].backstack)))); }
#line 5930 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1780 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_SHORTEST_ONLY'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_SHORTEST_ONLY_L, (ptrlong)1); }
#line 5937 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1782 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'T_STEP' '(' ( Var | SPARQL_STRING ) ')' 'AS' Var	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)T_STEP_L, spartlist (sparp_arg, 6, SPAR_ALIAS, (yyvsp[-3].tree), (yyvsp[0].tree)->_.var.vname, SSG_VALMODE_AUTO, (ptrlong)0, (ptrlong)0)); }
#line 5944 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1784 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_STEP_L, spartlist (sparp_arg, 6, SPAR_ALIAS, (yyvsp[-3].box), (yyvsp[0].tree)->_.var.vname, SSG_VALMODE_AUTO, (ptrlong)0, (ptrlong)0)); }
#line 5950 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1785 "sparql_p.y" /* yacc.c:1646  */
    {	/*... | 'TRANSITIVE'	*/
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)TRANSITIVE_L, (ptrlong)1); }
#line 5957 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1790 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 5963 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1791 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 5969 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1795 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SAME_AS_L; }
#line 5975 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1796 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SAME_AS_O_L; }
#line 5981 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1797 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SAME_AS_P_L; }
#line 5987 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1798 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SAME_AS_S_L; }
#line 5993 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1799 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = SAME_AS_S_O_L; }
#line 5999 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1807 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Predicate expected (i.e., variable or a backquoted expn or IRI ref or 'a' keyword or some property path)"); }
#line 6005 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1811 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 6011 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1812 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '|', (yyvsp[-2].tree), (yyvsp[0].tree), 0, 0); }
#line 6017 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1816 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 6023 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1817 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '/', (yyvsp[-2].tree), (yyvsp[0].tree), 0, 0); }
#line 6029 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1821 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '*', spar_make_ppath (sparp_arg, '^', (yyvsp[-1].tree), NULL, 0, 0), NULL, 0, 1); }
#line 6035 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1822 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '*', spar_make_ppath (sparp_arg, '^', (yyvsp[-1].tree), NULL, 0, 0), NULL, 0, -1); }
#line 6041 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1823 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '*', spar_make_ppath (sparp_arg, '^', (yyvsp[-1].tree), NULL, 0, 0), NULL, 1, -1); }
#line 6047 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1824 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_ppath (sparp_arg, '*',
		  spar_make_ppath (sparp_arg, '^', (yyvsp[-2].tree), NULL, 0, 0), NULL,
		  unbox (((yyvsp[0].boxes))[0]), unbox (((yyvsp[0].boxes))[1]) ); }
#line 6056 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1828 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '^', (yyvsp[0].tree), NULL, 0, 0); }
#line 6062 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1829 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '*', (yyvsp[-1].tree), NULL, 0, 1); }
#line 6068 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1830 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '*', (yyvsp[-1].tree), NULL, 0, -1); }
#line 6074 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1831 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '*', (yyvsp[-1].tree), NULL, 1, -1); }
#line 6080 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1832 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_ppath (sparp_arg, '*',
		  (yyvsp[-2].tree), NULL,
		  unbox (((yyvsp[0].boxes))[0]), unbox (((yyvsp[0].boxes))[1]) ); }
#line 6089 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1836 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 6095 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1840 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, (yyvsp[-1].box), (yyvsp[-1].box)); }
#line 6101 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1841 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, (yyvsp[-3].box), (yyvsp[-1].box)); }
#line 6107 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1842 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, (ptrlong)(0), (yyvsp[-1].box)); }
#line 6113 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1843 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, (yyvsp[-2].box), t_box_num (-1)); }
#line 6119 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1847 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, 'D', (yyvsp[-1].tree), NULL, 0, 0); }
#line 6125 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1848 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 6131 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1849 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '!', (yyvsp[-1].tree), NULL, 0, 0); }
#line 6137 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1850 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '!', (yyvsp[0].tree), NULL, 0, 0); }
#line 6143 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1851 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_ppath (sparp_arg, '!', spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_type), NULL, 0, 0); }
#line 6149 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1852 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 6155 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1853 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_type); }
#line 6161 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1857 "sparql_p.y" /* yacc.c:1646  */
    {	/* [35]	BlankNodePropertyList	 ::=  '[' PropertyListNotEmpty ']'	*/
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:lsqbra"), 1);
		t_set_push (&(sparp_env()->spare_context_subjects), bn); }
#line 6169 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1860 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = t_set_pop (&(sparp_env()->spare_context_subjects)); }
#line 6176 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1862 "sparql_p.y" /* yacc.c:1646  */
    {	/* [36]	Collection	 ::=  '(' GraphNode* ')'	*/
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:topcons"), 1);
		t_set_push (&(sparp_env()->spare_context_subjects), bn);
		t_set_push (&(sparp_env()->spare_context_subjects), bn); }
#line 6185 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1866 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_gp_add_triplelike (sparp_arg,
		  NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_rest),
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil),
		  NULL, NULL, 0x0 );
		t_set_pop (&(sparp_env()->spare_context_subjects));
		(yyval.tree) = t_set_pop (&(sparp_env()->spare_context_subjects)); }
#line 6198 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1874 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil); }
#line 6204 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1878 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 6210 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1879 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 6216 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1883 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_gp_add_triplelike (sparp_arg, NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_first),
		  (yyvsp[0].tree), NULL, NULL, 0x0 ); }
#line 6225 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1887 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:cons"), 1);
		spar_gp_add_triplelike (sparp_arg,
		  NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_rest),
		  bn, NULL, NULL, 0x0 );
		sparp_env()->spare_context_subjects->data = bn;
		spar_gp_add_triplelike (sparp_arg, NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_first),
		  (yyvsp[0].tree), NULL, NULL, 0x0 ); }
#line 6240 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1910 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6246 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1911 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6252 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1918 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 6258 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1929 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[-2].tree)); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6264 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1930 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6270 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1934 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6276 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1935 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6282 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1939 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[-2].box), (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6288 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1940 "sparql_p.y" /* yacc.c:1646  */
    {
                SPART *arg = ((uname_SPECIAL_cc_bif_c_COUNT == (yyvsp[-2].box)) ? SPAR_MAKE_INT_LITERAL (sparp_arg, 1) : (SPART *)((ptrlong)_STAR));
                (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[-2].box), (SPART **)t_list (1, arg)); }
#line 6296 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1943 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_funcall (sparp_arg, DISTINCT_L, (yyvsp[-3].box), (SPART **)t_list (1, (ptrlong)_STAR)); }
#line 6302 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1944 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_funcall (sparp_arg, DISTINCT_L, (yyvsp[-3].box), (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6308 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1945 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "SAMPLE aggregate function call");
		(yyval.tree) = spar_make_funcall (sparp_arg, 1, t_box_dv_uname_string ("sql:SAMPLE"), (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6316 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1948 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "SAMPLE aggregate function call");
		(yyval.tree) = spar_make_funcall (sparp_arg, 1, t_box_dv_uname_string ("sql:SAMPLE"), (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6324 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1951 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[-2].box), (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6330 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1952 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[-4].box), (SPART **)t_list (2, (yyvsp[-3].tree), (yyvsp[-1].tree))); }
#line 6336 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1953 "sparql_p.y" /* yacc.c:1646  */
    {
		if (stricmp ((yyvsp[-3].box), "SEPARATOR"))
		  spar_error (sparp_arg, "The GROUP_CONCAT contains unsupported parameter '%.100s', only 'SEPARATOR' is supported",
		    (yyvsp[-3].box) );
		(yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[-6].box), (SPART **)t_list (2, (yyvsp[-5].tree), (yyvsp[-1].tree))); }
#line 6346 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1961 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0100, "aggregate function call"); (yyval.box) = (yyvsp[0].box); }
#line 6352 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1965 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = uname_SPECIAL_cc_bif_c_COUNT; }
#line 6358 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1966 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = uname_SPECIAL_cc_bif_c_AVG; }
#line 6364 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1967 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = uname_SPECIAL_cc_bif_c_GROUPING; }
#line 6370 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1968 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = uname_SPECIAL_cc_bif_c_MIN; }
#line 6376 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1969 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = uname_SPECIAL_cc_bif_c_MAX; }
#line 6382 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1970 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = uname_SPECIAL_cc_bif_c_SUM; }
#line 6388 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1974 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "GROUP_CONCAT aggregate function call"); (yyval.box) = (yyvsp[0].box); }
#line 6394 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1977 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_uname_string ("sql:GROUP_CONCAT"); }
#line 6400 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1978 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_uname_string ("sql:GROUP_CONCAT_DISTINCT"); }
#line 6406 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1987 "sparql_p.y" /* yacc.c:1646  */
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  {
		    SPART *curmacro = sparp_arg->sparp_current_macro;
		    int pos = sparp_namesake_macro_param (sparp_arg, curmacro, (yyvsp[0].box));
		    if (-1 > pos)
		      {
		        spar_error (sparp_arg, "Variable '%.100s' inside the body of a macro '%.100s' is not listed in list of macro arguments or list of local names",
		        (yyvsp[0].box), curmacro->_.defmacro.mname );
		      }
		    if (0 <= pos)
		      (yyval.tree) = spar_make_macropu (sparp_arg, (yyvsp[0].box), pos);
		    else
		      (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[0].box));
		  }
		else
		  (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[0].box)); }
#line 6428 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2004 "sparql_p.y" /* yacc.c:1646  */
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  spar_error (sparp_arg, "Global variables are not allowed inside the body of a macro '%.100s'",
		    sparp_arg->sparp_current_macro->_.defmacro.mname );
		(yyval.tree) = (yyvsp[0].tree); }
#line 6438 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2009 "sparql_p.y" /* yacc.c:1646  */
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  spar_error (sparp_arg, "Property path variables are not allowed inside the body of a macro '%.100s'",
		    sparp_arg->sparp_current_macro->_.defmacro.mname );
		(yyval.tree) = spar_add_propvariable (sparp_arg, (yyvsp[-1].tree), (ptrlong)((yyvsp[0].trees)[0]), (yyvsp[0].trees)[1], (ptrlong)((yyvsp[0].trees)[2]), (void *)((yyvsp[0].trees)[3]) ); }
#line 6448 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2017 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0080, "global variable"); (yyval.tree) = (yyvsp[0].tree); }
#line 6454 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2022 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[0].box)); }
#line 6460 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2023 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[0].box)); }
#line 6466 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 482:
#line 2033 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil); }
#line 6472 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2038 "sparql_p.y" /* yacc.c:1646  */
    {
		dk_set_t gp_st = sparp_env()->spare_context_gp_subtypes;
		if (2 & sparp_arg->sparp_in_precode_expn)
		  spar_error (sparp_arg, "Backquoted expressions are not allowed in constant clauses");
		(yyval.token_type) = ((NULL == gp_st) ? -1 : (ptrlong)(gp_st->data));
		if (CONSTRUCT_L == (yyval.token_type))
		  SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0100, "backquoted expression in CONSTRUCT"); }
#line 6484 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 485:
#line 2045 "sparql_p.y" /* yacc.c:1646  */
    {
		  if ((-1 == (yyvsp[-2].token_type)) || (CONSTRUCT_L == (yyvsp[-2].token_type)))
                    (yyval.tree) = (yyvsp[-1].tree); /* redundant backquotes in retlist or backquotes to bypass syntax limitation in CONSTRUCT gp */
                  else
		    {
		      SPART *bn = sparp_arg->sparp_in_ctor_from_where ?
		        spar_make_variable (sparp_arg, spar_mkid (sparp_arg, "ctor_from_where_calc_var"))
 :
		        spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:calc"), 1);
		      SPART *eq;
		      SPAR_BIN_OP (eq, BOP_EQ, t_full_box_copy_tree ((void *)bn), (yyvsp[-1].tree));
		      spar_gp_add_filter (sparp_arg, eq, 0);
		      (yyval.tree) = bn;
                    }
		}
#line 6504 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 486:
#line 2063 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 6, SPAR_ALIAS, (yyvsp[-2].tree), (yyvsp[0].box), SSG_VALMODE_AUTO, (ptrlong)0, (ptrlong)0); }
#line 6510 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 487:
#line 2064 "sparql_p.y" /* yacc.c:1646  */
    { /* [44]	ConditionalOrExpn	 ::=  ConditionalAndExpn ( '||' ConditionalAndExpn )*	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_OR, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6517 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 488:
#line 2066 "sparql_p.y" /* yacc.c:1646  */
    { /* [45]	ConditionalAndExpn	 ::=  ValueLogical ( '&&' ValueLogical )*	*/
					/* [46]	ValueLogical	 ::=  RelationalExpn	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_AND, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6525 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 489:
#line 2069 "sparql_p.y" /* yacc.c:1646  */
    {	/* [47]*	RelationalExpn	 ::=  NumericExpn	*/
					/*... ( ( ('='|'!='|'<'|'>'|'<='|'>='|'LIKE') NumericExpn ) */
					/*...   | ( 'IN' '(' Expns ')' ) )?	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_EQ, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6534 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 490:
#line 2073 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_BIN_OP ((yyval.tree), BOP_NEQ, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6540 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 491:
#line 2074 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0040, "LIKE operator"); }
#line 6546 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 492:
#line 2075 "sparql_p.y" /* yacc.c:1646  */
    {	/* Virtuoso-specific extension of [47] */
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, LIKE_L, (SPART **)t_list (2, (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 6553 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 493:
#line 2077 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0020, "IN operator"); }
#line 6559 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 494:
#line 2078 "sparql_p.y" /* yacc.c:1646  */
    {	/* Virtuoso-specific extension of [47] */
		  dk_set_t args = (((dk_set_t)NIL_L == (yyvsp[0].backstack)) ? NULL : (yyvsp[0].backstack));
                  if (1 == dk_set_length (args))
                    {
		      SPAR_BIN_OP ((yyval.tree), BOP_EQ, (yyvsp[-3].tree), args->data);
                    }
                  else
                    {
		      args = dk_set_nreverse (args);
                      t_set_push (&args, (yyvsp[-3].tree));
		      (yyval.tree) = sparp_make_builtin_call (sparp_arg, IN_L,
		        (SPART **)t_list_to_array (args) /* NOT t_revlist_to_array (args), note special first element pushed */ );
                    }
		}
#line 6578 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 495:
#line 2092 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0X0020, "NOT IN operator"); }
#line 6584 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 496:
#line 2093 "sparql_p.y" /* yacc.c:1646  */
    {	/* Virtuoso-specific extension of [47] */
		  dk_set_t args = (((dk_set_t)NIL_L == (yyvsp[0].backstack)) ? NULL : (yyvsp[0].backstack));
		  if (1 == dk_set_length (args))
		    {
		      SPAR_BIN_OP ((yyval.tree), BOP_NEQ, (yyvsp[-3].tree), args->data);
		    }
		  else
		    {
		      SPART *in_call;
		      t_set_push (&args, (yyvsp[-3].tree));
		      in_call = sparp_make_builtin_call (sparp_arg, IN_L,
		        (SPART **)t_list_to_array (args) /* NOT t_revlist_to_array (args), note special first element pushed */ );
		      SPAR_BIN_OP ((yyval.tree), BOP_NOT, in_call, NULL);
		    }
		}
#line 6604 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 497:
#line 2108 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_BIN_OP ((yyval.tree), BOP_LT, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6610 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 498:
#line 2109 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_BIN_OP ((yyval.tree), BOP_LT, (yyvsp[0].tree), (yyvsp[-2].tree)); }
#line 6616 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 499:
#line 2110 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_BIN_OP ((yyval.tree), BOP_LTE, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6622 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 500:
#line 2111 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_BIN_OP ((yyval.tree), BOP_LTE, (yyvsp[0].tree), (yyvsp[-2].tree)); }
#line 6628 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 501:
#line 2112 "sparql_p.y" /* yacc.c:1646  */
    {	/* [49]	AdditiveExpn	 ::=  MultiplicativeExpn ( ('+'|'-') MultiplicativeExpn )*	*/
		if (sparp_arg->sparp_rset_lexdepth_plus_1 == (yyvsp[-1].token_type) + 1)
		  sparyyerror (sparp_arg, "Ambiguous (unary or binary) plus operator in result list, please add \"(\" and \")\"");
		  SPAR_BIN_OP ((yyval.tree), BOP_PLUS, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6637 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 502:
#line 2116 "sparql_p.y" /* yacc.c:1646  */
    {
		if (sparp_arg->sparp_rset_lexdepth_plus_1 == (yyvsp[-1].token_type) + 1)
		  sparyyerror (sparp_arg, "Ambiguous (unary or binary) minus operator in result list, please add \"(\" and \")\"");
		SPAR_BIN_OP ((yyval.tree), BOP_MINUS, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6646 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 503:
#line 2120 "sparql_p.y" /* yacc.c:1646  */
    {	/* [50]	MultiplicativeExpn	 ::=  UnaryExpn ( ('*'|'/') UnaryExpn )*	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_TIMES, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6653 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 504:
#line 2122 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_BIN_OP ((yyval.tree), BOP_DIV, (yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 6659 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 505:
#line 2123 "sparql_p.y" /* yacc.c:1646  */
    {		/* [51]*	UnaryExpn	 ::=   ('!'|'NOT'|'+'|'-')? PrimaryExpn */
		SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[0].tree), NULL); }
#line 6666 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 506:
#line 2125 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_BIN_OP ((yyval.tree), BOP_PLUS, SPAR_MAKE_INT_LITERAL (sparp_arg, 0), (yyvsp[0].tree)); }
#line 6673 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 507:
#line 2127 "sparql_p.y" /* yacc.c:1646  */
    {
		void * *val_ptr = NULL;
		void * *orig_text = NULL;
		void * *orig_text_ptr = NULL;
		if ((DV_ARRAY_OF_POINTER == DV_TYPE_OF ((yyvsp[0].tree))) && (SPAR_LIT == (yyvsp[0].tree)->type)) {
		    val_ptr = &((yyvsp[0].tree)->_.lit.val);
		    orig_text = (yyvsp[0].tree)->_.lit.original_text;
		    if (NULL != orig_text)
		      orig_text_ptr = &((yyvsp[0].tree)->_.lit.original_text);
		    (yyvsp[0].tree)->_.lit.original_text = NULL; }
		if (NULL != val_ptr) {
		    dtp_t val_dtp = DV_TYPE_OF (val_ptr[0]);
		    if (DV_LONG_INT == val_dtp)
		      val_ptr[0] = t_box_num_nonull (-unbox (val_ptr[0]));
		    else if (DV_DOUBLE_FLOAT == val_dtp)
		      ((double *)(val_ptr[0]))[0] = -((double *)(val_ptr[0]))[0];
		    else if (DV_NUMERIC == val_dtp)
		      ((struct numeric_s *)(val_ptr[0]))->n_neg = (((struct numeric_s *)(val_ptr[0]))->n_neg ? 0 : 1);
		    else
		      val_ptr = NULL; }
		if (NULL == val_ptr)
		  SPAR_BIN_OP ((yyval.tree), BOP_MINUS, SPAR_MAKE_INT_LITERAL (sparp_arg, 0), (yyvsp[0].tree));
		else
		  {
		    (yyval.tree) = (yyvsp[0].tree);
		    if (NULL != orig_text_ptr)
		      {
		        if ('-' == orig_text[0])
		          orig_text_ptr[0] = t_box_dv_short_string (orig_text+1);
		        else
		          orig_text_ptr[0] = t_box_dv_short_strconcat ("-", orig_text); } } }
#line 6709 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 508:
#line 2158 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[-1].tree); }
#line 6715 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 509:
#line 2161 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0100, "scalar ASK subquery");
                spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1; }
#line 6726 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 510:
#line 2169 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *subselect_top;
		SPART *where_gp;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		subselect_top = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0), NULL );
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[-1].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
#line 6740 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 511:
#line 2178 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0100, "scalar subquery");
                spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1;
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
#line 6752 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 512:
#line 2187 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *subselect_top;
		SPART *where_gp;
		SPART *wm = (yyvsp[-2].tree);
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		wm->_.wm.where_gp = where_gp;
		subselect_top = spar_make_top_or_special_case_from_wm (sparp_arg, (yyvsp[-7].token_type), (yyvsp[-5].trees), wm );
		if (SPAR_REQ_TOP == subselect_top->type)
		  sparp_expand_top_retvals (sparp_arg, subselect_top, 1 /* safely_copy_all_vars */, NULL);
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[-1].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
#line 6769 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 513:
#line 2199 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = (yyvsp[0].tree);
		if (sparp_arg->sparp_in_precode_expn)
		  sparyyerror (sparp_arg, "Aggregates are not allowed in 'precode' expressions that should be calculated before the result-set of the query");
		if (!(sparp_arg->sparp_allow_aggregates_in_expn & 1))
		  sparyyerror (sparp_arg, "Aggregates are allowed only in result sets"); }
#line 6780 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 515:
#line 2206 "sparql_p.y" /* yacc.c:1646  */
    {			/* [55*]	IRIrefOrFunctionOrMacro	 ::=  (( IRIref ArgList? ) | ( 'MACRO' IRIref ArgList ))	*/
		SPART *mdef;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		mdef = spar_find_defmacro_by_iri_or_fields (sparp_arg, (yyvsp[0].tree)->_.lit.val, NULL);
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)(sparp_arg->sparp_macro_mode), mdef);
		if (NULL != mdef)
		  {
		    if ((SPARP_DEFBODY & sparp_arg->sparp_macro_mode) && (sparp_arg->sparp_current_macro == mdef))
		      sparyyerror (sparp_arg, "The macro is recursively used in its own definition");
		    sparp_arg->sparp_macro_mode |= SPARP_CALLARG;
		  } }
#line 6797 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 516:
#line 2218 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL == (yyvsp[0].backstack))
		    (yyval.tree) = (yyvsp[-2].tree);
		  else
		    {
		    SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[0].backstack)) ? NULL : t_revlist_to_array ((yyvsp[0].backstack)));
		    const char *fname = (yyvsp[-2].tree)->_.lit.val;
		    SPART *mdef = ((yyvsp[-1].trees))[1];
		    if (NULL != mdef)
		      {
		        sparp_arg->sparp_macro_mode = (ptrlong)(((yyvsp[-1].trees))[0]);
		        (yyval.tree) = sparp_make_macro_call (sparp_arg, fname, 1, args);
		        if (!(sparp_arg->sparp_macro_mode & SPARP_DEFBODY))
		          sparp_arg->sparp_macro_call_count++;
		      }
		    else
		      {
		        int is_agg = 0;
		        spar_verify_funcall_security (sparp_arg, &is_agg, &fname, args);
		        (yyval.tree) = spar_make_funcall (sparp_arg, is_agg, fname, args);
		      } } }
#line 6823 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 517:
#line 2239 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)((yyvsp[0].tree)); }
#line 6829 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 518:
#line 2240 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)((yyvsp[0].tree)); }
#line 6835 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 519:
#line 2241 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)((yyvsp[0].tree)); }
#line 6841 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 523:
#line 2245 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0200, "UNDEF_L outside VALUES clause"); (yyval.tree) = (SPART *)t_NEW_DB_NULL; }
#line 6847 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 524:
#line 2249 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[0].backstack)) ? NULL : t_revlist_to_array ((yyvsp[0].backstack)));
		if ((SPAR_BIF_REGEX == (yyvsp[-1].token_type)) && (2 == BOX_ELEMENTS_0 (args)))
		  (yyval.tree) = spar_make_regex_or_like_or_eq (sparp_arg, args[0], args[1]);
		else
		  (yyval.tree) = sparp_make_builtin_call (sparp_arg, (yyvsp[-1].token_type), args); }
#line 6858 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 525:
#line 2267 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, IRI_L, (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6864 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 526:
#line 2269 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, LANG_L, (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6870 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 527:
#line 2271 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, DATATYPE_L, (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6876 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 528:
#line 2273 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, BOUND_L, (SPART **)t_list (1, (yyvsp[-1].tree))); }
#line 6882 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 529:
#line 2274 "sparql_p.y" /* yacc.c:1646  */
    {		/*... | 'NOT'? 'EXISTS' DatasetClause* WhereClause	*/
		if ((yyvsp[-1].token_type))
		  (yyval.tree) = (yyvsp[0].tree);
		else
		  SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[0].tree), NULL); }
#line 6892 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2279 "sparql_p.y" /* yacc.c:1646  */
    {
		dk_set_t a = (yyvsp[-3].backstack);
		t_set_push (&a, (yyvsp[-1].tree));
		a = dk_set_conc (a, t_cons ((yyvsp[-4].tree), NULL));
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF_CASEX, (SPART **)t_revlist_to_array (a)); }
#line 6902 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2284 "sparql_p.y" /* yacc.c:1646  */
    {
		dk_set_t a = (yyvsp[-3].backstack);
		t_set_push (&a, (yyvsp[-1].tree));
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, SPAR_BIF_CASEWHEN, (SPART **)t_revlist_to_array (a)); }
#line 6911 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 532:
#line 2291 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[-2].tree)); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6917 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 533:
#line 2292 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-4].backstack); t_set_push (&((yyval.backstack)), (yyvsp[-2].tree)); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 6923 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 534:
#line 2293 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "'WHEN' or 'ELSE' expected after end of 'THEN'-expression"); }
#line 6929 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 535:
#line 2297 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *mdef;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		mdef = spar_find_defmacro_by_iri_or_fields (sparp_arg, (yyvsp[0].tree)->_.lit.val, NULL);
		(yyval.token_type) = sparp_arg->sparp_macro_mode;
		if (NULL != mdef)
		  {
		    if ((SPARP_DEFBODY & sparp_arg->sparp_macro_mode) && (sparp_arg->sparp_current_macro == mdef))
		      sparyyerror (sparp_arg, "The macro is recursively used in its own definition");
		    sparp_arg->sparp_macro_mode |= SPARP_CALLARG;
		  } }
#line 6946 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 536:
#line 2309 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[0].backstack)) ? NULL : t_revlist_to_array ((yyvsp[0].backstack)));
		const char *fname = (yyvsp[-2].tree)->_.lit.val;
		if (sparp_arg->sparp_macro_mode & SPARP_CALLARG)
		  {
		    sparp_arg->sparp_macro_mode = (yyvsp[-1].token_type);
		    (yyval.tree) = sparp_make_macro_call (sparp_arg, fname, 1, args);
		    if (!(sparp_arg->sparp_macro_mode & SPARP_DEFBODY))
		      sparp_arg->sparp_macro_call_count++;
		  }
		else
		  {
		    int is_agg = 0;
		    spar_verify_funcall_security (sparp_arg, &is_agg, &fname, args);
		    (yyval.tree) = spar_make_funcall (sparp_arg, is_agg, fname, args);
		  } }
#line 6967 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 537:
#line 2328 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *mdef;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		mdef = spar_find_defmacro_by_iri_or_fields (sparp_arg, (yyvsp[0].tree)->_.qname.val, NULL);
		if (NULL == mdef)
		  sparyyerror (sparp_arg, "Undefined macro IRI");
		if ((SPARP_DEFBODY & sparp_arg->sparp_macro_mode) && (sparp_arg->sparp_current_macro == mdef))
		  sparyyerror (sparp_arg, "The macro is recursively used in its own definition");
		(yyval.token_type) = sparp_arg->sparp_macro_mode;
		sparp_arg->sparp_macro_mode |= SPARP_CALLARG; }
#line 6983 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 538:
#line 2339 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[0].backstack)) ? NULL : t_revlist_to_array ((yyvsp[0].backstack)));
		sparp_arg->sparp_macro_mode = (yyvsp[-1].token_type);
		(yyval.tree) = sparp_make_macro_call (sparp_arg, (yyvsp[-2].tree)->_.qname.val, 1, args);
		if (!(sparp_arg->sparp_macro_mode & SPARP_DEFBODY))
		  sparp_arg->sparp_macro_call_count++;
		 }
#line 6995 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2350 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 7001 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2355 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (dk_set_t)NIL_L; }
#line 7007 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2356 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (dk_set_t)NIL_L; }
#line 7013 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2357 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); }
#line 7019 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2361 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 7025 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2362 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 7031 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2363 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Argument expected after comma"); }
#line 7037 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2364 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Comma or ')' expected after function argument"); }
#line 7043 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2368 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 7049 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2373 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (dk_set_t)NIL_L; }
#line 7055 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2374 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (dk_set_t)NIL_L; }
#line 7061 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2375 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); }
#line 7067 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2379 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 7073 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2380 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 7079 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2381 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Macro argument (an expression or a group pattern) expected after comma"); }
#line 7085 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2382 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Comma or ')' expected after macro argument"); }
#line 7091 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2387 "sparql_p.y" /* yacc.c:1646  */
    {
	    spar_gp_init (sparp_arg, SPAR_MACROPU); }
#line 7098 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2389 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
#line 7104 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2393 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = SPAR_MAKE_INT_LITERAL (sparp_arg, unbox ((yyvsp[0].box))); }
#line 7110 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2394 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 5, SPAR_LIT, ((void * *)(yyvsp[0].box))[0], uname_xmlschema_ns_uri_hash_decimal, NULL, ((void * *)(yyvsp[0].box))[1]); }
#line 7116 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2395 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 5, SPAR_LIT, ((void * *)(yyvsp[0].box))[0], uname_xmlschema_ns_uri_hash_double, NULL, ((void * *)(yyvsp[0].box))[1]); }
#line 7122 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2396 "sparql_p.y" /* yacc.c:1646  */
    { double myZERO = 0.0;
				  double myPOSINF_d = 1.0/myZERO;
				  (yyval.tree) = spartlist (sparp_arg, 5, SPAR_LIT, t_box_double (myPOSINF_d), uname_xmlschema_ns_uri_hash_double, NULL, "INF"); }
#line 7130 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2399 "sparql_p.y" /* yacc.c:1646  */
    { double myZERO = 0.0;
				  double myNAN_d = 0.0/myZERO;
				  (yyval.tree) = spartlist (sparp_arg, 5, SPAR_LIT, t_box_double (myNAN_d), uname_xmlschema_ns_uri_hash_double, NULL, "NaN"); }
#line 7138 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2406 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7144 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2407 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_change_sign (&((yyvsp[0].tree)->_.lit.val));
		if (NULL != (yyvsp[0].tree)->_.lit.original_text)
		  (yyvsp[0].tree)->_.lit.original_text = t_box_dv_short_strconcat ("-", (yyvsp[0].tree)->_.lit.original_text);
		(yyval.tree) = (yyvsp[0].tree); }
#line 7154 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2415 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = SPAR_MAKE_INT_LITERAL (sparp_arg, unbox ((yyvsp[0].box))); }
#line 7160 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2419 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = SPAR_MAKE_INT_LITERAL (sparp_arg, unbox ((yyvsp[0].box))); }
#line 7166 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2420 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = SPAR_MAKE_INT_LITERAL (sparp_arg, -unbox((yyvsp[0].box))); }
#line 7172 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2424 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 5, SPAR_LIT, (yyvsp[0].box), NULL, NULL, NULL); }
#line 7178 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2425 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 5, SPAR_LIT, (yyvsp[-1].box), NULL, (yyvsp[0].box), NULL); }
#line 7184 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2426 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_typed_literal (sparp_arg, (yyvsp[-2].box), (yyvsp[0].tree)->_.lit.val, NULL); }
#line 7190 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2430 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = SPAR_MAKE_EBV_LITERAL(sparp_arg, 1); }
#line 7196 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2431 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = SPAR_MAKE_EBV_LITERAL(sparp_arg, 0); }
#line 7202 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2435 "sparql_p.y" /* yacc.c:1646  */
    { dk_set_t lst = (yyvsp[0].backstack); t_set_push (&lst, (ptrlong)0); (yyval.trees) = (SPART **)t_list_to_array (lst); }
#line 7208 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2436 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, NULL, ((ptrlong)_STAR)); }
#line 7214 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2440 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)DEFAULT_L)); }
#line 7220 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2441 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)->_.lit.val); }
#line 7226 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2442 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)DEFAULT_L)); }
#line 7232 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2443 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)->_.lit.val); }
#line 7238 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2447 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0100, "\"variable+>property\""); (yyval.token_type) = _PLUS_GT; }
#line 7244 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2448 "sparql_p.y" /* yacc.c:1646  */
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x0100, "\"variable*>property\""); (yyval.token_type) = _STAR_GT; }
#line 7250 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2452 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[-1].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[0].box))),
		  Q_IRI_REF, (yyvsp[0].box)); }
#line 7259 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2456 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[-1].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[0].box))),
		  QNAME, (yyvsp[0].box)); }
#line 7268 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2460 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[-1].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[0].box))),
		  QNAME_NS, (yyvsp[0].box)); }
#line 7277 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2464 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "IRI reference expected after *> or +> operator"); }
#line 7283 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2468 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[0].box))); }
#line 7289 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2473 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[0].box))); }
#line 7295 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2474 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME/*_NS*/, sparp_expand_qname_prefix (sparp_arg, (yyvsp[0].box))); }
#line 7301 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2478 "sparql_p.y" /* yacc.c:1646  */
    {
		if (0 < dk_set_position (sparp_arg->sparp_sg->sg_invalidated_bnode_labels, (yyvsp[0].box)))
		  spar_error (sparp_arg, "Blank node label %s can not be used in two different basic graph patterns", (yyvsp[0].box));
		if (NULL != sparp_arg->sparp_sg->sg_bnode_label_sets)
		  t_set_pushnew ((dk_set_t *)(&(sparp_arg->sparp_sg->sg_bnode_label_sets->data)), (yyvsp[0].box));
		(yyval.tree) = spar_make_blank_node (sparp_arg, (yyvsp[0].box), 0); }
#line 7312 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2484 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:anon"), 1); }
#line 7318 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2490 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 7324 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2491 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 7330 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2492 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); }
#line 7336 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2518 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_drop_macro_lib (sparp_arg, (yyvsp[0].tree), (yyvsp[-3].token_type) /* yes, $2 after $5 */); }
#line 7343 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2525 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 7350 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2527 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != (yyvsp[-3].tree))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = (yyvsp[-3].tree);
		else if (spar_ctor_uses_default_graph ((yyvsp[0].tree)))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, "triple constructor in INSERT {...} without GRAPH {...}", 1); }
#line 7360 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2532 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, INSERT_L, NULL, (yyvsp[0].tree) );
		spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), sparp_arg->sparp_env->spare_found_default_sparul_target, (yyvsp[-2].tree)); }
#line 7368 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2540 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_in_precode_expn = 2; }
#line 7376 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2543 "sparql_p.y" /* yacc.c:1646  */
    {
                SPART *fake = spar_make_fake_action_solution (sparp_arg);
		SPART *dflt_g = (yyvsp[-3].tree);
		if ((NULL == dflt_g) && spar_ctor_uses_default_graph ((yyvsp[0].tree)))
		  dflt_g = spar_default_sparul_target (sparp_arg, "triple in INSERT DATA {...} without GRAPH {...}", 0);
		sparp_arg->sparp_in_precode_expn = 0;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, SPARUL_INSERT_DATA, NULL, fake );
		spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), dflt_g, (yyvsp[0].tree)); }
#line 7389 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2556 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 7396 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2558 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != (yyvsp[-3].tree))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = (yyvsp[-3].tree);
		else if (spar_ctor_uses_default_graph ((yyvsp[0].tree)))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, "triple constructor in DELETE {...} without GRAPH {...}", 1); }
#line 7406 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2563 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DELETE_L, NULL, (yyvsp[0].tree) );
		spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), sparp_arg->sparp_env->spare_found_default_sparul_target, (yyvsp[-2].tree)); }
#line 7414 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2571 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_in_precode_expn = 2; }
#line 7422 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2574 "sparql_p.y" /* yacc.c:1646  */
    {
                SPART *fake = spar_make_fake_action_solution (sparp_arg);
		SPART *dflt_g = (yyvsp[-3].tree);
		if ((NULL == dflt_g) && spar_ctor_uses_default_graph ((yyvsp[0].tree)))
		  dflt_g = spar_default_sparul_target (sparp_arg, "triple in DELETE DATA {...} without GRAPH {...}", 0);
		sparp_arg->sparp_in_precode_expn = 0;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, SPARUL_DELETE_DATA, NULL, fake );
		spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), dflt_g, (yyvsp[0].tree)); }
#line 7435 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2588 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 7442 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2590 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != (yyvsp[-7].tree))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = (yyvsp[-7].tree);
		else if (spar_ctor_uses_default_graph ((yyvsp[-3].tree)))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, "triple constructor in DELETE {...} without GRAPH {...}", 1);
		else if (spar_ctor_uses_default_graph ((yyvsp[0].tree)))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, "triple constructor in INSERT {...} without GRAPH {...}", 1); }
#line 7454 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2597 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, MODIFY_L, NULL, (yyvsp[0].tree) );
		spar_compose_retvals_of_modify (sparp_arg, (yyval.tree), sparp_arg->sparp_env->spare_found_default_sparul_target, (yyvsp[-5].tree), (yyvsp[-2].tree)); }
#line 7462 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2603 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_sparul_clear (sparp_arg, (yyvsp[0].tree), (yyvsp[-1].token_type) /* yes, $2 after $3 */); }
#line 7469 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2609 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_sparul_load (sparp_arg, (yyvsp[0].tree), (yyvsp[0].tree), (yyvsp[-1].token_type)); }
#line 7476 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2611 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_sparul_load (sparp_arg, (yyvsp[0].tree), (yyvsp[-3].tree) /* yes, $3 after $6 */, (yyvsp[-4].token_type)); }
#line 7483 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2616 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_sparul_load_service_data (sparp_arg, (yyvsp[-1].tree), (SPART *)t_NEW_DB_NULL, (yyvsp[-3].token_type)); }
#line 7490 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 629:
#line 2618 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_sparul_load_service_data (sparp_arg, (yyvsp[-4].tree), (yyvsp[0].tree), (yyvsp[-6].token_type)); }
#line 7497 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 630:
#line 2623 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_sparul_create (sparp_arg, (yyvsp[0].tree), (yyvsp[-2].token_type) /* yes, $2 after $4 */); }
#line 7504 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 631:
#line 2628 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_sparul_drop (sparp_arg, (yyvsp[0].tree), (yyvsp[-1].token_type) /* yes, $2 after $3 */); }
#line 7511 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 632:
#line 2633 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_fake_action_solution (sparp_arg); }
#line 7517 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 633:
#line 2634 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		(yyval.tree) = (yyvsp[0].tree);
		(yyvsp[0].tree)->_.wm.where_gp = where_gp; }
#line 7526 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 634:
#line 2641 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 7532 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2642 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7538 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2646 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7544 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2650 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 7550 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2651 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7556 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2655 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7562 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 640:
#line 2659 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)ALL_L; }
#line 7568 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 641:
#line 2660 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)DEFAULT_L; }
#line 7574 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 642:
#line 2661 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)NAMED_L; }
#line 7580 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 643:
#line 2662 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7586 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 644:
#line 2666 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)DEFAULT_L; }
#line 7592 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 645:
#line 2667 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7598 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 646:
#line 2671 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 7604 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 647:
#line 2672 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7610 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 648:
#line 2676 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 7616 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 649:
#line 2677 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "WITH clause");
		sparp_arg->sparp_env->spare_src.ssrc_graph_set_by_with = (yyvsp[-1].tree);
		sparp_make_and_push_new_graph_source (sparp_arg, SPART_GRAPH_FROM, (yyvsp[-1].tree), (yyvsp[0].trees), SPARP_SSRC_FROZEN_BY_PROTOCOL); }
#line 7625 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 650:
#line 2684 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 7631 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 651:
#line 2685 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 7637 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 652:
#line 2689 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 0; }
#line 7643 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 653:
#line 2690 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = 1; }
#line 7649 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 654:
#line 2699 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 7656 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 655:
#line 2701 "sparql_p.y" /* yacc.c:1646  */
    {
		if (spar_ctor_uses_default_graph ((yyvsp[-1].tree)))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, "triple constructor in DELETE {...} without GRAPH {...}", 1);
		else if ((NULL != (yyvsp[0].tree)) && spar_ctor_uses_default_graph ((yyvsp[0].tree)))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, "triple constructor in INSERT {...} without GRAPH {...}", 1); }
#line 7666 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 656:
#line 2706 "sparql_p.y" /* yacc.c:1646  */
    {
		if (NULL != (yyvsp[-2].tree))
		  {
		    (yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, MODIFY_L, NULL, (yyvsp[0].tree) );
		    spar_compose_retvals_of_modify (sparp_arg, (yyval.tree), sparp_arg->sparp_env->spare_found_default_sparul_target, (yyvsp[-3].tree), (yyvsp[-2].tree)); }
		else
		  {
		    (yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DELETE_L, NULL, (yyvsp[0].tree) );
		    spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), sparp_arg->sparp_env->spare_found_default_sparul_target, (yyvsp[-3].tree)); } }
#line 7680 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 657:
#line 2715 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_apply_fallback_default_graph (sparp_arg, 1);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		sparp_arg->sparp_in_ctor_from_where = 1;
		spar_gp_init (sparp_arg, WHERE_L); }
#line 7690 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 658:
#line 2720 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_in_ctor_from_where = 0; }
#line 7697 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 659:
#line 2722 "sparql_p.y" /* yacc.c:1646  */
    {
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[0].tree);
		SPART *dflt_g = NULL;
		if (spar_ctor_uses_default_graph (where_gp))  /* To check for errors only, the default graph is set by spar_apply_fallback_default_graph (sparp_arg, 1) above (if set at all) */
		  spar_default_sparul_target (sparp_arg, "triple in DELETE WHERE {...} without GRAPH {...}", 0);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DELETE_L, NULL, wm);
		spar_compose_retvals_of_delete_from_wm (sparp_arg, (yyval.tree), dflt_g); }
#line 7711 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 660:
#line 2737 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
#line 7718 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 661:
#line 2739 "sparql_p.y" /* yacc.c:1646  */
    {
		if (spar_ctor_uses_default_graph ((yyvsp[0].tree)))
		  sparp_arg->sparp_env->spare_found_default_sparul_target = spar_default_sparul_target (sparp_arg, "triple constructor in INSERT {...} without GRAPH {...}", 1); }
#line 7726 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 662:
#line 2742 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, INSERT_L, NULL, (yyvsp[0].tree) );
		spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), sparp_arg->sparp_env->spare_found_default_sparul_target, (yyvsp[-2].tree)); }
#line 7734 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 663:
#line 2748 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 7740 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 664:
#line 2749 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (yyvsp[0].tree); }
#line 7746 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 665:
#line 2753 "sparql_p.y" /* yacc.c:1646  */
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (0x2000, "WITH clause");
		(yyval.tree) = spar_make_sparul_copymoveadd (sparp_arg, (yyvsp[-4].token_type), (yyvsp[-2].tree), (yyvsp[0].tree), (yyvsp[-3].token_type) /* yes, $2 after $3 */); }
#line 7754 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 666:
#line 2759 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = COPY_L; }
#line 7760 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 667:
#line 2760 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = MOVE_L; }
#line 7766 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 668:
#line 2761 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = ADD_L; }
#line 7772 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 670:
#line 2768 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_e4qm->e4qm_default_table = NULL; }
#line 7779 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 672:
#line 2774 "sparql_p.y" /* yacc.c:1646  */
    { t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls), (yyvsp[0].tree)); }
#line 7785 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 680:
#line 2792 "sparql_p.y" /* yacc.c:1646  */
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[-3].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[-5].token_type)) ? "IRI" : "literal"), (yyvsp[-3].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), ((IRI_L == (yyvsp[-5].token_type)) ? "IRI class" : "literal class"));
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[-3].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg,
		  ((IRI_L == (yyvsp[-5].token_type)) ? "DB.DBA.RDF_QM_DEFINE_IRI_CLASS_FORMAT" : "DB.DBA.RDF_QM_DEFINE_LITERAL_CLASS_FORMAT"),
		  (SPART **)t_list (3, (yyvsp[-3].box), (yyvsp[-2].box), (yyvsp[-1].tree)), (yyvsp[0].trees) ); }
#line 7799 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 681:
#line 2801 "sparql_p.y" /* yacc.c:1646  */
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[-3].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[-5].token_type)) ? "IRI" : "literal"), (yyvsp[-3].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), ((IRI_L == (yyvsp[-5].token_type)) ? "IRI class" : "literal class"));
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[-3].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg,
		  ((IRI_L == (yyvsp[-5].token_type)) ? "DB.DBA.RDF_QM_DEFINE_IRI_CLASS_FUNCTIONS" : "DB.DBA.RDF_QM_DEFINE_LITERAL_CLASS_FUNCTIONS"),
		  (SPART **)t_list (2, (yyvsp[-3].box), spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[-1].backstack)))), (yyvsp[0].trees) ); }
#line 7813 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 682:
#line 2813 "sparql_p.y" /* yacc.c:1646  */
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[0].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[-2].token_type)) ? "IRI" : "literal"), (yyvsp[0].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_CLASS",
		  (SPART **)t_list (2, (yyvsp[0].box), (yyvsp[-3].token_type) /* yes, $2 after $5 */), NULL );
		sparp_jso_push_deleted (sparp_arg, uname_virtrdf_ns_uri_QuadMapFormat , (yyvsp[0].box)); }
#line 7825 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 683:
#line 2823 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_SUBCLASS",
		  (SPART **)t_list (2, (yyvsp[-3].box), (yyvsp[0].box)), NULL ); }
#line 7833 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 684:
#line 2826 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_SUBCLASS",
		  (SPART **)t_list (2, (yyvsp[-3].box), (yyvsp[0].box)), NULL ); }
#line 7841 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 685:
#line 2832 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (0); }
#line 7847 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 686:
#line 2833 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (0); }
#line 7853 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 687:
#line 2834 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 7859 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 688:
#line 2838 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[1]); }
#line 7868 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 689:
#line 2842 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = (yyvsp[-2].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[1]); }
#line 7877 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 690:
#line 2849 "sparql_p.y" /* yacc.c:1646  */
    {	/*... ( 'DATATYPE' QmIRIrefConst )	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("DATATYPE"), t_box_dv_uname_string ((yyvsp[0].box))); }
#line 7884 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 691:
#line 2851 "sparql_p.y" /* yacc.c:1646  */
    {			/*... | ( 'LANG' STRING )	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("LANG"), t_box_dv_uname_string ((yyvsp[0].box))); }
#line 7891 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 692:
#line 2853 "sparql_p.y" /* yacc.c:1646  */
    {			/*... | ( 'LANG' STRING )	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("LANG"), t_box_dv_uname_string ((yyvsp[0].box))); }
#line 7898 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 693:
#line 2855 "sparql_p.y" /* yacc.c:1646  */
    {			/*... | 'BIJECTION'	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("BIJECTION"), (ptrlong)1); }
#line 7905 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 694:
#line 2857 "sparql_p.y" /* yacc.c:1646  */
    {			/*... | 'DEREF'	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("DEREF"), (ptrlong)1); }
#line 7912 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 695:
#line 2859 "sparql_p.y" /* yacc.c:1646  */
    {			/*... | 'RETURNS' STRING ('UNION' STRING)*	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("RETURNS"),
		    spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[0].backstack))) ); }
#line 7920 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 696:
#line 2865 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 7926 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 697:
#line 2866 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 7932 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 698:
#line 2870 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_env()->spare_storage_name = (yyvsp[0].box);
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[0].box), NULL))
		  spar_error (sparp_arg, "The identifier of Quad Storage %.100s is already used in the previous part of the statement", (yyvsp[0].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), "Quad Storage");
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[0].box));
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_BEGIN_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
                sparp_jso_push_affected (sparp_arg, (yyvsp[0].box)); }
#line 7950 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 699:
#line 2884 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_bookmark (sparp_arg); }
#line 7957 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 700:
#line 2886 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_END_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		spar_qm_pop_bookmark (sparp_arg);
		sparp_env()->spare_storage_name = NULL; }
#line 7968 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 701:
#line 2895 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = IRI_L; }
#line 7974 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 702:
#line 2896 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.token_type) = LITERAL_L; }
#line 7980 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 703:
#line 2900 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_env()->spare_storage_name = (yyvsp[0].box);
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_BEGIN_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
                sparp_jso_push_affected (sparp_arg, (yyvsp[0].box)); }
#line 7991 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 704:
#line 2907 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_bookmark (sparp_arg); }
#line 7998 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 705:
#line 2909 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_END_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		spar_qm_pop_bookmark (sparp_arg);
		sparp_env()->spare_storage_name = NULL; }
#line 8009 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 706:
#line 2918 "sparql_p.y" /* yacc.c:1646  */
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[0].box), NULL))
		  spar_error (sparp_arg, "The identifier of Quad Storage %.100s is already used in the previous part of the statement", (yyvsp[0].box));
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_QUAD_STORAGE",
                    (SPART **)t_list (2, (yyvsp[0].box), (yyvsp[-3].token_type) /* yes, $2 after $5 */), NULL ) );
                sparp_jso_push_deleted (sparp_arg, uname_virtrdf_ns_uri_QuadStorage , (yyvsp[0].box));
                sparp_jso_push_affected (sparp_arg, (yyvsp[0].box)); }
#line 8022 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 707:
#line 2929 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[0].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[-3].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
#line 8033 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 708:
#line 2935 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		    (SPART **)t_list (4, t_box_dv_uname_string ("GRAPH"), (yyvsp[0].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[-4].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
#line 8044 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 709:
#line 2944 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[0].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[-1].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
#line 8055 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 710:
#line 2950 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		    (SPART **)t_list (4, t_box_dv_uname_string ("GRAPH"), (yyvsp[0].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[-2].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
#line 8066 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 711:
#line 2959 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8072 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 712:
#line 2960 "sparql_p.y" /* yacc.c:1646  */
    {	/*... ( 'FROM' QTABLE 'AS' PLAIN_ID QmTextLiteral* )	*/
		spar_qm_add_aliased_table_or_sqlquery (sparp_arg, (yyvsp[-2].box), (yyvsp[0].box));
		sparp_arg->sparp_e4qm->e4qm_current_table_alias = (yyvsp[0].box); }
#line 8080 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 713:
#line 2963 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_e4qm->e4qm_current_table_alias = NULL; }
#line 8087 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 714:
#line 2965 "sparql_p.y" /* yacc.c:1646  */
    {		/*... | ( 'FROM' PLAIN_ID 'AS' PLAIN_ID QmTextLiteral* )	*/
		spar_qm_add_aliased_alias (sparp_arg, (yyvsp[-2].box), (yyvsp[0].box));
		sparp_arg->sparp_e4qm->e4qm_current_table_alias = (yyvsp[0].box); }
#line 8095 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 715:
#line 2968 "sparql_p.y" /* yacc.c:1646  */
    {		/*... | ( 'FROM' 'SQLQUERY' QmSqlQuery 'AS' PLAIN_ID QmTextLiteral* )	*/
		void * qry = t_box_sprintf (100 + strlen((yyvsp[-2].box)), "/*[sqlquery[*/ %s\n/*]sqlquery]*/", (yyvsp[-2].box));
		spar_qm_add_aliased_table_or_sqlquery (sparp_arg, qry, (yyvsp[0].box));
		sparp_arg->sparp_e4qm->e4qm_current_table_alias = (yyvsp[0].box); }
#line 8104 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 716:
#line 2972 "sparql_p.y" /* yacc.c:1646  */
    {
		sparp_arg->sparp_e4qm->e4qm_current_table_alias = NULL; }
#line 8111 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 717:
#line 2974 "sparql_p.y" /* yacc.c:1646  */
    {						/*... | QmCondition	*/
		spar_qm_add_table_filter (sparp_arg, (yyvsp[0].box)); }
#line 8118 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 718:
#line 2979 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8124 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 720:
#line 2984 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_add_text_literal (sparp_arg,
		  sparp_arg->sparp_e4qm->e4qm_current_table_alias,
		  (yyvsp[-4].box), (yyvsp[-2].tree), (yyvsp[-1].trees), (yyvsp[0].trees) ); }
#line 8133 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 721:
#line 2991 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = NULL; }
#line 8139 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 722:
#line 2992 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (void *)((ptrlong)(XML_L)); }
#line 8145 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 723:
#line 2996 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = NULL; }
#line 8151 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 724:
#line 2997 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 8157 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 725:
#line 3001 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = NULL; }
#line 8163 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 726:
#line 3002 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 8169 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 727:
#line 3006 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[1]);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[0]); }
#line 8178 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 728:
#line 3010 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = (yyvsp[-2].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[1]);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[0]); }
#line 8187 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 729:
#line 3017 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ((yyvsp[0].box)), NULL); }
#line 8193 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 730:
#line 3018 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ((yyvsp[-1].box)), (yyvsp[0].box)); }
#line 8199 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 731:
#line 3022 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8205 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 732:
#line 3023 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8211 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 733:
#line 3024 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8217 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 734:
#line 3028 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8223 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 735:
#line 3029 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_clean_locals (sparp_arg);
		sparp_arg->sparp_e4qm->e4qm_default_table = NULL; }
#line 8231 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 736:
#line 3032 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8237 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 738:
#line 3037 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls), (yyvsp[0].tree)); }
#line 8244 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 739:
#line 3039 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls), (yyvsp[0].tree)); }
#line 8251 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 740:
#line 3041 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls), (yyvsp[0].tree)); }
#line 8258 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 741:
#line 3043 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls), (yyvsp[0].tree)); }
#line 8265 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 742:
#line 3048 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MACRO_LIBRARY",
		  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (2, t_box_dv_uname_string ("ID"), (yyvsp[0].box)) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
#line 8276 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 743:
#line 3057 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DETACH_MACRO_LIBRARY",
		  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[0].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[-3].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
#line 8287 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 744:
#line 3063 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DETACH_MACRO_LIBRARY",
		  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (2, t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[-2].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
#line 8298 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 745:
#line 3072 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8304 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 746:
#line 3073 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8310 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 747:
#line 3074 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8316 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 749:
#line 3079 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_clean_locals (sparp_arg);
		sparp_arg->sparp_e4qm->e4qm_default_table = NULL; }
#line 8324 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 751:
#line 3087 "sparql_p.y" /* yacc.c:1646  */
    { spar_qm_push_local (sparp_arg, CREATE_L, (SPART *)((yyvsp[-1].box)), 1); }
#line 8330 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 752:
#line 3088 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 8336 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 753:
#line 3090 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, CREATE_L, (SPART *)((yyvsp[-4].box)), 1);
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MAPPING",
                    (SPART **)t_list (2, t_box_copy (sparp_env()->spare_storage_name), (yyvsp[-1].box)),
		    t_spartlist_concat ((yyvsp[0].trees), (SPART **)t_list (2, t_box_dv_uname_string ("ID"), (yyvsp[-4].box))) ) ); }
#line 8347 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 754:
#line 3097 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, GRAPH_L, (SPART *)((yyvsp[-4].box)), 1);
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MAPPING",
                    (SPART **)t_list (2, t_box_copy (sparp_env()->spare_storage_name), (yyvsp[-1].box)),
		    t_spartlist_concat ((yyvsp[0].trees), (SPART **)t_list (2, t_box_dv_uname_string ("GRAPH"), (yyvsp[-4].box))) ) ); }
#line 8358 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 755:
#line 3104 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_qm_make_empty_mapping (sparp_arg, NULL, (yyvsp[-1].trees)) );
		spar_qm_push_local (sparp_arg, _LBRA,
		  spar_qm_get_local (sparp_arg, CREATE_L, 1), 1 );
		spar_qm_push_local (sparp_arg, CREATE_L, NULL, 1);
		spar_qm_push_bookmark (sparp_arg); }
#line 8370 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 756:
#line 3111 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_pop_bookmark (sparp_arg); }
#line 8377 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 758:
#line 3117 "sparql_p.y" /* yacc.c:1646  */
    { }
#line 8383 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 759:
#line 3119 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_qm_make_empty_mapping (sparp_arg,
	            (void *) spar_qm_get_local (sparp_arg, CREATE_L, 1),
	            (yyvsp[-1].trees) ) );
		spar_qm_push_local (sparp_arg, _LBRA,
		  spar_qm_get_local (sparp_arg, CREATE_L, 1), 1 );
		spar_qm_push_local (sparp_arg, CREATE_L, NULL, 1);
		spar_qm_push_bookmark (sparp_arg); }
#line 8397 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 760:
#line 3128 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_pop_bookmark (sparp_arg); }
#line 8404 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 761:
#line 3133 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, SUBJECT_L,
		  ((NULL != (yyvsp[-2].tree)) ? ((SPART *)((yyvsp[-2].tree))) : spar_qm_get_local (sparp_arg, SUBJECT_L, 1)),
		  0);
		spar_qm_push_local (sparp_arg, PREDICATE_L,
		  ((NULL != (yyvsp[-1].tree)) ? ((SPART *)((yyvsp[-1].tree))) : spar_qm_get_local (sparp_arg, PREDICATE_L, 1)),
		  0);
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_qm_make_real_mapping (sparp_arg,
		    (void *)spar_qm_get_local (sparp_arg, CREATE_L, 0),
		    (yyvsp[0].trees) ) ); }
#line 8420 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 762:
#line 3147 "sparql_p.y" /* yacc.c:1646  */
    { spar_qm_push_local (sparp_arg, SUBJECT_L, (yyvsp[0].tree), 0); }
#line 8426 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 763:
#line 3148 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8432 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 764:
#line 3152 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8438 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 765:
#line 3153 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8444 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 766:
#line 3157 "sparql_p.y" /* yacc.c:1646  */
    { spar_qm_push_local (sparp_arg, GRAPH_L, (yyvsp[0].tree), 0); }
#line 8450 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 767:
#line 3158 "sparql_p.y" /* yacc.c:1646  */
    { spar_qm_push_local (sparp_arg, SUBJECT_L, (yyvsp[0].tree), 0); }
#line 8456 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 768:
#line 3159 "sparql_p.y" /* yacc.c:1646  */
    { spar_qm_push_local (sparp_arg, PREDICATE_L, (yyvsp[0].tree), 0); }
#line 8462 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 769:
#line 3160 "sparql_p.y" /* yacc.c:1646  */
    { spar_qm_push_local (sparp_arg, OBJECT_L, (yyvsp[0].tree), 0); }
#line 8468 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 770:
#line 3161 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, DATATYPE_L, (SPART *)((yyvsp[0].tree)), 0); }
#line 8475 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 771:
#line 3163 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, LANG_L, (SPART *)((yyvsp[0].tree)), 0); }
#line 8482 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 772:
#line 3169 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8488 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 773:
#line 3170 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_pop_key (sparp_arg, PREDICATE_L); }
#line 8495 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 775:
#line 3176 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, PREDICATE_L,
		  ((NULL != (yyvsp[0].tree)) ? ((SPART *)((yyvsp[0].tree))) : spar_qm_get_local (sparp_arg, PREDICATE_L, 1)),
		  0 ); }
#line 8504 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 776:
#line 3180 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8510 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 777:
#line 3181 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Description of predicate field is expected here"); }
#line 8516 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 778:
#line 3185 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_qm_make_real_mapping (sparp_arg, (yyvsp[0].box), (yyvsp[-1].trees)) ); }
#line 8524 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 779:
#line 3188 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_pop_key (sparp_arg, OBJECT_L); }
#line 8531 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 780:
#line 3190 "sparql_p.y" /* yacc.c:1646  */
    {
		t_set_push (&(sparp_arg->sparp_e4qm->e4qm_acc_sqls),
		  spar_qm_make_real_mapping (sparp_arg, (yyvsp[0].box), (yyvsp[-1].trees)) ); }
#line 8539 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 781:
#line 3196 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, OBJECT_L,
		  ((NULL != (yyvsp[0].tree)) ? ((SPART *)((yyvsp[0].tree))) : spar_qm_get_local (sparp_arg, OBJECT_L, 1)),
		  0 ); }
#line 8548 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 782:
#line 3200 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, DATATYPE_L, (SPART *)((yyvsp[0].tree)), 0); }
#line 8555 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 783:
#line 3202 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, LANG_L, (SPART *)((yyvsp[0].tree)), 0); }
#line 8562 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 784:
#line 3204 "sparql_p.y" /* yacc.c:1646  */
    {
		spar_qm_push_local (sparp_arg, WHERE_L, (SPART *)t_revlist_to_array ((yyvsp[0].backstack)), 0); }
#line 8569 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 785:
#line 3206 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (yyvsp[0].trees); }
#line 8575 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 786:
#line 3207 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Description of object field is expected here"); }
#line 8581 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 787:
#line 3211 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = NULL; }
#line 8587 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 788:
#line 3212 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (yyvsp[0].box); }
#line 8593 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 789:
#line 3216 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 8599 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 790:
#line 3217 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)(yyvsp[0].tree)->_.lit.val; }
#line 8605 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 791:
#line 3218 "sparql_p.y" /* yacc.c:1646  */
    { sparyyerror (sparp_arg, "Datatype of object field should be either constant IRI or table field, not template IRI (string)"); }
#line 8611 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 792:
#line 3219 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_qm_col_desc (sparp_arg, (yyvsp[0].tree)); }
#line 8617 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 793:
#line 3223 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 8623 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 794:
#line 3224 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)(yyvsp[0].box); }
#line 8629 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 795:
#line 3225 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_qm_col_desc (sparp_arg, (yyvsp[0].tree)); }
#line 8635 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 797:
#line 3230 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 8641 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 798:
#line 3231 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)uname_rdf_ns_uri_type; }
#line 8647 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 800:
#line 3236 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = NULL; }
#line 8653 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 801:
#line 3240 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = (SPART *)(yyvsp[0].box); }
#line 8659 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 804:
#line 3244 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_qm_value (sparp_arg, (yyvsp[-3].box), (SPART **)t_revlist_to_array ((yyvsp[-1].backstack))); }
#line 8666 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 805:
#line 3246 "sparql_p.y" /* yacc.c:1646  */
    {			/*... | QmSqlCol	*/
		(yyval.tree) = spar_make_qm_value (sparp_arg, box_dv_uname_string ("literal"), (SPART **)t_list (1, (yyvsp[0].tree))); }
#line 8673 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 806:
#line 3251 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 8679 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 808:
#line 3256 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 8685 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 809:
#line 3257 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-1].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].box)); }
#line 8691 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 810:
#line 3261 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (yyvsp[0].box); }
#line 8697 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 811:
#line 3262 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (yyvsp[0].box); }
#line 8703 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 812:
#line 3266 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (yyvsp[0].box); }
#line 8709 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 813:
#line 3267 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (yyvsp[0].box); }
#line 8715 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 814:
#line 3271 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (0); }
#line 8721 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 815:
#line 3272 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (0); }
#line 8727 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 816:
#line 3273 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[-1].backstack)); }
#line 8733 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 817:
#line 3277 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[1]); }
#line 8742 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 818:
#line 3281 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.backstack) = (yyvsp[-2].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[0].trees)[1]); }
#line 8751 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 819:
#line 3288 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("SOFT_EXCLUSIVE"), (ptrlong)1); }
#line 8757 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 820:
#line 3289 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("EXCLUSIVE"), (ptrlong)1); }
#line 8763 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 821:
#line 3290 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("ORDER"), (yyvsp[0].box)); }
#line 8769 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 822:
#line 3291 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("USING"), (yyvsp[0].box)); }
#line 8775 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 823:
#line 3295 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 8781 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 825:
#line 3300 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 8787 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 826:
#line 3301 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 8793 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 827:
#line 3305 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 8799 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 828:
#line 3306 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 8805 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 829:
#line 3310 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_vector_qm_sql (sparp_arg,
		  (SPART **)t_list (4, (yyvsp[-3].box), (yyvsp[-2].tree), (yyvsp[0].boxes)[0], (yyvsp[0].boxes)[1]) ); }
#line 8813 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 830:
#line 3316 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[-1].backstack))); }
#line 8819 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 831:
#line 3320 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; }
#line 8825 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 833:
#line 3325 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 8831 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 834:
#line 3326 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.backstack) = (yyvsp[-2].backstack); t_set_push (&((yyval.backstack)), (yyvsp[0].tree)); }
#line 8837 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 835:
#line 3330 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.tree) = spar_make_vector_qm_sql (sparp_arg,
		  (SPART **)t_list (4, (yyvsp[-2].box), (yyvsp[-1].box), (yyvsp[0].boxes)[0], (yyvsp[0].boxes)[1]) ); }
#line 8845 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 836:
#line 3336 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, (yyvsp[0].box), (ptrlong)0); }
#line 8851 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 837:
#line 3337 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, t_box_sprintf (300, "%.100s %.100s", (yyvsp[-1].box), (yyvsp[0].box)), (ptrlong)0); }
#line 8857 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 838:
#line 3338 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, (yyvsp[-1].box), (ptrlong)1); }
#line 8863 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 839:
#line 3339 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.boxes) = t_list (2, t_box_sprintf (300, "%.100s %.100s", (yyvsp[-2].box), (yyvsp[-1].box)), (ptrlong)1); }
#line 8869 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 840:
#line 3343 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_uname_string ("in"); }
#line 8875 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 841:
#line 3344 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_uname_string ((yyvsp[0].box)); }
#line 8881 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 842:
#line 3348 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_PLAIN_ID, (yyvsp[0].box)); }
#line 8887 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 843:
#line 3349 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_SQL_ALIASCOLNAME, (yyvsp[0].box)); }
#line 8893 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 844:
#line 3350 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_SQL_QTABLECOLNAME, (yyvsp[0].box)); }
#line 8899 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 846:
#line 3355 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_short_string ("GEO"); }
#line 8905 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 847:
#line 3356 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_short_string ("PRECISION"); }
#line 8911 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 848:
#line 3357 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_short_string ("TEXT"); }
#line 8917 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 849:
#line 3358 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = t_box_dv_short_string ("XML"); }
#line 8923 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 850:
#line 3363 "sparql_p.y" /* yacc.c:1646  */
    { (yyval.box) = (yyvsp[0].tree)->_.lit.val; }
#line 8929 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 851:
#line 3364 "sparql_p.y" /* yacc.c:1646  */
    {
		(yyval.box) = spar_make_iri_from_template (sparp_arg, (yyvsp[-1].box)); }
#line 8936 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 852:
#line 3369 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8942 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 853:
#line 3370 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8948 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 854:
#line 3374 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8954 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 855:
#line 3375 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8960 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 856:
#line 3379 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8966 "sparql_p.c" /* yacc.c:1646  */
    break;

  case 857:
#line 3380 "sparql_p.y" /* yacc.c:1646  */
    {}
#line 8972 "sparql_p.c" /* yacc.c:1646  */
    break;


#line 8976 "sparql_p.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (sparp_arg, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (sparp_arg, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, sparp_arg);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, sparp_arg);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (sparp_arg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, sparp_arg);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, sparp_arg);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
