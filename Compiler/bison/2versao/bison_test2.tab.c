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
  YYSYMBOL_LETTER = 4,                     /* LETTER  */
  YYSYMBOL_STRINGER_PARAM = 5,             /* "letter"  */
  YYSYMBOL_NUMBER = 6,                     /* NUMBER  */
  YYSYMBOL_HEX_NUMBER = 7,                 /* HEX_NUMBER  */
  YYSYMBOL_OCTAL_NUMBER = 8,               /* OCTAL_NUMBER  */
  YYSYMBOL_BINARY_NUMBER = 9,              /* BINARY_NUMBER  */
  YYSYMBOL_AUTO = 10,                      /* AUTO  */
  YYSYMBOL_BREAK = 11,                     /* BREAK  */
  YYSYMBOL_CASE = 12,                      /* CASE  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_CONST = 14,                     /* CONST  */
  YYSYMBOL_CONTINUE = 15,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_DO = 17,                        /* DO  */
  YYSYMBOL_DOUBLE = 18,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_ENUM = 20,                      /* ENUM  */
  YYSYMBOL_EXTERN = 21,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 22,                     /* FLOAT  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_GOTO = 24,                      /* GOTO  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_INT = 26,                       /* INT  */
  YYSYMBOL_LONG = 27,                      /* LONG  */
  YYSYMBOL_REGISTER = 28,                  /* REGISTER  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_SHORT = 30,                     /* SHORT  */
  YYSYMBOL_SIGNED = 31,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 32,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 33,                    /* STATIC  */
  YYSYMBOL_STRUCT = 34,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 35,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 36,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 37,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 38,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 39,                      /* VOID  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 41,                     /* WHILE  */
  YYSYMBOL_PACKED = 42,                    /* PACKED  */
  YYSYMBOL_PREPROCESS_HASH = 43,           /* PREPROCESS_HASH  */
  YYSYMBOL_PREPROCESS_DEFINE = 44,         /* PREPROCESS_DEFINE  */
  YYSYMBOL_PREPROCESS_INCLUDE = 45,        /* PREPROCESS_INCLUDE  */
  YYSYMBOL_PREPROCESS_IFDEF = 46,          /* PREPROCESS_IFDEF  */
  YYSYMBOL_PREPROCESS_IFNDEF = 47,         /* PREPROCESS_IFNDEF  */
  YYSYMBOL_PREPROCESS_IF = 48,             /* PREPROCESS_IF  */
  YYSYMBOL_PREPROCESS_ELSE = 49,           /* PREPROCESS_ELSE  */
  YYSYMBOL_PREPROCESS_ELIF = 50,           /* PREPROCESS_ELIF  */
  YYSYMBOL_PREPROCESS_ENDIF = 51,          /* PREPROCESS_ENDIF  */
  YYSYMBOL_PREPROCESS_UNDEF = 52,          /* PREPROCESS_UNDEF  */
  YYSYMBOL_PREPROCESS_ERROR = 53,          /* PREPROCESS_ERROR  */
  YYSYMBOL_PREPROCESS_LINE = 54,           /* PREPROCESS_LINE  */
  YYSYMBOL_PREPROCESS_PRAGMA = 55,         /* PREPROCESS_PRAGMA  */
  YYSYMBOL_OPEN_PAREN = 56,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 57,               /* CLOSE_PAREN  */
  YYSYMBOL_OPEN_SQUARE = 58,               /* OPEN_SQUARE  */
  YYSYMBOL_CLOSE_SQUARE = 59,              /* CLOSE_SQUARE  */
  YYSYMBOL_OPEN_CURLY = 60,                /* OPEN_CURLY  */
  YYSYMBOL_CLOSE_CURLY = 61,               /* CLOSE_CURLY  */
  YYSYMBOL_SEMICOLON = 62,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 63,                     /* COMMA  */
  YYSYMBOL_DOT = 64,                       /* DOT  */
  YYSYMBOL_TWO_DOTS = 65,                  /* TWO_DOTS  */
  YYSYMBOL_APOSTROPHE = 66,                /* APOSTROPHE  */
  YYSYMBOL_QUOTATION_MARK = 67,            /* QUOTATION_MARK  */
  YYSYMBOL_ARROW = 68,                     /* ARROW  */
  YYSYMBOL_PLUSPLUS = 69,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 70,                /* MINUSMINUS  */
  YYSYMBOL_PLUS = 71,                      /* PLUS  */
  YYSYMBOL_MINUS = 72,                     /* MINUS  */
  YYSYMBOL_LOGIC_NOT = 73,                 /* LOGIC_NOT  */
  YYSYMBOL_LOGIC_AND = 74,                 /* LOGIC_AND  */
  YYSYMBOL_LOGIC_OR = 75,                  /* LOGIC_OR  */
  YYSYMBOL_BIT_NOT = 76,                   /* BIT_NOT  */
  YYSYMBOL_BIT_AND = 77,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 78,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 79,                   /* BIT_XOR  */
  YYSYMBOL_TERNARY = 80,                   /* TERNARY  */
  YYSYMBOL_ASTERISK = 81,                  /* ASTERISK  */
  YYSYMBOL_RIGHT_SLASH = 82,               /* RIGHT_SLASH  */
  YYSYMBOL_PERCENT = 83,                   /* PERCENT  */
  YYSYMBOL_RIGHT_SHIFT = 84,               /* RIGHT_SHIFT  */
  YYSYMBOL_LEFT_SHIFT = 85,                /* LEFT_SHIFT  */
  YYSYMBOL_GREATER_THAN = 86,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_THAN_EQUAL = 87,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_SMALLER_THAN = 88,              /* SMALLER_THAN  */
  YYSYMBOL_SMALLER_THAN_EQUAL = 89,        /* SMALLER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 90,                     /* EQUAL  */
  YYSYMBOL_DIFFERENT = 91,                 /* DIFFERENT  */
  YYSYMBOL_ASSIGN = 92,                    /* ASSIGN  */
  YYSYMBOL_ASSIGN_PLUS = 93,               /* ASSIGN_PLUS  */
  YYSYMBOL_ASSIGN_MINUS = 94,              /* ASSIGN_MINUS  */
  YYSYMBOL_ASSIGN_MULT = 95,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_DIV = 96,                /* ASSIGN_DIV  */
  YYSYMBOL_ASSIGN_PERCENT = 97,            /* ASSIGN_PERCENT  */
  YYSYMBOL_ASSIGN_AND = 98,                /* ASSIGN_AND  */
  YYSYMBOL_ASSIGN_OR = 99,                 /* ASSIGN_OR  */
  YYSYMBOL_ASSIGN_XOR = 100,               /* ASSIGN_XOR  */
  YYSYMBOL_ASSIGN_LEFT_SHIFT = 101,        /* ASSIGN_LEFT_SHIFT  */
  YYSYMBOL_ASSIGN_RIGHT_SHIFT = 102,       /* ASSIGN_RIGHT_SHIFT  */
  YYSYMBOL_NOINTVECTOR = 103,              /* NOINTVECTOR  */
  YYSYMBOL_COMPACT = 104,                  /* COMPACT  */
  YYSYMBOL_DB = 105,                       /* DB  */
  YYSYMBOL_DISABLE = 106,                  /* DISABLE  */
  YYSYMBOL_EJECT = 107,                    /* EJECT  */
  YYSYMBOL_ASM = 108,                      /* ASM  */
  YYSYMBOL_ENDASM = 109,                   /* ENDASM  */
  YYSYMBOL_INTPROMOTE = 110,               /* INTPROMOTE  */
  YYSYMBOL_FLOATFUZZY = 111,               /* FLOATFUZZY  */
  YYSYMBOL_INTERVAL = 112,                 /* INTERVAL  */
  YYSYMBOL_LARGE = 113,                    /* LARGE  */
  YYSYMBOL_LISTINCLUDE = 114,              /* LISTINCLUDE  */
  YYSYMBOL_MAXAREGS = 115,                 /* MAXAREGS  */
  YYSYMBOL_CODE = 116,                     /* CODE  */
  YYSYMBOL_DATA = 117,                     /* DATA  */
  YYSYMBOL_IDATA = 118,                    /* IDATA  */
  YYSYMBOL_BDATA = 119,                    /* BDATA  */
  YYSYMBOL_XDATA = 120,                    /* XDATA  */
  YYSYMBOL_PDATA = 121,                    /* PDATA  */
  YYSYMBOL_SMALL = 122,                    /* SMALL  */
  YYSYMBOL_BIT = 123,                      /* BIT  */
  YYSYMBOL_SBIT = 124,                     /* SBIT  */
  YYSYMBOL_SFR = 125,                      /* SFR  */
  YYSYMBOL_SFR16 = 126,                    /* SFR16  */
  YYSYMBOL_AT = 127,                       /* AT  */
  YYSYMBOL_ALIEN = 128,                    /* ALIEN  */
  YYSYMBOL_INTERRUPT = 129,                /* INTERRUPT  */
  YYSYMBOL_PRIORITY = 130,                 /* PRIORITY  */
  YYSYMBOL_REENTRANT = 131,                /* REENTRANT  */
  YYSYMBOL_TASK = 132,                     /* TASK  */
  YYSYMBOL_USING = 133,                    /* USING  */
  YYSYMBOL_STRINGER = 134,                 /* STRINGER  */
  YYSYMBOL_LOWER_THAN_ELSE = 135,          /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 136,                 /* $accept  */
  YYSYMBOL_program = 137,                  /* program  */
  YYSYMBOL_statement_list = 138,           /* statement_list  */
  YYSYMBOL_statement = 139,                /* statement  */
  YYSYMBOL_return_statement = 140,         /* return_statement  */
  YYSYMBOL_control_statement = 141,        /* control_statement  */
  YYSYMBOL_if_stmt = 142,                  /* if_stmt  */
  YYSYMBOL_while_loop = 143,               /* while_loop  */
  YYSYMBOL_assignment = 144,               /* assignment  */
  YYSYMBOL_expression = 145                /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 6 "bison_test2.y"

    #include <stdio.h>
    int yylex();
    extern FILE *yyin;
    void yyerror(const char* msg);
    
    int final_result = 0; // para devolver o valor final

