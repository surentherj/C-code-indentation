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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yaccfile.y" /* yacc.c:339  */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern void yyerror(char *);
extern int yyparse(void);
extern FILE *yyin,*yyout;
void Indentation();
char *Space;
char *Newline;
char *tab;
extern int count;


#line 82 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    ID = 259,
    OSQB = 260,
    OPAREN = 261,
    CPAREN = 262,
    CSQB = 263,
    OBR = 264,
    CBR = 265,
    EQ = 266,
    NE = 267,
    GT = 268,
    GE = 269,
    LT = 270,
    LE = 271,
    PLUS = 272,
    MINUS = 273,
    STAR = 274,
    SLASH = 275,
    EQUAL = 276,
    COM = 277,
    AND = 278,
    OR = 279,
    SC = 280,
    IF = 281,
    DOUBLE = 282,
    NUM = 283,
    ELSE = 284,
    WHILE = 285,
    DO = 286,
    RETURN = 287,
    BREAK = 288,
    CONT = 289,
    HASH = 290,
    INC = 291,
    HEADER = 292,
    ST = 293,
    FOR = 294,
    COUT = 295,
    LSHIFT = 296,
    CIN = 297,
    RSHIFT = 298
  };
#endif
/* Tokens.  */
#define INT 258
#define ID 259
#define OSQB 260
#define OPAREN 261
#define CPAREN 262
#define CSQB 263
#define OBR 264
#define CBR 265
#define EQ 266
#define NE 267
#define GT 268
#define GE 269
#define LT 270
#define LE 271
#define PLUS 272
#define MINUS 273
#define STAR 274
#define SLASH 275
#define EQUAL 276
#define COM 277
#define AND 278
#define OR 279
#define SC 280
#define IF 281
#define DOUBLE 282
#define NUM 283
#define ELSE 284
#define WHILE 285
#define DO 286
#define RETURN 287
#define BREAK 288
#define CONT 289
#define HASH 290
#define INC 291
#define HEADER 292
#define ST 293
#define FOR 294
#define COUT 295
#define LSHIFT 296
#define CIN 297
#define RSHIFT 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "yaccfile.y" /* yacc.c:355  */

	int	int_val;
	double 	double_val;
	char* str_val;

