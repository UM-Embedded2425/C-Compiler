/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison_test2.y"


#include <stdio.h>
#include "ast.h"

static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
TreeNode * savedTree;
int yylex(void);
extern FILE *yyin;
void yyerror(const char* msg);


#line 85 "bison_test2.tab.c"

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

#include "bison_test2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of input"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* "identifier"  */
  YYSYMBOL_LETTER = 4,                     /* "letter"  */
  YYSYMBOL_NUMBER = 5,                     /* NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 6,               /* FLOAT_NUMBER  */
  YYSYMBOL_AUTO = 7,                       /* AUTO  */
  YYSYMBOL_BOOL = 8,                       /* BOOL  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_CASE = 10,                      /* CASE  */
  YYSYMBOL_CHAR = 11,                      /* CHAR  */
  YYSYMBOL_CONST = 12,                     /* CONST  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_DOUBLE = 16,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_ENUM = 18,                      /* ENUM  */
  YYSYMBOL_EXTERN = 19,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 20,                     /* FLOAT  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_INT = 24,                       /* INT  */
  YYSYMBOL_LONG = 25,                      /* LONG  */
  YYSYMBOL_REGISTER = 26,                  /* REGISTER  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_SHORT = 28,                     /* SHORT  */
  YYSYMBOL_SIGNED = 29,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 30,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_STRUCT = 32,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 34,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 35,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 36,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 37,                      /* VOID  */
  YYSYMBOL_VOLATILE = 38,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 39,                     /* WHILE  */
  YYSYMBOL_PACKED = 40,                    /* PACKED  */
  YYSYMBOL_PREPROCESS_HASH = 41,           /* PREPROCESS_HASH  */
  YYSYMBOL_PREPROCESS_DEFINE = 42,         /* PREPROCESS_DEFINE  */
  YYSYMBOL_PREPROCESS_INCLUDE = 43,        /* PREPROCESS_INCLUDE  */
  YYSYMBOL_PREPROCESS_IFDEF = 44,          /* PREPROCESS_IFDEF  */
  YYSYMBOL_PREPROCESS_IFNDEF = 45,         /* PREPROCESS_IFNDEF  */
  YYSYMBOL_PREPROCESS_IF = 46,             /* PREPROCESS_IF  */
  YYSYMBOL_PREPROCESS_ELSE = 47,           /* PREPROCESS_ELSE  */
  YYSYMBOL_PREPROCESS_ELIF = 48,           /* PREPROCESS_ELIF  */
  YYSYMBOL_PREPROCESS_ENDIF = 49,          /* PREPROCESS_ENDIF  */
  YYSYMBOL_PREPROCESS_UNDEF = 50,          /* PREPROCESS_UNDEF  */
  YYSYMBOL_PREPROCESS_ERROR = 51,          /* PREPROCESS_ERROR  */
  YYSYMBOL_PREPROCESS_LINE = 52,           /* PREPROCESS_LINE  */
  YYSYMBOL_PREPROCESS_PRAGMA = 53,         /* PREPROCESS_PRAGMA  */
  YYSYMBOL_OPEN_PAREN = 54,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 55,               /* CLOSE_PAREN  */
  YYSYMBOL_OPEN_SQUARE = 56,               /* OPEN_SQUARE  */
  YYSYMBOL_CLOSE_SQUARE = 57,              /* CLOSE_SQUARE  */
  YYSYMBOL_OPEN_CURLY = 58,                /* OPEN_CURLY  */
  YYSYMBOL_CLOSE_CURLY = 59,               /* CLOSE_CURLY  */
  YYSYMBOL_SEMICOLON = 60,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 61,                     /* COMMA  */
  YYSYMBOL_DOT = 62,                       /* DOT  */
  YYSYMBOL_TWO_DOTS = 63,                  /* TWO_DOTS  */
  YYSYMBOL_APOSTROPHE = 64,                /* APOSTROPHE  */
  YYSYMBOL_QUOTATION_MARK = 65,            /* QUOTATION_MARK  */
  YYSYMBOL_ARROW = 66,                     /* ARROW  */
  YYSYMBOL_PLUSPLUS = 67,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 68,                /* MINUSMINUS  */
  YYSYMBOL_PLUS = 69,                      /* PLUS  */
  YYSYMBOL_MINUS = 70,                     /* MINUS  */
  YYSYMBOL_LOGIC_NOT = 71,                 /* LOGIC_NOT  */
  YYSYMBOL_LOGIC_AND = 72,                 /* LOGIC_AND  */
  YYSYMBOL_LOGIC_OR = 73,                  /* LOGIC_OR  */
  YYSYMBOL_BIT_NOT = 74,                   /* BIT_NOT  */
  YYSYMBOL_BIT_AND = 75,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 76,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 77,                   /* BIT_XOR  */
  YYSYMBOL_TERNARY = 78,                   /* TERNARY  */
  YYSYMBOL_ASTERISK = 79,                  /* ASTERISK  */
  YYSYMBOL_RIGHT_SLASH = 80,               /* RIGHT_SLASH  */
  YYSYMBOL_PERCENT = 81,                   /* PERCENT  */
  YYSYMBOL_RIGHT_SHIFT = 82,               /* RIGHT_SHIFT  */
  YYSYMBOL_LEFT_SHIFT = 83,                /* LEFT_SHIFT  */
  YYSYMBOL_GREATER_THAN = 84,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_THAN_EQUAL = 85,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_SMALLER_THAN = 86,              /* SMALLER_THAN  */
  YYSYMBOL_SMALLER_THAN_EQUAL = 87,        /* SMALLER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 88,                     /* EQUAL  */
  YYSYMBOL_DIFFERENT = 89,                 /* DIFFERENT  */
  YYSYMBOL_ASSIGN = 90,                    /* ASSIGN  */
  YYSYMBOL_ASSIGN_PLUS = 91,               /* ASSIGN_PLUS  */
  YYSYMBOL_ASSIGN_MINUS = 92,              /* ASSIGN_MINUS  */
  YYSYMBOL_ASSIGN_MULT = 93,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_DIV = 94,                /* ASSIGN_DIV  */
  YYSYMBOL_ASSIGN_PERCENT = 95,            /* ASSIGN_PERCENT  */
  YYSYMBOL_ASSIGN_AND = 96,                /* ASSIGN_AND  */
  YYSYMBOL_ASSIGN_OR = 97,                 /* ASSIGN_OR  */
  YYSYMBOL_ASSIGN_XOR = 98,                /* ASSIGN_XOR  */
  YYSYMBOL_ASSIGN_LEFT_SHIFT = 99,         /* ASSIGN_LEFT_SHIFT  */
  YYSYMBOL_ASSIGN_RIGHT_SHIFT = 100,       /* ASSIGN_RIGHT_SHIFT  */
  YYSYMBOL_YYACCEPT = 101,                 /* $accept  */
  YYSYMBOL_program = 102,                  /* program  */
  YYSYMBOL_code_lines = 103,               /* code_lines  */
  YYSYMBOL_code_line = 104,                /* code_line  */
  YYSYMBOL_declaration_seq = 105,          /* declaration_seq  */
  YYSYMBOL_function_definition = 106,      /* function_definition  */
  YYSYMBOL_block_lines = 107,              /* block_lines  */
  YYSYMBOL_block_line = 108,               /* block_line  */
  YYSYMBOL_statement = 109,                /* statement  */
  YYSYMBOL_while_stmt = 110,               /* while_stmt  */
  YYSYMBOL_if_stmt = 111,                  /* if_stmt  */
  YYSYMBOL_for_stmt = 112,                 /* for_stmt  */
  YYSYMBOL_switch_stmt = 113,              /* switch_stmt  */
  YYSYMBOL_case_seq = 114,                 /* case_seq  */
  YYSYMBOL_case_stmt = 115,                /* case_stmt  */
  YYSYMBOL_continue_stmt = 116,            /* continue_stmt  */
  YYSYMBOL_break_stmt = 117,               /* break_stmt  */
  YYSYMBOL_goto_stmt = 118,                /* goto_stmt  */
  YYSYMBOL_return_stmt = 119,              /* return_stmt  */
  YYSYMBOL_expression_stmt = 120,          /* expression_stmt  */
  YYSYMBOL_logical_exp = 121,              /* logical_exp  */
  YYSYMBOL_shift_exp = 122,                /* shift_exp  */
  YYSYMBOL_addsub_exp = 123,               /* addsub_exp  */
  YYSYMBOL_muldiv_exp = 124,               /* muldiv_exp  */
  YYSYMBOL_unary_exp = 125,                /* unary_exp  */
  YYSYMBOL_complex_exp = 126,              /* complex_exp  */
  YYSYMBOL_simple_expression = 127,        /* simple_expression  */
  YYSYMBOL_parameter_list = 128,           /* parameter_list  */
  YYSYMBOL_declaration = 129,              /* declaration  */
  YYSYMBOL_value_list = 130,               /* value_list  */
  YYSYMBOL_enumerator_list = 131,          /* enumerator_list  */
  YYSYMBOL_declaration_types = 132,        /* declaration_types  */
  YYSYMBOL_assign_operator = 133,          /* assign_operator  */
  YYSYMBOL_unary_operator = 134,           /* unary_operator  */
  YYSYMBOL_logical_operator = 135          /* logical_operator  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   693

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   355


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    89,    90,    96,    97,   100,   101,   107,
     125,   126,   132,   133,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   147,   149,   153,   155,   157,   161,   165,
     169,   170,   173,   175,   179,   183,   187,   191,   195,   196,
     200,   201,   205,   206,   208,   212,   216,   225,   235,   236,
     238,   240,   244,   245,   247,   249,   253,   254,   256,   258,
     260,   264,   266,   268,   271,   276,   290,   308,   310,   312,
     314,   316,   318,   320,   322,   326,   327,   329,   335,   337,
     340,   346,   352,   358,   364,   370,   376,   382,   388,   389,
     390,   391,   392,   402,   408,   414,   420,   426,   432,   438,
     444,   450,   456,   462,   470,   476,   482,   488,   494,   500,
     508,   514,   520,   526,   532,   538,   544,   550,   556,   562,
     568,   574,   580,   586,   592
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of input\"", "error", "\"invalid token\"", "\"identifier\"",
  "\"letter\"", "NUMBER", "FLOAT_NUMBER", "AUTO", "BOOL", "BREAK", "CASE",
  "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM",
  "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "PACKED",
  "PREPROCESS_HASH", "PREPROCESS_DEFINE", "PREPROCESS_INCLUDE",
  "PREPROCESS_IFDEF", "PREPROCESS_IFNDEF", "PREPROCESS_IF",
  "PREPROCESS_ELSE", "PREPROCESS_ELIF", "PREPROCESS_ENDIF",
  "PREPROCESS_UNDEF", "PREPROCESS_ERROR", "PREPROCESS_LINE",
  "PREPROCESS_PRAGMA", "OPEN_PAREN", "CLOSE_PAREN", "OPEN_SQUARE",
  "CLOSE_SQUARE", "OPEN_CURLY", "CLOSE_CURLY", "SEMICOLON", "COMMA", "DOT",
  "TWO_DOTS", "APOSTROPHE", "QUOTATION_MARK", "ARROW", "PLUSPLUS",
  "MINUSMINUS", "PLUS", "MINUS", "LOGIC_NOT", "LOGIC_AND", "LOGIC_OR",
  "BIT_NOT", "BIT_AND", "BIT_OR", "BIT_XOR", "TERNARY", "ASTERISK",
  "RIGHT_SLASH", "PERCENT", "RIGHT_SHIFT", "LEFT_SHIFT", "GREATER_THAN",
  "GREATER_THAN_EQUAL", "SMALLER_THAN", "SMALLER_THAN_EQUAL", "EQUAL",
  "DIFFERENT", "ASSIGN", "ASSIGN_PLUS", "ASSIGN_MINUS", "ASSIGN_MULT",
  "ASSIGN_DIV", "ASSIGN_PERCENT", "ASSIGN_AND", "ASSIGN_OR", "ASSIGN_XOR",
  "ASSIGN_LEFT_SHIFT", "ASSIGN_RIGHT_SHIFT", "$accept", "program",
  "code_lines", "code_line", "declaration_seq", "function_definition",
  "block_lines", "block_line", "statement", "while_stmt", "if_stmt",
  "for_stmt", "switch_stmt", "case_seq", "case_stmt", "continue_stmt",
  "break_stmt", "goto_stmt", "return_stmt", "expression_stmt",
  "logical_exp", "shift_exp", "addsub_exp", "muldiv_exp", "unary_exp",
  "complex_exp", "simple_expression", "parameter_list", "declaration",
  "value_list", "enumerator_list", "declaration_types", "assign_operator",
  "unary_operator", "logical_operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-151)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-34)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     615,  -151,  -151,  -151,     5,  -151,  -151,  -151,  -151,  -151,
      19,    29,  -151,  -151,    42,   593,  -151,  -151,  -151,    63,
     -53,    40,    46,  -151,  -151,  -151,    34,    74,   615,   615,
     637,   107,  -151,   215,    30,   -12,   528,  -151,   125,   560,
    -151,  -151,  -151,   -34,   127,    76,   338,  -151,  -151,   215,
     290,   290,  -151,  -151,  -151,  -151,  -151,  -151,    83,   604,
      10,    80,   -56,  -151,   -46,  -151,   290,   140,    87,   152,
      97,  -151,    54,    99,    55,   637,  -151,   -57,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   290,
     105,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
     290,   290,   290,   290,   290,   290,   290,   290,     8,   637,
     158,   160,  -151,  -151,  -151,  -151,  -151,   637,  -151,   463,
    -151,   161,  -151,   115,   437,  -151,    10,    80,    80,   -56,
     -56,  -151,  -151,  -151,    96,    57,  -151,  -151,    21,   120,
     122,   111,   172,   135,   215,   139,   143,    32,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,   189,  -151,  -151,  -151,   141,  -151,  -151,   615,   144,
     215,   146,   200,   215,  -151,  -151,  -151,    58,   215,  -151,
     153,  -151,   154,   155,   151,   207,   156,   157,   166,    67,
    -151,  -151,   215,   463,    75,   463,  -151,   159,   163,   215,
     150,    -8,  -151,   238,   168,   210,   173,   463,  -151,  -151,
    -151,   463,   -14,   463,   463,   313,   463,  -151,   463,    70,
    -151,   388,    73,  -151
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    81,    82,    87,     0,    86,    84,    85,    83,    88,
       0,     0,    89,    80,     0,     0,     3,     5,     6,     0,
       0,     0,     0,     1,     2,     4,     0,     0,     0,     0,
       0,     0,    67,     0,    77,     0,     0,     7,     0,     0,
      92,    90,    91,     0,     0,     0,    61,    62,    63,     0,
       0,     0,   104,   105,   108,   109,   107,   106,     0,    38,
      40,    42,    45,    48,    52,    56,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,    65,     0,    93,   101,
      97,    98,    95,   100,    94,    99,   103,    96,   102,     0,
       0,    61,    53,    54,    68,   111,   110,   112,   120,   119,
     121,   122,   123,   124,   113,   114,   115,   116,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    78,    74,    79,    72,     0,    73,     0,
      69,     0,    70,     0,     0,    64,    41,    44,    43,    46,
      47,    49,    50,    51,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    12,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    13,
      66,     0,    39,    57,    58,     0,    35,    34,     0,     0,
       0,     0,     0,     0,     9,    11,    75,     0,     0,    36,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    76,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,    30,     0,     0,    26,     0,     0,    29,    31,
      23,     0,     0,     0,     0,     0,     0,    27,     0,    19,
      28,     0,    19,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,   214,   206,  -151,     2,  -150,  -151,  -151,
      17,  -151,  -151,  -151,    37,  -151,  -119,  -151,  -151,   -32,
     164,   130,    15,    26,   -20,   132,  -151,  -101,     0,  -151,
    -151,     4,  -151,  -151,  -151
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    14,    15,    16,    36,    17,   157,   158,   159,   160,
     161,   162,   163,   211,   212,   164,   165,   166,   167,   168,
      59,    60,    61,    62,    63,    64,    65,    43,   169,   187,
      35,    38,    89,    66,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    58,   209,   132,    19,    27,   210,   185,    20,   153,
     118,    91,   119,    47,    48,    18,   120,    90,   145,    19,
     121,    74,    21,   115,   116,   117,   148,    75,    37,    37,
      92,    93,    22,   133,    44,    46,    71,    47,    48,    71,
       1,   149,    23,     2,   226,   150,   122,    68,     3,    69,
       4,   218,     5,   151,   152,   153,     6,     7,   185,   154,
       8,     9,    49,   185,    10,   155,    26,    11,    12,    13,
      46,   156,    47,    48,   185,   185,   175,    34,   185,   131,
     -33,   185,    75,   -32,   -33,   209,    49,   -32,    30,   210,
      31,   184,   111,   112,    32,   141,   142,   143,    28,    50,
      51,    52,    53,    54,    29,   229,    55,    56,   127,   232,
      31,    57,    45,   129,    32,   130,   174,   194,    75,   195,
      67,    49,   181,    44,    33,   205,   137,   138,    72,   -33,
      76,    44,   -32,    77,    50,    51,    52,    53,    54,   139,
     140,    55,    56,    94,    33,   123,    57,   124,   190,   113,
     114,   193,   118,   173,   119,   125,   196,   126,   120,   128,
     135,   146,   121,   147,   170,   178,    46,   206,    47,    48,
     207,     1,   149,   171,     2,   179,   150,   216,   188,     3,
     176,     4,   177,     5,   151,   152,   153,     6,     7,   180,
     154,     8,     9,   182,   186,    10,   155,   183,    11,    12,
      13,   130,   156,   192,   189,   208,   191,   213,   197,   198,
     199,   200,   201,   217,   214,   203,   202,    49,    46,   224,
      47,    48,   215,   225,   204,   228,   221,   222,   231,    25,
      50,    51,    52,    53,    54,    39,   223,    55,    56,   227,
     136,    46,    57,    47,    48,     0,     1,   149,   219,     2,
     144,   150,     0,   134,     3,     0,     4,     0,     5,   151,
     152,   153,     6,     7,     0,   154,     8,     9,     0,    49,
      10,   155,     0,    11,    12,    13,     0,   156,     0,     0,
       0,     0,    50,    51,    52,    53,    54,     0,     0,    55,
      56,     0,    49,    91,    57,    47,    48,   220,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
       0,     0,    55,    56,     0,     0,    46,    57,    47,    48,
       0,     1,   149,     0,     2,     0,   150,     0,     0,     3,
       0,     4,     0,     5,   151,   152,   153,     6,     7,     0,
     154,     8,     9,     0,    49,    10,   155,     0,    11,    12,
      13,     0,   156,     0,     0,     0,     0,    50,    51,    52,
      53,    54,     0,     0,    55,    56,     0,    49,     0,    57,
       0,     0,   230,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    52,    53,    54,     0,     0,    55,    56,     0,
       0,    46,    57,    47,    48,     0,     1,   149,     0,     2,
       0,   150,     0,     0,     3,     0,     4,     0,     5,   151,
     152,   153,     6,     7,     0,   154,     8,     9,     0,     0,
      10,   155,     0,    11,    12,    13,     0,   156,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
       0,     0,    49,     0,     0,     0,     0,   233,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
       0,     0,    55,    56,     0,     0,    46,    57,    47,    48,
       0,     1,   149,     0,     2,     0,   150,     0,     0,     3,
       0,     4,     0,     5,   151,   152,   153,     6,     7,     0,
     154,     8,     9,     0,     0,    10,   155,   172,    11,    12,
      13,     0,   156,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,   100,   101,     0,     0,    49,     0,   102,
     103,   104,   105,   106,   107,   108,   109,     0,     0,     0,
      50,    51,    52,    53,    54,     0,     1,    55,    56,     2,
       0,     0,    57,     0,     3,     0,     4,     0,     5,     0,
       0,     0,     6,     7,     0,     0,     8,     9,     0,     0,
      10,     0,     0,    11,    12,    13,     0,     0,     1,     0,
       0,     2,     0,     0,     0,     0,     3,     0,     4,     0,
       5,     0,     0,     0,     6,     7,     0,    70,     8,     9,
       0,     0,    10,    24,     0,    11,    12,    13,     0,     0,
       0,     1,     0,     0,     2,     0,     0,     0,     0,     3,
       0,     4,     0,     5,     0,     0,     0,     6,     7,    73,
       0,     8,     9,     1,     0,    10,     2,     0,    11,    12,
      13,     3,     0,     4,     0,     5,     0,     0,     0,     6,
       7,     0,     0,     8,     9,     1,     0,    10,     2,     0,
      11,    12,    13,     3,     0,    40,     0,     5,     0,     0,
       0,     6,     7,     0,     0,     8,     9,     0,     0,    41,
       0,     0,    42,    12,    13,    95,    96,    97,    98,    99,
     100,   101,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   108,   109
};

static const yytype_int16 yycheck[] =
{
       0,    33,    10,    60,     0,    58,    14,   157,     3,    23,
      56,     3,    58,     5,     6,    15,    62,    49,   119,    15,
      66,    55,     3,    79,    80,    81,   127,    61,    28,    29,
      50,    51,     3,    90,    30,     3,    36,     5,     6,    39,
       8,     9,     0,    11,    58,    13,    66,    59,    16,    61,
      18,    59,    20,    21,    22,    23,    24,    25,   208,    27,
      28,    29,    54,   213,    32,    33,     3,    35,    36,    37,
       3,    39,     5,     6,   224,   225,    55,     3,   228,    75,
      10,   231,    61,    10,    14,    10,    54,    14,    54,    14,
      56,    59,    82,    83,    60,   115,   116,   117,    58,    67,
      68,    69,    70,    71,    58,   224,    74,    75,    54,   228,
      56,    79,     5,    58,    60,    60,    59,    59,    61,    61,
      90,    54,   154,   119,    90,    58,   111,   112,     3,    59,
       3,   127,    59,    57,    67,    68,    69,    70,    71,   113,
     114,    74,    75,    60,    90,     5,    79,    60,   180,    69,
      70,   183,    56,    57,    58,     3,   188,    60,    62,    60,
      55,     3,    66,     3,     3,    54,     3,   199,     5,     6,
     202,     8,     9,    58,    11,     3,    13,   209,   178,    16,
      60,    18,    60,    20,    21,    22,    23,    24,    25,    54,
      27,    28,    29,    54,     5,    32,    33,    54,    35,    36,
      37,    60,    39,     3,    60,   203,    60,   205,    55,    55,
      55,    60,     5,    63,    55,    58,    60,    54,     3,   217,
       5,     6,    59,   221,    58,   223,    58,    17,   226,    15,
      67,    68,    69,    70,    71,    29,    63,    74,    75,   222,
     110,     3,    79,     5,     6,    -1,     8,     9,   211,    11,
     118,    13,    -1,    89,    16,    -1,    18,    -1,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    54,
      32,    33,    -1,    35,    36,    37,    -1,    39,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    -1,    -1,    74,
      75,    -1,    54,     3,    79,     5,     6,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      -1,    -1,    74,    75,    -1,    -1,     3,    79,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    -1,    -1,    16,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    54,    32,    33,    -1,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    -1,    -1,    74,    75,    -1,    54,    -1,    79,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    -1,    -1,    74,    75,    -1,
      -1,     3,    79,     5,     6,    -1,     8,     9,    -1,    11,
      -1,    13,    -1,    -1,    16,    -1,    18,    -1,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    -1,    -1,
      32,    33,    -1,    35,    36,    37,    -1,    39,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      -1,    -1,    74,    75,    -1,    -1,     3,    79,     5,     6,
      -1,     8,     9,    -1,    11,    -1,    13,    -1,    -1,    16,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    -1,    32,    33,    60,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    54,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    -1,     8,    74,    75,    11,
      -1,    -1,    79,    -1,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    37,    -1,    -1,     8,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    24,    25,    -1,    59,    28,    29,
      -1,    -1,    32,     0,    -1,    35,    36,    37,    -1,    -1,
      -1,     8,    -1,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    59,
      -1,    28,    29,     8,    -1,    32,    11,    -1,    35,    36,
      37,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,     8,    -1,    32,    11,    -1,
      35,    36,    37,    16,    -1,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    37,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    11,    16,    18,    20,    24,    25,    28,    29,
      32,    35,    36,    37,   102,   103,   104,   106,   129,   132,
       3,     3,     3,     0,     0,   104,     3,    58,    58,    58,
      54,    56,    60,    90,     3,   131,   105,   129,   132,   105,
      18,    32,    35,   128,   132,     5,     3,     5,     6,    54,
      67,    68,    69,    70,    71,    74,    75,    79,   120,   121,
     122,   123,   124,   125,   126,   127,   134,    90,    59,    61,
      59,   129,     3,    59,    55,    61,     3,    57,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   133,
     120,     3,   125,   125,    60,    71,    72,    73,    74,    75,
      76,    77,    82,    83,    84,    85,    86,    87,    88,    89,
     135,    82,    83,    69,    70,    79,    80,    81,    56,    58,
      62,    66,   125,     5,    60,     3,    60,    54,    60,    58,
      60,   132,    60,    90,   121,    55,   122,   123,   123,   124,
     124,   125,   125,   125,   126,   128,     3,     3,   128,     9,
      13,    21,    22,    23,    27,    33,    39,   107,   108,   109,
     110,   111,   112,   113,   116,   117,   118,   119,   120,   129,
       3,    58,    60,    57,    59,    55,    60,    60,    54,     3,
      54,   120,    54,    54,    59,   108,     5,   130,   129,    60,
     120,    60,     3,   120,    59,    61,   120,    55,    55,    55,
      60,     5,    60,    58,    58,    58,   120,   120,   107,    10,
      14,   114,   115,   107,    55,    59,   120,    63,    59,   115,
      59,    58,    17,    63,   107,   107,    58,   111,   107,   117,
      59,   107,   117,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   103,   104,   104,   105,   105,   106,
     107,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   111,   111,   112,   113,
     114,   114,   115,   115,   116,   117,   118,   119,   120,   120,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   129,   130,   130,   131,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     2,     8,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     5,    11,     7,     9,    10,     7,
       1,     2,     5,     4,     2,     2,     3,     3,     1,     4,
       1,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     1,     4,     4,     3,
       3,     1,     1,     1,     3,     2,     4,     3,     5,     6,
       6,    10,     6,     6,     6,     1,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= TOK_EOF)
    {
      yychar = TOK_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: code_lines "end of input"  */
