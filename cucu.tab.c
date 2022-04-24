/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define YYSTYPE char *
    int yylex();
    int yyerror(char *msg);
    int yywrap();
    int lineNumber;
    char *yytext;
    FILE *lexer,*parser;
    char *concatenate(char *a,char *b)
    {
        int lena =strlen(a);
        int lenb = strlen(b);
        char *out = malloc((lena+lenb+1)*sizeof(char));
        int p=0;
        for (int i=0;i<lena;i++)
        {
            out[p]=a[i];
            p++;
        }
        for (int i=0;i<lenb;i++)
        {
            out[p]=b[i];
            p++;
        }
        out[p]='\0';
        return out;
    }
    

#line 103 "cucu.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_CUCU_TAB_H_INCLUDED
# define YY_YY_CUCU_TAB_H_INCLUDED
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
    whileKeyword = 258,
    ifKeyword = 259,
    elseKeyword = 260,
    Type = 261,
    ID = 262,
    Number = 263,
    DivideOP = 264,
    MultiplyOP = 265,
    MinusOP = 266,
    PlusOP = 267,
    LeftCurlyBrace = 268,
    RightCurlyBrace = 269,
    LeftParen = 270,
    RightParen = 271,
    EqualSign = 272,
    EqualityChecker = 273,
    InequalityChecker = 274,
    ComparisonOP = 275,
    Semicolon = 276,
    String = 277,
    Comma = 278,
    And = 279,
    LeftSquareBracket = 280,
    RightSquareBracket = 281,
    returnKeyword = 282,
    OrOp = 283,
    AndOp = 284,
    LogicalAnd = 285,
    LogicalOr = 286,
    Comment = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CUCU_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

#define YYUNDEFTOK  2
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    49,    53,    57,    62,    67,    71,    75,
      83,    90,    98,   105,   114,   120,   128,   136,   145,   151,
     159,   170,   183,   194,   203,   211,   217,   223,   229,   238,
     247,   258,   265,   272,   282,   291,   295,   301,   305,   312,
     320,   321,   328,   338,   339,   346,   355,   357,   366,   367,
     376,   377,   386,   387,   396,   400,   404,   408,   415,   419,
     424,   432,   441,   448,   452,   459,   464,   471,   478,   482
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "whileKeyword", "ifKeyword",
  "elseKeyword", "Type", "ID", "Number", "DivideOP", "MultiplyOP",
  "MinusOP", "PlusOP", "LeftCurlyBrace", "RightCurlyBrace", "LeftParen",
  "RightParen", "EqualSign", "EqualityChecker", "InequalityChecker",
  "ComparisonOP", "Semicolon", "String", "Comma", "And",
  "LeftSquareBracket", "RightSquareBracket", "returnKeyword", "OrOp",
  "AndOp", "LogicalAnd", "LogicalOr", "Comment", "$accept", "Program",
  "statementList", "Block", "whileLoop", "ifElse", "ifElseUnmatched",
  "functionDeclaration", "elseBlock", "functionDefinition", "Arguments",
  "statement", "functionCall", "Parameters", "ArrayAccess",
  "VariableDeclaration", "expression", "precedence1", "precedence2",
  "precedence3", "precedence4", "precedence5", "precedence6",
  "precedence7", "precedence8", "Assignment", "Return", "Variables", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
# endif

