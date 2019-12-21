/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "YaccCode.y"

	#include<stdio.h>
	#include<stdlib.h>
	void yyerror(char *);
	int yylex(void);


	int intarray[26];
	float floatarray[26];
	char chararray[26];
	char *stringarray[26];
	int functionarray[26];

	char symbolsarray[26];
	int numofpar = 0;
	int numofcallpar = 0;
	



/* Line 371 of yacc.c  */
#line 89 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OR = 258,
     AND = 259,
     NE = 260,
     EQ = 261,
     GE = 262,
     LE = 263,
     L = 264,
     G = 265,
     NOT = 266,
     Num = 267,
     VARIABLE = 268,
     GT = 269,
     LT = 270,
     Exit = 271,
     Print = 272,
     If = 273,
     Else = 274,
     Switch = 275,
     Case = 276,
     Default = 277,
     Break = 278,
     For = 279,
     Do = 280,
     While = 281,
     IntVar = 282,
     FloatVar = 283,
     CharVar = 284,
     StringVar = 285,
     VoidVar = 286,
     SinQ = 287,
     DoubQ = 288,
     Return = 289,
     Minus = 290
   };
#endif
/* Tokens.  */
#define OR 258
#define AND 259
#define NE 260
#define EQ 261
#define GE 262
#define LE 263
#define L 264
#define G 265
#define NOT 266
#define Num 267
#define VARIABLE 268
#define GT 269
#define LT 270
#define Exit 271
#define Print 272
#define If 273
#define Else 274
#define Switch 275
#define Case 276
#define Default 277
#define Break 278
#define For 279
#define Do 280
#define While 281
#define IntVar 282
#define FloatVar 283
#define CharVar 284
#define StringVar 285
#define VoidVar 286
#define SinQ 287
#define DoubQ 288
#define Return 289
#define Minus 290



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 24 "YaccCode.y"

	int inttype;
	float floattype;
	char chartype;
	char *stringtype;
	int indextype;