#line 83 "bison_test2.y"
    {
        { savedTree = (yyvsp[-1].node);}
        printf("Parsed successfully!\n");
    }
#line 1481 "bison_test2.tab.c"
    break;

  case 3: /* code_lines: code_line  */
#line 89 "bison_test2.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 1487 "bison_test2.tab.c"
    break;

  case 4: /* code_lines: code_lines code_line  */
#line 91 "bison_test2.y"
                {
                    (yyval.node) = addChild((yyvsp[-1].node), (yyvsp[0].node));
                }
#line 1495 "bison_test2.tab.c"
    break;

  case 5: /* code_line: function_definition  */
#line 96 "bison_test2.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1501 "bison_test2.tab.c"
    break;

  case 6: /* code_line: declaration  */
#line 97 "bison_test2.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1507 "bison_test2.tab.c"
    break;

  case 7: /* declaration_seq: declaration  */
#line 100 "bison_test2.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1513 "bison_test2.tab.c"
    break;

  case 8: /* declaration_seq: declaration_seq declaration  */
#line 102 "bison_test2.y"
                    {
                        (yyval.node) = addChild((yyvsp[-1].node), (yyvsp[0].node));
                    }
#line 1521 "bison_test2.tab.c"
    break;

  case 9: /* function_definition: declaration_types "identifier" OPEN_PAREN parameter_list CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY  */