#define YYPACT_NINF (-17)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,   -12,   -10,     9,    46,    19,    16,    25,   -17,    16,
     -17,   -17,    23,   -17,    11,    16,    12,    22,    34,    54,
      58,    19,    19,    39,   -15,    44,   -17,   140,    19,    19,
      46,   -17,    19,   -17,   -17,    22,   -17,    75,    85,   109,
      70,    76,    81,    82,   -17,   -17,   -17,   -17,   -17,    94,
     -17,    16,   -17,   101,   -17,   -17,   -17,    19,   -17,   -17,
     -17,   108,   135,    15,   145,   145,   145,   -17,   137,   131,
     -17,   132,   141,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    16,   -17,   -17,   146,   -17,    96,   119,
     152,   -17,   147,    91,   -17,   -17,   -17,   -17,    19,   -17,
     -17,    35,   -17,    85,    85,   109,   109,    70,    70,    76,
      81,    82,   -17,   150,   -17,    16,   -17,    16,   -17,   142,
     -17,   -17,   -17,   153,   154,   160,   -17,   -17,   -17
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,     0,     0,    63,     6,     0,     2,     6,
       7,     8,     0,     9,     0,     6,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    65,    34,     0,     0,     0,
      54,    55,     0,    59,    58,    56,    62,    35,    37,    40,
      43,    46,    48,    50,    52,    36,     5,     1,     4,     0,
      13,     6,    26,     0,    17,     3,    27,     0,    24,    25,
      28,     0,     0,     0,     0,     0,     0,    30,     0,    32,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,    12,    19,     0,    61,     0,     0,
       0,    21,     0,    68,    67,    66,    64,    29,     0,    33,
      57,    54,    56,    38,    39,    42,    41,    45,    44,    47,
      49,    51,    53,     0,    16,     6,    11,     6,    14,    23,
      20,    31,    18,     0,     0,     0,    10,    15,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -17,   -17,    -5,   -17,   -17,   120,   -17,   -17,   -17,    -7,
      45,    -2,     0,    73,    63,   -17,    48,   -17,   -16,    55,
      72,    93,    95,    92,    97,     8,   -17,    69
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    50,    14,
      92,    15,    34,    68,    17,    18,    69,    37,    38,    39,
      40,    41,    42,    43,    44,    19,    20,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    46,    57,    21,    48,    22,    16,    53,    65,    16,
      55,    25,    54,    45,    16,    16,    23,     3,     4,     1,
       2,    90,     3,     4,    51,    47,    30,    31,    49,    45,
      45,    91,    52,    56,    32,    45,    45,    45,     5,    57,
      45,    33,    53,     5,   101,    31,    86,    85,     6,    16,
      27,    16,    32,    36,    63,    58,    28,   103,   104,    33,
      29,    27,    64,    28,    29,    45,    24,    66,    35,    61,
      62,    29,    25,    25,    25,    59,    70,    71,   113,    60,
      72,    53,    53,    16,    35,    35,   116,   118,    16,    16,
      35,    35,    35,    73,    74,    35,    75,    76,     2,    79,
       3,     4,     3,     4,    80,    87,    45,    83,    28,   115,
     123,    81,   124,    82,    64,    16,    29,    16,    77,    78,
      35,     5,    52,     5,    88,     3,     4,    24,    24,    24,
     105,   106,   117,    94,    95,    96,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,     5,    30,    31,   107,
     108,    89,    93,    97,    98,    32,    67,   100,    99,   119,
     114,    35,    33,   120,   122,   125,    90,   126,   127,    84,
     128,   121,   109,   111,     0,   110,     0,     0,     0,   112
};

