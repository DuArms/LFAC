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
#line 1 "proiect.y" /* yacc.c:339  */

 #include <stdio.h>
  #include <string.h>
  #include "helplib.h"
  extern FILE* yyin;
  extern void yyerror();
  extern int yylex();
  extern char* yytext;
  extern int yylineno;

  void updateIdentifier(char* ,char*,char *);
  void storeDataType(char*);
  int isDuplicate(char*);
  void storeIdentifier(char*,char*,char*);
  void DuplicateIdentifierError(char*);
  char* retrieveDataType();
  void clearBuffers();
  int isValidAssignment(char*);
  void AssignmentError(char*);
  char* extractIdentifier(char[]);
  void evalueaza(char *, char *, char , char *);
  int getIdentifierVal(char *,char *);
  void getIdentifierType(char *);
  void updateStringsCat(char *nume, char *nume2);
  void updateStringsCpy(char *nume, char *nume2);

#line 93 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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
    ASSIGN = 258,
    NEQ = 259,
    EQ = 260,
    LE = 261,
    LEQ = 262,
    GE = 263,
    GEQ = 264,
    AND = 265,
    OR = 266,
    TRUE = 267,
    FALSE = 268,
    STCP = 269,
    STCT = 270,
    STPT = 271,
    STCPY = 272,
    IF = 273,
    WHILE = 274,
    FOR = 275,
    ELSE = 276,
    RETURN = 277,
    CONST = 278,
    PRINT = 279,
    BGIN = 280,
    END = 281,
    REAL = 282,
    INT = 283,
    BOOL = 284,
    STRUCT = 285,
    STRING = 286,
    CHARACTER_VALUE = 287,
    INTEGER_VALUE = 288,
    FLOAT_VALUE = 289,
    STRING_VALUE = 290,
    ARRAY_IDENTIFIER = 291,
    IDENTIFIER = 292
  };
#endif
/* Tokens.  */
#define ASSIGN 258
#define NEQ 259
#define EQ 260
#define LE 261
#define LEQ 262
#define GE 263
#define GEQ 264
#define AND 265
#define OR 266
#define TRUE 267
#define FALSE 268
#define STCP 269
#define STCT 270
#define STPT 271
#define STCPY 272
#define IF 273
#define WHILE 274
#define FOR 275
#define ELSE 276
#define RETURN 277
#define CONST 278
#define PRINT 279
#define BGIN 280
#define END 281
#define REAL 282
#define INT 283
#define BOOL 284
#define STRUCT 285
#define STRING 286
#define CHARACTER_VALUE 287
#define INTEGER_VALUE 288
#define FLOAT_VALUE 289
#define STRING_VALUE 290
#define ARRAY_IDENTIFIER 291
#define IDENTIFIER 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "proiect.y" /* yacc.c:355  */

  struct IdentifierStructure * is;
  char * dataType;
  char * varName;
  char * varValue;
  int expVal;
  int intval;