#line 108 "bison_test2.y"
    {
        TreeNode* funcNode = createNode(funcDefNK); // Nó da função

        TreeNode* idNode = createNode(idNK);        // Nó do identificador
        idNode->nodeAttr.name = strdup((yyvsp[-6].string));         // Armazena o nome do ID

        addChild(funcNode, (yyvsp[-7].node));     // Tipo de retorno
        addChild(funcNode, idNode); // Nome da função como nó filho
        addChild(funcNode, (yyvsp[-4].node));     // Parâmetros
        addChild(funcNode, (yyvsp[-1].node));     // Corpo da função

        (yyval.node) = funcNode;

        printf("Function definition: Type: %s, Name: %s\n", (yyvsp[-7].node), (yyvsp[-6].string));
    }
#line 1541 "bison_test2.tab.c"
    break;

  case 10: /* block_lines: block_line  */
#line 125 "bison_test2.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1547 "bison_test2.tab.c"
    break;

  case 11: /* block_lines: block_lines block_line  */
#line 127 "bison_test2.y"
                {
                    (yyval.node) = addChild((yyvsp[-1].node), (yyvsp[0].node));
                }
#line 1555 "bison_test2.tab.c"
    break;

  case 23: /* while_stmt: WHILE OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY  */
#line 148 "bison_test2.y"
          { printf("Parsed while loop\n"); }