static const yytype_int8 yycheck[] =
{
       0,     6,    17,    15,     9,    15,     6,    14,    23,     9,
      15,     3,    14,     5,    14,    15,     7,     6,     7,     3,
       4,     6,     6,     7,    13,     0,     7,     8,     5,    21,
      22,    16,    21,    21,    15,    27,    28,    29,    27,    17,
      32,    22,    49,    27,     7,     8,    51,    49,    32,    49,
      15,    51,    15,     5,    15,    21,    17,    73,    74,    22,
      25,    15,    23,    17,    25,    57,     3,    23,     5,    21,
      22,    25,    64,    65,    66,    21,    28,    29,    83,    21,
      32,    88,    89,    83,    21,    22,    88,    89,    88,    89,
      27,    28,    29,    18,    19,    32,    11,    12,     4,    29,
       6,     7,     6,     7,    28,    57,    98,    13,    17,    13,
     115,    30,   117,    31,    23,   115,    25,   117,     9,    10,
      57,    27,    21,    27,    16,     6,     7,    64,    65,    66,
      75,    76,    13,    64,    65,    66,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    27,     7,     8,    77,
      78,    16,     7,    16,    23,    15,    16,    16,    26,     7,
      14,    98,    22,    16,    14,    23,     6,    14,    14,    49,
     125,    98,    79,    81,    -1,    80,    -1,    -1,    -1,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,    27,    32,    34,    35,    36,
      37,    38,    39,    40,    42,    44,    45,    47,    48,    58,
      59,    15,    15,     7,    47,    58,    60,    15,    17,    25,
       7,     8,    15,    22,    45,    47,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    35,     0,    35,     5,
      41,    13,    21,    42,    44,    35,    21,    17,    21,    21,
      21,    49,    49,    15,    23,    23,    23,    16,    46,    49,
      49,    49,    49,    18,    19,    11,    12,     9,    10,    29,
      28,    30,    31,    13,    38,    44,    35,    49,    16,    16,
       6,    16,    43,     7,    60,    60,    60,    16,    23,    26,
      16,     7,    47,    51,    51,    52,    52,    53,    53,    54,
      55,    56,    57,    35,    14,    13,    44,    13,    44,     7,
      16,    46,    14,    35,    35,    23,    14,    14,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    35,    35,    36,    36,    36,
      37,    37,    38,    38,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    44,    44,    44,    44,    44,    45,
      45,    46,    46,    47,    48,    49,    49,    50,    50,    50,
      51,    51,    51,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     0,     1,     1,     1,
       7,     5,     3,     2,     5,     7,     4,     2,     4,     2,
       5,     4,     4,     2,     2,     2,     2,     2,     2,     4,
       3,     3,     1,     4,     2,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       3,     3,     2,     1,     3,     1,     3,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 41 "cucu.y"
{
    printf("Parsed Successfully! No errors found.");
    fprintf(parser,"%s",yyval);
}
#line 1457 "cucu.tab.c"
    break;

  case 3:
#line 50 "cucu.y"
{
    yyval= concatenate(yyvsp[-1],yyvsp[0]);
}
#line 1465 "cucu.tab.c"
    break;

  case 4:
#line 54 "cucu.y"
{
    yyval= concatenate(yyvsp[-1],yyvsp[0]);
}
#line 1473 "cucu.tab.c"
    break;

  case 5:
#line 58 "cucu.y"
{
    yyval=yyvsp[0];
}
#line 1481 "cucu.tab.c"
    break;

  case 6:
#line 62 "cucu.y"
{
    yyval="";
}
#line 1489 "cucu.tab.c"
    break;

  case 7:
#line 68 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 1497 "cucu.tab.c"
    break;

  case 8:
#line 72 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 1505 "cucu.tab.c"
    break;

  case 9:
#line 76 "cucu.y"
{
    yyval = yyvsp[0];
    
    
}
#line 1515 "cucu.tab.c"
    break;

  case 10:
#line 84 "cucu.y"
{
    yyval="While Loop with expression: ";
    yyval = concatenate(yyval,yyvsp[-4]);
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[-1]);
}
#line 1526 "cucu.tab.c"
    break;

  case 11:
#line 91 "cucu.y"
{
    yyval="While Loop with expression: ";
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1537 "cucu.tab.c"
    break;

  case 12:
#line 99 "cucu.y"
{
    yyval="if statement with expression: ";
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval,"else ");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1548 "cucu.tab.c"
    break;

  case 13:
#line 106 "cucu.y"
{
    yyval="if statement with expression: ";
    yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,"else ");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1559 "cucu.tab.c"
    break;

  case 14:
#line 115 "cucu.y"
{
    yyval = concatenate("",yyvsp[-2]);
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1569 "cucu.tab.c"
    break;

  case 15:
#line 121 "cucu.y"
{
    yyval = concatenate("",yyvsp[-4]);
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[-1]);
}
#line 1579 "cucu.tab.c"
    break;

  case 16:
#line 129 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,yyvsp[-3]);
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[-1]);
    
}
#line 1591 "cucu.tab.c"
    break;

  case 17:
#line 137 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1602 "cucu.tab.c"
    break;

  case 18:
#line 146 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[-1]);
}
#line 1612 "cucu.tab.c"
    break;

  case 19:
#line 152 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,"\n");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1622 "cucu.tab.c"
    break;

  case 20:
#line 160 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,"Function name: ");
    yyval = concatenate(yyval,yyvsp[-3]);
    yyval = concatenate(yyval,", Return Type: " );
    yyval = concatenate(yyval,yyvsp[-4]);
    yyval = concatenate(yyval,", Argument(s): " );
    yyval = concatenate(yyval,yyvsp[-1]);
   
}
#line 1637 "cucu.tab.c"
    break;

  case 21:
#line 171 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,"Function name: ");
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval,", Return Type: " );
    yyval = concatenate(yyval,yyvsp[-3]);
    yyval = concatenate(yyval," [No Arguments]" );
    
}
#line 1651 "cucu.tab.c"
    break;

  case 22:
#line 184 "cucu.y"
{
    yyval="";
     yyval = concatenate(yyval, yyvsp[-2]);
     yyval = concatenate(yyval, " of type:");
     yyval = concatenate(yyval,yyvsp[-3]);
     yyval = concatenate(yyval, ", ");
     yyval = concatenate(yyval, yyvsp[0]);

}
#line 1665 "cucu.tab.c"
    break;

  case 23:
#line 195 "cucu.y"
{
    yyval="";
     yyval = concatenate(yyval, yyvsp[0]);
     yyval = concatenate(yyval, " of type:");
     yyval = concatenate(yyval,yyvsp[-1]);
}
#line 1676 "cucu.tab.c"
    break;

  case 24:
#line 204 "cucu.y"
{
    yyval="";
    
    yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,"statement End\n");
    
}
#line 1688 "cucu.tab.c"
    break;

  case 25:
#line 212 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,"statement End\n");
}
#line 1698 "cucu.tab.c"
    break;

  case 26:
#line 218 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,"statement End\n");
}
#line 1708 "cucu.tab.c"
    break;

  case 27:
#line 224 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,"statement End\n");
}
#line 1718 "cucu.tab.c"
    break;

  case 28:
#line 230 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,"statement End\n");
}
#line 1728 "cucu.tab.c"
    break;

  case 29:
#line 239 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,"Function Call with name: ");
    yyval = concatenate(yyval,yyvsp[-3]);
    yyval = concatenate(yyval,", Parameter(s): " );
    yyval = concatenate(yyval,concatenate(yyvsp[-1]," "));

}
#line 1741 "cucu.tab.c"
    break;

  case 30:
#line 248 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,"Function Call with name: ");
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval,", [No Parameters] " );
    yyval = concatenate(yyval," ");
}
#line 1753 "cucu.tab.c"
    break;

  case 31:
#line 259 "cucu.y"
{
    yyval ="";
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval," , ");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1764 "cucu.tab.c"
    break;

  case 32:
#line 266 "cucu.y"
{
      yyval =yyvsp[0];   
}
#line 1772 "cucu.tab.c"
    break;

  case 33:
#line 273 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,"Array Name: ");
    yyval = concatenate(yyval,yyvsp[-3]);
    yyval = concatenate(yyval," at index: ");
    yyval = concatenate(yyval,yyvsp[-1]);
}
#line 1784 "cucu.tab.c"
    break;

  case 34:
#line 283 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,"declaration of type ");
    yyval = concatenate(yyval,concatenate(concatenate(yyvsp[-1],": "),concatenate(yyvsp[0]," ")));

}
#line 1795 "cucu.tab.c"
    break;

  case 35:
#line 292 "cucu.y"
{
    yyval= yyvsp[0];
}
#line 1803 "cucu.tab.c"
    break;

  case 36:
#line 296 "cucu.y"
{
    yyval= yyvsp[0];
}
#line 1811 "cucu.tab.c"
    break;

  case 37:
#line 302 "cucu.y"
{
    yyval= yyvsp[0];
}
#line 1819 "cucu.tab.c"
    break;

  case 38:
#line 306 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
    yyval = concatenate(yyval,"== ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1830 "cucu.tab.c"
    break;

  case 39:
#line 313 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
    yyval = concatenate(yyval,"!= ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1841 "cucu.tab.c"
    break;

  case 41:
#line 322 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
    yyval = concatenate(yyval,"+ ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1852 "cucu.tab.c"
    break;

  case 42:
#line 329 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
    yyval = concatenate(yyval,"- ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1863 "cucu.tab.c"
    break;

  case 44:
#line 340 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
     yyval = concatenate(yyval,"* ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1874 "cucu.tab.c"
    break;

  case 45:
#line 347 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
    yyval = concatenate(yyval,"/ ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1885 "cucu.tab.c"
    break;

  case 47:
#line 358 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
    yyval = concatenate(yyval,"& ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1896 "cucu.tab.c"
    break;

  case 49:
#line 368 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
    yyval = concatenate(yyval,"| ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1907 "cucu.tab.c"
    break;

  case 51:
#line 378 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
     yyval = concatenate(yyval,"And ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1918 "cucu.tab.c"
    break;

  case 53:
#line 388 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);yyval = concatenate(yyval," ");
     yyval = concatenate(yyval,"Or ");
    yyval = concatenate(yyval,yyvsp[0]);yyval = concatenate(yyval," ");
}
#line 1929 "cucu.tab.c"
    break;

  case 54:
#line 397 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 1937 "cucu.tab.c"
    break;

  case 55:
#line 401 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 1945 "cucu.tab.c"
    break;

  case 56:
#line 405 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 1953 "cucu.tab.c"
    break;

  case 57:
#line 409 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,yyvsp[-2]);
     yyval = concatenate(yyval,yyvsp[-1]);
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 1964 "cucu.tab.c"
    break;

  case 58:
#line 416 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 1972 "cucu.tab.c"
    break;

  case 59:
#line 420 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 1980 "cucu.tab.c"
    break;

  case 60:
#line 425 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,"Assignment of ID: ");
    yyval = concatenate(yyval,concatenate(yyvsp[-2]," "));
    yyval = concatenate(yyval,"to ");
    yyval = concatenate(yyval,concatenate(yyvsp[0]," "));
}
#line 1992 "cucu.tab.c"
    break;

  case 61:
#line 433 "cucu.y"
{
    yyval="";
    yyval = concatenate(yyval,"Assignment of ID: ");
    yyval = concatenate(yyval,concatenate(yyvsp[-2]," "));
    yyval = concatenate(yyval,"to ");
    yyval = concatenate(yyval,concatenate(yyvsp[0]," "));
}
#line 2004 "cucu.tab.c"
    break;

  case 62:
#line 442 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,"Return expression: ");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 2014 "cucu.tab.c"
    break;

  case 63:
#line 449 "cucu.y"
{
    yyval = "Return";
}
#line 2022 "cucu.tab.c"
    break;

  case 64:
#line 453 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval,", ");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 2033 "cucu.tab.c"
    break;

  case 65:
#line 460 "cucu.y"
{
    yyval = "";
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 2042 "cucu.tab.c"
    break;

  case 66:
#line 465 "cucu.y"
 {
    yyval = "";
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval,", ");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 2053 "cucu.tab.c"
    break;

  case 67:
#line 472 "cucu.y"
 {
    yyval = "";
    yyval = concatenate(yyval,yyvsp[-2]);
    yyval = concatenate(yyval,", ");
    yyval = concatenate(yyval,yyvsp[0]);
}
#line 2064 "cucu.tab.c"
    break;

  case 68:
#line 479 "cucu.y"
 {
    yyval= yyvsp[0];
}
#line 2072 "cucu.tab.c"
    break;

  case 69:
#line 483 "cucu.y"
{
    yyval = yyvsp[0];
}
#line 2080 "cucu.tab.c"
    break;


#line 2084 "cucu.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 486 "cucu.y"



int yyerror(char *msg)
 {
     fprintf(parser,"Error at line %d: Unexpected token: %s\n",lineNumber,yytext);
  printf("%s",msg);
  printf("\n Compilation Terminated");
  exit(1);
 }
 int yywrap()
 {
     return 1;
 }
int main(int argc, char **argv)
{
    freopen(argv[1],"r",stdin);
    lexer = fopen("Lexer.txt","w");
    parser = fopen("Parser.txt","w");
    lineNumber=1;
    yyparse();
}