#line 216 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "y.tab.c" /* yacc.c:358  */

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


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   581

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      43,    44,    40,    38,    45,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    63,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    89,    90,    91,    94,    95,    98,    99,
     100,   103,   104,   105,   106,   107,   110,   111,   112,   115,
     116,   119,   120,   121,   124,   125,   126,   127,   128,   129,
     132,   133,   136,   137,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   153,   154,   155,   158,   159,   160,
     161,   162,   163,   164,   168,   169,   170,   171,   172,   174,
     175,   176
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASSIGN", "NEQ", "EQ", "LE", "LEQ", "GE",
  "GEQ", "AND", "OR", "TRUE", "FALSE", "STCP", "STCT", "STPT", "STCPY",
  "IF", "WHILE", "FOR", "ELSE", "RETURN", "CONST", "PRINT", "BGIN", "END",
  "REAL", "INT", "BOOL", "STRUCT", "STRING", "CHARACTER_VALUE",
  "INTEGER_VALUE", "FLOAT_VALUE", "STRING_VALUE", "ARRAY_IDENTIFIER",
  "IDENTIFIER", "'+'", "'-'", "'*'", "'/'", "';'", "'('", "')'", "','",
  "$accept", "START", "DEF_GLOBAL", "BLOC", "APEL_FUNCTIE", "PAREM_LIST",
  "BLOC2", "DEF_LOCALE", "STATEMENT", "LISTA_PARAMETRII",
  "STRUCTURA_DE_CONTROL", "IF_CAZURI", "WHILE_CAZURI", "FOR_CAZURI",
  "condition", "bools", "EXPRESIE", "VARTYPE", "VALOARE", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,    59,    40,    41,    44
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     182,  -119,  -119,  -119,   -26,  -119,  -119,     5,  -119,   -14,
     -10,  -119,  -119,    -4,     3,   411,  -119,    74,  -119,    40,
      28,    36,     7,    37,    43,    42,    46,    13,  -119,   222,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,    39,  -119,  -119,
    -119,  -119,  -119,   -19,   510,    49,  -119,    63,   -37,    58,
      57,    75,   192,   192,     4,  -119,    94,   -19,   -24,     2,
    -119,  -119,  -119,  -119,    93,     6,   176,   -19,   -19,   -19,
     -19,  -119,  -119,   411,   111,   540,  -119,   100,   102,  -119,
    -119,   192,    53,  -119,    85,   175,   140,   192,   411,   534,
    -119,   104,    54,   107,  -119,  -119,    74,  -119,  -119,    73,
      73,  -119,  -119,   243,   411,   113,   115,   117,   183,   176,
     195,   195,   195,   195,   195,   195,   195,   195,   432,   453,
     191,   264,  -119,  -119,   119,   116,  -119,   539,   120,  -119,
     285,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,   411,   142,  -119,  -119,  -119,   411,  -119,
       4,    35,  -119,  -119,  -119,  -119,  -119,   306,   474,   327,
     121,   126,  -119,   148,   411,  -119,  -119,   495,  -119,   516,
     348,   411,  -119,   411,  -119,  -119,   369,   390,  -119,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    75,    74,    76,    77,    78,    12,     0,     2,     0,
       0,     1,     3,     0,     0,     0,     9,     0,     4,     0,
       0,     0,     0,     0,     0,     0,    77,     0,    35,     0,
      18,    16,    13,    17,    41,    42,    43,     0,    81,    67,
      79,    80,    68,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
      19,    21,    20,    22,     0,     0,     0,     0,     0,     0,
       0,     6,     5,     0,     0,     0,    39,     0,     0,    64,
      65,     0,     0,    54,    66,     0,     0,     0,     0,     0,
      26,     0,     0,     0,    10,    34,     0,    31,    73,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    23,     0,     0,    11,     0,     0,     7,
       0,    40,    37,    38,    63,    60,    59,    56,    55,    57,
      58,    61,    62,     0,    47,    29,    28,    30,     0,    51,
       0,     0,    24,    27,    33,    32,     8,     0,     0,     0,
       0,     0,    14,    46,     0,    49,    50,     0,    15,     0,
       0,     0,    52,     0,    45,    48,     0,     0,    53,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,   163,   -61,     1,  -119,  -118,   -25,   -29,  -119,
      -3,  -119,  -119,  -119,   -50,   449,   -15,    10,    76
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    29,    30,    92,   144,    31,    32,    48,
      33,    34,    35,    36,    82,    83,    84,    37,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,   149,    44,    85,    61,    11,    17,    74,    75,    96,
       9,    10,   103,    90,    39,    15,    57,     9,    42,    20,
      91,    21,    13,    14,    43,    87,    63,   121,    66,    49,
      60,   108,     1,     2,     3,     4,     5,   120,    16,    93,
     165,    86,    89,   130,    94,    18,    19,     6,    97,   172,
      52,   174,    99,   100,   101,   102,    58,   110,   111,   112,
     113,   114,   115,   116,   117,    50,   109,     1,     2,     3,
      46,     5,   161,    51,    62,    64,    65,   162,    61,    55,
      53,   127,   157,    56,    47,   105,    54,   159,    73,   146,
     146,    72,    62,   145,   145,    76,    61,   118,   124,   125,
      63,    62,    77,   170,    60,    61,    38,    39,    40,    41,
     176,    42,   177,    69,    70,   147,   147,    43,    63,    88,
      78,   160,    60,    67,    68,    69,    70,    63,    62,   146,
      62,    60,    61,   145,    61,    95,   104,   106,   146,   107,
     146,    62,   145,    57,   145,    61,   123,    62,    62,   126,
     131,    61,    61,   153,    63,   147,    63,   132,    60,   133,
      60,   152,   155,   158,   147,   167,   147,    63,   168,   169,
      12,    60,   128,    63,    63,     0,     0,    60,    60,   110,
     111,   112,   113,   114,   115,   116,   117,   110,   111,   112,
     113,   114,   115,   116,   117,   110,   111,   112,   113,   114,
     115,   116,   117,     0,    79,    80,     0,    79,    80,     1,
       2,     3,     4,     5,    67,    68,    69,    70,     0,   119,
      98,     0,     0,     0,     6,    39,     0,   134,    39,    42,
       0,     0,    42,   150,     0,    81,     0,    20,    43,    21,
      22,    23,    24,     0,     0,     0,    25,     0,    59,     1,
       2,     3,    46,     5,     0,     0,     0,     0,    20,    27,
      21,    22,    23,    24,    28,     0,     0,    25,     0,   129,
       1,     2,     3,    46,     5,     0,     0,     0,     0,    20,
      27,    21,    22,    23,    24,    28,     0,     0,    25,     0,
     151,     1,     2,     3,    46,     5,     0,     0,     0,     0,
      20,    27,    21,    22,    23,    24,    28,     0,     0,    25,
       0,   156,     1,     2,     3,    46,     5,     0,     0,     0,
       0,    20,    27,    21,    22,    23,    24,    28,     0,     0,
      25,     0,   163,     1,     2,     3,    46,     5,     0,     0,
       0,     0,    20,    27,    21,    22,    23,    24,    28,     0,
       0,    25,     0,   166,     1,     2,     3,    46,     5,     0,
       0,     0,     0,    20,    27,    21,    22,    23,    24,    28,
       0,     0,    25,     0,   175,     1,     2,     3,    46,     5,
       0,     0,     0,     0,    20,    27,    21,    22,    23,    24,
      28,     0,     0,    25,     0,   178,     1,     2,     3,    46,
       5,     0,     0,     0,     0,    20,    27,    21,    22,    23,
      24,    28,     0,     0,    25,     0,   179,     1,     2,     3,
      46,     5,     0,     0,     0,     0,    20,    27,    21,    22,
      23,    24,    28,     0,     0,    25,     0,     0,     1,     2,
       3,    26,     5,     0,     0,     0,     0,    20,    27,    21,
      22,    23,    24,    28,     0,     0,     0,   143,     0,     1,
       2,     3,    46,     5,     0,     0,     0,     0,    20,    86,
      21,    22,    23,    24,    28,     0,     0,     0,   148,     0,
       1,     2,     3,    46,     5,     0,     0,     0,     0,    20,
      86,    21,    22,    23,    24,    28,     0,     0,     0,   164,
       0,     1,     2,     3,    46,     5,     0,     0,     0,     0,
      20,    86,    21,    22,    23,    24,    28,     0,     0,     0,
     171,     0,     1,     2,     3,    46,     5,     0,     0,     0,
       0,    20,    86,    21,    22,    23,    24,    28,     0,     0,
       0,   173,     0,     1,     2,     3,    46,     5,    67,    68,
      69,    70,    71,    86,     0,     0,     0,     0,    28,   135,
     136,   137,   138,   139,   140,   141,   142,     1,     2,     3,
      46,     5,    67,    68,    69,    70,   122,    67,    68,    69,
      70,   154
};