#line 1561 "bison_test2.tab.c"
    break;

  case 24: /* while_stmt: WHILE OPEN_PAREN expression_stmt CLOSE_PAREN expression_stmt  */
#line 150 "bison_test2.y"
          { printf("Parsed while loop\n"); }
#line 1567 "bison_test2.tab.c"
    break;

  case 25: /* if_stmt: IF OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY ELSE OPEN_CURLY block_lines CLOSE_CURLY  */
#line 154 "bison_test2.y"
          { printf("Parsed if else stmt\n"); }
#line 1573 "bison_test2.tab.c"
    break;

  case 26: /* if_stmt: IF OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY  */
#line 156 "bison_test2.y"
          { printf("Parsed if stmt\n"); }
#line 1579 "bison_test2.tab.c"
    break;

  case 27: /* if_stmt: IF OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY ELSE if_stmt  */
#line 158 "bison_test2.y"
          { printf("Parsed if else if stmt\n"); }
#line 1585 "bison_test2.tab.c"
    break;

  case 28: /* for_stmt: FOR OPEN_PAREN declaration expression_stmt SEMICOLON expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY  */
#line 162 "bison_test2.y"
        { printf("Parsed for stmt\n"); }
#line 1591 "bison_test2.tab.c"
    break;

  case 29: /* switch_stmt: SWITCH OPEN_PAREN "identifier" CLOSE_PAREN OPEN_CURLY case_seq CLOSE_CURLY  */