/* Line 387 of yacc.c  */
#line 211 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 239 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,     2,     2,     2,
      42,    43,    14,    12,    49,    13,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    45,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    47,    51,    55,    59,    63,    66,    68,    72,
      75,    79,    83,    87,    91,    95,    99,   104,   109,   114,
     122,   134,   142,   144,   147,   149,   152,   159,   166,   168,
     170,   172,   174,   176,   178,   180,   182,   196,   208,   222,
     225,   228,   231,   234,   237,   242,   245,   250,   253,   258,
     261,   266,   270,   274,   280,   286,   298,   310,   322,   334,
     343,   349,   351,   353,   355,   357,   361,   365,   369,   373,
     375,   377,   379,   383,   387
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    51,    53,    41,    -1,    -1,    53,    -1,
      53,    52,    -1,    54,    -1,    68,    -1,    56,    -1,    21,
      -1,    75,    -1,    57,    -1,    58,    -1,    55,    -1,    65,
      -1,    66,    -1,    67,    -1,    76,    -1,    77,    -1,    17,
      -1,    18,    -1,    54,    12,    54,    -1,    54,    13,    54,
      -1,    54,    14,    54,    -1,    54,    15,    54,    -1,    42,
      54,    43,    -1,    13,    54,    -1,    54,    -1,    42,    55,
      43,    -1,    44,    55,    -1,    55,    11,    55,    -1,    55,
      10,    55,    -1,    55,    19,    55,    -1,    55,    20,    55,
      -1,    55,     6,    55,    -1,    55,     7,    55,    -1,    18,
       3,    55,    45,    -1,    18,     3,    37,    45,    -1,    18,
       3,    38,    45,    -1,    23,    42,    55,    43,    46,    52,
      47,    -1,    23,    42,    55,    43,    46,    52,    47,    24,
      46,    52,    47,    -1,    25,    42,    18,    43,    46,    59,
      47,    -1,    60,    -1,    60,    62,    -1,    61,    -1,    61,
      60,    -1,    26,    17,    48,    52,    28,    45,    -1,    27,
      48,    52,    45,    28,    45,    -1,    10,    -1,    11,    -1,
      19,    -1,    20,    -1,     7,    -1,     6,    -1,    73,    -1,
      74,    -1,    29,    42,    18,    45,    18,    63,    54,    45,
      64,    43,    46,    52,    47,    -1,    31,    42,    18,    63,
      54,    43,    46,    64,    45,    52,    47,    -1,    30,    46,
      64,    45,    52,    47,    31,    42,    18,    63,    54,    43,
      45,    -1,    69,    45,    -1,    70,    45,    -1,    71,    45,
      -1,    72,    45,    -1,    32,    18,    -1,    32,    18,     3,
      55,    -1,    33,    18,    -1,    33,    18,     3,    55,    -1,
      34,    18,    -1,    34,    18,     3,    37,    -1,    35,    18,
      -1,    35,    18,     3,    38,    -1,    18,    12,    12,    -1,
      18,    13,    13,    -1,    22,    42,    38,    43,    45,    -1,
      22,    42,    18,    43,    45,    -1,    32,    18,    42,    78,
      43,    46,    52,    39,    18,    45,    47,    -1,    33,    18,
      42,    78,    43,    46,    52,    39,    18,    45,    47,    -1,
      34,    18,    42,    78,    43,    46,    52,    39,    18,    45,
      47,    -1,    35,    18,    42,    78,    43,    46,    52,    39,
      18,    45,    47,    -1,    36,    18,    42,    78,    43,    46,
      52,    47,    -1,    18,    42,    79,    43,    45,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    69,    49,    78,
      -1,    70,    49,    78,    -1,    71,    49,    78,    -1,    72,
      49,    78,    -1,    54,    -1,    37,    -1,    38,    -1,    54,
      49,    79,    -1,    37,    49,    79,    -1,    38,    49,    79,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    73,    77,    79,    83,    85,    87,    89,
      91,    93,    95,    97,    99,   101,   103,   105,   107,   111,
     113,   115,   117,   119,   121,   123,   125,   129,   131,   133,
     135,   137,   139,   141,   143,   145,   152,   169,   181,   198,
     210,   224,   228,   230,   234,   236,   240,   244,   248,   250,
     252,   254,   256,   258,   262,   264,   269,   331,   394,   459,
     461,   463,   465,   470,   483,   498,   511,   526,   539,   554,
     567,   585,   589,   593,   595,   624,   648,   672,   696,   721,
     739,   785,   787,   789,   791,   793,   795,   797,   799,   803,
     805,   807,   809,   811,   813
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'='", "OR", "AND", "NE", "EQ", "GE",
  "LE", "L", "G", "'+'", "'-'", "'*'", "'/'", "NOT", "Num", "VARIABLE",
  "GT", "LT", "Exit", "Print", "If", "Else", "Switch", "Case", "Default",
  "Break", "For", "Do", "While", "IntVar", "FloatVar", "CharVar",
  "StringVar", "VoidVar", "SinQ", "DoubQ", "Return", "Minus", "'\\n'",
  "'('", "')'", "'!'", "';'", "'{'", "'}'", "':'", "','", "$accept",
  "program", "liststatements", "statement", "expr", "cond", "assvar", "if",
  "switch", "switchblock", "caselist", "casestm", "defaultstm",
  "condsymbols", "decorinc", "for", "while", "dowhile", "declare", "int",
  "float", "char", "string", "incement", "decrement", "print", "fun",
  "callfun", "par", "callpar", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    61,   258,   259,   260,   261,   262,   263,
     264,   265,    43,    45,    42,    47,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,    10,    40,    41,    33,    59,   123,   125,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    57,
      57,    58,    59,    59,    60,    60,    61,    62,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    66,    67,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    74,    75,    75,    76,    76,    76,    76,    76,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     2,     1,     3,     2,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     7,
      11,     7,     1,     2,     1,     2,     6,     6,     1,     1,
       1,     1,     1,     1,     1,     1,    13,    11,    13,     2,
       2,     2,     2,     2,     4,     2,     4,     2,     4,     2,
       4,     3,     3,     5,     5,    11,    11,    11,    11,     8,
       5,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       1,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    19,    20,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,    13,     8,    11,    12,    14,    15,    16,     7,
       0,     0,     0,     0,    10,    17,    18,    20,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    65,
      67,    69,     0,    27,     0,    27,    29,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,    62,     0,     0,     0,     0,    90,    91,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      28,    21,    22,    23,    24,    34,    35,    31,    30,    32,
      33,    37,    38,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    52,    48,    49,
      50,    51,     0,    64,     0,     0,     0,     0,    81,    82,
      83,    84,     0,    66,     0,    68,     0,    70,     0,     0,
      93,    94,    92,    80,    74,    73,     0,     0,     0,    71,
      72,     0,     4,     0,    63,    65,    67,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    44,     0,     0,     5,     0,    85,    86,    87,    88,
       0,     0,     0,     0,     0,    39,     0,    41,     0,    43,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    46,     0,     0,     0,    57,    75,    76,    77,    78,
      47,     0,     0,    56,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   161,   162,    21,    22,    23,    24,    25,   179,
     180,   181,   199,   132,    86,    26,    27,    28,    29,    30,
      31,    32,    33,    87,    88,    34,    35,    36,   142,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -181