#line 214 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    41,    50,    56,    62,    68,    77,    84,
      91,    97,   103,   109,   117,   124,   130,   137,   143,   150,
     157,   164,   171,   178,   184,   190,   197,   203,   209,   215,
     221,   229,   236,   242,   248,   254,   260,   266,   272,   278,
     284,   290,   296,   302,   308,   314,   320,   327,   333,   339,
     345,   352,   360,   368,   375,   380,   386,   392,   398,   404,
     410,   419,   427,   435,   442,   449,   457,   463,   469,   475,
     481,   488,   494,   500,   506,   512,   518,   527,   533,   540,
     547
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "OSQB", "OPAREN", "CPAREN",
  "CSQB", "OBR", "CBR", "EQ", "NE", "GT", "GE", "LT", "LE", "PLUS",
  "MINUS", "STAR", "SLASH", "EQUAL", "COM", "AND", "OR", "SC", "IF",
  "DOUBLE", "NUM", "ELSE", "WHILE", "DO", "RETURN", "BREAK", "CONT",
  "HASH", "INC", "HEADER", "ST", "FOR", "COUT", "LSHIFT", "CIN", "RSHIFT",
  "$accept", "program", "main", "headers", "function", "func", "func_decl",
  "type_name", "parameter_list", "sts", "st", "data_decls", "id_list",
  "id", "assig", "assign", "out_st", "in_st", "exp", "term", "factor",
  "addop", "mulop", "block_st", "single_st", "if_st", "for_st", "while_st",
  "do_st", "condition_exp", "condition", "condition_op", "comparison_op",
  "return_st", "break_st", "continue_st", YY_NULLPTR
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
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -52

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-52)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,   -26,    12,    81,    11,   -52,    43,    19,   -10,    79,
     -52,   -52,   -52,    19,    45,    88,   -52,    91,   -52,    35,
     -52,    95,   116,   132,   131,   135,    87,    22,   137,   138,
     155,   124,   123,   163,   136,     2,   -52,   148,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   164,   -52,   -52,    10,    35,
      36,    36,    36,    56,   -52,   140,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,    54,    -1,   -52,   -52,
     -52,   163,   163,   163,    78,   -52,   165,   -52,    36,   -52,
     -52,   169,     1,   136,   167,   130,   143,   166,    33,   168,
     -52,   170,   171,   -52,   -52,   -52,    36,   -52,   -52,    36,
     154,   156,   157,   158,   163,    19,   -52,   106,   -52,   -52,
      19,   172,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
      36,    87,   -52,   -52,    36,    87,   -52,    36,    -1,   -52,
      36,    36,   -52,   -52,   -52,   -52,   -52,   180,   -52,   134,
     159,   -52,   -52,   175,   134,   161,   -52,    87,   162,   163,
     -52,   -52,   179,    87,   -52
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     3,     6,     0,
      15,    16,     2,     8,     0,     0,     7,     0,     9,     0,
      10,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    21,     0,    22,    29,
      30,    23,    28,    24,    25,     0,    26,    27,     0,     0,
       0,     0,     0,     0,    54,     0,    53,    55,    60,    56,
      57,    58,    59,    78,    46,    45,     0,    41,    43,    79,
      80,     0,     0,     0,     0,    33,     0,    20,     0,    12,
      14,     0,     0,     0,     0,     0,     0,     0,    66,     0,
      52,     0,     0,    47,    48,    77,     0,    49,    50,     0,
       0,     0,     0,     0,     0,    31,    11,     0,    17,    13,
       0,     0,     5,    36,    71,    72,    73,    74,    75,    76,
       0,     0,    69,    70,     0,     0,    51,     0,    42,    44,
       0,     0,    39,    40,    34,    32,    38,     0,     4,    68,
      61,    67,    64,     0,    37,     0,    18,     0,     0,     0,
      62,    65,     0,     0,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -52,   -52,   -52,   182,   178,   -52,   -52,    -5,   -52,   -32,
     -52,    89,   -52,   -19,    44,    -4,   -52,   -52,   -23,    96,
      98,   -52,   -52,   -11,   -52,    59,    80,    90,    92,   -51,
     -52,   -52,   -52,   -25,    97,   100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     3,    12,    13,    14,    33,    82,    34,
      35,    36,    74,    65,   101,    54,    39,    40,    86,    67,
      68,    96,    99,    55,    56,    57,    58,    59,    60,    87,
      88,   124,   120,    45,    61,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,    89,    15,    77,    66,    10,    23,    37,    15,    76,
       4,   109,     5,    10,    75,    38,    37,    83,    97,    98,
      80,    91,    10,   110,    84,     1,    23,    85,    24,    11,
      37,    38,    25,    26,    37,    28,    29,    11,    10,    23,
      23,    30,    31,    81,    32,    38,    11,    63,     8,    38,
      64,    19,   100,   102,   103,   107,   122,   123,   111,    10,
      23,    24,    11,    90,    64,    25,    26,    27,    28,    29,
      20,    93,    94,   141,    30,    31,   143,    32,    41,    95,
     145,     9,    24,    11,     6,   134,    25,    26,    17,    28,
      29,    23,    21,    53,    41,    30,    31,   139,    32,    42,
     104,    22,    37,   105,    48,   137,    37,   144,    41,    43,
     140,    44,    41,    24,   142,    42,    46,    25,    26,    47,
      28,    29,    49,    93,    94,    43,    30,    44,    37,    42,
     100,   136,    46,    42,    37,    47,   150,    50,   113,    43,
      51,    44,   154,    43,    52,    44,    46,    93,    94,    47,
      46,    93,    94,    47,   114,   115,   116,   117,   118,   119,
      93,    94,    69,    70,    71,    72,    73,    23,    27,    78,
      92,    79,   106,   108,   112,   130,   121,   126,   125,   138,
     127,   131,   132,   133,   146,   148,   149,   151,   147,   153,
      16,    18,   128,   152,   135,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
      19,    52,     7,    35,    27,     3,     4,    26,    13,    34,
      36,    10,     0,     3,    33,    19,    35,    49,    19,    20,
      10,    53,     3,    22,    49,    35,     4,    50,    26,    27,
      49,    35,    30,    31,    53,    33,    34,    27,     3,     4,
       4,    39,    40,    48,    42,    49,    27,    25,    37,    53,
      28,     6,    71,    72,    73,    78,    23,    24,    83,     3,
       4,    26,    27,     7,    28,    30,    31,    32,    33,    34,
      25,    17,    18,   124,    39,    40,   127,    42,    19,    25,
     131,    38,    26,    27,     3,   104,    30,    31,     9,    33,
      34,     4,     4,     6,    35,    39,    40,   120,    42,    19,
      22,    10,   121,    25,     9,   110,   125,   130,    49,    19,
     121,    19,    53,    26,   125,    35,    19,    30,    31,    19,
      33,    34,     6,    17,    18,    35,    39,    35,   147,    49,
     149,    25,    35,    53,   153,    35,   147,     5,     8,    49,
       9,    49,   153,    53,     9,    53,    49,    17,    18,    49,
      53,    17,    18,    53,    11,    12,    13,    14,    15,    16,
      17,    18,    25,    25,     9,    41,    43,     4,    32,    21,
      30,     7,     7,     4,     7,    21,    10,     7,    10,     7,
       9,    25,    25,    25,     4,    10,    25,    25,    29,    10,
       8,    13,    96,   149,   105,    -1,    -1,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    45,    47,    36,     0,     3,    46,    37,    38,
       3,    27,    48,    49,    50,    51,    47,     9,    48,     6,
      25,     4,    10,     4,    26,    30,    31,    32,    33,    34,
      39,    40,    42,    51,    53,    54,    55,    57,    59,    60,
      61,    69,    70,    71,    72,    77,    78,    79,     9,     6,
       5,     9,     9,     6,    59,    67,    68,    69,    70,    71,
      72,    78,    79,    25,    28,    57,    62,    63,    64,    25,
      25,     9,    41,    43,    56,    57,    77,    53,    21,     7,
      10,    51,    52,    53,    77,    62,    62,    73,    74,    73,
       7,    53,    30,    17,    18,    25,    65,    19,    20,    66,
      57,    58,    57,    57,    22,    25,     7,    62,     4,    10,
      22,    77,     7,     8,    11,    12,    13,    14,    15,    16,
      76,    10,    23,    24,    75,    10,     7,     9,    63,    64,
      21,    25,    25,    25,    57,    55,    25,    51,     7,    62,
      67,    73,    67,    73,    62,    73,     4,    29,    10,    25,
      67,    25,    58,    10,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    47,    47,    48,    48,
      49,    49,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    56,    56,    57,    57,    58,    59,    60,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    71,    72,    73,    73,    74,    75,
      75,    76,    76,    76,    76,    76,    76,    77,    77,    78,
      79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     8,     7,     3,     4,     1,     2,
       2,     5,     4,     5,     4,     1,     1,     2,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     1,     4,     3,     4,     4,
       4,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     7,     9,     5,     7,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       2
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
      yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