#line 166 "bison_test2.y"
        { printf("Parsed switch statement\n"); }
#line 1597 "bison_test2.tab.c"
    break;

  case 32: /* case_stmt: CASE expression_stmt TWO_DOTS block_lines break_stmt  */
#line 174 "bison_test2.y"
        { printf("Parsed case:\n"); }
#line 1603 "bison_test2.tab.c"
    break;

  case 33: /* case_stmt: DEFAULT TWO_DOTS block_lines break_stmt  */
#line 176 "bison_test2.y"
        { printf("Parsed default case\n"); }
#line 1609 "bison_test2.tab.c"
    break;

  case 34: /* continue_stmt: CONTINUE SEMICOLON  */
#line 180 "bison_test2.y"
        { printf("Parsed continue stmt\n"); }
#line 1615 "bison_test2.tab.c"
    break;

  case 35: /* break_stmt: BREAK SEMICOLON  */
#line 184 "bison_test2.y"
        { printf("Parsed break stmt\n"); }
#line 1621 "bison_test2.tab.c"
    break;

  case 36: /* goto_stmt: GOTO "identifier" SEMICOLON  */
#line 188 "bison_test2.y"
        { printf("Parsed goto stmt\n"); }
#line 1627 "bison_test2.tab.c"
    break;

  case 37: /* return_stmt: RETURN expression_stmt SEMICOLON  */