static const yytype_int16 yypact[] =
{
    -181,   164,  -181,    92,  -181,     0,  -181,   -41,   -38,   -35,
     -33,   -19,   -12,    16,    18,    32,    36,    70,   148,   148,
      52,   294,   305,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
      50,    63,    73,    80,  -181,  -181,  -181,  -181,    92,  -181,
     247,   257,   -13,   148,   108,   109,   112,   119,    11,    28,
      30,    49,    96,   204,   129,    64,   305,  -181,    92,    92,
      92,    92,   148,   148,   148,   148,   148,   148,  -181,  -181,
    -181,  -181,   204,   111,   114,   113,   122,   134,   189,   117,
     120,   145,   203,   162,   139,    69,   146,  -181,  -181,   311,
     148,   141,   148,   141,   125,   141,   169,   141,   141,  -181,
    -181,    89,    89,  -181,  -181,   102,   102,   102,   102,   305,
     305,  -181,  -181,  -181,   257,   257,   257,   166,   167,   170,
     174,   175,   206,   217,   144,   219,  -181,  -181,  -181,  -181,
    -181,  -181,    92,   305,   212,   215,   216,   221,   186,   194,
     196,   208,   228,   305,   229,  -181,   230,  -181,   233,   234,
    -181,  -181,  -181,  -181,  -181,  -181,   219,   232,   311,  -181,
    -181,   231,   219,   213,   256,   259,   276,   277,   141,   141,
     141,   141,   235,   236,   237,   240,   241,   243,   271,   245,
     266,   232,    92,   265,  -181,   252,  -181,  -181,  -181,  -181,
     219,   219,   219,   219,   219,   278,   255,  -181,   262,  -181,
    -181,     6,   281,   112,   280,   287,   288,   289,   273,   283,
     219,   219,   112,   314,   290,   315,   316,   318,   319,  -181,
     219,   310,   295,   296,   311,   219,   297,   298,   299,   300,
     301,   302,   313,   303,    92,   304,   306,   307,   308,   309,
    -181,  -181,   312,   219,   254,  -181,  -181,  -181,  -181,  -181,
    -181,   317,   320,  -181,  -181
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,  -145,   345,    -3,    88,  -181,  -181,  -181,  -181,
     171,  -181,  -181,  -156,  -180,  -181,  -181,  -181,  -181,   -85,
     -69,   -24,    -1,  -181,  -181,  -181,  -181,  -181,   -54,    27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
static const yytype_int16 yytable[] =
{
      39,    42,   182,    40,    43,    80,   138,    44,   138,    45,
     138,   177,   138,   138,    90,    53,    55,   184,    58,    59,
      60,    61,   139,   214,   139,    81,   139,    46,   139,   139,
      47,    92,   223,    94,    48,    72,    49,    55,    78,   144,
      55,   146,    41,   148,   149,   204,   205,   206,   207,   208,
      50,   212,    96,    91,    51,   101,   102,   103,   104,    55,
      55,    55,    55,    55,    55,   221,   222,   140,   234,   140,
      93,   140,    95,   140,   140,   230,    58,    59,    60,    61,
     235,   123,   124,   138,   138,   138,   138,    55,    52,    55,
     141,    97,   141,    57,   141,    68,   141,   141,   251,   139,
     139,   139,   139,    60,    61,     3,    54,    56,    69,     4,
      37,    78,    78,    78,   186,   187,   188,   189,    70,    62,
      63,    66,    67,    64,    65,    71,    83,    84,    75,   163,
      85,    82,    66,    67,    38,    62,    63,    89,    98,    64,
      65,   150,   151,   152,   140,   140,   140,   140,    66,    67,
     105,   106,   107,   108,   109,   110,   111,   160,   113,   112,
     117,     3,   145,   118,     2,     4,    37,   141,   141,   141,
     141,   114,   100,   134,   135,   136,   137,     3,   133,   201,
     143,     4,     5,   115,   122,     6,     7,     8,   119,     9,
      18,   125,    19,    10,    11,    12,    13,    14,    15,    16,
      17,    58,    59,    60,    61,   121,    18,   147,    19,    62,
      63,   153,   154,    64,    65,   155,    58,    59,    60,    61,
     156,   157,    66,    67,   158,    58,    59,    60,    61,   159,
     164,   244,     3,   165,   166,   168,     4,     5,   116,   167,
       6,     7,     8,   169,     9,   170,   120,    99,    10,    11,
      12,    13,    14,    15,    16,    17,   185,   171,   178,    90,
       3,    18,    92,    19,     4,    37,    58,    59,    60,    61,
       3,   172,   173,   174,     4,    37,   175,   176,   183,    94,
      96,   190,   191,   192,    73,    74,   193,   194,   196,    18,
     195,    19,   197,   198,    76,    77,   202,   252,   203,    38,
     -27,   -27,   209,   210,   -27,   -27,    58,    59,    60,    61,
     211,    62,    63,   -27,   -27,    64,    65,   126,   127,   215,
     219,   128,   129,   213,    66,    67,   216,   217,   218,   220,
     130,   131,   224,   226,   227,   225,   228,   229,   231,   233,
     232,   242,   236,   237,   238,   239,    20,   241,   240,   243,
       0,   245,   200,   246,   247,   248,   249,   250,     0,     0,
       0,     0,     0,     0,   253,   254
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-181)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,    42,   158,     3,    42,    18,    91,    42,    93,    42,
      95,   156,    97,    98,     3,    18,    19,   162,    12,    13,
      14,    15,    91,   203,    93,    38,    95,    46,    97,    98,
      42,     3,   212,     3,    18,    38,    18,    40,    41,    93,
      43,    95,    42,    97,    98,   190,   191,   192,   193,   194,
      18,    45,     3,    42,    18,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   210,   211,    91,   224,    93,
      42,    95,    42,    97,    98,   220,    12,    13,    14,    15,
     225,    12,    13,   168,   169,   170,   171,    90,    18,    92,
      91,    42,    93,    41,    95,    45,    97,    98,   243,   168,
     169,   170,   171,    14,    15,    13,    18,    19,    45,    17,
      18,   114,   115,   116,   168,   169,   170,   171,    45,     6,
       7,    19,    20,    10,    11,    45,    18,    18,    40,   132,
      18,    43,    19,    20,    42,     6,     7,    18,    42,    10,
      11,   114,   115,   116,   168,   169,   170,   171,    19,    20,
      62,    63,    64,    65,    66,    67,    45,    13,    45,    45,
      43,    13,    37,    43,     0,    17,    18,   168,   169,   170,
     171,    49,    43,    32,    33,    34,    35,    13,    90,   182,
      92,    17,    18,    49,    45,    21,    22,    23,    43,    25,
      42,    45,    44,    29,    30,    31,    32,    33,    34,    35,
      36,    12,    13,    14,    15,    43,    42,    38,    44,     6,
       7,    45,    45,    10,    11,    45,    12,    13,    14,    15,
      46,    46,    19,    20,    18,    12,    13,    14,    15,    12,
      18,   234,    13,    18,    18,    49,    17,    18,    49,    18,
      21,    22,    23,    49,    25,    49,    43,    43,    29,    30,
      31,    32,    33,    34,    35,    36,    43,    49,    26,     3,
      13,    42,     3,    44,    17,    18,    12,    13,    14,    15,
      13,    43,    43,    43,    17,    18,    43,    43,    47,     3,
       3,    46,    46,    46,    37,    38,    46,    46,    17,    42,
      47,    44,    47,    27,    37,    38,    31,    43,    46,    42,
       6,     7,    24,    48,    10,    11,    12,    13,    14,    15,
      48,     6,     7,    19,    20,    10,    11,     6,     7,    39,
      47,    10,    11,    42,    19,    20,    39,    39,    39,    46,
      19,    20,    18,    18,    18,    45,    18,    18,    28,    43,
      45,    28,    45,    45,    45,    45,     1,    45,    47,    46,
      -1,    47,   181,    47,    47,    47,    47,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,    13,    17,    18,    21,    22,    23,    25,
      29,    30,    31,    32,    33,    34,    35,    36,    42,    44,
      53,    54,    55,    56,    57,    58,    65,    66,    67,    68,
      69,    70,    71,    72,    75,    76,    77,    18,    42,    54,
       3,    42,    42,    42,    42,    42,    46,    42,    18,    18,
      18,    18,    18,    54,    55,    54,    55,    41,    12,    13,
      14,    15,     6,     7,    10,    11,    19,    20,    45,    45,
      45,    45,    54,    37,    38,    55,    37,    38,    54,    79,
      18,    38,    55,    18,    18,    18,    64,    73,    74,    18,
       3,    42,     3,    42,     3,    42,     3,    42,    42,    43,
      43,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    45,    45,    45,    49,    49,    49,    43,    43,    43,
      43,    43,    45,    12,    13,    45,     6,     7,    10,    11,
      19,    20,    63,    55,    32,    33,    34,    35,    69,    70,
      71,    72,    78,    55,    78,    37,    78,    38,    78,    78,
      79,    79,    79,    45,    45,    45,    46,    46,    18,    12,
      13,    52,    53,    54,    18,    18,    18,    18,    49,    49,
      49,    49,    43,    43,    43,    43,    43,    52,    26,    59,
      60,    61,    63,    47,    52,    43,    78,    78,    78,    78,
      46,    46,    46,    46,    46,    47,    17,    47,    27,    62,
      60,    54,    31,    46,    52,    52,    52,    52,    52,    24,
      48,    48,    45,    42,    64,    39,    39,    39,    39,    47,
      46,    52,    52,    64,    18,    45,    18,    18,    18,    18,
      52,    28,    45,    43,    63,    52,    45,    45,    45,    45,
      47,    45,    28,    46,    54,    47,    47,    47,    47,    47,
      45,    52,    43,    47,    45
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
/* Line 1792 of yacc.c  */
#line 83 "YaccCode.y"
    { printf("%g\n", (yyvsp[(1) - (1)].floattype)); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 85 "YaccCode.y"
    { printf("\nDeclare Accepted.\n"); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 87 "YaccCode.y"
    { printf("\nAssigne Accepted.\n"); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 89 "YaccCode.y"
    {exit(0);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 91 "YaccCode.y"
    {printf("\nPrint Accepted.\n");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 93 "YaccCode.y"
    { printf("\nIf Accepted.\n"); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 95 "YaccCode.y"
    { printf("\nSwitch Accepted.\n"); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 97 "YaccCode.y"
    { printf("%g\n", (yyvsp[(1) - (1)].floattype)); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 99 "YaccCode.y"
    { printf("\nFor Accepted.\n"); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 101 "YaccCode.y"
    { printf("\nWhile Accepted.\n"); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 103 "YaccCode.y"
    { printf("\nDo While Accepted.\n"); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 105 "YaccCode.y"
    { printf("\nFunction Accepted.\n"); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 107 "YaccCode.y"
    { printf("\nCall Function Accepted.\n"); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 113 "YaccCode.y"
    { (yyval.floattype) = floatarray[(yyvsp[(1) - (1)].indextype)]; }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 115 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) + (yyvsp[(3) - (3)].floattype); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 117 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) - (yyvsp[(3) - (3)].floattype); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 119 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) * (yyvsp[(3) - (3)].floattype); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 121 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) / (yyvsp[(3) - (3)].floattype); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 123 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(2) - (3)].floattype); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 125 "YaccCode.y"
    { (yyval.floattype) = -(yyvsp[(2) - (2)].floattype); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 131 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(2) - (3)].floattype); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 133 "YaccCode.y"
    { (yyval.floattype) = !(yyvsp[(2) - (2)].floattype); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 135 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) > (yyvsp[(3) - (3)].floattype); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 137 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) < (yyvsp[(3) - (3)].floattype); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 139 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) >= (yyvsp[(3) - (3)].floattype); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 141 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) <= (yyvsp[(3) - (3)].floattype); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 143 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) != (yyvsp[(3) - (3)].floattype); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 145 "YaccCode.y"
    { (yyval.floattype) = (yyvsp[(1) - (3)].floattype) == (yyvsp[(3) - (3)].floattype); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 153 "YaccCode.y"
    {
		
		if(intarray[(yyvsp[(1) - (4)].indextype)] != 0)
		{
			intarray[(yyvsp[(1) - (4)].indextype)] = (yyvsp[(3) - (4)].floattype);
		}
		else if(floatarray[(yyvsp[(1) - (4)].indextype)] != 0)
		{
			floatarray[(yyvsp[(1) - (4)].indextype)] = (yyvsp[(3) - (4)].floattype);
		}
		else
		{
			printf("assignement not accepted.\n");
		}
	}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 170 "YaccCode.y"
    {
		if(chararray[(yyvsp[(1) - (4)].indextype)] != 0)
		{
			chararray[(yyvsp[(1) - (4)].indextype)] = (yyvsp[(3) - (4)].chartype);
		}
		else
		{
			printf("assignement not accepted.\n");
		}
	}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 182 "YaccCode.y"
    {
		if(stringarray[(yyvsp[(1) - (4)].indextype)] != 0)
		{
			stringarray[(yyvsp[(1) - (4)].indextype)] = (yyvsp[(3) - (4)].stringtype);
		}
		else
		{
			printf("assignement not accepted.\n");
		}
	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 199 "YaccCode.y"
    {
		if((yyvsp[(3) - (7)].floattype) == 1)
		{
			printf("if is excuted\n");
		}
		else
		{
			printf("if is not excuted\n");
		}
	}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 211 "YaccCode.y"
    {
		if((yyvsp[(3) - (11)].floattype) == 1)
		{
			printf("if is excuted\n");
		}
		else
		{
			printf("else is excuted\n");
		}
	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 248 "YaccCode.y"
    { symbolsarray[(yyvsp[(1) - (1)].chartype)] = 'l'; }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 250 "YaccCode.y"
    { symbolsarray[(yyvsp[(1) - (1)].chartype)] = 'g'; }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 252 "YaccCode.y"
    { symbolsarray[(yyvsp[(1) - (1)].chartype)] = 'G'; }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 254 "YaccCode.y"
    { symbolsarray[(yyvsp[(1) - (1)].chartype)] = 'L'; }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 256 "YaccCode.y"
    { symbolsarray[(yyvsp[(1) - (1)].chartype)] = 'E'; }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 258 "YaccCode.y"
    { symbolsarray[(yyvsp[(1) - (1)].chartype)] = 'N'; }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 270 "YaccCode.y"
    {
		int x = 1;

		switch(symbolsarray[(yyvsp[(6) - (13)].chartype)])
		{
			case 'l':
				while(intarray[(yyvsp[(5) - (13)].indextype)] < (yyvsp[(7) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(5) - (13)].indextype)] = intarray[(yyvsp[(5) - (13)].indextype)] + (yyvsp[(9) - (13)].floattype);
				}
				break;
			case 'g':
				while(intarray[(yyvsp[(5) - (13)].indextype)] > (yyvsp[(7) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(5) - (13)].indextype)] = intarray[(yyvsp[(5) - (13)].indextype)] + (yyvsp[(9) - (13)].floattype);
				}
				break;
			case 'G':
				while(intarray[(yyvsp[(5) - (13)].indextype)] >= (yyvsp[(7) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(5) - (13)].indextype)] = intarray[(yyvsp[(5) - (13)].indextype)] + (yyvsp[(9) - (13)].floattype);
				}
				break;
			case 'L':
				while(intarray[(yyvsp[(5) - (13)].indextype)] <= (yyvsp[(7) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(5) - (13)].indextype)] = intarray[(yyvsp[(5) - (13)].indextype)] + (yyvsp[(9) - (13)].floattype);
				}
				break;
			case 'E':
				while(intarray[(yyvsp[(5) - (13)].indextype)] == (yyvsp[(7) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(5) - (13)].indextype)] = intarray[(yyvsp[(5) - (13)].indextype)] + (yyvsp[(9) - (13)].floattype);
				}
				break;
			case 'N':
				while(intarray[(yyvsp[(5) - (13)].indextype)] != (yyvsp[(7) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(5) - (13)].indextype)] = intarray[(yyvsp[(5) - (13)].indextype)] + (yyvsp[(9) - (13)].floattype);
				}
				break;
			default: 
				printf("default case cond not true.\n");
				break;
		}
	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 332 "YaccCode.y"
    {

		int x = 1;

		switch(symbolsarray[(yyvsp[(4) - (11)].chartype)])
		{
			case 'l':
				while(intarray[(yyvsp[(3) - (11)].indextype)] < (yyvsp[(5) - (11)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(3) - (11)].indextype)] = intarray[(yyvsp[(3) - (11)].indextype)] + (yyvsp[(8) - (11)].floattype);
				}
				break;
			case 'g':
				while(intarray[(yyvsp[(3) - (11)].indextype)] > (yyvsp[(5) - (11)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(3) - (11)].indextype)] = intarray[(yyvsp[(3) - (11)].indextype)] + (yyvsp[(8) - (11)].floattype);
				}
				break;
			case 'G':
				while(intarray[(yyvsp[(3) - (11)].indextype)] >= (yyvsp[(5) - (11)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(3) - (11)].indextype)] = intarray[(yyvsp[(3) - (11)].indextype)] + (yyvsp[(8) - (11)].floattype);
				}
				break;
			case 'L':
				while(intarray[(yyvsp[(3) - (11)].indextype)] <= (yyvsp[(5) - (11)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(3) - (11)].indextype)] = intarray[(yyvsp[(3) - (11)].indextype)] + (yyvsp[(8) - (11)].floattype);
				}
				break;
			case 'E':
				while(intarray[(yyvsp[(3) - (11)].indextype)] == (yyvsp[(5) - (11)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(3) - (11)].indextype)] = intarray[(yyvsp[(3) - (11)].indextype)] + (yyvsp[(8) - (11)].floattype);
				}
				break;
			case 'N':
				while(intarray[(yyvsp[(3) - (11)].indextype)] != (yyvsp[(5) - (11)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(3) - (11)].indextype)] = intarray[(yyvsp[(3) - (11)].indextype)] + (yyvsp[(8) - (11)].floattype);
				}
				break;
			default: 
				printf("default case cond not true.\n");
				break;
		}
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 395 "YaccCode.y"
    {
		
		int x = 1;
		printf("loop excuted=%d\n",x);
		x++;

		switch(symbolsarray[(yyvsp[(10) - (13)].chartype)])
		{
			case 'l':
				while(intarray[(yyvsp[(9) - (13)].indextype)] < (yyvsp[(11) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(9) - (13)].indextype)] = intarray[(yyvsp[(9) - (13)].indextype)] + (yyvsp[(3) - (13)].floattype);
				}
				break;
			case 'g':
				while(intarray[(yyvsp[(9) - (13)].indextype)] > (yyvsp[(11) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(9) - (13)].indextype)] = intarray[(yyvsp[(9) - (13)].indextype)] + (yyvsp[(3) - (13)].floattype);
				}
				break;
			case 'G':
				while(intarray[(yyvsp[(9) - (13)].indextype)] >= (yyvsp[(11) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(9) - (13)].indextype)] = intarray[(yyvsp[(9) - (13)].indextype)] + (yyvsp[(3) - (13)].floattype);
				}
				break;
			case 'L':
				while(intarray[(yyvsp[(9) - (13)].indextype)] <= (yyvsp[(11) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(9) - (13)].indextype)] = intarray[(yyvsp[(9) - (13)].indextype)] + (yyvsp[(3) - (13)].floattype);
				}
				break;
			case 'E':
				while(intarray[(yyvsp[(9) - (13)].indextype)] == (yyvsp[(11) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(9) - (13)].indextype)] = intarray[(yyvsp[(9) - (13)].indextype)] + (yyvsp[(3) - (13)].floattype);
				}
				break;
			case 'N':
				while(intarray[(yyvsp[(9) - (13)].indextype)] != (yyvsp[(11) - (13)].floattype))
				{
					printf("loop excuted=%d\n",x);
					x++;
					intarray[(yyvsp[(9) - (13)].indextype)] = intarray[(yyvsp[(9) - (13)].indextype)] + (yyvsp[(3) - (13)].floattype);
				}
				break;
			default: 
				printf("default case cond not true.\n");
				break;
		}
	}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 471 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (2)].indextype)] == 0 && intarray[(yyvsp[(2) - (2)].indextype)] == 0 && chararray[(yyvsp[(2) - (2)].indextype)] == 0 && stringarray[(yyvsp[(2) - (2)].indextype)] == 0 && functionarray[(yyvsp[(2) - (2)].indextype)] == 0)
		{
			/*printf("accept dec\n");*/
			intarray[(yyvsp[(2) - (2)].indextype)] = -1;
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 484 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (4)].indextype)] == 0 && intarray[(yyvsp[(2) - (4)].indextype)] == 0 && chararray[(yyvsp[(2) - (4)].indextype)] == 0 && stringarray[(yyvsp[(2) - (4)].indextype)] == 0 && functionarray[(yyvsp[(2) - (4)].indextype)] == 0)
		{
			intarray[(yyvsp[(2) - (4)].indextype)] = (yyvsp[(4) - (4)].floattype);
			/*printf("accept dec\n");*/
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 499 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (2)].indextype)] == 0 && intarray[(yyvsp[(2) - (2)].indextype)] == 0 && chararray[(yyvsp[(2) - (2)].indextype)] == 0 && stringarray[(yyvsp[(2) - (2)].indextype)] == 0 && functionarray[(yyvsp[(2) - (2)].indextype)] == 0)
		{
			/*printf("accept dec\n");*/
			floatarray[(yyvsp[(2) - (2)].indextype)] = -1;
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 512 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (4)].indextype)] == 0 && intarray[(yyvsp[(2) - (4)].indextype)] == 0 && chararray[(yyvsp[(2) - (4)].indextype)] == 0 && stringarray[(yyvsp[(2) - (4)].indextype)] == 0 && functionarray[(yyvsp[(2) - (4)].indextype)] == 0)
		{
			floatarray[(yyvsp[(2) - (4)].indextype)] = (yyvsp[(4) - (4)].floattype);
			/*printf("accept dec\n");*/
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 527 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (2)].indextype)] == 0 && intarray[(yyvsp[(2) - (2)].indextype)] == 0 && chararray[(yyvsp[(2) - (2)].indextype)] == 0 && stringarray[(yyvsp[(2) - (2)].indextype)] == 0 && functionarray[(yyvsp[(2) - (2)].indextype)] == 0)
		{
			/*printf("accept dec\n");*/
			chararray[(yyvsp[(2) - (2)].indextype)] = 'a';
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 540 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (4)].indextype)] == 0 && intarray[(yyvsp[(2) - (4)].indextype)] == 0 && chararray[(yyvsp[(2) - (4)].indextype)] == 0 && stringarray[(yyvsp[(2) - (4)].indextype)] == 0 && functionarray[(yyvsp[(2) - (4)].indextype)] == 0)
		{
			chararray[(yyvsp[(2) - (4)].indextype)] = (yyvsp[(4) - (4)].chartype);
			/*printf("accept dec\n");*/
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 555 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (2)].indextype)] == 0 && intarray[(yyvsp[(2) - (2)].indextype)] == 0 && chararray[(yyvsp[(2) - (2)].indextype)] == 0 && stringarray[(yyvsp[(2) - (2)].indextype)] == 0 && functionarray[(yyvsp[(2) - (2)].indextype)] == 0)
		{
			/*printf("accept dec\n");*/
			stringarray[(yyvsp[(2) - (2)].indextype)] = "-1";
		}
		else
		{
			printf("This variable name is declered before\n");
		}	   
	}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 568 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (4)].indextype)] == 0 && intarray[(yyvsp[(2) - (4)].indextype)] == 0 && chararray[(yyvsp[(2) - (4)].indextype)] == 0 && stringarray[(yyvsp[(2) - (4)].indextype)] == 0 && functionarray[(yyvsp[(2) - (4)].indextype)] == 0)
		{
			stringarray[(yyvsp[(2) - (4)].indextype)] = (yyvsp[(4) - (4)].stringtype);
			/*printf("accept dec\n");*/
		}
		else
		{
			printf("This variable name is declered before\n");
		}
	}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 585 "YaccCode.y"
    {floatarray[(yyvsp[(1) - (3)].indextype)] = floatarray[(yyvsp[(1) - (3)].indextype)] + 1; (yyval.floattype) = 1; }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 589 "YaccCode.y"
    {floatarray[(yyvsp[(1) - (3)].indextype)] = floatarray[(yyvsp[(1) - (3)].indextype)] - 1; (yyval.floattype) = -1;}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 593 "YaccCode.y"
    { printf((yyvsp[(3) - (5)].stringtype)); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 596 "YaccCode.y"
    {
		if(intarray[(yyvsp[(3) - (5)].indextype)] == 0 && floatarray[(yyvsp[(3) - (5)].indextype)] == 0 && chararray[(yyvsp[(3) - (5)].indextype)] == 0 && stringarray[(yyvsp[(3) - (5)].indextype)] == 0)
		{
			printf("the variable is no declared\n");
		}
		else
		{
			if(intarray[(yyvsp[(3) - (5)].indextype)] !=0)
			{
				printf("%d\n",intarray[(yyvsp[(3) - (5)].indextype)], "\n");
			}
			else if(floatarray[(yyvsp[(3) - (5)].indextype)] !=0)
			{
				printf("%f\n",floatarray[(yyvsp[(3) - (5)].indextype)], "\n");
			}
			else if(chararray[(yyvsp[(3) - (5)].indextype)] !=0)
			{
				printf("%c\n",chararray[(yyvsp[(3) - (5)].indextype)], "\n");
			}
			else if(stringarray[(yyvsp[(3) - (5)].indextype)] !=0)
			{
				printf("%s\n",stringarray[(yyvsp[(3) - (5)].indextype)], "\n");
			}
		}
	}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 625 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (11)].indextype)] == 0 && intarray[(yyvsp[(2) - (11)].indextype)] == 0 && chararray[(yyvsp[(2) - (11)].indextype)] == 0 && stringarray[(yyvsp[(2) - (11)].indextype)] == 0 && functionarray[(yyvsp[(2) - (11)].indextype)] == 0)
		{
			functionarray[(yyvsp[(2) - (11)].indextype)] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("Name of function is used before\n");
		}
		if(intarray[(yyvsp[(9) - (11)].indextype)] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			(yyval.inttype) = intarray[(yyvsp[(9) - (11)].indextype)];
			functionarray[(yyvsp[(2) - (11)].indextype)] = intarray[(yyvsp[(9) - (11)].indextype)];
			intarray[(yyvsp[(2) - (11)].indextype)] = intarray[(yyvsp[(9) - (11)].indextype)];
		}
	}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 649 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (11)].indextype)] == 0 && intarray[(yyvsp[(2) - (11)].indextype)] == 0 && chararray[(yyvsp[(2) - (11)].indextype)] == 0 && stringarray[(yyvsp[(2) - (11)].indextype)] == 0 && functionarray[(yyvsp[(2) - (11)].indextype)] == 0)
		{
			functionarray[(yyvsp[(2) - (11)].indextype)] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else 
		{
			printf("This variable name is used before\n");
		}
		if(floatarray[(yyvsp[(9) - (11)].indextype)] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			(yyval.inttype) = floatarray[(yyvsp[(9) - (11)].indextype)];
			functionarray[(yyvsp[(2) - (11)].indextype)] = floatarray[(yyvsp[(9) - (11)].indextype)];
			floatarray[(yyvsp[(2) - (11)].indextype)] = floatarray[(yyvsp[(9) - (11)].indextype)];
		}
	}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 673 "YaccCode.y"
    {
		if(floatarray[(yyvsp[(2) - (11)].indextype)] == 0 && intarray[(yyvsp[(2) - (11)].indextype)] == 0 && chararray[(yyvsp[(2) - (11)].indextype)] == 0 && stringarray[(yyvsp[(2) - (11)].indextype)] == 0 && functionarray[(yyvsp[(2) - (11)].indextype)] == 0)
		{
			functionarray[(yyvsp[(2) - (11)].indextype)] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("This variable name is used before\n");
		}
		if(chararray[(yyvsp[(9) - (11)].indextype)] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			(yyval.inttype) = chararray[(yyvsp[(9) - (11)].indextype)];
			functionarray[(yyvsp[(2) - (11)].indextype)] = chararray[(yyvsp[(9) - (11)].indextype)];
			chararray[(yyvsp[(2) - (11)].indextype)] = chararray[(yyvsp[(9) - (11)].indextype)];
		}
	}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 697 "YaccCode.y"
    {
		
		if(floatarray[(yyvsp[(2) - (11)].indextype)] == 0 && intarray[(yyvsp[(2) - (11)].indextype)] == 0 && chararray[(yyvsp[(2) - (11)].indextype)] == 0 && stringarray[(yyvsp[(2) - (11)].indextype)] == 0 && functionarray[(yyvsp[(2) - (11)].indextype)] == 0)
		{
			functionarray[(yyvsp[(2) - (11)].indextype)] = 1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("This variable name is used before\n");
		}
		if(stringarray[(yyvsp[(9) - (11)].indextype)] == 0)
		{
			printf("return variable is not correct\n");
		}
		else  
		{
			(yyval.inttype) = stringarray[(yyvsp[(9) - (11)].indextype)];
			functionarray[(yyvsp[(2) - (11)].indextype)] = stringarray[(yyvsp[(9) - (11)].indextype)];
			stringarray[(yyvsp[(2) - (11)].indextype)] = stringarray[(yyvsp[(9) - (11)].indextype)];
		}
	}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 722 "YaccCode.y"
    {   
	
		if(floatarray[(yyvsp[(2) - (8)].indextype)] == 0 && intarray[(yyvsp[(2) - (8)].indextype)] == 0 && chararray[(yyvsp[(2) - (8)].indextype)] == 0 && stringarray[(yyvsp[(2) - (8)].indextype)] == 0 && functionarray[(yyvsp[(2) - (8)].indextype)] == 0)
		{
			functionarray[(yyvsp[(2) - (8)].indextype)] = -1;
			printf("number of parmeter: %d\n",numofpar);
			numofpar = 0;
		}
		else
		{
			printf("This variable name is used before\n");
		}
	
	}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 740 "YaccCode.y"
    {
	
		if(floatarray[(yyvsp[(1) - (5)].indextype)] == 0 && intarray[(yyvsp[(1) - (5)].indextype)] == 0 && chararray[(yyvsp[(1) - (5)].indextype)] == 0 && stringarray[(yyvsp[(1) - (5)].indextype)] == 0 && functionarray[(yyvsp[(1) - (5)].indextype)] == 0)
		{
			printf("function not defined");
		}
		else
		{
			if(functionarray[(yyvsp[(1) - (5)].indextype)] == -1)
			{
				int r = numofpar, R = numofcallpar;
				printf("function is excuted and void type");
				if( r == R)
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}
				else
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}
			}
			else
			{
				int r = numofpar, R = numofcallpar;
				printf("function is excuted and has return type and value=%d" ,functionarray[(yyvsp[(1) - (5)].indextype)]);
				if( r == R)
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}
				else
				{
					printf("number of parmeter: %d\n",numofcallpar);
					numofcallpar = 0;
				}

			}
		}
	
	}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 785 "YaccCode.y"
    {numofpar++;}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 787 "YaccCode.y"
    {numofpar++;}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 789 "YaccCode.y"
    {numofpar++;}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 791 "YaccCode.y"
    {numofpar++;}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 793 "YaccCode.y"
    {numofpar++;}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 795 "YaccCode.y"
    {numofpar++;}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 797 "YaccCode.y"
    {numofpar++;}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 799 "YaccCode.y"
    {numofpar++;}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 803 "YaccCode.y"
    {numofcallpar++;}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 805 "YaccCode.y"
    {numofcallpar++;}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 807 "YaccCode.y"
    {numofcallpar++;}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 809 "YaccCode.y"
    {numofcallpar++;}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 811 "YaccCode.y"
    {numofcallpar++;}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 813 "YaccCode.y"
    {numofcallpar++;}
    break;


/* Line 1792 of yacc.c  */
#line 2569 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 817 "YaccCode.y"

void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
	
}

int main(void) 
{
	yyparse();
	yyparse();
	yyparse();

	return 0;
}