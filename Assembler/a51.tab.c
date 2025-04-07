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
#line 1 "a51.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "utils.h"
#include "symtab.h"

static int yylex(void);
static int savedLineNo;


#line 83 "a51.tab.c"

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

#include "a51.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NOP = 3,                        /* NOP  */
  YYSYMBOL_AJMP = 4,                       /* AJMP  */
  YYSYMBOL_LJMP = 5,                       /* LJMP  */
  YYSYMBOL_SJMP = 6,                       /* SJMP  */
  YYSYMBOL_ACALL = 7,                      /* ACALL  */
  YYSYMBOL_LCALL = 8,                      /* LCALL  */
  YYSYMBOL_RET = 9,                        /* RET  */
  YYSYMBOL_RETI = 10,                      /* RETI  */
  YYSYMBOL_JMP = 11,                       /* JMP  */
  YYSYMBOL_CJNE = 12,                      /* CJNE  */
  YYSYMBOL_DJNZ = 13,                      /* DJNZ  */
  YYSYMBOL_JC = 14,                        /* JC  */
  YYSYMBOL_JNC = 15,                       /* JNC  */
  YYSYMBOL_JZ = 16,                        /* JZ  */
  YYSYMBOL_JNZ = 17,                       /* JNZ  */
  YYSYMBOL_JB = 18,                        /* JB  */
  YYSYMBOL_JBC = 19,                       /* JBC  */
  YYSYMBOL_JNB = 20,                       /* JNB  */
  YYSYMBOL_MOV = 21,                       /* MOV  */
  YYSYMBOL_MOVC = 22,                      /* MOVC  */
  YYSYMBOL_MOVX = 23,                      /* MOVX  */
  YYSYMBOL_XCH = 24,                       /* XCH  */
  YYSYMBOL_XCHD = 25,                      /* XCHD  */
  YYSYMBOL_XCHL = 26,                      /* XCHL  */
  YYSYMBOL_SWAP = 27,                      /* SWAP  */
  YYSYMBOL_PUSH = 28,                      /* PUSH  */
  YYSYMBOL_POP = 29,                       /* POP  */
  YYSYMBOL_INC = 30,                       /* INC  */
  YYSYMBOL_DEC = 31,                       /* DEC  */
  YYSYMBOL_ADD = 32,                       /* ADD  */
  YYSYMBOL_ADDC = 33,                      /* ADDC  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_SUBB = 35,                      /* SUBB  */
  YYSYMBOL_MUL = 36,                       /* MUL  */
  YYSYMBOL_DA = 37,                        /* DA  */
  YYSYMBOL_SETB = 38,                      /* SETB  */
  YYSYMBOL_CLR = 39,                       /* CLR  */
  YYSYMBOL_CPL = 40,                       /* CPL  */
  YYSYMBOL_RR = 41,                        /* RR  */
  YYSYMBOL_RRC = 42,                       /* RRC  */
  YYSYMBOL_RL = 43,                        /* RL  */
  YYSYMBOL_RLC = 44,                       /* RLC  */
  YYSYMBOL_ORL = 45,                       /* ORL  */
  YYSYMBOL_XRL = 46,                       /* XRL  */
  YYSYMBOL_ANL = 47,                       /* ANL  */
  YYSYMBOL_A = 48,                         /* A  */
  YYSYMBOL_B = 49,                         /* B  */
  YYSYMBOL_PSW = 50,                       /* PSW  */
  YYSYMBOL_DPTR = 51,                      /* DPTR  */
  YYSYMBOL_DPL = 52,                       /* DPL  */
  YYSYMBOL_DPH = 53,                       /* DPH  */
  YYSYMBOL_SP = 54,                        /* SP  */
  YYSYMBOL_P0 = 55,                        /* P0  */
  YYSYMBOL_P1 = 56,                        /* P1  */
  YYSYMBOL_TCON = 57,                      /* TCON  */
  YYSYMBOL_TMOD = 58,                      /* TMOD  */
  YYSYMBOL_TLO = 59,                       /* TLO  */
  YYSYMBOL_TL1 = 60,                       /* TL1  */
  YYSYMBOL_TH0 = 61,                       /* TH0  */
  YYSYMBOL_TH1 = 62,                       /* TH1  */
  YYSYMBOL_SCON = 63,                      /* SCON  */
  YYSYMBOL_SBUF = 64,                      /* SBUF  */
  YYSYMBOL_PC = 65,                        /* PC  */
  YYSYMBOL_IE = 66,                        /* IE  */
  YYSYMBOL_IP = 67,                        /* IP  */
  YYSYMBOL_GPIO_PORT = 68,                 /* GPIO_PORT  */
  YYSYMBOL_GPIO_PIN = 69,                  /* GPIO_PIN  */
  YYSYMBOL_R0 = 70,                        /* R0  */
  YYSYMBOL_R1 = 71,                        /* R1  */
  YYSYMBOL_R2 = 72,                        /* R2  */
  YYSYMBOL_R3 = 73,                        /* R3  */
  YYSYMBOL_R4 = 74,                        /* R4  */
  YYSYMBOL_R5 = 75,                        /* R5  */
  YYSYMBOL_R6 = 76,                        /* R6  */
  YYSYMBOL_R7 = 77,                        /* R7  */
  YYSYMBOL_C = 78,                         /* C  */
  YYSYMBOL_NUMBER = 79,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 80,                /* IDENTIFIER  */
  YYSYMBOL_AB = 81,                        /* AB  */
  YYSYMBOL_HASH_TAG = 82,                  /* HASH_TAG  */
  YYSYMBOL_OP_CLOSE_PAREN = 83,            /* OP_CLOSE_PAREN  */
  YYSYMBOL_OP_OPEN_PAREN = 84,             /* OP_OPEN_PAREN  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_86_ = 86,                       /* '@'  */
  YYSYMBOL_87_ = 87,                       /* '#'  */
  YYSYMBOL_88_ = 88,                       /* '/'  */
  YYSYMBOL_89_ = 89,                       /* '+'  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_stmt_seq = 92,                  /* stmt_seq  */
  YYSYMBOL_stmt = 93,                      /* stmt  */
  YYSYMBOL_acall_stmt = 94,                /* acall_stmt  */
  YYSYMBOL_add_stmt = 95,                  /* add_stmt  */
  YYSYMBOL_addc_stmt = 96,                 /* addc_stmt  */
  YYSYMBOL_ajmp_stmt = 97,                 /* ajmp_stmt  */
  YYSYMBOL_anl_stmt = 98,                  /* anl_stmt  */
  YYSYMBOL_cjne_stmt = 99,                 /* cjne_stmt  */
  YYSYMBOL_clr_stmt = 100,                 /* clr_stmt  */
  YYSYMBOL_cpl_stmt = 101,                 /* cpl_stmt  */
  YYSYMBOL_da_stmt = 102,                  /* da_stmt  */
  YYSYMBOL_dec_stmt = 103,                 /* dec_stmt  */
  YYSYMBOL_div_stmt = 104,                 /* div_stmt  */
  YYSYMBOL_djnz_stmt = 105,                /* djnz_stmt  */
  YYSYMBOL_inc_stmt = 106,                 /* inc_stmt  */
  YYSYMBOL_jb_stmt = 107,                  /* jb_stmt  */
  YYSYMBOL_jbc_stmt = 108,                 /* jbc_stmt  */
  YYSYMBOL_jc_stmt = 109,                  /* jc_stmt  */
  YYSYMBOL_jmp_stmt = 110,                 /* jmp_stmt  */
  YYSYMBOL_jnb_stmt = 111,                 /* jnb_stmt  */
  YYSYMBOL_jnc_stmt = 112,                 /* jnc_stmt  */
  YYSYMBOL_jnz_stmt = 113,                 /* jnz_stmt  */
  YYSYMBOL_jz_stmt = 114,                  /* jz_stmt  */
  YYSYMBOL_lcall_stmt = 115,               /* lcall_stmt  */
  YYSYMBOL_ljmp_stmt = 116,                /* ljmp_stmt  */
  YYSYMBOL_mov_stmt = 117,                 /* mov_stmt  */
  YYSYMBOL_movc_stmt = 118,                /* movc_stmt  */
  YYSYMBOL_movx_stmt = 119,                /* movx_stmt  */
  YYSYMBOL_mul_stmt = 120,                 /* mul_stmt  */
  YYSYMBOL_nop_stmt = 121,                 /* nop_stmt  */
  YYSYMBOL_orl_stmt = 122,                 /* orl_stmt  */
  YYSYMBOL_pop_stmt = 123,                 /* pop_stmt  */
  YYSYMBOL_push_stmt = 124,                /* push_stmt  */
  YYSYMBOL_ret_stmt = 125,                 /* ret_stmt  */
  YYSYMBOL_reti_stmt = 126,                /* reti_stmt  */
  YYSYMBOL_rl_stmt = 127,                  /* rl_stmt  */
  YYSYMBOL_rlc_stmt = 128,                 /* rlc_stmt  */
  YYSYMBOL_rr_stmt = 129,                  /* rr_stmt  */
  YYSYMBOL_rrc_stmt = 130,                 /* rrc_stmt  */
  YYSYMBOL_setb_stmt = 131,                /* setb_stmt  */
  YYSYMBOL_sjmp_stmt = 132,                /* sjmp_stmt  */
  YYSYMBOL_subb_stmt = 133,                /* subb_stmt  */
  YYSYMBOL_swap_stmt = 134,                /* swap_stmt  */
  YYSYMBOL_xch_stmt = 135,                 /* xch_stmt  */
  YYSYMBOL_xchd_stmt = 136,                /* xchd_stmt  */
  YYSYMBOL_xrl_stmt = 137,                 /* xrl_stmt  */
  YYSYMBOL_label = 138,                    /* label  */
  YYSYMBOL_dir = 139,                      /* dir  */
  YYSYMBOL_bit = 140,                      /* bit  */
  YYSYMBOL_reg = 141,                      /* reg  */
  YYSYMBOL_ind_reg = 142                   /* ind_reg  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  189
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   986

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  190
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   339


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
       2,     2,     2,     2,     2,    87,     2,     2,     2,     2,
       2,     2,     2,    89,    85,     2,     2,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,     2,
       2,     2,     2,     2,    86,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    36,    38,    38,    38,    38,    38,    38,
      38,    38,    38,    39,    39,    39,    39,    39,    39,    39,
      40,    40,    40,    40,    40,    40,    40,    41,    41,    41,
      41,    41,    41,    41,    42,    42,    42,    42,    42,    42,
      42,    43,    43,    43,    43,    43,    43,    43,    44,    46,
      52,    56,    60,    64,    69,    73,    77,    81,    86,    92,
      96,   100,   104,   108,   112,   116,   120,   125,   130,   135,
     140,   146,   150,   154,   159,   163,   167,   172,   177,   181,
     185,   189,   194,   199,   204,   209,   213,   217,   221,   225,
     230,   236,   242,   248,   253,   259,   265,   271,   277,   282,
     287,   292,   297,   301,   305,   309,   313,   317,   321,   325,
     329,   333,   337,   341,   345,   349,   353,   357,   361,   365,
     370,   374,   379,   383,   387,   391,   396,   401,   406,   410,
     414,   418,   422,   426,   430,   434,   439,   444,   449,   454,
     459,   464,   469,   474,   479,   483,   488,   494,   498,   502,
     506,   511,   516,   520,   524,   529,   534,   538,   542,   546,
     550,   554,   559,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     566,   568,   568,   568,   568,   568,   568,   568,   568,   570,
     570
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
  "\"end of file\"", "error", "\"invalid token\"", "NOP", "AJMP", "LJMP",
  "SJMP", "ACALL", "LCALL", "RET", "RETI", "JMP", "CJNE", "DJNZ", "JC",
  "JNC", "JZ", "JNZ", "JB", "JBC", "JNB", "MOV", "MOVC", "MOVX", "XCH",
  "XCHD", "XCHL", "SWAP", "PUSH", "POP", "INC", "DEC", "ADD", "ADDC",
  "DIV", "SUBB", "MUL", "DA", "SETB", "CLR", "CPL", "RR", "RRC", "RL",
  "RLC", "ORL", "XRL", "ANL", "A", "B", "PSW", "DPTR", "DPL", "DPH", "SP",
  "P0", "P1", "TCON", "TMOD", "TLO", "TL1", "TH0", "TH1", "SCON", "SBUF",
  "PC", "IE", "IP", "GPIO_PORT", "GPIO_PIN", "R0", "R1", "R2", "R3", "R4",
  "R5", "R6", "R7", "C", "NUMBER", "IDENTIFIER", "AB", "HASH_TAG",
  "OP_CLOSE_PAREN", "OP_OPEN_PAREN", "','", "'@'", "'#'", "'/'", "'+'",
  "':'", "$accept", "stmt_seq", "stmt", "acall_stmt", "add_stmt",
  "addc_stmt", "ajmp_stmt", "anl_stmt", "cjne_stmt", "clr_stmt",
  "cpl_stmt", "da_stmt", "dec_stmt", "div_stmt", "djnz_stmt", "inc_stmt",
  "jb_stmt", "jbc_stmt", "jc_stmt", "jmp_stmt", "jnb_stmt", "jnc_stmt",
  "jnz_stmt", "jz_stmt", "lcall_stmt", "ljmp_stmt", "mov_stmt",
  "movc_stmt", "movx_stmt", "mul_stmt", "nop_stmt", "orl_stmt", "pop_stmt",
  "push_stmt", "ret_stmt", "reti_stmt", "rl_stmt", "rlc_stmt", "rr_stmt",
  "rrc_stmt", "setb_stmt", "sjmp_stmt", "subb_stmt", "swap_stmt",
  "xch_stmt", "xchd_stmt", "xrl_stmt", "label", "dir", "bit", "reg",
  "ind_reg", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     273,  -120,   -74,   -68,   -72,   -63,   -54,  -120,  -120,   -59,
     100,   192,   -57,   -13,    30,    31,  -120,  -120,  -120,   671,
      64,    46,    65,    67,    68,   879,   879,   710,   745,    69,
      70,    39,    75,    44,    76,    48,   -43,   -39,    80,    83,
      87,    89,   815,   907,   847,    50,    41,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
      90,    56,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     -37,    59,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,    60,
      61,  -120,  -120,  -120,  -120,    71,    72,    73,    74,    77,
      79,   -37,    81,    82,    93,    94,    96,    38,    97,    98,
    -120,  -120,  -120,  -120,  -120,   -37,  -120,  -120,  -120,   -37,
    -120,  -120,    99,   103,  -120,   104,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     106,   107,   108,   110,   112,   113,   114,   115,  -120,  -120,
    -120,   121,    43,  -120,  -120,   117,    62,    85,    88,   105,
     123,   134,   275,    66,  -120,   130,   315,   139,   595,   132,
     133,   135,   136,   780,   138,  -120,  -120,   355,   395,   435,
     475,   137,   -45,   515,   -44,   555,   143,    42,   101,   147,
     149,   150,   157,  -120,  -120,  -120,  -120,  -120,   -37,   159,
    -120,  -120,   160,  -120,   631,  -120,   -37,   164,  -120,  -120,
    -120,  -120,   178,  -120,   102,    63,   174,   210,   -37,  -120,
    -120,   -37,   -37,   180,  -120,  -120,   -37,   181,  -120,  -120,
     -37,   191,  -120,  -120,   -37,   193,  -120,  -120,  -120,  -120,
    -120,   194,   -37,   195,  -120,  -120,  -120,   220,   -37,   242,
    -120,  -120,  -120,  -120,  -120,   243,  -120,   241,   260,   262,
     257,  -120,  -120,  -120,  -120,   264,  -120,  -120,  -120,  -120,
     255,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,   276,  -120,   270,   277,  -120,   -41,
    -120,   278,  -120,  -120,  -120,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   127,     0,     0,     0,     0,     0,   138,   139,     0,
       0,     0,     0,     0,     0,     0,   180,   180,   180,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   180,   180,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    58,   101,   100,   146,    49,    99,    98,
       0,     0,   181,   182,   183,   184,   185,   186,   187,   188,
       0,     0,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,     0,
       0,    92,    95,    97,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   137,   136,    85,    89,     0,    87,    86,    78,     0,
      80,    79,     0,     0,    82,     0,   126,    77,   144,   145,
      71,    72,    73,    74,    75,    76,   142,   143,   140,   141,
       0,     0,     0,     0,     0,     0,     0,     0,   162,     1,
       3,     0,     0,   189,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    81,     0,     0,     0,
       0,   180,     0,     0,     0,     0,   180,     0,     0,     0,
       0,     0,     0,    84,    83,    90,    91,    94,     0,     0,
     103,   102,     0,   117,     0,   109,     0,     0,   111,   110,
     118,   106,     0,   107,     0,     0,     0,     0,     0,   153,
     152,     0,     0,     0,    51,    50,     0,     0,    55,    54,
       0,     0,   148,   147,     0,     0,   129,   128,   180,   134,
     132,     0,     0,     0,   157,   156,   160,     0,     0,     0,
      60,    59,   180,    65,    63,     0,    93,     0,     0,     0,
       0,   104,   105,   119,   114,     0,   115,   112,   113,   108,
       0,   123,   122,   125,   124,   154,   155,    52,    53,    56,
      57,   149,   150,   130,   131,   135,   133,   158,   159,   161,
      61,    62,    66,    64,     0,    67,     0,     0,   116,     0,
      68,     0,    69,   120,   121,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,   313,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   -12,   -17,
      10,  -119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,   129,   135,
     111,   195
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     136,   137,   143,   280,   286,   170,    93,   142,    96,   173,
     343,    94,    95,   151,   152,   156,   160,    97,   169,   172,
     175,   130,   205,   131,   344,    98,    99,   100,   212,   144,
     182,   184,   187,   193,   194,   171,   215,   157,   161,   174,
     216,   189,   281,   287,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   132,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,   211,
     294,   112,   113,   114,   146,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   193,   194,
     133,   134,   145,   148,   311,   149,   150,   162,   163,   301,
     164,    45,   128,   165,   167,   166,   168,   307,   176,   295,
     229,   177,   147,   193,   194,   178,   312,   179,   191,   315,
     188,   192,   316,   317,   196,   197,   198,   319,   101,   232,
     310,   321,   296,   242,     0,   323,   199,   200,   201,   202,
       0,     0,   203,   327,   204,   233,   206,   207,   234,   330,
     102,   103,   104,   105,   106,   107,   108,   109,   208,   209,
     230,   210,   213,   214,   217,   235,   110,   243,   218,   219,
     240,   220,   221,   222,   248,   223,   253,   224,   225,   226,
     227,   259,   231,   236,   279,   264,   268,   272,   276,   293,
     228,   284,   241,   290,   237,   244,   249,   250,   254,   255,
     256,   257,   313,   260,   261,   278,   297,   265,   269,   273,
     277,   292,   306,   285,   298,   291,   300,   299,   302,   303,
     112,   113,   114,   308,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   309,   314,   318,
     320,   325,   102,   103,   104,   105,   106,   107,   108,   109,
     322,   128,   324,   326,   328,   332,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   329,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   331,   333,   112,   113,   114,   334,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     335,   336,   337,   338,   339,   102,   103,   104,   105,   106,
     107,   108,   109,    45,   128,   341,   340,   342,   345,   190,
       0,   238,   239,   245,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,     0,     0,
       0,   246,   247,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,     0,     0,
       0,   262,   263,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,     0,     0,
       0,   266,   267,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,     0,     0,
       0,   270,   271,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,     0,     0,
       0,   274,   275,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,     0,     0,
       0,   282,   283,   112,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,     0,     0,
       0,   288,   289,   251,   113,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,     0,     0,     0,     0,   304,
     113,   114,   252,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,   305,   138,
     113,   114,   139,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   140,
     128,     0,     0,     0,     0,     0,     0,   141,   153,   113,
     114,   154,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   108,   109,     0,   128,
       0,     0,     0,   158,   113,   114,   155,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   128,     0,     0,     0,   112,   113,
     114,   159,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   108,   109,     0,   128,
       0,     0,     0,   180,   113,   114,   258,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   128,   185,   113,   114,     0,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   128,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,   113,   114,   128,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    48,    48,    48,    80,    19,    80,    48,
      51,    79,    80,    25,    26,    27,    28,    80,    35,    36,
      37,    11,   141,    80,    65,    79,    80,    86,   147,    19,
      42,    43,    44,    70,    71,    78,   155,    27,    28,    78,
     159,     0,    87,    87,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    80,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    51,
      48,    48,    49,    50,    48,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    70,    71,
      80,    80,    48,    48,    51,    48,    48,    48,    48,   238,
      81,    80,    79,    48,    48,    81,    78,   246,    48,    87,
      87,    48,    86,    70,    71,    48,   255,    48,    48,   258,
      90,    85,   261,   262,    85,    85,    85,   266,    48,    87,
      48,   270,    51,    87,    -1,   274,    85,    85,    85,    85,
      -1,    -1,    85,   282,    85,    80,    85,    85,    80,   288,
      70,    71,    72,    73,    74,    75,    76,    77,    85,    85,
     192,    85,    85,    85,    85,    80,    86,   204,    85,    85,
     202,    85,    85,    85,   206,    85,   208,    85,    85,    85,
      85,   213,    85,    80,   221,   217,   218,   219,   220,   226,
      89,   223,   202,   225,    80,    85,   206,    78,    86,    86,
      85,    85,    48,   213,    86,    88,    79,   217,   218,   219,
     220,    88,   244,   223,    85,   225,    79,    87,    79,    79,
      48,    49,    50,    79,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    79,    48,    79,
      79,   278,    70,    71,    72,    73,    74,    75,    76,    77,
      79,    79,    79,    79,    79,   292,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    79,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    79,    79,    48,    49,    50,    85,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      80,    79,    85,    79,    89,    70,    71,    72,    73,    74,
      75,    76,    77,    80,    79,    85,    80,    80,    80,    46,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    48,
      49,    50,    87,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    -1,    48,    49,    50,    86,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    48,    49,
      50,    86,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      -1,    -1,    -1,    48,    49,    50,    86,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    48,    49,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    48,    49,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    79,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    80,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    80,    79,    80,    80,    80,    79,    80,
      86,    48,    70,    71,    72,    73,    74,    75,    76,    77,
      86,   141,    48,    49,    50,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    79,   139,
     141,    80,    80,    80,    80,   140,   140,   140,    48,    51,
      78,    86,   139,   140,   141,    48,    48,    86,    48,    48,
      48,   139,   139,    48,    51,    86,   139,   141,    48,    86,
     139,   141,    48,    48,    81,    48,    81,    48,    78,   140,
      48,    78,   140,    48,    78,   140,    48,    48,    48,    48,
      48,    78,   139,    48,   139,    48,    78,   139,    90,     0,
      93,    48,    85,    70,    71,   142,    85,    85,    85,    85,
      85,    85,    85,    85,    85,   142,    85,    85,    85,    85,
      85,    51,   142,    85,    85,   142,   142,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    89,    87,
     139,    85,    87,    80,    80,    80,    80,    80,    86,    87,
     139,   141,    87,   140,    85,    48,    86,    87,   139,   141,
      78,    48,    87,   139,    86,    86,    85,    85,    86,   139,
     141,    86,    86,    87,   139,   141,    86,    87,   139,   141,
      86,    87,   139,   141,    86,    87,   139,   141,    88,   140,
      48,    87,    86,    87,   139,   141,    48,    87,    86,    87,
     139,   141,    88,   140,    48,    87,    51,    79,    85,    87,
      79,   142,    79,    79,    48,    87,   139,   142,    79,    79,
      48,    51,   142,    48,    48,   142,   142,   142,    79,   142,
      79,   142,    79,   142,    79,   140,    79,   142,    79,    79,
     142,    79,   140,    79,    85,    80,    79,    85,    79,    89,
      80,    85,    80,    51,    65,    80
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      95,    95,    95,    95,    96,    96,    96,    96,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,   100,   100,   100,   101,   101,   101,   102,   103,   103,
     103,   103,   104,   105,   105,   106,   106,   106,   106,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   119,   119,   119,   120,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   131,   132,   133,   133,   133,
     133,   134,   135,   135,   135,   136,   137,   137,   137,   137,
     137,   137,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     5,     5,     4,     4,     5,     5,     2,     4,
       4,     5,     5,     4,     5,     4,     5,     6,     7,     7,
       8,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     4,     4,     2,     2,     2,     3,     2,
       4,     4,     2,     5,     4,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     5,     5,     4,     4,     5,     4,
       4,     4,     5,     5,     5,     5,     6,     4,     4,     5,
       7,     7,     5,     5,     5,     5,     2,     1,     4,     4,
       5,     5,     4,     5,     4,     5,     2,     2,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     4,     4,     5,
       5,     2,     4,     4,     5,     5,     4,     4,     5,     5,
       4,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 49: /* acall_stmt: ACALL IDENTIFIER  */