#line 192 "bison_test2.y"
    { printf("Parsed return statement. Returning\n");}
#line 1633 "bison_test2.tab.c"
    break;

  case 39: /* expression_stmt: "identifier" assign_operator logical_exp SEMICOLON  */
#line 197 "bison_test2.y"
        { printf("ExprStmt:...\n"); }
#line 1639 "bison_test2.tab.c"
    break;

  case 41: /* logical_exp: logical_exp logical_operator shift_exp  */
#line 202 "bison_test2.y"
        { printf("LogicalExp: ...\n"); }
#line 1645 "bison_test2.tab.c"
    break;

  case 43: /* shift_exp: shift_exp LEFT_SHIFT addsub_exp  */
#line 207 "bison_test2.y"
        { printf("ShiftExp: <<\n"); }
#line 1651 "bison_test2.tab.c"
    break;

  case 44: /* shift_exp: shift_exp RIGHT_SHIFT addsub_exp  */
#line 209 "bison_test2.y"
        { printf("ShiftExp: >>\n"); }
#line 1657 "bison_test2.tab.c"
    break;

  case 45: /* addsub_exp: muldiv_exp  */
#line 213 "bison_test2.y"
        {
            (yyval.node) = (yyvsp[0].node);  // Atribui a expressão multiplicativa ao nó de adição/subtração
        }
#line 1665 "bison_test2.tab.c"
    break;

  case 46: /* addsub_exp: addsub_exp PLUS muldiv_exp  */
#line 217 "bison_test2.y"
        {
            (yyval.node) = createNode(opNK);
            (yyval.node)->nodeAttr.val = plusK;
            addChild((yyval.node), (yyvsp[-2].node));
            addChild((yyval.node), (yyvsp[0].node));

            printf("AddSubExp: +\n");
        }
#line 1678 "bison_test2.tab.c"
    break;

  case 47: /* addsub_exp: addsub_exp MINUS muldiv_exp  */
#line 226 "bison_test2.y"
        {
            (yyval.node) = createNode(opNK);
            (yyval.node)->nodeAttr.val = minusK;
            addChild((yyval.node), (yyvsp[-2].node));
            addChild((yyval.node), (yyvsp[0].node));
            printf("AddSubExp: -\n");
        }
#line 1690 "bison_test2.tab.c"
    break;

  case 49: /* muldiv_exp: muldiv_exp ASTERISK unary_exp  */
#line 237 "bison_test2.y"
        { printf("MulDivExp: *\n"); }
#line 1696 "bison_test2.tab.c"
    break;

  case 50: /* muldiv_exp: muldiv_exp RIGHT_SLASH unary_exp  */
#line 239 "bison_test2.y"
        { printf("MulDivExp: /\n"); }
#line 1702 "bison_test2.tab.c"
    break;

  case 51: /* muldiv_exp: muldiv_exp PERCENT unary_exp  */
#line 241 "bison_test2.y"
        { printf("MulDivExp: percent\n"); }
#line 1708 "bison_test2.tab.c"
    break;

  case 53: /* unary_exp: PLUSPLUS unary_exp  */
#line 246 "bison_test2.y"
        { printf("UnaryExp: ++ (prefix)\n"); }
#line 1714 "bison_test2.tab.c"
    break;

  case 54: /* unary_exp: MINUSMINUS unary_exp  */
#line 248 "bison_test2.y"
        { printf("UnaryExp: -- (prefix)\n"); }
#line 1720 "bison_test2.tab.c"
    break;

  case 55: /* unary_exp: unary_operator unary_exp  */
#line 250 "bison_test2.y"
        { printf("UnaryExp: operator unary operator\n"); }
#line 1726 "bison_test2.tab.c"
    break;

  case 57: /* complex_exp: complex_exp OPEN_SQUARE complex_exp CLOSE_SQUARE  */
#line 255 "bison_test2.y"
        { printf("ComplexExp: indexing []\n"); }