#line 257 "bison_test2.tab.c"


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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  32
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  68

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   390


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
     135
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    77,    78,    81,    81,    82,    83,    87,
      93,    93,    97,   101,   107,   110,   114,   118,   122,   126,
     130,   134,   139,   144,   149,   154,   159,   164,   169,   174,
     179,   184,   189
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
  "LETTER", "\"letter\"", "NUMBER", "HEX_NUMBER", "OCTAL_NUMBER",
  "BINARY_NUMBER", "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR",
  "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN", "SHORT", "SIGNED",
  "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED",
  "VOID", "VOLATILE", "WHILE", "PACKED", "PREPROCESS_HASH",
  "PREPROCESS_DEFINE", "PREPROCESS_INCLUDE", "PREPROCESS_IFDEF",
  "PREPROCESS_IFNDEF", "PREPROCESS_IF", "PREPROCESS_ELSE",
  "PREPROCESS_ELIF", "PREPROCESS_ENDIF", "PREPROCESS_UNDEF",
  "PREPROCESS_ERROR", "PREPROCESS_LINE", "PREPROCESS_PRAGMA", "OPEN_PAREN",
  "CLOSE_PAREN", "OPEN_SQUARE", "CLOSE_SQUARE", "OPEN_CURLY",
  "CLOSE_CURLY", "SEMICOLON", "COMMA", "DOT", "TWO_DOTS", "APOSTROPHE",
  "QUOTATION_MARK", "ARROW", "PLUSPLUS", "MINUSMINUS", "PLUS", "MINUS",
  "LOGIC_NOT", "LOGIC_AND", "LOGIC_OR", "BIT_NOT", "BIT_AND", "BIT_OR",
  "BIT_XOR", "TERNARY", "ASTERISK", "RIGHT_SLASH", "PERCENT",
  "RIGHT_SHIFT", "LEFT_SHIFT", "GREATER_THAN", "GREATER_THAN_EQUAL",
  "SMALLER_THAN", "SMALLER_THAN_EQUAL", "EQUAL", "DIFFERENT", "ASSIGN",
  "ASSIGN_PLUS", "ASSIGN_MINUS", "ASSIGN_MULT", "ASSIGN_DIV",
  "ASSIGN_PERCENT", "ASSIGN_AND", "ASSIGN_OR", "ASSIGN_XOR",
  "ASSIGN_LEFT_SHIFT", "ASSIGN_RIGHT_SHIFT", "NOINTVECTOR", "COMPACT",
  "DB", "DISABLE", "EJECT", "ASM", "ENDASM", "INTPROMOTE", "FLOATFUZZY",
  "INTERVAL", "LARGE", "LISTINCLUDE", "MAXAREGS", "CODE", "DATA", "IDATA",
  "BDATA", "XDATA", "PDATA", "SMALL", "BIT", "SBIT", "SFR", "SFR16", "AT",
  "ALIEN", "INTERRUPT", "PRIORITY", "REENTRANT", "TASK", "USING",
  "STRINGER", "LOWER_THAN_ELSE", "$accept", "program", "statement_list",
  "statement", "return_statement", "control_statement", "if_stmt",
  "while_loop", "assignment", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,   -87,   -50,    70,   -41,    19,    21,    -1,   -88,   -88,
     -88,   -88,    70,    70,    70,    70,    70,    70,    70,   -88,
     -88,   -88,   -88,   -88,   -21,    70,   -88,   -88,   -88,    10,
      20,    31,    41,    52,    62,   -54,   -88,    70,    70,    70,
      70,    70,    70,    70,   -44,   -88,   -88,   -88,   -88,   -88,
     -88,    -3,   -88,   -51,   -51,   -51,   -51,    73,    73,    -3,
      -1,   -88,     4,   -88,   -36,    -3,   -88,   -88
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     3,     7,     6,
       5,     8,     0,     0,     0,     0,     0,     0,     0,    32,
      28,    29,    30,    31,     0,     0,     1,     2,     4,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    19,    20,    17,    16,
      18,     0,    21,    24,    25,    22,    23,    26,    27,     0,
       0,    10,    12,    14,     0,     0,    11,    13
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -88,   -88,    -6,   -47,   -88,   -49,   -88,   -88,   -88,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    62,     9,    10,    11,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       1,    28,     1,    51,    61,    12,    18,    13,    14,    15,
      63,    16,    61,    59,    17,    25,    67,    37,    61,    26,
      37,    27,     2,    65,     2,    66,     3,    37,     3,     0,
       0,     0,    38,    39,    40,    41,    42,    43,     4,     0,
       4,    36,    38,    39,    40,    41,    42,    43,     0,     0,
      37,     0,     0,     0,    64,     0,     0,    60,    29,    30,
      31,    32,    33,    34,    35,    38,    39,    40,    41,    42,
      43,    44,    45,    19,     0,     0,    20,    21,    22,    23,
       0,    37,    46,    52,    53,    54,    55,    56,    57,    58,
       0,    37,     0,    47,     0,     0,    38,    39,    40,    41,
      42,    43,    37,    48,     0,     0,    38,    39,    40,    41,
      42,    43,    37,     0,    49,     0,     0,    38,    39,    40,
      41,    42,    43,    37,    50,     0,     0,    38,    39,    40,
      41,    42,    43,    37,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    37,     0,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,     0,     0,     0,    38,
      39,    40,    41
};