#line 47 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], ACALL_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1592 "a51.tab.c"
    break;

  case 50: /* add_stmt: ADD A ',' reg  */
#line 53 "a51.y"
            {
              add_stmt(yyvsp[-3], ADD_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 1600 "a51.tab.c"
    break;

  case 51: /* add_stmt: ADD A ',' dir  */
#line 57 "a51.y"
            {
              add_stmt(yyvsp[-3], ADD_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1608 "a51.tab.c"
    break;

  case 52: /* add_stmt: ADD A ',' '@' ind_reg  */
#line 61 "a51.y"
            {
              add_stmt(yyvsp[-4], ADD_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 1616 "a51.tab.c"
    break;

  case 53: /* add_stmt: ADD A ',' '#' NUMBER  */
#line 65 "a51.y"
            {
              add_stmt(yyvsp[-4], ADD_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 1624 "a51.tab.c"
    break;

  case 54: /* addc_stmt: ADDC A ',' reg  */
#line 70 "a51.y"
            {
              add_stmt(yyvsp[-3], ADDC_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 1632 "a51.tab.c"
    break;

  case 55: /* addc_stmt: ADDC A ',' dir  */
#line 74 "a51.y"
            {
              add_stmt(yyvsp[-3], ADDC_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1640 "a51.tab.c"
    break;

  case 56: /* addc_stmt: ADDC A ',' '@' ind_reg  */
#line 78 "a51.y"
            {
              add_stmt(yyvsp[-4], ADDC_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 1648 "a51.tab.c"
    break;

  case 57: /* addc_stmt: ADDC A ',' '#' NUMBER  */
#line 82 "a51.y"
            {
              add_stmt(yyvsp[-4], ADDC_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 1656 "a51.tab.c"
    break;

  case 58: /* ajmp_stmt: AJMP IDENTIFIER  */
#line 87 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], AJMP_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1665 "a51.tab.c"
    break;

  case 59: /* anl_stmt: ANL A ',' reg  */
#line 93 "a51.y"
            {
              add_stmt(yyvsp[-3], ANL_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 1673 "a51.tab.c"
    break;

  case 60: /* anl_stmt: ANL A ',' dir  */
#line 97 "a51.y"
            {
              add_stmt(yyvsp[-3], ANL_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1681 "a51.tab.c"
    break;

  case 61: /* anl_stmt: ANL A ',' '@' ind_reg  */
#line 101 "a51.y"
            {
              add_stmt(yyvsp[-4], ANL_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 1689 "a51.tab.c"
    break;

  case 62: /* anl_stmt: ANL A ',' '#' NUMBER  */
#line 105 "a51.y"
            {
              add_stmt(yyvsp[-4], ANL_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 1697 "a51.tab.c"
    break;

  case 63: /* anl_stmt: ANL dir ',' A  */
#line 109 "a51.y"
            {
              add_stmt(yyvsp[-3], ANL_OP, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 1705 "a51.tab.c"
    break;

  case 64: /* anl_stmt: ANL dir ',' '#' NUMBER  */
#line 113 "a51.y"
            {
              add_stmt(yyvsp[-4], ANL_OP, yyvsp[-3], yyvsp[-1], NULL, DIRECT_IMMEDIATE, 3);
            }
#line 1713 "a51.tab.c"
    break;

  case 65: /* anl_stmt: ANL C ',' bit  */
#line 117 "a51.y"
            {
              /* Add to ... */
            }
#line 1721 "a51.tab.c"
    break;

  case 66: /* anl_stmt: ANL C ',' '/' bit  */
#line 121 "a51.y"
            {
              /* Add to ... */
            }
#line 1729 "a51.tab.c"
    break;

  case 67: /* cjne_stmt: CJNE A ',' dir ',' IDENTIFIER  */
#line 126 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-5], CJNE_OP, yyvsp[-4], yyvsp[-2], yyvsp[0], A_DIRECT, 3);
            }
#line 1738 "a51.tab.c"
    break;

  case 68: /* cjne_stmt: CJNE A ',' '#' NUMBER ',' IDENTIFIER  */
#line 131 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-6], CJNE_OP, yyvsp[-5], yyvsp[-2], yyvsp[0], A_IMMEDIATE, 3);
            }
#line 1747 "a51.tab.c"
    break;

  case 69: /* cjne_stmt: CJNE reg ',' '#' NUMBER ',' IDENTIFIER  */
#line 136 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-6], CJNE_OP, yyvsp[-5], yyvsp[-2], yyvsp[0], REG_IMMEDIATE, 3);
            }
#line 1756 "a51.tab.c"
    break;

  case 70: /* cjne_stmt: CJNE '@' ind_reg ',' '#' NUMBER ',' IDENTIFIER  */
#line 141 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-7], CJNE_OP, yyvsp[-5], yyvsp[-2], yyvsp[0], IND_REG_IMMEDIATE, 3);
            }
#line 1765 "a51.tab.c"
    break;

  case 71: /* clr_stmt: CLR A  */
#line 147 "a51.y"
            {
              add_stmt(yyvsp[-1], 0xe4, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1773 "a51.tab.c"
    break;

  case 72: /* clr_stmt: CLR C  */
#line 151 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, C_TYPE, 3);
            }
#line 1781 "a51.tab.c"
    break;

  case 73: /* clr_stmt: CLR bit  */
#line 155 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, BIT_TYPE, 3);
            }
#line 1789 "a51.tab.c"
    break;

  case 74: /* cpl_stmt: CPL A  */
#line 160 "a51.y"
            {
              add_stmt(yyvsp[-1], 0xf4, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1797 "a51.tab.c"
    break;

  case 75: /* cpl_stmt: CPL C  */
#line 164 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, C_TYPE, 3);
            }
#line 1805 "a51.tab.c"
    break;

  case 76: /* cpl_stmt: CPL bit  */
#line 168 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, BIT_TYPE, 3);
            }
#line 1813 "a51.tab.c"
    break;

  case 77: /* da_stmt: DA A  */
#line 173 "a51.y"
           {
            add_stmt(yyvsp[-1], DA_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
           }
#line 1821 "a51.tab.c"
    break;

  case 78: /* dec_stmt: DEC A  */
#line 178 "a51.y"
            {
              add_stmt(yyvsp[-1], DEC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1829 "a51.tab.c"
    break;

  case 79: /* dec_stmt: DEC reg  */
#line 182 "a51.y"
            {
              add_stmt(yyvsp[-1], DEC_OP, yyvsp[0], NULL, NULL, REG_TYPE, 3);
            }
#line 1837 "a51.tab.c"
    break;

  case 80: /* dec_stmt: DEC dir  */
#line 186 "a51.y"
            {
              add_stmt(yyvsp[-1], DEC_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
            }
#line 1845 "a51.tab.c"
    break;

  case 81: /* dec_stmt: DEC '@' ind_reg  */
#line 190 "a51.y"
            {
              add_stmt(yyvsp[-2], DEC_OP, yyvsp[-1], NULL, NULL, IND_REG_TYPE, 3);
            }
#line 1853 "a51.tab.c"
    break;

  case 82: /* div_stmt: DIV AB  */
#line 195 "a51.y"
            {
              add_stmt(yyvsp[-1], DIV_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1861 "a51.tab.c"
    break;

  case 83: /* djnz_stmt: DJNZ reg ',' IDENTIFIER  */
#line 200 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], DJNZ_OP, yyvsp[-2], yyvsp[-1], NULL, REG_TYPE, 3);
            }
#line 1870 "a51.tab.c"
    break;

  case 84: /* djnz_stmt: DJNZ dir ',' IDENTIFIER  */
#line 205 "a51.y"
            {
              add_stmt(yyvsp[-3], DJNZ_OP, yyvsp[-2], yyvsp[-1], NULL, DIRECT_TYPE, 3);
            }
#line 1878 "a51.tab.c"
    break;

  case 85: /* inc_stmt: INC A  */
#line 210 "a51.y"
            {
              add_stmt(yyvsp[-1], INC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1886 "a51.tab.c"
    break;

  case 86: /* inc_stmt: INC reg  */
#line 214 "a51.y"
            {
              add_stmt(yyvsp[-1], INC_OP, yyvsp[0], NULL, NULL, REG_TYPE, 3);
            }
#line 1894 "a51.tab.c"
    break;

  case 87: /* inc_stmt: INC dir  */
#line 218 "a51.y"
            {
              add_stmt(yyvsp[-1], INC_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
            }
#line 1902 "a51.tab.c"
    break;

  case 88: /* inc_stmt: INC '@' ind_reg  */
#line 222 "a51.y"
            {
              add_stmt(yyvsp[-2], INC_OP, yyvsp[0], NULL, NULL, IND_REG_TYPE, 3);
            }
#line 1910 "a51.tab.c"
    break;

  case 89: /* inc_stmt: INC DPTR  */
#line 226 "a51.y"
            {
              /* Add to ... */
            }
#line 1918 "a51.tab.c"
    break;

  case 90: /* jb_stmt: JB bit ',' IDENTIFIER  */
#line 231 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], JB_OP, yyvsp[-2], yyvsp[0], NULL, BIT_TYPE, 3);
            }
#line 1927 "a51.tab.c"
    break;

  case 91: /* jbc_stmt: JBC bit ',' IDENTIFIER  */
#line 237 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], JBC_OP, yyvsp[-2], yyvsp[0], NULL, BIT_TYPE, 3);
            }
#line 1936 "a51.tab.c"
    break;

  case 92: /* jc_stmt: JC IDENTIFIER  */
#line 243 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JC_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1945 "a51.tab.c"
    break;

  case 93: /* jmp_stmt: JMP '@' A '+' DPTR  */
#line 249 "a51.y"
            {
              add_stmt(yyvsp[-4], JMP_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1953 "a51.tab.c"
    break;

  case 94: /* jnb_stmt: JNB bit ',' IDENTIFIER  */
#line 254 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], JNB_OP, yyvsp[-2], yyvsp[0], NULL, BIT_TYPE, 3);
            }
#line 1962 "a51.tab.c"
    break;

  case 95: /* jnc_stmt: JNC IDENTIFIER  */
#line 260 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JNC_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1971 "a51.tab.c"
    break;

  case 96: /* jnz_stmt: JNZ IDENTIFIER  */
#line 266 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JNZ_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1980 "a51.tab.c"
    break;

  case 97: /* jz_stmt: JZ IDENTIFIER  */
#line 272 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JZ_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1989 "a51.tab.c"
    break;

  case 98: /* lcall_stmt: LCALL IDENTIFIER  */
#line 278 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], LCALL_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1998 "a51.tab.c"
    break;

  case 99: /* lcall_stmt: LCALL NUMBER  */
#line 283 "a51.y"
              {
                add_stmt(yyvsp[-1], LCALL_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 2006 "a51.tab.c"
    break;

  case 100: /* ljmp_stmt: LJMP IDENTIFIER  */
#line 288 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], LJMP_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 2015 "a51.tab.c"
    break;

  case 101: /* ljmp_stmt: LJMP NUMBER  */
#line 293 "a51.y"
              {
                add_stmt(yyvsp[-1], LJMP_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 2023 "a51.tab.c"
    break;

  case 102: /* mov_stmt: MOV A ',' reg  */
#line 298 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xe0, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2031 "a51.tab.c"
    break;

  case 103: /* mov_stmt: MOV A ',' dir  */
#line 302 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xe0, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2039 "a51.tab.c"
    break;

  case 104: /* mov_stmt: MOV A ',' '@' ind_reg  */
#line 306 "a51.y"
            {
              add_stmt(yyvsp[-4], 0xe0, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2047 "a51.tab.c"
    break;

  case 105: /* mov_stmt: MOV A ',' '#' NUMBER  */
#line 310 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x70, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2055 "a51.tab.c"
    break;

  case 106: /* mov_stmt: MOV reg ',' A  */
#line 314 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xf0, yyvsp[-2], yyvsp[0], NULL, REG_A, 3);
            }
#line 2063 "a51.tab.c"
    break;

  case 107: /* mov_stmt: MOV reg ',' dir  */
#line 318 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xa0, yyvsp[-2], yyvsp[0], NULL, REG_DIRECT, 3);
            }
#line 2071 "a51.tab.c"
    break;

  case 108: /* mov_stmt: MOV reg ',' '#' NUMBER  */
#line 322 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x70, yyvsp[-3], yyvsp[0], NULL, REG_IMMEDIATE, 3);
            }
#line 2079 "a51.tab.c"
    break;

  case 109: /* mov_stmt: MOV dir ',' A  */
#line 326 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xf0, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 2087 "a51.tab.c"
    break;

  case 110: /* mov_stmt: MOV dir ',' reg  */
#line 330 "a51.y"
            {
              add_stmt(yyvsp[-3], 0x80, yyvsp[-2], yyvsp[0], NULL, DIRECT_REG, 3);
            }
#line 2095 "a51.tab.c"
    break;

  case 111: /* mov_stmt: MOV dir ',' dir  */
#line 334 "a51.y"
            {
              add_stmt(yyvsp[-3], 0x80, yyvsp[-2], yyvsp[0], NULL, DIRECT_DIRECT, 3);
            }
#line 2103 "a51.tab.c"
    break;

  case 112: /* mov_stmt: MOV dir ',' '@' ind_reg  */
#line 338 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x80, yyvsp[-3], yyvsp[0], NULL, DIRECT_IND_REG, 3);
            }
#line 2111 "a51.tab.c"
    break;

  case 113: /* mov_stmt: MOV dir ',' '#' NUMBER  */
#line 342 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x70, yyvsp[-3], yyvsp[0], NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2119 "a51.tab.c"
    break;

  case 114: /* mov_stmt: MOV '@' ind_reg ',' A  */
#line 346 "a51.y"
            {
              add_stmt(yyvsp[-4], 0xf0, yyvsp[-2], yyvsp[0], NULL, IND_REG_A, 3);
            }
#line 2127 "a51.tab.c"
    break;

  case 115: /* mov_stmt: MOV '@' ind_reg ',' dir  */
#line 350 "a51.y"
            {
              add_stmt(yyvsp[-4], 0xa0, yyvsp[-2], yyvsp[0], NULL, IND_REG_DIRECT, 3);
            }
#line 2135 "a51.tab.c"
    break;

  case 116: /* mov_stmt: MOV '@' ind_reg ',' '#' NUMBER  */
#line 354 "a51.y"
            {
              add_stmt(yyvsp[-5], 0x70, yyvsp[-3], yyvsp[0], NULL, IND_REG_IMMEDIATE, 3);
            }
#line 2143 "a51.tab.c"
    break;

  case 117: /* mov_stmt: MOV C ',' bit  */
#line 358 "a51.y"
            {
              /* Add to ... */
            }
#line 2151 "a51.tab.c"
    break;

  case 118: /* mov_stmt: MOV bit ',' C  */
#line 362 "a51.y"
            {
              /* Add to ... */
            }
#line 2159 "a51.tab.c"
    break;

  case 119: /* mov_stmt: MOV DPTR ',' '#' NUMBER  */
#line 366 "a51.y"
            {
              /* Add to ... */
            }
#line 2167 "a51.tab.c"
    break;

  case 120: /* movc_stmt: MOVC A ',' '@' A '+' DPTR  */
#line 371 "a51.y"
              {
                /* Add to ... */
              }
#line 2175 "a51.tab.c"
    break;

  case 121: /* movc_stmt: MOVC A ',' '@' A '+' PC  */
#line 375 "a51.y"
              {
                /* Add to ... */
              }
#line 2183 "a51.tab.c"
    break;

  case 122: /* movx_stmt: MOVX A ',' '@' ind_reg  */
#line 380 "a51.y"
              {
                /* Add to ... */
              }
#line 2191 "a51.tab.c"
    break;

  case 123: /* movx_stmt: MOVX A ',' '@' DPTR  */
#line 384 "a51.y"
              {
                /* Add to ... */
              }
#line 2199 "a51.tab.c"
    break;

  case 124: /* movx_stmt: MOVX '@' ind_reg ',' A  */
#line 388 "a51.y"
              {
                /* Add to ... */
              }
#line 2207 "a51.tab.c"
    break;

  case 125: /* movx_stmt: MOVX '@' DPTR ',' A  */
#line 392 "a51.y"
              {
                /* Add to ... */
              }
#line 2215 "a51.tab.c"
    break;

  case 126: /* mul_stmt: MUL AB  */
#line 397 "a51.y"
            {
              add_stmt(yyvsp[-1], MUL_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 2223 "a51.tab.c"
    break;

  case 127: /* nop_stmt: NOP  */
#line 402 "a51.y"
            {
              add_stmt(yyvsp[0], NOP_OP, NULL, NULL, NULL, NULL, 3);
            }
#line 2231 "a51.tab.c"
    break;

  case 128: /* orl_stmt: ORL A ',' reg  */
#line 407 "a51.y"
            {
              add_stmt(yyvsp[-3], ORL_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2239 "a51.tab.c"
    break;

  case 129: /* orl_stmt: ORL A ',' dir  */
#line 411 "a51.y"
            {
              add_stmt(yyvsp[-3], ORL_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2247 "a51.tab.c"
    break;

  case 130: /* orl_stmt: ORL A ',' '@' ind_reg  */
#line 415 "a51.y"
            {
              add_stmt(yyvsp[-4], ORL_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2255 "a51.tab.c"
    break;

  case 131: /* orl_stmt: ORL A ',' '#' NUMBER  */
#line 419 "a51.y"
            {
              add_stmt(yyvsp[-4], ORL_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2263 "a51.tab.c"
    break;

  case 132: /* orl_stmt: ORL dir ',' A  */
#line 423 "a51.y"
            {
              add_stmt(yyvsp[-3], ORL_OP, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 2271 "a51.tab.c"
    break;

  case 133: /* orl_stmt: ORL dir ',' '#' NUMBER  */
#line 427 "a51.y"
            {
              add_stmt(yyvsp[-4], ORL_OP, yyvsp[-3], yyvsp[0], NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2279 "a51.tab.c"
    break;

  case 134: /* orl_stmt: ORL C ',' bit  */
#line 431 "a51.y"
            {
              /* Add to ... */
            }
#line 2287 "a51.tab.c"
    break;

  case 135: /* orl_stmt: ORL C ',' '/' bit  */
#line 435 "a51.y"
            {
              /* Add to ... */
            }
#line 2295 "a51.tab.c"
    break;

  case 136: /* pop_stmt: POP dir  */
#line 440 "a51.y"
            {
              add_stmt(yyvsp[-1], POP_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
            }
#line 2303 "a51.tab.c"
    break;

  case 137: /* push_stmt: PUSH dir  */
#line 445 "a51.y"
              {
                add_stmt(yyvsp[-1], PUSH_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
              }
#line 2311 "a51.tab.c"
    break;

  case 138: /* ret_stmt: RET  */
#line 450 "a51.y"
            {
              add_stmt(yyvsp[0], RET_OP, NULL, NULL, NULL, NULL, 3); 
            }
#line 2319 "a51.tab.c"
    break;

  case 139: /* reti_stmt: RETI  */
#line 455 "a51.y"
              {
                add_stmt(yyvsp[0], RETI_OP, NULL, NULL, NULL, NULL, 3); 
              }
#line 2327 "a51.tab.c"
    break;

  case 140: /* rl_stmt: RL A  */
#line 460 "a51.y"
            {
              add_stmt(yyvsp[-1], RL_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2335 "a51.tab.c"
    break;

  case 141: /* rlc_stmt: RLC A  */
#line 465 "a51.y"
            {
              add_stmt(yyvsp[-1], RLC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2343 "a51.tab.c"
    break;

  case 142: /* rr_stmt: RR A  */
#line 470 "a51.y"
            {
              add_stmt(yyvsp[-1], RR_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2351 "a51.tab.c"
    break;

  case 143: /* rrc_stmt: RRC A  */
#line 475 "a51.y"
            {
              add_stmt(yyvsp[-1], RRC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2359 "a51.tab.c"
    break;

  case 144: /* setb_stmt: SETB C  */
#line 480 "a51.y"
              {
                add_stmt(yyvsp[-1], SETB_OP, yyvsp[0], NULL, NULL, C_TYPE, 3);
              }
#line 2367 "a51.tab.c"
    break;

  case 145: /* setb_stmt: SETB bit  */
#line 484 "a51.y"
              {
                add_stmt(yyvsp[-1], SETB_OP, yyvsp[0], NULL, NULL, BIT_TYPE, 3);
              }
#line 2375 "a51.tab.c"
    break;

  case 146: /* sjmp_stmt: SJMP IDENTIFIER  */
#line 489 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], SJMP_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
              }
#line 2384 "a51.tab.c"
    break;

  case 147: /* subb_stmt: SUBB A ',' reg  */
#line 495 "a51.y"
            {
              add_stmt(yyvsp[-3], SUBB_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2392 "a51.tab.c"
    break;

  case 148: /* subb_stmt: SUBB A ',' dir  */
#line 499 "a51.y"
            {
              add_stmt(yyvsp[-3], SUBB_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2400 "a51.tab.c"
    break;

  case 149: /* subb_stmt: SUBB A ',' '@' ind_reg  */
#line 503 "a51.y"
            {
              add_stmt(yyvsp[-4], SUBB_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2408 "a51.tab.c"
    break;

  case 150: /* subb_stmt: SUBB A ',' '#' NUMBER  */
#line 507 "a51.y"
            {
              add_stmt(yyvsp[-4], SUBB_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2416 "a51.tab.c"
    break;

  case 151: /* swap_stmt: SWAP A  */
#line 512 "a51.y"
              {
                add_stmt(yyvsp[-1], SWAP_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
              }
#line 2424 "a51.tab.c"
    break;

  case 152: /* xch_stmt: XCH A ',' reg  */
#line 517 "a51.y"
            {
              add_stmt(yyvsp[-3], XCH_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2432 "a51.tab.c"
    break;

  case 153: /* xch_stmt: XCH A ',' dir  */
#line 521 "a51.y"
            {
              add_stmt(yyvsp[-3], XCH_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2440 "a51.tab.c"
    break;

  case 154: /* xch_stmt: XCH A ',' '@' ind_reg  */
#line 525 "a51.y"
            {
              add_stmt(yyvsp[-4], XCH_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2448 "a51.tab.c"
    break;

  case 155: /* xchd_stmt: XCHD A ',' '@' ind_reg  */
#line 530 "a51.y"
              {
                add_stmt(yyvsp[-4], XCHD_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
              }
#line 2456 "a51.tab.c"
    break;

  case 156: /* xrl_stmt: XRL A ',' reg  */
#line 535 "a51.y"
            {
              add_stmt(yyvsp[-3], XRL_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2464 "a51.tab.c"
    break;

  case 157: /* xrl_stmt: XRL A ',' dir  */
#line 539 "a51.y"
            {
              add_stmt(yyvsp[-3], XRL_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2472 "a51.tab.c"
    break;

  case 158: /* xrl_stmt: XRL A ',' '@' ind_reg  */
#line 543 "a51.y"
            {
              add_stmt(yyvsp[-4], XRL_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2480 "a51.tab.c"
    break;

  case 159: /* xrl_stmt: XRL A ',' '#' NUMBER  */
#line 547 "a51.y"
            {
              add_stmt(yyvsp[-4], XRL_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2488 "a51.tab.c"
    break;

  case 160: /* xrl_stmt: XRL dir ',' A  */
#line 551 "a51.y"
            {
              add_stmt(yyvsp[-3], XRL_OP, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 2496 "a51.tab.c"
    break;

  case 161: /* xrl_stmt: XRL dir ',' '#' NUMBER  */
#line 555 "a51.y"
            {
              add_stmt(yyvsp[-4], XRL_OP, yyvsp[-3], yyvsp[0], NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2504 "a51.tab.c"
    break;

  case 162: /* label: IDENTIFIER ':'  */
#line 560 "a51.y"
        {
          insertSymbol(yyvsp[-1], lc);
        }
#line 2512 "a51.tab.c"
    break;


#line 2516 "a51.tab.c"

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

#line 572 "a51.y"


int yyerror(char * message)
{ printf("Syntax error: %s\n",message);
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