#line 1732 "bison_test2.tab.c"
    break;

  case 58: /* complex_exp: complex_exp OPEN_CURLY parameter_list CLOSE_CURLY  */
#line 257 "bison_test2.y"
        { printf("ComplexExp: function call {}\n"); }
#line 1738 "bison_test2.tab.c"
    break;

  case 59: /* complex_exp: complex_exp DOT "identifier"  */
#line 259 "bison_test2.y"
        { printf("ComplexExp:\n"); }
#line 1744 "bison_test2.tab.c"
    break;

  case 60: /* complex_exp: complex_exp ARROW "identifier"  */
#line 261 "bison_test2.y"
        { printf("ComplexExp:\n"); }
#line 1750 "bison_test2.tab.c"
    break;

  case 61: /* simple_expression: "identifier"  */
#line 265 "bison_test2.y"
        { printf("SimpleExp: ID =\n"); }
#line 1756 "bison_test2.tab.c"
    break;

  case 62: /* simple_expression: NUMBER  */
#line 267 "bison_test2.y"
        { printf("SimpleExp: NUMBER =\n"); }
#line 1762 "bison_test2.tab.c"
    break;

  case 63: /* simple_expression: FLOAT_NUMBER  */
#line 269 "bison_test2.y"
        { printf("SimpleExp: FLOAT_NUMBER = \n"); }
#line 1768 "bison_test2.tab.c"
    break;

  case 64: /* simple_expression: OPEN_PAREN expression_stmt CLOSE_PAREN  */
#line 272 "bison_test2.y"
        { printf("SimpleExp: ( ... )\n"); }
#line 1774 "bison_test2.tab.c"
    break;

  case 65: /* parameter_list: declaration_types "identifier"  */
#line 277 "bison_test2.y"
    { 
        TreeNode* parameternode = createNode(parameterNK);

        TreeNode* idNode = createNode(idNK);        // Nó do identificador
        idNode->nodeAttr.name = strdup((yyvsp[0].string));         // Armazena o nome do ID

        addChild(parameternode, (yyvsp[-1].node));     // Tipo
        addChild(parameternode, (yyvsp[0].string));     // Parâmetros

        (yyval.node) = parameternode;
        
        printf("Parameter: Type \n"); 
    }
#line 1792 "bison_test2.tab.c"
    break;

  case 66: /* parameter_list: parameter_list COMMA declaration_types "identifier"  */
#line 291 "bison_test2.y"
    { 
        TreeNode* parameternode = createNode(parameterNK);

        TreeNode* idNode = createNode(idNK);        // Nó do identificador
        idNode->nodeAttr.name = strdup((yyvsp[0].string));         // Armazena o nome do ID

        addChild(parameternode, (yyvsp[-3].node));     // Tipo
        addChild(parameternode, (yyvsp[-1].node));     // Parâmetros
        addChild(parameternode, idNode);

        (yyval.node) = parameternode;

        printf("Parameter: Type \n"); 
    }
#line 1811 "bison_test2.tab.c"
    break;

  case 67: /* declaration: declaration_types "identifier" SEMICOLON  */
#line 309 "bison_test2.y"
                { printf("Declared variable: Type \n"); }
#line 1817 "bison_test2.tab.c"
    break;

  case 68: /* declaration: declaration_types "identifier" ASSIGN expression_stmt SEMICOLON  */
#line 311 "bison_test2.y"
                { printf(   "Declared variable: Type\n"); }
#line 1823 "bison_test2.tab.c"
    break;

  case 69: /* declaration: declaration_types "identifier" OPEN_PAREN parameter_list CLOSE_PAREN SEMICOLON  */
#line 313 "bison_test2.y"
                { printf("Declared function: Type \n"); }
#line 1829 "bison_test2.tab.c"
    break;

  case 70: /* declaration: declaration_types "identifier" OPEN_SQUARE NUMBER CLOSE_SQUARE SEMICOLON  */
#line 315 "bison_test2.y"
                { printf("Declared array: Type \n"); }
#line 1835 "bison_test2.tab.c"
    break;

  case 71: /* declaration: declaration_types "identifier" OPEN_SQUARE NUMBER CLOSE_SQUARE ASSIGN OPEN_CURLY value_list CLOSE_CURLY SEMICOLON  */
#line 317 "bison_test2.y"
                { printf("Declared array: Type \n"); }
#line 1841 "bison_test2.tab.c"
    break;

  case 72: /* declaration: STRUCT "identifier" OPEN_CURLY declaration_seq CLOSE_CURLY SEMICOLON  */
#line 319 "bison_test2.y"
                { printf("Declared struct:Identifier: \n"); }
#line 1847 "bison_test2.tab.c"
    break;

  case 73: /* declaration: UNION "identifier" OPEN_CURLY declaration_seq CLOSE_CURLY SEMICOLON  */
#line 321 "bison_test2.y"
                { printf("Declared UNION:Identifier: \n"); }
#line 1853 "bison_test2.tab.c"
    break;

  case 74: /* declaration: ENUM "identifier" OPEN_CURLY enumerator_list CLOSE_CURLY SEMICOLON  */
#line 323 "bison_test2.y"
                { printf("Declared ENUM:Identifier: \n"); }
#line 1859 "bison_test2.tab.c"
    break;

  case 75: /* value_list: NUMBER  */
#line 326 "bison_test2.y"
                    { printf("SimpleExp: NUMBER = \n"); }
#line 1865 "bison_test2.tab.c"
    break;

  case 76: /* value_list: value_list COMMA NUMBER  */
#line 327 "bison_test2.y"
                                      { printf("SimpleExp: NUMBER =\n"); }
#line 1871 "bison_test2.tab.c"
    break;

  case 77: /* enumerator_list: "identifier"  */
#line 330 "bison_test2.y"
                    {
                        TreeNode* node = createNode(idNK);
                        node->nodeAttr.name = (yyvsp[0].string);
                        (yyval.node) = node;
                    }
#line 1881 "bison_test2.tab.c"
    break;

  case 80: /* declaration_types: VOID  */
#line 341 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = voidK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1891 "bison_test2.tab.c"
    break;

  case 81: /* declaration_types: BOOL  */