#line 33 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+1));
                               
				strcpy(temp,(yyvsp[-2].str_val)); strcat(temp, (yyvsp[-1].str_val));strcat (temp,(yyvsp[0].str_val)); strcat(temp,Newline);
                                (yyval.str_val)=temp; 
				printf("\n\nProgram \n%s", (yyval.str_val));
				fprintf(yyout, "%s", (yyval.str_val));
			}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 42 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+1));
                               
				strcpy(temp,(yyvsp[-1].str_val)); strcat(temp, (yyvsp[0].str_val));strcat(temp,Newline);
                                (yyval.str_val)=temp; 
				printf("\n\nProgram \n%s", (yyval.str_val));
				fprintf(yyout, "%s", temp);
			}
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-7].str_val))+strlen((yyvsp[-6].str_val))+strlen((yyvsp[-5].str_val))+strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+strlen(Space)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,(yyvsp[-7].str_val)); strcat(temp,Space); strcat(temp, (yyvsp[-6].str_val)); strcat(temp, (yyvsp[-5].str_val));strcat(temp, (yyvsp[-4].str_val));strcat(temp,Newline);Indentation();strcat(temp, (yyvsp[-3].str_val));strcat(temp, (yyvsp[-2].str_val));strcat(temp, (yyvsp[-1].str_val)); strcat(temp,Newline);strcat(temp, (yyvsp[0].str_val)); 
                                (yyval.str_val)=temp;
			}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 57 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-6].str_val))+strlen((yyvsp[-5].str_val))+strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+strlen(Space)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,(yyvsp[-6].str_val)); strcat(temp,Space); strcat(temp, (yyvsp[-5].str_val)); strcat(temp, (yyvsp[-4].str_val));strcat(temp, (yyvsp[-3].str_val));strcat(temp,Newline);Indentation();strcat(temp, (yyvsp[-2].str_val));strcat(temp, (yyvsp[-1].str_val)); strcat(temp,Newline);strcat(temp, (yyvsp[0].str_val)); 
                                (yyval.str_val)=temp;
			}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,(yyvsp[-2].str_val)); strcat(temp, (yyvsp[-1].str_val)); strcat(temp, (yyvsp[0].str_val)); 
                                (yyval.str_val)=temp;
			}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+1));
                               	strcpy(temp,Newline);Indentation(); strcat(temp,tab);  strcat(temp,(yyvsp[-3].str_val)); strcat(temp, (yyvsp[-2].str_val)); strcat(temp, (yyvsp[-1].str_val)); strcat(temp, (yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
				
			}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 78 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                               	strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
			}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 85 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                             	strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,(yyvsp[-4].str_val)); strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[-3].str_val)); strcat (temp,(yyvsp[-2].str_val));strcat (temp,(yyvsp[-1].str_val));strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[-2].str_val)); strcat (temp,(yyvsp[-1].str_val));strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 110 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-4].str_val)); strcat(temp,(yyvsp[-3].str_val)); strcat (temp,(yyvsp[-2].str_val)); strcat (temp,(yyvsp[-1].str_val)); 
				strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
				
			}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 118 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val)); strcat (temp,(yyvsp[-1].str_val)); strcat (temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp;
				
			}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 125 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Space)+1));
                                strcpy(temp,(yyvsp[0].str_val));strcat(temp,Space);
                                (yyval.str_val)=temp;
			}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 131 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Space)+1));
                                strcpy(temp,(yyvsp[0].str_val)); strcat(temp,Space);
                                (yyval.str_val)=temp;
			}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 138 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 144 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val)); strcat (temp,(yyvsp[-1].str_val)); strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 151 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp;
				
			}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 158 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
				
			}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 165 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 

			}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 172 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 

			}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 179 "yaccfile.y" /* yacc.c:1646  */
    { 
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 185 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 191 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 198 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 204 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 210 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 216 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 222 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 230 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val));strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 237 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(tab)+strlen(Newline)+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val));strcat (temp,(yyvsp[-1].str_val));strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 243 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 249 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 255 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 261 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val));
                                (yyval.str_val)=temp;
			}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 267 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[-2].str_val)); strcat(temp,Space); strcat(temp,(yyvsp[-1].str_val));strcat(temp, Space);strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 273 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,Space); strcat(temp,(yyvsp[-2].str_val));strcat(temp, Space);strcat (temp,(yyvsp[-1].str_val)); strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 279 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,Space); strcat(temp,(yyvsp[-2].str_val));strcat(temp, Space);strcat (temp,(yyvsp[-1].str_val)); strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 285 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[-3].str_val)); strcat(temp,Space); strcat(temp,(yyvsp[-2].str_val));strcat(temp, Space);strcat (temp,(yyvsp[-1].str_val)); strcat (temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 291 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp;
			}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 297 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val)); strcat(temp, (yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 303 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 309 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val)); strcat(temp, (yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 315 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp;
			}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 321 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
			}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 328 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 334 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 340 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 346 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 353 "yaccfile.y" /* yacc.c:1646  */
    {
				
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab); strcat(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val)); strcat(temp,Newline);Indentation(); strcat(temp,tab); strcat (temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
				
			}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 361 "yaccfile.y" /* yacc.c:1646  */
    {
				
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab); strcat(temp,(yyvsp[-1].str_val)); strcat(temp,Newline);Indentation(); strcat(temp,tab); strcat (temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
				
			}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 369 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
			}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 376 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 			}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 381 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 387 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 393 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 399 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 405 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 411 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 420 "yaccfile.y" /* yacc.c:1646  */
    {
				
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-4].str_val)); strcat(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
				
			}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 428 "yaccfile.y" /* yacc.c:1646  */
    {
				
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-6].str_val))+strlen((yyvsp[-5].str_val))+strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,(yyvsp[-6].str_val)); strcat(temp,(yyvsp[-5].str_val)); strcat(temp,(yyvsp[-4].str_val)); strcat(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val));strcat(temp,Newline);Indentation(); strcat(temp,tab);strcat(temp,(yyvsp[-1].str_val));strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
				
			}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 436 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-8].str_val))+strlen((yyvsp[-7].str_val))+strlen((yyvsp[-6].str_val))+strlen((yyvsp[-5].str_val))+strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[-8].str_val)); strcat(temp,(yyvsp[-7].str_val)); strcat(temp,(yyvsp[-6].str_val)); strcat(temp,(yyvsp[-5].str_val));strcat(temp,Space); strcat(temp,(yyvsp[-4].str_val));strcat(temp,(yyvsp[-3].str_val));strcat(temp,Space);strcat(temp,(yyvsp[-2].str_val));strcat(temp,(yyvsp[-1].str_val));strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
			}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 443 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-4].str_val)); strcat(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
			}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 450 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-6].str_val))+strlen((yyvsp[-5].str_val))+strlen((yyvsp[-4].str_val))+strlen((yyvsp[-3].str_val))+strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-6].str_val)); strcat(temp,(yyvsp[-5].str_val)); strcat(temp,(yyvsp[-4].str_val)); strcat(temp,(yyvsp[-3].str_val)); strcat(temp,(yyvsp[-2].str_val)); strcat(temp,(yyvsp[-1].str_val));strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
			}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 458 "yaccfile.y" /* yacc.c:1646  */
    {	
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 464 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[-2].str_val)); strcat(temp,Space);strcat(temp,(yyvsp[-1].str_val));strcat(temp,Space); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 470 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[-2].str_val)); strcat(temp,Space);strcat(temp,(yyvsp[-1].str_val));strcat(temp,Space); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 476 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Space)+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp;
			}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 482 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 489 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
			}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 495 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 501 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
			}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 507 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
			}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 513 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
			}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 519 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[0].str_val)); 
                                (yyval.str_val)=temp; 
			}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 528 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-2].str_val))+strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Space)+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,tab);strcat(temp,(yyvsp[-2].str_val));strcat(temp,Space); strcat(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
			}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 534 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+strlen(Newline)+strlen(tab)+1));
                                strcpy(temp,Newline);Indentation();strcat(temp,tab);strcat(temp,(yyvsp[-1].str_val));strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
			}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 541 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-1].str_val));strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
			}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 548 "yaccfile.y" /* yacc.c:1646  */
    {
				char* temp=malloc(sizeof(char)*(strlen((yyvsp[-1].str_val))+strlen((yyvsp[0].str_val))+1));
                                strcpy(temp,(yyvsp[-1].str_val)); strcat(temp,(yyvsp[0].str_val));
                                (yyval.str_val)=temp; 
				
		}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2243 "y.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                      yytoken, &yylval);
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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 554 "yaccfile.y" /* yacc.c:1906  */

void Indentation()
{
	int i;
	tab=malloc(10000);
	for(i=0;i<count;i++)
	strcat(tab,"\t");
}

int main(int argc , char * argv[])
{
	Space=" ";
	Newline="\n";
	
	if(argc !=2)
	{
		printf("usage: Please enter input file name while running\n");
		exit(0);
	}

	FILE *file=fopen(argv[1],"r");
	FILE *fileo=fopen("output.cpp","w");
	if(file==NULL)
	{
		printf("cannot open file %s\n",argv[1]);
		exit(0);
	}
	yyin=file;
	yyout=fileo;
	yyparse();

	fclose(file);
	fclose(fileo);
}
void yyerror(char *msg)
{
	printf("YACC : %s\n",msg);
}