static const yytype_int16 yycheck[] =
{
      29,   119,    17,    53,    29,     0,     3,    44,    45,     3,
       0,    37,    73,    37,    33,    25,     3,     7,    37,    15,
      44,    17,    36,    37,    43,    54,    29,    88,    43,    19,
      29,    81,    27,    28,    29,    30,    31,    87,    42,    37,
     158,    37,    57,   104,    42,    42,    43,    42,    42,   167,
      43,   169,    67,    68,    69,    70,    43,     4,     5,     6,
       7,     8,     9,    10,    11,    37,    81,    27,    28,    29,
      30,    31,    37,    37,   103,    36,    37,    42,   103,    37,
      43,    96,   143,    37,    44,    75,    43,   148,    25,   118,
     119,    42,   121,   118,   119,    37,   121,    44,    44,    45,
     103,   130,    45,   164,   103,   130,    32,    33,    34,    35,
     171,    37,   173,    40,    41,   118,   119,    43,   121,    25,
      45,   150,   121,    38,    39,    40,    41,   130,   157,   158,
     159,   130,   157,   158,   159,    42,    25,    37,   167,    37,
     169,   170,   167,     3,   169,   170,    42,   176,   177,    42,
      37,   176,   177,    37,   157,   158,   159,    42,   157,    42,
     159,    42,    42,    21,   167,    44,   169,   170,    42,    21,
       7,   170,    96,   176,   177,    -1,    -1,   176,   177,     4,
       5,     6,     7,     8,     9,    10,    11,     4,     5,     6,
       7,     8,     9,    10,    11,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    12,    13,    -1,    12,    13,    27,
      28,    29,    30,    31,    38,    39,    40,    41,    -1,    44,
      44,    -1,    -1,    -1,    42,    33,    -1,    44,    33,    37,
      -1,    -1,    37,    42,    -1,    43,    -1,    15,    43,    17,
      18,    19,    20,    -1,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    15,    37,
      17,    18,    19,    20,    42,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    15,
      37,    17,    18,    19,    20,    42,    -1,    -1,    24,    -1,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      15,    37,    17,    18,    19,    20,    42,    -1,    -1,    24,
      -1,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    15,    37,    17,    18,    19,    20,    42,    -1,    -1,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    15,    37,    17,    18,    19,    20,    42,    -1,
      -1,    24,    -1,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    15,    37,    17,    18,    19,    20,    42,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    15,    37,    17,    18,    19,    20,
      42,    -1,    -1,    24,    -1,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    15,    37,    17,    18,    19,
      20,    42,    -1,    -1,    24,    -1,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    15,    37,    17,    18,
      19,    20,    42,    -1,    -1,    24,    -1,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    15,    37,    17,
      18,    19,    20,    42,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    15,    37,
      17,    18,    19,    20,    42,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    15,
      37,    17,    18,    19,    20,    42,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      15,    37,    17,    18,    19,    20,    42,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    15,    37,    17,    18,    19,    20,    42,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    38,    39,
      40,    41,    42,    37,    -1,    -1,    -1,    -1,    42,   110,
     111,   112,   113,   114,   115,   116,   117,    27,    28,    29,
      30,    31,    38,    39,    40,    41,    42,    38,    39,    40,
      41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    28,    29,    30,    31,    42,    47,    48,    63,
      37,     0,    48,    36,    37,    25,    42,     3,    42,    43,
      15,    17,    18,    19,    20,    24,    30,    37,    42,    49,
      50,    53,    54,    56,    57,    58,    59,    63,    32,    33,
      34,    35,    37,    43,    62,    64,    30,    44,    55,    63,
      37,    37,    43,    43,    43,    37,    37,     3,    43,    26,
      50,    53,    54,    56,    36,    37,    62,    38,    39,    40,
      41,    42,    42,    25,    44,    45,    37,    45,    45,    12,
      13,    43,    60,    61,    62,    60,    37,    54,    25,    62,
      37,    44,    51,    37,    42,    42,     3,    42,    44,    62,
      62,    62,    62,    49,    25,    63,    37,    37,    60,    62,
       4,     5,     6,     7,     8,     9,    10,    11,    44,    44,
      60,    49,    42,    42,    44,    45,    42,    62,    64,    26,
      49,    37,    42,    42,    44,    61,    61,    61,    61,    61,
      61,    61,    61,    25,    52,    53,    54,    56,    25,    52,
      42,    26,    42,    37,    42,    42,    26,    49,    21,    49,
      54,    37,    42,    26,    25,    52,    26,    44,    42,    21,
      49,    25,    52,    25,    52,    26,    49,    49,    26,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    50,    50,    50,    51,    51,    52,    52,
      52,    53,    53,    53,    53,    53,    54,    54,    54,    55,
      55,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    64,
      64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     5,     5,     7,     8,     3,
       6,     7,     1,     1,     6,     7,     1,     1,     1,     2,
       2,     2,     2,     4,     5,     2,     1,     3,     1,     1,
       1,     3,     5,     5,     3,     1,     4,     5,     5,     2,
       4,     1,     1,     1,    11,     9,     7,     5,     9,     7,
       7,     5,     8,    10,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1
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
      YY_LAC_DISCARD ("YYBACKUP");                              \
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


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
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
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
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
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

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
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

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  YY_LAC_DISCARD ("shift");

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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 4:
#line 66 "proiect.y" /* yacc.c:1646  */
    {handelAsignare((yyvsp[-1].varName),(yyvsp[-2].dataType),"NULL");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "proiect.y" /* yacc.c:1646  */
    { handelAsignare((yyvsp[-3].varName),(yyvsp[-4].dataType),(yyvsp[-1].varValue)); }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "proiect.y" /* yacc.c:1646  */
    { handelAsignare((yyvsp[-3].varName),(yyvsp[-4].dataType),(yyvsp[-1].varValue));  }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "proiect.y" /* yacc.c:1646  */
    { handelAsignare((yyvsp[-6].varName),(yyvsp[-7].dataType),"FUNCTIE");  }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "proiect.y" /* yacc.c:1646  */
    {char ras[250]; getIdentifierVal(ras,(yyvsp[0].varName)); printf("%s\n",ras);}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "proiect.y" /* yacc.c:1646  */
    {handelAsignare((yyvsp[-1].varName),(yyvsp[-2].dataType),"NULL");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 104 "proiect.y" /* yacc.c:1646  */
    { handelAsignare((yyvsp[-3].varName),(yyvsp[-4].dataType),(yyvsp[-1].varValue)); }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 105 "proiect.y" /* yacc.c:1646  */
    { handelAsignare((yyvsp[-3].varName),(yyvsp[-4].dataType),(yyvsp[-1].varValue));  }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "proiect.y" /* yacc.c:1646  */
    { updateIdentifier((yyval.varValue),(yyvsp[-3].varName),(yyvsp[-1].varValue)); }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 111 "proiect.y" /* yacc.c:1646  */
    {  updateStringsCat((yyvsp[-3].varName),(yyvsp[-1].varName));}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 112 "proiect.y" /* yacc.c:1646  */
    {  updateStringsCpy((yyvsp[-3].varName),(yyvsp[-1].varName));}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 115 "proiect.y" /* yacc.c:1646  */
    {handelAsignare((yyvsp[0].varName),(yyvsp[-1].dataType),"NULL");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 141 "proiect.y" /* yacc.c:1646  */
    {if((yyvsp[0].expVal) > 0) (yyval.expVal) = (yyvsp[0].expVal);else (yyval.expVal) = 0;}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 142 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal) <= (yyvsp[0].expVal)) (yyval.expVal) = 1;else (yyval.expVal) = 0;}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 143 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal) < (yyvsp[0].expVal)) (yyval.expVal) = 1;else (yyval.expVal) = 0;}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal) > (yyvsp[0].expVal)) (yyval.expVal) = 1;else (yyval.expVal) = 0;}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal) >= (yyvsp[0].expVal)) (yyval.expVal) = 1;else (yyval.expVal) = 0;}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal) == (yyvsp[0].expVal)) (yyval.expVal) = 1; else (yyval.expVal) = 0; }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal) != (yyvsp[0].expVal)) (yyval.expVal) = 1;else (yyval.expVal) = 0;}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal)>0 && (yyvsp[0].expVal)>0) (yyval.expVal) = 1;else (yyval.expVal) = 0;}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 149 "proiect.y" /* yacc.c:1646  */
    {if ((yyvsp[-2].expVal)>0 || (yyvsp[0].expVal)>0) (yyval.expVal) = 1;else (yyval.expVal) = 0;}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 150 "proiect.y" /* yacc.c:1646  */
    { (yyval.expVal) = (yyvsp[-1].expVal);}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "proiect.y" /* yacc.c:1646  */
    {(yyval.expVal) = 1;}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "proiect.y" /* yacc.c:1646  */
    {(yyval.expVal) = 0;}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 155 "proiect.y" /* yacc.c:1646  */
    {(yyval.expVal) = atoi((yyvsp[0].varValue)); }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 158 "proiect.y" /* yacc.c:1646  */
    { (yyval.varValue) = yyval.varValue ;}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 159 "proiect.y" /* yacc.c:1646  */
    {getIdentifierType((yyvsp[0].varName));  getIdentifierVal((yyval.varValue),(yyvsp[0].varName)); }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 160 "proiect.y" /* yacc.c:1646  */
    { evalueaza((yyval.varValue),(yyvsp[-2].varValue),'+',(yyvsp[0].varValue)); }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 161 "proiect.y" /* yacc.c:1646  */
    { evalueaza((yyval.varValue),(yyvsp[-2].varValue),'-',(yyvsp[0].varValue));}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "proiect.y" /* yacc.c:1646  */
    { evalueaza((yyval.varValue),(yyvsp[-2].varValue),'*',(yyvsp[0].varValue));}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 163 "proiect.y" /* yacc.c:1646  */
    { evalueaza((yyval.varValue),(yyvsp[-2].varValue),'/',(yyvsp[0].varValue));}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 164 "proiect.y" /* yacc.c:1646  */
    { (yyval.varValue) = (yyvsp[-1].varValue);}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 168 "proiect.y" /* yacc.c:1646  */
    { (yyval.dataType) = yyval.dataType ;}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 169 "proiect.y" /* yacc.c:1646  */
    { (yyval.dataType) = yyval.dataType ;}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 170 "proiect.y" /* yacc.c:1646  */
    { (yyval.dataType) = yyval.dataType ;}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 171 "proiect.y" /* yacc.c:1646  */
    { (yyval.dataType) = yyval.dataType ;}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 172 "proiect.y" /* yacc.c:1646  */
    {(yyval.dataType) = yyval.dataType ; }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 174 "proiect.y" /* yacc.c:1646  */
    { (yyval.varValue) = yyval.varValue ; }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 175 "proiect.y" /* yacc.c:1646  */
    { (yyval.varValue) = yyval.varValue ;}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 176 "proiect.y" /* yacc.c:1646  */
    { (yyval.varValue) = yyval.varValue ; }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1978 "y.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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

#if 1
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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 179 "proiect.y" /* yacc.c:1906  */


int main(int argc , char ** argv){
yyin=fopen(argv[1],"r");
  yyparse();
  showIdentifiers();
  printf("\n\nNo Errors!!\n");
  return 0;
}