static const yytype_int8 yycheck[] =
{
       3,     7,     3,    57,    51,    92,    56,    94,    95,    96,
      59,    98,    59,    57,   101,    56,    65,    71,    65,     0,
      71,     0,    25,    19,    25,    61,    29,    71,    29,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    41,    -1,
      41,    62,    86,    87,    88,    89,    90,    91,    -1,    -1,
      71,    -1,    -1,    -1,    60,    -1,    -1,    60,    12,    13,
      14,    15,    16,    17,    18,    86,    87,    88,    89,    90,
      91,    25,    62,     3,    -1,    -1,     6,     7,     8,     9,
      -1,    71,    62,    37,    38,    39,    40,    41,    42,    43,
      -1,    71,    -1,    62,    -1,    -1,    86,    87,    88,    89,
      90,    91,    71,    62,    -1,    -1,    86,    87,    88,    89,
      90,    91,    71,    -1,    62,    -1,    -1,    86,    87,    88,
      89,    90,    91,    71,    62,    -1,    -1,    86,    87,    88,
      89,    90,    91,    71,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    71,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    25,    29,    41,   137,   138,   139,   140,   142,
     143,   144,    92,    94,    95,    96,    98,   101,    56,     3,
       6,     7,     8,     9,   145,    56,     0,     0,   138,   145,
     145,   145,   145,   145,   145,   145,    62,    71,    86,    87,
      88,    89,    90,    91,   145,    62,    62,    62,    62,    62,
      62,    57,   145,   145,   145,   145,   145,   145,   145,    57,
      60,   139,   141,   141,   138,    19,    61,   141
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   136,   137,   138,   138,   139,   139,   139,   139,   140,
     141,   141,   142,   142,   143,   144,   144,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     3,
       1,     3,     5,     7,     5,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1
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
  case 2: /* program: statement_list "end of input"  */
#line 72 "bison_test2.y"
    { 
        printf("Parsed successfully! Final result: %d\n", final_result);
    }
#line 1299 "bison_test2.tab.c"
    break;

  case 9: /* return_statement: RETURN expression SEMICOLON  */
#line 88 "bison_test2.y"
               { 
                   printf("Parsed return statement. Returning: %d\n", (yyvsp[-1].num));
                   final_result = (yyvsp[-1].num); 
               }
#line 1308 "bison_test2.tab.c"
    break;

  case 12: /* if_stmt: IF OPEN_PAREN expression CLOSE_PAREN control_statement  */
#line 98 "bison_test2.y"
    {
        printf("If (no else)\n");
    }
#line 1316 "bison_test2.tab.c"
    break;

  case 13: /* if_stmt: IF OPEN_PAREN expression CLOSE_PAREN control_statement ELSE control_statement  */
#line 102 "bison_test2.y"
    {
        printf("If-else\n");
    }
#line 1324 "bison_test2.tab.c"
    break;

  case 14: /* while_loop: WHILE OPEN_PAREN expression CLOSE_PAREN control_statement  */
#line 108 "bison_test2.y"
          { printf("Parsed while loop\n"); }
#line 1330 "bison_test2.tab.c"
    break;

  case 15: /* assignment: "identifier" ASSIGN expression SEMICOLON  */
#line 111 "bison_test2.y"
            {
                printf("Assignment: %s = %d\n", (yyvsp[-3].string), (yyvsp[-1].num));  // Print variable name and value
            }
#line 1338 "bison_test2.tab.c"
    break;

  case 16: /* assignment: "identifier" ASSIGN_AND expression SEMICOLON  */
#line 115 "bison_test2.y"
            {
                printf("Assignment: %s &= %d\n ", (yyvsp[-3].string), (yyvsp[-1].num));
            }
#line 1346 "bison_test2.tab.c"
    break;

  case 17: /* assignment: "identifier" ASSIGN_DIV expression SEMICOLON  */
#line 119 "bison_test2.y"
            {
                printf("Assignment: %s /= %d\n ", (yyvsp[-3].string), (yyvsp[-1].num));
            }
#line 1354 "bison_test2.tab.c"
    break;

  case 18: /* assignment: "identifier" ASSIGN_LEFT_SHIFT expression SEMICOLON  */
#line 123 "bison_test2.y"
            {
                printf("Assignment: %s <= %d\n ", (yyvsp[-3].string), (yyvsp[-1].num));
            }
#line 1362 "bison_test2.tab.c"
    break;

  case 19: /* assignment: "identifier" ASSIGN_MINUS expression SEMICOLON  */
#line 127 "bison_test2.y"
            {
                printf("Assignment: %s -= %d\n ", (yyvsp[-3].string), (yyvsp[-1].num));
            }
#line 1370 "bison_test2.tab.c"
    break;

  case 20: /* assignment: "identifier" ASSIGN_MULT expression SEMICOLON  */
#line 131 "bison_test2.y"
            {
                printf("Assignment: %s &= %d\n ", (yyvsp[-3].string), (yyvsp[-1].num));
            }
#line 1378 "bison_test2.tab.c"
    break;

  case 21: /* expression: expression PLUS expression  */
#line 135 "bison_test2.y"
          { 
                printf("Reducing: %d + %d\n", (yyvsp[-2].num), (yyvsp[0].num));
                (yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num); 
          }
#line 1387 "bison_test2.tab.c"
    break;

  case 22: /* expression: expression SMALLER_THAN expression  */
#line 140 "bison_test2.y"
          { 
                printf("Reducing: %d < %d\n", (yyvsp[-2].num), (yyvsp[0].num));
                (yyval.num) = ((yyvsp[-2].num) < (yyvsp[0].num));
          }
#line 1396 "bison_test2.tab.c"
    break;

  case 23: /* expression: expression SMALLER_THAN_EQUAL expression  */
#line 145 "bison_test2.y"
          {
                printf("Reducing: %d <= %d\n",(yyvsp[-2].num),(yyvsp[0].num));
                (yyval.num) = ((yyvsp[-2].num) <= (yyvsp[0].num));
          }
#line 1405 "bison_test2.tab.c"
    break;

  case 24: /* expression: expression GREATER_THAN expression  */
#line 150 "bison_test2.y"
          {
                printf("Reducing: %d > %d\n",(yyvsp[-2].num),(yyvsp[0].num));
                (yyval.num) = ((yyvsp[-2].num) > (yyvsp[0].num));
          }
#line 1414 "bison_test2.tab.c"
    break;

  case 25: /* expression: expression GREATER_THAN_EQUAL expression  */
#line 155 "bison_test2.y"
          {
                printf("Reducing: %d >= %d\n",(yyvsp[-2].num),(yyvsp[0].num));
                (yyval.num) = ((yyvsp[-2].num) >= (yyvsp[0].num));
          }
#line 1423 "bison_test2.tab.c"
    break;

  case 26: /* expression: expression EQUAL expression  */
#line 160 "bison_test2.y"
          {
                printf("Reducing: %d == %d\n",(yyvsp[-2].num),(yyvsp[0].num));
                (yyval.num) = ((yyvsp[-2].num) == (yyvsp[0].num));
          }
#line 1432 "bison_test2.tab.c"
    break;

  case 27: /* expression: expression DIFFERENT expression  */
#line 165 "bison_test2.y"
          {
                printf("Reducing: %d != %d\n",(yyvsp[-2].num),(yyvsp[0].num));
                (yyval.num) = ((yyvsp[-2].num) != (yyvsp[0].num));
          }
#line 1441 "bison_test2.tab.c"
    break;

  case 28: /* expression: NUMBER  */
#line 170 "bison_test2.y"
          { 
                printf("Number: %d\n", (yyvsp[0].num));
                (yyval.num) = (yyvsp[0].num); 
          }
#line 1450 "bison_test2.tab.c"
    break;

  case 29: /* expression: HEX_NUMBER  */
#line 175 "bison_test2.y"
          { 
                printf("Hex Number: %d\n", (yyvsp[0].num));
                (yyval.num) = (yyvsp[0].num); 
          }
#line 1459 "bison_test2.tab.c"
    break;

  case 30: /* expression: OCTAL_NUMBER  */
#line 180 "bison_test2.y"
          { 
                printf("Octal Number: %d\n", (yyvsp[0].num));
                (yyval.num) = (yyvsp[0].num); 
          }
#line 1468 "bison_test2.tab.c"
    break;

  case 31: /* expression: BINARY_NUMBER  */
#line 185 "bison_test2.y"
          { 
                printf("Binary Number: %d\n", (yyvsp[0].num));
                (yyval.num) = (yyvsp[0].num); 
          }
#line 1477 "bison_test2.tab.c"
    break;

  case 32: /* expression: "identifier"  */
#line 190 "bison_test2.y"
          { 
	     if ((yyvsp[0].string)) {
		 printf("Identifier: %s\n", (yyvsp[0].string));
	     } else {
		 printf("Identifier: (undefined)\n");
	     }
	     (yyval.num) = 0; // Placeholder value
	  }
#line 1490 "bison_test2.tab.c"
    break;


#line 1494 "bison_test2.tab.c"

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

#line 200 "bison_test2.y"

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
    
    if (yyin) fclose(yyin);
    return 0;
}