#line 347 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = boolK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1901 "bison_test2.tab.c"
    break;

  case 82: /* declaration_types: CHAR  */
#line 353 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = charK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1911 "bison_test2.tab.c"
    break;

  case 83: /* declaration_types: SHORT  */
#line 359 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = shortK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1921 "bison_test2.tab.c"
    break;

  case 84: /* declaration_types: INT  */
#line 365 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = intK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1931 "bison_test2.tab.c"
    break;

  case 85: /* declaration_types: LONG  */
#line 371 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = longK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1941 "bison_test2.tab.c"
    break;

  case 86: /* declaration_types: FLOAT  */
#line 377 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = floatK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1951 "bison_test2.tab.c"
    break;

  case 87: /* declaration_types: DOUBLE  */
#line 383 "bison_test2.y"
                    {
                        (yyval.node) = createNode(declarNK);
                        (yyval.node)->nodeAttr.val = doubleK;
                        printf("Criado nó declarNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1961 "bison_test2.tab.c"
    break;

  case 93: /* assign_operator: ASSIGN  */
#line 403 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assignK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1971 "bison_test2.tab.c"
    break;

  case 94: /* assign_operator: ASSIGN_AND  */
#line 409 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_andK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1981 "bison_test2.tab.c"
    break;

  case 95: /* assign_operator: ASSIGN_DIV  */
#line 415 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_divK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 1991 "bison_test2.tab.c"
    break;

  case 96: /* assign_operator: ASSIGN_LEFT_SHIFT  */
#line 421 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_left_shiftK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2001 "bison_test2.tab.c"
    break;

  case 97: /* assign_operator: ASSIGN_MINUS  */
#line 427 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_minusK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2011 "bison_test2.tab.c"
    break;

  case 98: /* assign_operator: ASSIGN_MULT  */
#line 433 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_multK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2021 "bison_test2.tab.c"
    break;

  case 99: /* assign_operator: ASSIGN_OR  */
#line 439 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_orK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2031 "bison_test2.tab.c"
    break;

  case 100: /* assign_operator: ASSIGN_PERCENT  */
#line 445 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_percentK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2041 "bison_test2.tab.c"
    break;

  case 101: /* assign_operator: ASSIGN_PLUS  */
#line 451 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_plusK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2051 "bison_test2.tab.c"
    break;

  case 102: /* assign_operator: ASSIGN_RIGHT_SHIFT  */
#line 457 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_right_shiftK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2061 "bison_test2.tab.c"
    break;

  case 103: /* assign_operator: ASSIGN_XOR  */
#line 463 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = assign_xorK;
                        printf("Criado nó opNK com tipo %d\n", (yyval.node)->nodeAttr.val);
                    }
#line 2071 "bison_test2.tab.c"
    break;

  case 104: /* unary_operator: PLUS  */
#line 471 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2081 "bison_test2.tab.c"
    break;

  case 105: /* unary_operator: MINUS  */
#line 477 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2091 "bison_test2.tab.c"
    break;

  case 106: /* unary_operator: ASTERISK  */
#line 483 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2101 "bison_test2.tab.c"
    break;

  case 107: /* unary_operator: BIT_AND  */
#line 489 "bison_test2.y"
                    {
                        createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2111 "bison_test2.tab.c"
    break;

  case 108: /* unary_operator: LOGIC_NOT  */
#line 495 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2121 "bison_test2.tab.c"
    break;

  case 109: /* unary_operator: BIT_NOT  */
#line 501 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2131 "bison_test2.tab.c"
    break;

  case 110: /* logical_operator: LOGIC_AND  */
#line 509 "bison_test2.y"
    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2141 "bison_test2.tab.c"
    break;

  case 111: /* logical_operator: LOGIC_NOT  */
#line 515 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2151 "bison_test2.tab.c"
    break;

  case 112: /* logical_operator: LOGIC_OR  */
#line 521 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2161 "bison_test2.tab.c"
    break;

  case 113: /* logical_operator: GREATER_THAN  */
#line 527 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2171 "bison_test2.tab.c"
    break;

  case 114: /* logical_operator: GREATER_THAN_EQUAL  */
#line 533 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2181 "bison_test2.tab.c"
    break;

  case 115: /* logical_operator: SMALLER_THAN  */
#line 539 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2191 "bison_test2.tab.c"
    break;

  case 116: /* logical_operator: SMALLER_THAN_EQUAL  */
#line 545 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2201 "bison_test2.tab.c"
    break;

  case 117: /* logical_operator: EQUAL  */
#line 551 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2211 "bison_test2.tab.c"
    break;

  case 118: /* logical_operator: DIFFERENT  */
#line 557 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2221 "bison_test2.tab.c"
    break;

  case 119: /* logical_operator: BIT_AND  */
#line 563 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2231 "bison_test2.tab.c"
    break;

  case 120: /* logical_operator: BIT_NOT  */
#line 569 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2241 "bison_test2.tab.c"
    break;

  case 121: /* logical_operator: BIT_OR  */
#line 575 "bison_test2.y"
                    {
                        createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2251 "bison_test2.tab.c"
    break;

  case 122: /* logical_operator: BIT_XOR  */
#line 581 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2261 "bison_test2.tab.c"
    break;

  case 123: /* logical_operator: RIGHT_SHIFT  */
#line 587 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
#line 2271 "bison_test2.tab.c"
    break;

  case 124: /* logical_operator: LEFT_SHIFT  */
#line 593 "bison_test2.y"
                    {
                        (yyval.node) = createNode(opNK);
                        (yyval.node)->nodeAttr.val = left_shiftK;
                        printf("AddSubExp: -\n");
                    }
#line 2281 "bison_test2.tab.c"
    break;


#line 2285 "bison_test2.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= TOK_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == TOK_EOF)
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 600 "bison_test2.y"


void yyerror(const char *msg)
{
    printf("Error: %s\n", msg);
}

int main(int argc, char **argv)
{
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Could not open file");
            return 1;
        }
    }

    yyparse();
    printf("end parser\n");
    printTree(savedTree);

    if (yyin) fclose(yyin);
    return 0;
}
