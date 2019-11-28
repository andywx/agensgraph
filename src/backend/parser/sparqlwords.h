/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: /usr/bin/gperf -aCDGptr -Kkwd -L ANSI-C -k'1,2,3,5,7,$' --ignore-case -Nsparql_lex_hash_kw sparqlwords.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 24 "sparqlwords.gperf"
struct sparql_keyword { char *kwd; int token; int subtype; };

#define TOTAL_KEYWORDS 198
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 23
#define MIN_HASH_VALUE 52
#define MAX_HASH_VALUE 1031
/* maximum key range = 980, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (register const char *s1, register const char *s2)
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,   69,
       119, 1032,   48,  232,  224, 1032,    7, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032,   16,   38,  167,   11,  113,
       189,   86,  169,   66,   60,  208,  224,   53,   80,  120,
        71,   24,  172,  176,  114,  145,  118,  232,  230,  210,
       156, 1032, 1032, 1032, 1032,  189, 1032,   16,   38,  167,
        11,  113,  189,   86,  169,   66,   60,  208,  224,   53,
        80,  120,   71,   24,  172,  176,  114,  145,  118,  232,
       230,  210,  156, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032, 1032,
      1032, 1032, 1032, 1032, 1032, 1032
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct sparql_keyword wordlist[] =
  {
#line 27 "sparqlwords.gperf"
    {"ADD",			ADD_L			, 0},
#line 30 "sparqlwords.gperf"
    {"AND",			_AMP_AMP		, 0},
#line 56 "sparqlwords.gperf"
    {"DATA",			DATA_L			, 0},
#line 124 "sparqlwords.gperf"
    {"NAMED",		NAMED_L			, 0},
#line 186 "sparqlwords.gperf"
    {"TABID",		TABID_L			, 0},
#line 38 "sparqlwords.gperf"
    {"BIND",			BIND_L			, 0},
#line 141 "sparqlwords.gperf"
    {"QUAD",			QUAD_L			, 0},
#line 115 "sparqlwords.gperf"
    {"MAP",			MAP_L			, 0},
#line 73 "sparqlwords.gperf"
    {"END",			END_L			, 0},
#line 91 "sparqlwords.gperf"
    {"IN",			IN_L			, 0},
#line 125 "sparqlwords.gperf"
    {"NAN",			NAN_L			, 0},
#line 118 "sparqlwords.gperf"
    {"MIN",			MIN_L			, 0},
#line 142 "sparqlwords.gperf"
    {"RAND",			SPARQL_BIF		, SPAR_BIF_RAND},
#line 36 "sparqlwords.gperf"
    {"AVG",			AVG_L			, 0},
#line 42 "sparqlwords.gperf"
    {"BOUND",		BOUND_L			, 0},
#line 37 "sparqlwords.gperf"
    {"BASE",			BASE_L			, 0},
#line 191 "sparqlwords.gperf"
    {"TO",			TO_L			, 0},
#line 31 "sparqlwords.gperf"
    {"AS",			AS_L			, 0},
#line 216 "sparqlwords.gperf"
    {"UUID",			SPARQL_BIF		, SPAR_BIF_UUID},
#line 97 "sparqlwords.gperf"
    {"IRI",			IRI_L			, 0},
#line 112 "sparqlwords.gperf"
    {"LOAD",			LOAD_L			, 0},
#line 68 "sparqlwords.gperf"
    {"DROP",			DROP_L			, 0},
#line 192 "sparqlwords.gperf"
    {"TOP",			TOP_L			, 0},
#line 96 "sparqlwords.gperf"
    {"INTO",			INTO_L			, 0},
#line 217 "sparqlwords.gperf"
    {"VALID",		SPARQL_BIF		, SPAR_BIF_VALID},
#line 69 "sparqlwords.gperf"
    {"EBV",			SPARQL_BIF		, SPAR_BIF_EBV},
#line 114 "sparqlwords.gperf"
    {"MAKE",			MAKE_L			, 0},
#line 89 "sparqlwords.gperf"
    {"IFP",			IFP_L			, 0},
#line 123 "sparqlwords.gperf"
    {"MOVE",			MOVE_L			, 0},
#line 26 "sparqlwords.gperf"
    {"ABS",			SPARQL_BIF		, SPAR_BIF_ABS},
#line 104 "sparqlwords.gperf"
    {"LANG",			LANG_L			, 0},
#line 166 "sparqlwords.gperf"
    {"SHA384",		SPARQL_BIF		, SPAR_BIF_SHA384},
#line 195 "sparqlwords.gperf"
    {"TZ",			SPARQL_BIF		, SPAR_BIF_TZ},
#line 185 "sparqlwords.gperf"
    {"SUM",			SUM_L			, 0},
#line 127 "sparqlwords.gperf"
    {"NOT",			NOT_L			, 0},
#line 163 "sparqlwords.gperf"
    {"SHA1",			SPARQL_BIF		, SPAR_BIF_SHA1},
#line 211 "sparqlwords.gperf"
    {"UNBOUND",		UNBOUND_L		, 0},
#line 82 "sparqlwords.gperf"
    {"GEO",			GEO_L			, 0},
#line 99 "sparqlwords.gperf"
    {"ISIRI",		SPARQL_BIF		, SPAR_BIF_ISIRI},
#line 88 "sparqlwords.gperf"
    {"IF",			SPARQL_BIF		, SPAR_BIF_IF},
#line 57 "sparqlwords.gperf"
    {"DATATYPE",		DATATYPE_L		, 0},
#line 58 "sparqlwords.gperf"
    {"DAY",			SPARQL_BIF		, SPAR_BIF_DAY},
#line 214 "sparqlwords.gperf"
    {"URI",			IRI_L			, 0},
#line 202 "sparqlwords.gperf"
    {"T_IN",			T_IN_L			, 0},
#line 213 "sparqlwords.gperf"
    {"UNION",		UNION_L			, 0},
#line 43 "sparqlwords.gperf"
    {"BY",			BY_L			, 0},
#line 149 "sparqlwords.gperf"
    {"ROUND",		SPARQL_BIF		, SPAR_BIF_ROUND},
#line 136 "sparqlwords.gperf"
    {"OR",			_BAR_BAR		, 0},
#line 55 "sparqlwords.gperf"
    {"CUBE",			CUBE_L			, 0},
#line 41 "sparqlwords.gperf"
    {"BNODE",		SPARQL_BIF		, SPAR_BIF_BNODE},
#line 64 "sparqlwords.gperf"
    {"DESC",			DESC_L			, 0},
#line 87 "sparqlwords.gperf"
    {"HAVING",		HAVING_L		, 0},
#line 44 "sparqlwords.gperf"
    {"CASE",			CASE_L			, 0},
#line 189 "sparqlwords.gperf"
    {"THEN",			THEN_L			, 0},
#line 113 "sparqlwords.gperf"
    {"MACRO",		MACRO_L			, 0},
#line 40 "sparqlwords.gperf"
    {"BIJECTION",		BIJECTION_L		, 0},
#line 144 "sparqlwords.gperf"
    {"REDUCED",		REDUCED_L		, 0},
#line 187 "sparqlwords.gperf"
    {"TABLE_OPTION",		TABLE_OPTION_L		, 0},
#line 131 "sparqlwords.gperf"
    {"OF",			OF_L			, 0},
#line 49 "sparqlwords.gperf"
    {"CONCAT",		SPARQL_BIF		, SPAR_BIF_CONCAT},
#line 130 "sparqlwords.gperf"
    {"OBJECT",		OBJECT_L		, 0},
#line 135 "sparqlwords.gperf"
    {"OPTION",		OPTION_L		, 0},
#line 60 "sparqlwords.gperf"
    {"DEFINE",		DEFINE_L		, 0},
#line 90 "sparqlwords.gperf"
    {"IDENTIFIED",		IDENTIFIED_L		, 0},
#line 223 "sparqlwords.gperf"
    {"YEAR",			SPARQL_BIF		, SPAR_BIF_YEAR},
#line 39 "sparqlwords.gperf"
    {"BINDINGS",		BINDINGS_L		, 0},
#line 204 "sparqlwords.gperf"
    {"T_MIN",		T_MIN_L			, 0},
#line 103 "sparqlwords.gperf"
    {"ISURI",		SPARQL_BIF		, SPAR_BIF_ISURI},
#line 84 "sparqlwords.gperf"
    {"GROUP",		GROUP_L			, 0},
#line 92 "sparqlwords.gperf"
    {"INF",			INF_L			, 0},
#line 32 "sparqlwords.gperf"
    {"ASC",			ASC_L			, 0},
#line 117 "sparqlwords.gperf"
    {"MD5",			SPARQL_BIF		, SPAR_BIF_MD5},
#line 116 "sparqlwords.gperf"
    {"MAX",			MAX_L			, 0},
#line 164 "sparqlwords.gperf"
    {"SHA224",		SPARQL_BIF		, SPAR_BIF_SHA224},
#line 79 "sparqlwords.gperf"
    {"FROM",			FROM_L			, 0},
#line 34 "sparqlwords.gperf"
    {"ASSUME",		ASSUME_L		, 0},
#line 132 "sparqlwords.gperf"
    {"OFFBAND",		OFFBAND_L		, 0},
#line 194 "sparqlwords.gperf"
    {"TRUE",			true_L			, 0},
#line 167 "sparqlwords.gperf"
    {"SHA512",		SPARQL_BIF		, SPAR_BIF_SHA512},
#line 119 "sparqlwords.gperf"
    {"MINUS",		MINUS_L			, 0},
#line 210 "sparqlwords.gperf"
    {"UCASE",		SPARQL_BIF		, SPAR_BIF_UCASE},
#line 139 "sparqlwords.gperf"
    {"PREDICATE",		PREDICATE_L		, 0},
#line 215 "sparqlwords.gperf"
    {"USING",		USING_L			, 0},
#line 70 "sparqlwords.gperf"
    {"EBV_INT",		SPARQL_BIF		, SPAR_BIF_EBV_INT},
#line 52 "sparqlwords.gperf"
    {"COPY",			COPY_L			, 0},
#line 47 "sparqlwords.gperf"
    {"CEIL",			SPARQL_BIF		, SPAR_BIF_CEIL},
#line 188 "sparqlwords.gperf"
    {"TEXT",			TEXT_L			, 0},
#line 109 "sparqlwords.gperf"
    {"LIMIT",		LIMIT_L			, 0},
#line 138 "sparqlwords.gperf"
    {"PRECISION",		PRECISION_L		, 0},
#line 66 "sparqlwords.gperf"
    {"DETACH",		DETACH_L		, 0},
#line 62 "sparqlwords.gperf"
    {"DELETE",		DELETE_L		, 0},
#line 162 "sparqlwords.gperf"
    {"SETS",			SETS_L			, 0},
#line 221 "sparqlwords.gperf"
    {"WITH",			WITH_L			, 0},
#line 35 "sparqlwords.gperf"
    {"ATTACH",		ATTACH_L		, 0},
#line 158 "sparqlwords.gperf"
    {"SAMPLE",		SAMPLE_L		, 0},
#line 121 "sparqlwords.gperf"
    {"MODIFY",		MODIFY_L		, 0},
#line 190 "sparqlwords.gperf"
    {"TIMEZONE",		SPARQL_BIF		, SPAR_BIF_TIMEZONE},
#line 157 "sparqlwords.gperf"
    {"SAMETERM",		SPARQL_BIF		, SPAR_BIF_SAMETERM},
#line 122 "sparqlwords.gperf"
    {"MONTH",		SPARQL_BIF		, SPAR_BIF_MONTH},
#line 126 "sparqlwords.gperf"
    {"NIL",			NIL_L			, 0},
#line 219 "sparqlwords.gperf"
    {"WHEN",			WHEN_L			, 0},
#line 169 "sparqlwords.gperf"
    {"SOFT",			SOFT_L			, 0},
#line 146 "sparqlwords.gperf"
    {"REPLACE",		SPARQL_BIF		, SPAR_BIF_REPLACE},
#line 67 "sparqlwords.gperf"
    {"DISTINCT",		DISTINCT_L		, 0},
#line 33 "sparqlwords.gperf"
    {"ASK",			ASK_L			, 0},
#line 95 "sparqlwords.gperf"
    {"INSERT",		INSERT_L		, 0},
#line 108 "sparqlwords.gperf"
    {"LIKE",			LIKE_L			, 0},
#line 83 "sparqlwords.gperf"
    {"GRAPH",		GRAPH_L			, 0},
#line 212 "sparqlwords.gperf"
    {"UNDEF",		UNDEF_L			, 0},
#line 93 "sparqlwords.gperf"
    {"INDEX",		INDEX_L			, 0},
#line 86 "sparqlwords.gperf"
    {"GROUPING",		GROUPING_L		, 0},
#line 61 "sparqlwords.gperf"
    {"DEFMACRO",		DEFMACRO_L		, 0},
#line 71 "sparqlwords.gperf"
    {"ELSE",			ELSE_L			, 0},
#line 65 "sparqlwords.gperf"
    {"DESCRIBE",		DESCRIBE_L		, 0},
#line 181 "sparqlwords.gperf"
    {"STRUUID",		SPARQL_BIF		, SPAR_BIF_STRUUID},
#line 173 "sparqlwords.gperf"
    {"STR",			SPARQL_BIF		, SPAR_BIF_STR},
#line 106 "sparqlwords.gperf"
    {"LCASE",		SPARQL_BIF		, SPAR_BIF_LCASE},
#line 72 "sparqlwords.gperf"
    {"ENCODE_FOR_URI",	SPARQL_BIF		, SPAR_BIF_ENCODE_FOR_URI},
#line 51 "sparqlwords.gperf"
    {"CONTAINS",		SPARQL_BIF		, SPAR_BIF_CONTAINS},
#line 184 "sparqlwords.gperf"
    {"SUBSTR",		SPARQL_BIF		, SPAR_BIF_SUBSTR},
#line 137 "sparqlwords.gperf"
    {"ORDER",		ORDER_L			, 0},
#line 218 "sparqlwords.gperf"
    {"VALUES",		VALUES_L		, 0},
#line 205 "sparqlwords.gperf"
    {"T_OUT",		T_OUT_L			, 0},
#line 178 "sparqlwords.gperf"
    {"STRLANG",		SPARQL_BIF		, SPAR_BIF_STRLANG},
#line 140 "sparqlwords.gperf"
    {"PREFIX",		PREFIX_L		, 0},
#line 172 "sparqlwords.gperf"
    {"STORAGE",		STORAGE_L		, 0},
#line 76 "sparqlwords.gperf"
    {"FALSE",		false_L			, 0},
#line 179 "sparqlwords.gperf"
    {"STRLEN",		SPARQL_BIF		, SPAR_BIF_STRLEN},
#line 53 "sparqlwords.gperf"
    {"COUNT",		COUNT_L			, 0},
#line 168 "sparqlwords.gperf"
    {"SILENT",		SILENT_L		, 0},
#line 128 "sparqlwords.gperf"
    {"NOW",			SPARQL_BIF		, SPAR_BIF_NOW},
#line 209 "sparqlwords.gperf"
    {"T_STEP",		T_STEP_L		, 0},
#line 120 "sparqlwords.gperf"
    {"MINUTES",		SPARQL_BIF		, SPAR_BIF_MINUTES},
#line 134 "sparqlwords.gperf"
    {"OPTIONAL",		OPTIONAL_L		, 0},
#line 105 "sparqlwords.gperf"
    {"LANGMATCHES",		SPARQL_BIF		, SPAR_BIF_LANGMATCHES},
#line 129 "sparqlwords.gperf"
    {"NULL",			NULL_L			, 0},
#line 63 "sparqlwords.gperf"
    {"DEREF",		DEREF_L			, 0},
#line 198 "sparqlwords.gperf"
    {"T_DISTINCT",		T_DISTINCT_L		, 0},
#line 54 "sparqlwords.gperf"
    {"CREATE",		CREATE_L		, 0},
#line 154 "sparqlwords.gperf"
    {"SAME_AS_P",		SAME_AS_P_L		, 0},
#line 28 "sparqlwords.gperf"
    {"ALL",			ALL_L			, 0},
#line 59 "sparqlwords.gperf"
    {"DEFAULT",		DEFAULT_L		, 0},
#line 150 "sparqlwords.gperf"
    {"SCORE",		SCORE_L			, 0},
#line 176 "sparqlwords.gperf"
    {"STRDT",		SPARQL_BIF		, SPAR_BIF_STRDT},
#line 29 "sparqlwords.gperf"
    {"ALTER",		ALTER_L			, 0},
#line 48 "sparqlwords.gperf"
    {"COALESCE",		SPARQL_BIF		, SPAR_BIF_COALESCE},
#line 75 "sparqlwords.gperf"
    {"EXISTS",		EXISTS_L		, 0},
#line 183 "sparqlwords.gperf"
    {"SUBJECT",		SUBJECT_L		, 0},
#line 94 "sparqlwords.gperf"
    {"INFERENCE",		INFERENCE_L		, 0},
#line 199 "sparqlwords.gperf"
    {"T_END_FLAG",		T_END_FLAG_L		, 0},
#line 193 "sparqlwords.gperf"
    {"TRANSITIVE",		TRANSITIVE_L		, 0},
#line 98 "sparqlwords.gperf"
    {"ISBLANK",		SPARQL_BIF		, SPAR_BIF_ISBLANK},
#line 101 "sparqlwords.gperf"
    {"ISNUMERIC",		SPARQL_BIF		, SPAR_BIF_ISNUMERIC},
#line 170 "sparqlwords.gperf"
    {"SOURCE",		GRAPH_L			, 0},
#line 133 "sparqlwords.gperf"
    {"OFFSET",		OFFSET_L		, 0},
#line 222 "sparqlwords.gperf"
    {"XML",			XML_L			, 0},
#line 80 "sparqlwords.gperf"
    {"FUNCTION",		FUNCTION_L		, 0},
#line 148 "sparqlwords.gperf"
    {"ROLLUP",		ROLLUP_L		, 0},
#line 153 "sparqlwords.gperf"
    {"SAME_AS_O",		SAME_AS_O_L		, 0},
#line 156 "sparqlwords.gperf"
    {"SAME_AS_S_O",		SAME_AS_S_O_L		, 0},
#line 85 "sparqlwords.gperf"
    {"GROUP_CONCAT",		GROUP_CONCAT_L		, 0},
#line 197 "sparqlwords.gperf"
    {"T_DIRECTION",		T_DIRECTION_L		, 0},
#line 220 "sparqlwords.gperf"
    {"WHERE",		WHERE_L			, 0},
#line 50 "sparqlwords.gperf"
    {"CONSTRUCT",		CONSTRUCT_L		, 0},
#line 161 "sparqlwords.gperf"
    {"SERVICE",		SERVICE_L		, 0},
#line 45 "sparqlwords.gperf"
    {"CLASS",		CLASS_L			, 0},
#line 77 "sparqlwords.gperf"
    {"FILTER",		FILTER_L		, 0},
#line 107 "sparqlwords.gperf"
    {"LIBRARY",		LIBRARY_L		, 0},
#line 200 "sparqlwords.gperf"
    {"T_EXISTS",		T_EXISTS_L		, 0},
#line 81 "sparqlwords.gperf"
    {"HOURS",		SPARQL_BIF		, SPAR_BIF_HOURS},
#line 152 "sparqlwords.gperf"
    {"SAME_AS",		SAME_AS_L		, 0},
#line 155 "sparqlwords.gperf"
    {"SAME_AS_S",		SAME_AS_S_L		, 0},
#line 102 "sparqlwords.gperf"
    {"ISREF",		SPARQL_BIF		, SPAR_BIF_ISREF},
#line 160 "sparqlwords.gperf"
    {"SELECT",		SELECT_L		, 0},
#line 175 "sparqlwords.gperf"
    {"STRBEFORE",		SPARQL_BIF		, SPAR_BIF_STRBEFORE},
#line 203 "sparqlwords.gperf"
    {"T_MAX",		T_MAX_L			, 0},
#line 165 "sparqlwords.gperf"
    {"SHA256",		SPARQL_BIF		, SPAR_BIF_SHA256},
#line 143 "sparqlwords.gperf"
    {"REGEX",		SPARQL_BIF		, SPAR_BIF_REGEX},
#line 74 "sparqlwords.gperf"
    {"EXCLUSIVE",		EXCLUSIVE_L		, 0},
#line 145 "sparqlwords.gperf"
    {"REMOVE_UNICODE3_ACCENTS",	SPARQL_BIF	, SPAR_BIF_REMOVE_UNICODE3_ACCENTS},
#line 46 "sparqlwords.gperf"
    {"CLEAR",		CLEAR_L			, 0},
#line 78 "sparqlwords.gperf"
    {"FLOOR",		SPARQL_BIF		, SPAR_BIF_FLOOR},
#line 159 "sparqlwords.gperf"
    {"SECONDS",		SPARQL_BIF		, SPAR_BIF_SECONDS},
#line 177 "sparqlwords.gperf"
    {"STRENDS",		SPARQL_BIF		, SPAR_BIF_STRENDS},
#line 151 "sparqlwords.gperf"
    {"SCORE_LIMIT",		SCORE_LIMIT_L		, 0},
#line 207 "sparqlwords.gperf"
    {"T_NO_ORDER",		T_NO_ORDER_L		, 0},
#line 147 "sparqlwords.gperf"
    {"RETURNS",		RETURNS_L		, 0},
#line 180 "sparqlwords.gperf"
    {"STRSTARTS",		SPARQL_BIF		, SPAR_BIF_STRSTARTS},
#line 208 "sparqlwords.gperf"
    {"T_SHORTEST_ONLY",	T_SHORTEST_ONLY_L	, 0},
#line 182 "sparqlwords.gperf"
    {"SUBCLASS",		SUBCLASS_L		, 0},
#line 174 "sparqlwords.gperf"
    {"STRAFTER",		SPARQL_BIF		, SPAR_BIF_STRAFTER},
#line 171 "sparqlwords.gperf"
    {"SQLQUERY",		SQLQUERY_L		, 0},
#line 111 "sparqlwords.gperf"
    {"LOCAL",		LOCAL_L			, 0},
#line 206 "sparqlwords.gperf"
    {"T_NO_CYCLES",		T_NO_CYCLES_L		, 0},
#line 196 "sparqlwords.gperf"
    {"T_CYCLES_ONLY",	T_CYCLES_ONLY_L		, 0},
#line 201 "sparqlwords.gperf"
    {"T_FINAL_AS",		T_FINAL_AS_L		, 0},
#line 100 "sparqlwords.gperf"
    {"ISLITERAL",		SPARQL_BIF		, SPAR_BIF_ISLITERAL},
#line 110 "sparqlwords.gperf"
    {"LITERAL",		LITERAL_L		, 0}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   0,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,   1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,   2,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,   3,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,   4,  -1,  -1,  -1,   5,
      6,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,   7,  -1,  -1,  -1,   8,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   9,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  10,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  11,  12,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  13,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     14,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  15,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  16,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     17,  18,  -1,  19,  -1,  20,  -1,  -1,  21,  22,
     -1,  -1,  -1,  -1,  23,  24,  -1,  -1,  -1,  -1,
     25,  -1,  -1,  -1,  26,  -1,  -1,  -1,  -1,  -1,
     27,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  28,  29,
     30,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  31,  -1,  -1,  -1,  -1,  -1,  32,  -1,
     33,  34,  -1,  -1,  35,  -1,  -1,  36,  -1,  -1,
     -1,  -1,  37,  -1,  -1,  38,  39,  40,  -1,  -1,
     41,  -1,  42,  43,  -1,  -1,  44,  -1,  -1,  -1,
     45,  -1,  -1,  -1,  46,  -1,  47,  48,  -1,  49,
     -1,  50,  -1,  -1,  -1,  51,  52,  -1,  -1,  -1,
     53,  54,  -1,  -1,  -1,  -1,  55,  -1,  -1,  -1,
     -1,  -1,  56,  57,  -1,  -1,  -1,  -1,  -1,  -1,
     58,  -1,  -1,  59,  -1,  60,  -1,  -1,  -1,  -1,
     -1,  61,  62,  -1,  63,  64,  -1,  -1,  -1,  -1,
     65,  66,  -1,  -1,  67,  68,  -1,  69,  -1,  70,
     -1,  71,  72,  -1,  73,  -1,  -1,  -1,  74,  -1,
     75,  -1,  -1,  76,  -1,  -1,  -1,  -1,  77,  -1,
     -1,  -1,  -1,  -1,  -1,  78,  79,  -1,  -1,  80,
     81,  -1,  -1,  -1,  82,  -1,  -1,  -1,  -1,  -1,
     83,  -1,  84,  -1,  85,  86,  87,  88,  -1,  -1,
     89,  90,  -1,  91,  -1,  92,  93,  -1,  94,  95,
     96,  -1,  97,  -1,  -1,  -1,  98,  99, 100,  -1,
     -1,  -1,  -1, 101,  -1, 102,  -1,  -1, 103,  -1,
     -1, 104,  -1,  -1, 105, 106,  -1, 107,  -1, 108,
     -1,  -1, 109, 110,  -1,  -1,  -1,  -1,  -1, 111,
    112, 113,  -1,  -1,  -1,  -1, 114, 115, 116,  -1,
    117,  -1,  -1,  -1,  -1,  -1,  -1, 118,  -1,  -1,
     -1, 119, 120, 121,  -1,  -1, 122, 123, 124, 125,
    126, 127,  -1,  -1,  -1, 128, 129, 130,  -1, 131,
     -1,  -1, 132, 133, 134,  -1,  -1, 135,  -1, 136,
    137,  -1,  -1,  -1,  -1, 138,  -1,  -1,  -1,  -1,
    139, 140,  -1, 141, 142, 143,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 144, 145, 146,  -1, 147,  -1, 148,
     -1,  -1, 149,  -1,  -1, 150,  -1,  -1,  -1, 151,
     -1,  -1,  -1, 152,  -1,  -1,  -1, 153,  -1,  -1,
     -1, 154,  -1,  -1, 155,  -1, 156,  -1, 157, 158,
     -1, 159, 160,  -1, 161, 162,  -1,  -1,  -1, 163,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    164,  -1,  -1,  -1, 165,  -1,  -1,  -1,  -1,  -1,
    166, 167,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    168,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 169,  -1, 170,  -1, 171,  -1, 172,  -1,  -1,
    173,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 174,  -1,  -1,
     -1, 175,  -1, 176,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 177,  -1,  -1,  -1,
     -1,  -1,  -1, 178, 179,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 180,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 181,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 182,  -1,  -1,  -1,  -1,
     -1, 183,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 184, 185,  -1,  -1,  -1,
    186,  -1,  -1, 187,  -1,  -1,  -1,  -1, 188,  -1,
     -1,  -1,  -1, 189, 190,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 191,
     -1,  -1,  -1,  -1, 192,  -1,  -1,  -1,  -1, 193,
     -1,  -1,  -1, 194,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 195,  -1,  -1, 196,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 197
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct sparql_keyword *
sparql_lex_hash_kw (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].kwd;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
