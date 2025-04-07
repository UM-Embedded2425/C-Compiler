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

%union {
  int num;
  char *str;
}


#line 88 "a51.tab.c"

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
  YYSYMBOL_SWAP = 26,                      /* SWAP  */
  YYSYMBOL_PUSH = 27,                      /* PUSH  */
  YYSYMBOL_POP = 28,                       /* POP  */
  YYSYMBOL_INC = 29,                       /* INC  */
  YYSYMBOL_DEC = 30,                       /* DEC  */
  YYSYMBOL_ADD = 31,                       /* ADD  */
  YYSYMBOL_ADDC = 32,                      /* ADDC  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_SUBB = 34,                      /* SUBB  */
  YYSYMBOL_MUL = 35,                       /* MUL  */
  YYSYMBOL_DA = 36,                        /* DA  */
  YYSYMBOL_SETB = 37,                      /* SETB  */
  YYSYMBOL_CLR = 38,                       /* CLR  */
  YYSYMBOL_CPL = 39,                       /* CPL  */
  YYSYMBOL_RR = 40,                        /* RR  */
  YYSYMBOL_RRC = 41,                       /* RRC  */
  YYSYMBOL_RL = 42,                        /* RL  */
  YYSYMBOL_RLC = 43,                       /* RLC  */
  YYSYMBOL_ORL = 44,                       /* ORL  */
  YYSYMBOL_XRL = 45,                       /* XRL  */
  YYSYMBOL_ANL = 46,                       /* ANL  */
  YYSYMBOL_A = 47,                         /* A  */
  YYSYMBOL_B = 48,                         /* B  */
  YYSYMBOL_PSW = 49,                       /* PSW  */
  YYSYMBOL_DPTR = 50,                      /* DPTR  */
  YYSYMBOL_DPL = 51,                       /* DPL  */
  YYSYMBOL_DPH = 52,                       /* DPH  */
  YYSYMBOL_SP = 53,                        /* SP  */
  YYSYMBOL_P0 = 54,                        /* P0  */
  YYSYMBOL_P1 = 55,                        /* P1  */
  YYSYMBOL_TCON = 56,                      /* TCON  */
  YYSYMBOL_TMOD = 57,                      /* TMOD  */
  YYSYMBOL_TLO = 58,                       /* TLO  */
  YYSYMBOL_TL1 = 59,                       /* TL1  */
  YYSYMBOL_TH0 = 60,                       /* TH0  */
  YYSYMBOL_TH1 = 61,                       /* TH1  */
  YYSYMBOL_SCON = 62,                      /* SCON  */
  YYSYMBOL_SBUF = 63,                      /* SBUF  */
  YYSYMBOL_PC = 64,                        /* PC  */
  YYSYMBOL_IE = 65,                        /* IE  */
  YYSYMBOL_IP = 66,                        /* IP  */
  YYSYMBOL_R0 = 67,                        /* R0  */
  YYSYMBOL_R1 = 68,                        /* R1  */
  YYSYMBOL_R2 = 69,                        /* R2  */
  YYSYMBOL_R3 = 70,                        /* R3  */
  YYSYMBOL_R4 = 71,                        /* R4  */
  YYSYMBOL_R5 = 72,                        /* R5  */
  YYSYMBOL_R6 = 73,                        /* R6  */
  YYSYMBOL_R7 = 74,                        /* R7  */
  YYSYMBOL_C = 75,                         /* C  */
  YYSYMBOL_NUMBER = 76,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 77,                /* IDENTIFIER  */
  YYSYMBOL_AB = 78,                        /* AB  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_80_ = 80,                       /* '@'  */
  YYSYMBOL_81_ = 81,                       /* '#'  */
  YYSYMBOL_82_ = 82,                       /* '/'  */
  YYSYMBOL_83_ = 83,                       /* '+'  */
  YYSYMBOL_84_ = 84,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_stmt_seq = 86,                  /* stmt_seq  */
  YYSYMBOL_stmt = 87,                      /* stmt  */
  YYSYMBOL_acall_stmt = 88,                /* acall_stmt  */
  YYSYMBOL_add_stmt = 89,                  /* add_stmt  */
  YYSYMBOL_addc_stmt = 90,                 /* addc_stmt  */
  YYSYMBOL_ajmp_stmt = 91,                 /* ajmp_stmt  */
  YYSYMBOL_anl_stmt = 92,                  /* anl_stmt  */
  YYSYMBOL_cjne_stmt = 93,                 /* cjne_stmt  */
  YYSYMBOL_clr_stmt = 94,                  /* clr_stmt  */
  YYSYMBOL_cpl_stmt = 95,                  /* cpl_stmt  */
  YYSYMBOL_da_stmt = 96,                   /* da_stmt  */
  YYSYMBOL_dec_stmt = 97,                  /* dec_stmt  */
  YYSYMBOL_div_stmt = 98,                  /* div_stmt  */
  YYSYMBOL_djnz_stmt = 99,                 /* djnz_stmt  */
  YYSYMBOL_inc_stmt = 100,                 /* inc_stmt  */
  YYSYMBOL_jb_stmt = 101,                  /* jb_stmt  */
  YYSYMBOL_jbc_stmt = 102,                 /* jbc_stmt  */
  YYSYMBOL_jc_stmt = 103,                  /* jc_stmt  */
  YYSYMBOL_jmp_stmt = 104,                 /* jmp_stmt  */
  YYSYMBOL_jnb_stmt = 105,                 /* jnb_stmt  */
  YYSYMBOL_jnc_stmt = 106,                 /* jnc_stmt  */
  YYSYMBOL_jnz_stmt = 107,                 /* jnz_stmt  */
  YYSYMBOL_jz_stmt = 108,                  /* jz_stmt  */
  YYSYMBOL_lcall_stmt = 109,               /* lcall_stmt  */
  YYSYMBOL_ljmp_stmt = 110,                /* ljmp_stmt  */
  YYSYMBOL_mov_stmt = 111,                 /* mov_stmt  */
  YYSYMBOL_movc_stmt = 112,                /* movc_stmt  */
  YYSYMBOL_movx_stmt = 113,                /* movx_stmt  */
  YYSYMBOL_mul_stmt = 114,                 /* mul_stmt  */
  YYSYMBOL_nop_stmt = 115,                 /* nop_stmt  */
  YYSYMBOL_orl_stmt = 116,                 /* orl_stmt  */
  YYSYMBOL_pop_stmt = 117,                 /* pop_stmt  */
  YYSYMBOL_push_stmt = 118,                /* push_stmt  */
  YYSYMBOL_ret_stmt = 119,                 /* ret_stmt  */
  YYSYMBOL_reti_stmt = 120,                /* reti_stmt  */
  YYSYMBOL_rl_stmt = 121,                  /* rl_stmt  */
  YYSYMBOL_rlc_stmt = 122,                 /* rlc_stmt  */
  YYSYMBOL_rr_stmt = 123,                  /* rr_stmt  */
  YYSYMBOL_rrc_stmt = 124,                 /* rrc_stmt  */
  YYSYMBOL_setb_stmt = 125,                /* setb_stmt  */
  YYSYMBOL_sjmp_stmt = 126,                /* sjmp_stmt  */
  YYSYMBOL_subb_stmt = 127,                /* subb_stmt  */
  YYSYMBOL_swap_stmt = 128,                /* swap_stmt  */
  YYSYMBOL_xch_stmt = 129,                 /* xch_stmt  */
  YYSYMBOL_xchd_stmt = 130,                /* xchd_stmt  */
  YYSYMBOL_xrl_stmt = 131,                 /* xrl_stmt  */
  YYSYMBOL_label = 132,                    /* label  */
  YYSYMBOL_dir = 133,                      /* dir  */
  YYSYMBOL_bit = 134,                      /* bit  */
  YYSYMBOL_reg = 135,                      /* reg  */
  YYSYMBOL_ind_reg = 136                   /* ind_reg  */
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
#define YYLAST   902

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  190
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


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
       2,     2,     2,     2,     2,    81,     2,     2,     2,     2,
       2,     2,     2,    83,    79,     2,     2,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,     2,
       2,     2,     2,     2,    80,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    39,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    42,    42,    42,    42,    42,    42,    42,
      43,    43,    43,    43,    43,    43,    43,    44,    44,    44,
      44,    44,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    47,    49,
      55,    59,    63,    67,    72,    76,    80,    84,    89,    95,
      99,   103,   107,   111,   115,   119,   123,   128,   133,   138,
     143,   149,   153,   157,   162,   166,   170,   175,   180,   184,
     188,   192,   197,   202,   207,   212,   216,   220,   224,   228,
     233,   239,   245,   251,   256,   262,   268,   274,   280,   285,
     290,   295,   300,   304,   308,   312,   316,   320,   324,   328,
     332,   336,   340,   344,   348,   352,   356,   360,   364,   368,
     373,   377,   382,   386,   390,   394,   399,   404,   409,   413,
     417,   421,   425,   429,   433,   437,   442,   447,   452,   457,
     462,   467,   472,   477,   482,   486,   491,   497,   501,   505,
     509,   514,   519,   523,   527,   532,   537,   541,   545,   549,
     553,   557,   562,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     569,   571,   571,   571,   571,   571,   571,   571,   571,   573,
     573
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
  "XCHD", "SWAP", "PUSH", "POP", "INC", "DEC", "ADD", "ADDC", "DIV",
  "SUBB", "MUL", "DA", "SETB", "CLR", "CPL", "RR", "RRC", "RL", "RLC",
  "ORL", "XRL", "ANL", "A", "B", "PSW", "DPTR", "DPL", "DPH", "SP", "P0",
  "P1", "TCON", "TMOD", "TLO", "TL1", "TH0", "TH1", "SCON", "SBUF", "PC",
  "IE", "IP", "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "C",
  "NUMBER", "IDENTIFIER", "AB", "','", "'@'", "'#'", "'/'", "'+'", "':'",
  "$accept", "stmt_seq", "stmt", "acall_stmt", "add_stmt", "addc_stmt",
  "ajmp_stmt", "anl_stmt", "cjne_stmt", "clr_stmt", "cpl_stmt", "da_stmt",
  "dec_stmt", "div_stmt", "djnz_stmt", "inc_stmt", "jb_stmt", "jbc_stmt",
  "jc_stmt", "jmp_stmt", "jnb_stmt", "jnc_stmt", "jnz_stmt", "jz_stmt",
  "lcall_stmt", "ljmp_stmt", "mov_stmt", "movc_stmt", "movx_stmt",
  "mul_stmt", "nop_stmt", "orl_stmt", "pop_stmt", "push_stmt", "ret_stmt",
  "reti_stmt", "rl_stmt", "rlc_stmt", "rr_stmt", "rrc_stmt", "setb_stmt",
  "sjmp_stmt", "subb_stmt", "swap_stmt", "xch_stmt", "xchd_stmt",
  "xrl_stmt", "label", "dir", "bit", "reg", "ind_reg", YY_NULLPTR
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
     273,  -120,   -73,   -67,   -52,   -51,   -65,  -120,  -120,   -53,
     103,   710,     9,    28,    46,    47,  -120,  -120,  -120,   586,
      40,   -39,    71,    79,    82,   800,   800,   620,   650,    83,
      84,   -43,    85,    55,    87,    69,   -42,   -41,    88,   101,
     102,   105,   740,   826,   770,    72,    39,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     106,    75,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     -44,    80,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,    81,
      86,  -120,  -120,  -120,  -120,    89,    99,   100,   107,   109,
     110,   -44,   112,   113,   114,   116,   118,    70,   119,   120,
    -120,  -120,  -120,  -120,  -120,   -44,  -120,  -120,  -120,   -44,
    -120,  -120,   121,   123,  -120,   124,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     131,   135,   136,   138,   139,   140,   141,   142,  -120,  -120,
    -120,    74,   189,  -120,  -120,   143,    77,    90,   104,   108,
     147,   148,    41,   145,  -120,   152,   275,    91,   520,   154,
     159,   174,   175,   680,   176,  -120,  -120,   310,   345,   380,
     415,   173,    44,   450,    59,   485,   177,    60,   111,   181,
     179,   182,   184,  -120,  -120,  -120,  -120,  -120,   -44,   186,
    -120,  -120,   188,  -120,   551,  -120,   -44,   190,  -120,  -120,
    -120,  -120,   191,  -120,   115,    78,   117,   137,   -44,  -120,
    -120,   -44,   -44,   192,  -120,  -120,   -44,   193,  -120,  -120,
     -44,   195,  -120,  -120,   -44,   196,  -120,  -120,  -120,  -120,
    -120,   197,   -44,   198,  -120,  -120,  -120,   244,   -44,   245,
    -120,  -120,  -120,  -120,  -120,   249,  -120,   260,   263,   265,
     274,  -120,  -120,  -120,  -120,   276,  -120,  -120,  -120,  -120,
     271,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,   283,  -120,   295,   298,  -120,   -47,
    -120,   299,  -120,  -120,  -120,  -120
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
    -120,  -120,   339,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
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
     136,   137,   143,   343,    93,   170,   173,   142,   146,    94,
      95,    98,    99,   151,   152,   156,   160,   344,   169,   172,
     175,   130,   205,   193,   194,    96,    97,   100,   212,   144,
     182,   184,   187,   171,   174,   164,   215,   157,   161,   189,
     216,   147,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   131,   145,   112,   113,
     114,   280,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   132,   286,   294,   102,   103,
     104,   105,   106,   107,   108,   109,    45,   128,   148,   301,
     211,   238,   239,   133,   134,   281,   149,   307,   311,   150,
     162,   163,   165,   166,   167,   176,   312,   193,   194,   315,
     287,   295,   316,   317,   168,   193,   194,   319,   177,   178,
     101,   321,   179,   191,   192,   323,   188,   228,   232,   196,
     197,   296,   310,   327,   313,   198,   250,   233,   199,   330,
     102,   103,   104,   105,   106,   107,   108,   109,   200,   201,
     230,   234,     0,   110,   314,   235,   202,   243,   203,   204,
     240,   206,   207,   208,   248,   209,   253,   210,   213,   214,
     217,   259,   218,   219,   279,   264,   268,   272,   276,   293,
     220,   284,   241,   290,   221,   222,   249,   223,   224,   225,
     226,   227,   231,   260,   236,   237,   242,   265,   269,   273,
     277,   244,   306,   285,   254,   291,   112,   113,   114,   255,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   256,   257,   278,   261,   297,   298,   292,
     300,   325,   302,   299,   303,   128,   308,   309,   318,   320,
     229,   322,   324,   326,   328,   332,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     329,   331,   245,   113,   114,   333,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   334,
     335,   336,   102,   103,   104,   105,   106,   107,   108,   109,
      45,   128,   338,   337,   339,   246,   247,   112,   113,   114,
     340,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   341,   342,   345,   102,   103,   104,
     105,   106,   107,   108,   109,   190,   128,     0,     0,     0,
     262,   263,   112,   113,   114,     0,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   108,   109,
       0,   128,     0,     0,     0,   266,   267,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,     0,   128,     0,     0,     0,
     270,   271,   112,   113,   114,     0,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   108,   109,
       0,   128,     0,     0,     0,   274,   275,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,     0,   128,     0,     0,     0,
     282,   283,   112,   113,   114,     0,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,   102,   103,   104,   105,   106,   107,   108,   109,
       0,   128,     0,     0,     0,   288,   289,   251,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,   304,   113,
     114,   252,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,   305,   138,   113,   114,   139,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   140,   128,     0,     0,     0,   141,   153,   113,   114,
     154,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,     0,   128,   158,   113,   114,
     155,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,     0,   128,   112,   113,   114,
     159,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,     0,   128,   112,   113,   114,
     258,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,     0,   128,   180,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   128,   185,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   128,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   183,   113,   114,   128,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    50,    77,    47,    47,    19,    47,    76,
      77,    76,    77,    25,    26,    27,    28,    64,    35,    36,
      37,    11,   141,    67,    68,    77,    77,    80,   147,    19,
      42,    43,    44,    75,    75,    78,   155,    27,    28,     0,
     159,    80,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    77,    47,    47,    48,
      49,    47,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    77,    47,    47,    67,    68,
      69,    70,    71,    72,    73,    74,    77,    76,    47,   238,
      50,    80,    81,    77,    77,    81,    47,   246,    50,    47,
      47,    47,    47,    78,    47,    47,   255,    67,    68,   258,
      81,    81,   261,   262,    75,    67,    68,   266,    47,    47,
      47,   270,    47,    47,    79,   274,    84,    83,    81,    79,
      79,    50,    47,   282,    47,    79,    75,    77,    79,   288,
      67,    68,    69,    70,    71,    72,    73,    74,    79,    79,
     192,    77,    -1,    80,    47,    77,    79,   204,    79,    79,
     202,    79,    79,    79,   206,    79,   208,    79,    79,    79,
      79,   213,    79,    79,   221,   217,   218,   219,   220,   226,
      79,   223,   202,   225,    79,    79,   206,    79,    79,    79,
      79,    79,    79,   213,    77,    77,    81,   217,   218,   219,
     220,    79,   244,   223,    80,   225,    47,    48,    49,    80,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    79,    79,    82,    80,    76,    79,    82,
      76,   278,    76,    81,    76,    76,    76,    76,    76,    76,
      81,    76,    76,    76,    76,   292,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      76,    76,    47,    48,    49,    76,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    79,
      77,    76,    67,    68,    69,    70,    71,    72,    73,    74,
      77,    76,    76,    79,    83,    80,    81,    47,    48,    49,
      77,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    79,    77,    77,    67,    68,    69,
      70,    71,    72,    73,    74,    46,    76,    -1,    -1,    -1,
      80,    81,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    80,    81,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      80,    81,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    80,    81,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      80,    81,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    80,    81,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    47,    48,
      49,    81,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    80,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    47,    48,    49,
      80,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    47,    48,    49,
      80,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    47,    48,    49,
      80,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    76,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    77,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    77,    76,    77,    77,    77,    76,    77,
      80,    47,    67,    68,    69,    70,    71,    72,    73,    74,
      80,   135,    47,    48,    49,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    76,   133,
     135,    77,    77,    77,    77,   134,   134,   134,    47,    50,
      75,    80,   133,   134,   135,    47,    47,    80,    47,    47,
      47,   133,   133,    47,    50,    80,   133,   135,    47,    80,
     133,   135,    47,    47,    78,    47,    78,    47,    75,   134,
      47,    75,   134,    47,    75,   134,    47,    47,    47,    47,
      47,    75,   133,    47,   133,    47,    75,   133,    84,     0,
      87,    47,    79,    67,    68,   136,    79,    79,    79,    79,
      79,    79,    79,    79,    79,   136,    79,    79,    79,    79,
      79,    50,   136,    79,    79,   136,   136,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    83,    81,
     133,    79,    81,    77,    77,    77,    77,    77,    80,    81,
     133,   135,    81,   134,    79,    47,    80,    81,   133,   135,
      75,    47,    81,   133,    80,    80,    79,    79,    80,   133,
     135,    80,    80,    81,   133,   135,    80,    81,   133,   135,
      80,    81,   133,   135,    80,    81,   133,   135,    82,   134,
      47,    81,    80,    81,   133,   135,    47,    81,    80,    81,
     133,   135,    82,   134,    47,    81,    50,    76,    79,    81,
      76,   136,    76,    76,    47,    81,   133,   136,    76,    76,
      47,    50,   136,    47,    47,   136,   136,   136,    76,   136,
      76,   136,    76,   136,    76,   134,    76,   136,    76,    76,
     136,    76,   134,    76,    79,    77,    76,    79,    76,    83,
      77,    79,    77,    50,    64,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    94,    94,    94,    95,    95,    95,    96,    97,    97,
      97,    97,    98,    99,    99,   100,   100,   100,   100,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   109,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   113,   113,   113,   114,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   125,   126,   127,   127,   127,
     127,   128,   129,   129,   129,   130,   131,   131,   131,   131,
     131,   131,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136
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
#line 50 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], ACALL_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1573 "a51.tab.c"
    break;

  case 50: /* add_stmt: ADD A ',' reg  */
#line 56 "a51.y"
            {
              add_stmt(yyvsp[-3], ADD_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 1581 "a51.tab.c"
    break;

  case 51: /* add_stmt: ADD A ',' dir  */
#line 60 "a51.y"
            {
              add_stmt(yyvsp[-3], ADD_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1589 "a51.tab.c"
    break;

  case 52: /* add_stmt: ADD A ',' '@' ind_reg  */
#line 64 "a51.y"
            {
              add_stmt(yyvsp[-4], ADD_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 1597 "a51.tab.c"
    break;

  case 53: /* add_stmt: ADD A ',' '#' NUMBER  */
#line 68 "a51.y"
            {
              add_stmt(yyvsp[-4], ADD_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 1605 "a51.tab.c"
    break;

  case 54: /* addc_stmt: ADDC A ',' reg  */
#line 73 "a51.y"
            {
              add_stmt(yyvsp[-3], ADDC_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 1613 "a51.tab.c"
    break;

  case 55: /* addc_stmt: ADDC A ',' dir  */
#line 77 "a51.y"
            {
              add_stmt(yyvsp[-3], ADDC_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1621 "a51.tab.c"
    break;

  case 56: /* addc_stmt: ADDC A ',' '@' ind_reg  */
#line 81 "a51.y"
            {
              add_stmt(yyvsp[-4], ADDC_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 1629 "a51.tab.c"
    break;

  case 57: /* addc_stmt: ADDC A ',' '#' NUMBER  */
#line 85 "a51.y"
            {
              add_stmt(yyvsp[-4], ADDC_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 1637 "a51.tab.c"
    break;

  case 58: /* ajmp_stmt: AJMP IDENTIFIER  */
#line 90 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], AJMP_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1646 "a51.tab.c"
    break;

  case 59: /* anl_stmt: ANL A ',' reg  */
#line 96 "a51.y"
            {
              add_stmt(yyvsp[-3], ANL_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 1654 "a51.tab.c"
    break;

  case 60: /* anl_stmt: ANL A ',' dir  */
#line 100 "a51.y"
            {
              add_stmt(yyvsp[-3], ANL_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1662 "a51.tab.c"
    break;

  case 61: /* anl_stmt: ANL A ',' '@' ind_reg  */
#line 104 "a51.y"
            {
              add_stmt(yyvsp[-4], ANL_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 1670 "a51.tab.c"
    break;

  case 62: /* anl_stmt: ANL A ',' '#' NUMBER  */
#line 108 "a51.y"
            {
              add_stmt(yyvsp[-4], ANL_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 1678 "a51.tab.c"
    break;

  case 63: /* anl_stmt: ANL dir ',' A  */
#line 112 "a51.y"
            {
              add_stmt(yyvsp[-3], ANL_OP, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 1686 "a51.tab.c"
    break;

  case 64: /* anl_stmt: ANL dir ',' '#' NUMBER  */
#line 116 "a51.y"
            {
              add_stmt(yyvsp[-4], ANL_OP, yyvsp[-3], yyvsp[-1], NULL, DIRECT_IMMEADIATE, 3);
            }
#line 1694 "a51.tab.c"
    break;

  case 65: /* anl_stmt: ANL C ',' bit  */
#line 120 "a51.y"
            {
              /* Add to ... */
            }
#line 1702 "a51.tab.c"
    break;

  case 66: /* anl_stmt: ANL C ',' '/' bit  */
#line 124 "a51.y"
            {
              /* Add to ... */
            }
#line 1710 "a51.tab.c"
    break;

  case 67: /* cjne_stmt: CJNE A ',' dir ',' IDENTIFIER  */
#line 129 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-5], CJNE_OP, yyvsp[-4], yyvsp[-2], yyvsp[0], A_DIRECT, 3);
            }
#line 1719 "a51.tab.c"
    break;

  case 68: /* cjne_stmt: CJNE A ',' '#' NUMBER ',' IDENTIFIER  */
#line 134 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-6], CJNE_OP, yyvsp[-5], yyvsp[-2], yyvsp[0], A_IMMEDIATE, 3);
            }
#line 1728 "a51.tab.c"
    break;

  case 69: /* cjne_stmt: CJNE reg ',' '#' NUMBER ',' IDENTIFIER  */
#line 139 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-6], CJNE_OP, yyvsp[-5], yyvsp[-2], yyvsp[0], REG_IMMEDIATE, 3);
            }
#line 1737 "a51.tab.c"
    break;

  case 70: /* cjne_stmt: CJNE '@' ind_reg ',' '#' NUMBER ',' IDENTIFIER  */
#line 144 "a51.y"
            {
              insertSymbol(yyvsp[0], lc); // ?
              add_stmt(yyvsp[-7], CJNE_OP, yyvsp[-5], yyvsp[-2], yyvsp[0], IND_REG_IMMEDIATE, 3);
            }
#line 1746 "a51.tab.c"
    break;

  case 71: /* clr_stmt: CLR A  */
#line 150 "a51.y"
            {
              add_stmt(yyvsp[-1], 0xe4, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1754 "a51.tab.c"
    break;

  case 72: /* clr_stmt: CLR C  */
#line 154 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, C_TYPE, 3);
            }
#line 1762 "a51.tab.c"
    break;

  case 73: /* clr_stmt: CLR bit  */
#line 158 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, BIT_TYPE, 3);
            }
#line 1770 "a51.tab.c"
    break;

  case 74: /* cpl_stmt: CPL A  */
#line 163 "a51.y"
            {
              add_stmt(yyvsp[-1], 0xf4, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1778 "a51.tab.c"
    break;

  case 75: /* cpl_stmt: CPL C  */
#line 167 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, C_TYPE, 3);
            }
#line 1786 "a51.tab.c"
    break;

  case 76: /* cpl_stmt: CPL bit  */
#line 171 "a51.y"
            {
              add_stmt(yyvsp[-1], CLR_OP, yyvsp[0], NULL, NULL, BIT_TYPE, 3);
            }
#line 1794 "a51.tab.c"
    break;

  case 77: /* da_stmt: DA A  */
#line 176 "a51.y"
           {
            add_stmt(yyvsp[-1], DA_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
           }
#line 1802 "a51.tab.c"
    break;

  case 78: /* dec_stmt: DEC A  */
#line 181 "a51.y"
            {
              add_stmt(yyvsp[-1], DEC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1810 "a51.tab.c"
    break;

  case 79: /* dec_stmt: DEC reg  */
#line 185 "a51.y"
            {
              add_stmt(yyvsp[-1], DEC_OP, yyvsp[0], NULL, NULL, REG_TYPE, 3);
            }
#line 1818 "a51.tab.c"
    break;

  case 80: /* dec_stmt: DEC dir  */
#line 189 "a51.y"
            {
              add_stmt(yyvsp[-1], DEC_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
            }
#line 1826 "a51.tab.c"
    break;

  case 81: /* dec_stmt: DEC '@' ind_reg  */
#line 193 "a51.y"
            {
              add_stmt(yyvsp[-2], DEC_OP, yyvsp[-1], NULL, NULL, IND_REG_TYPE, 3);
            }
#line 1834 "a51.tab.c"
    break;

  case 82: /* div_stmt: DIV AB  */
#line 198 "a51.y"
            {
              add_stmt(yyvsp[-1], DIV_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1842 "a51.tab.c"
    break;

  case 83: /* djnz_stmt: DJNZ reg ',' IDENTIFIER  */
#line 203 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], DJNZ_OP, yyvsp[-2], yyvsp[-1], REG_TYPE, 3);
            }
#line 1851 "a51.tab.c"
    break;

  case 84: /* djnz_stmt: DJNZ dir ',' IDENTIFIER  */
#line 208 "a51.y"
            {
              add_stmt(yyvsp[-3], DJNZ_OP, yyvsp[-2], yyvsp[-1], DIRECT_TYPE, 3);
            }
#line 1859 "a51.tab.c"
    break;

  case 85: /* inc_stmt: INC A  */
#line 213 "a51.y"
            {
              add_stmt(yyvsp[-1], INC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 1867 "a51.tab.c"
    break;

  case 86: /* inc_stmt: INC reg  */
#line 217 "a51.y"
            {
              add_stmt(yyvsp[-1], INC_OP, yyvsp[0], NULL, NULL, REG_TYPE, 3);
            }
#line 1875 "a51.tab.c"
    break;

  case 87: /* inc_stmt: INC dir  */
#line 221 "a51.y"
            {
              add_stmt(yyvsp[-1], INC_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
            }
#line 1883 "a51.tab.c"
    break;

  case 88: /* inc_stmt: INC '@' ind_reg  */
#line 225 "a51.y"
            {
              add_stmt(yyvsp[-2], INC_OP, yyvsp[0], NULL, NULL, IND_REG_TYPE, 3);
            }
#line 1891 "a51.tab.c"
    break;

  case 89: /* inc_stmt: INC DPTR  */
#line 229 "a51.y"
            {
              /* Add to ... */
            }
#line 1899 "a51.tab.c"
    break;

  case 90: /* jb_stmt: JB bit ',' IDENTIFIER  */
#line 234 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], JB_OP, yyvsp[-2], yyvsp[0], NULL, BIT_TYPE, 3);
            }
#line 1908 "a51.tab.c"
    break;

  case 91: /* jbc_stmt: JBC bit ',' IDENTIFIER  */
#line 240 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], JBC_OP, yyvsp[-2], yyvsp[0], NULL, BIT_TYPE, 3);
            }
#line 1917 "a51.tab.c"
    break;

  case 92: /* jc_stmt: JC IDENTIFIER  */
#line 246 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JC_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1926 "a51.tab.c"
    break;

  case 93: /* jmp_stmt: JMP '@' A '+' DPTR  */
#line 252 "a51.y"
            {
              add_stmt(yyvsp[-4], JMP_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 1934 "a51.tab.c"
    break;

  case 94: /* jnb_stmt: JNB bit ',' IDENTIFIER  */
#line 257 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-3], JNB_OP, yyvsp[-2], yyvsp[0], NULL, BIT_TYPE, 3);
            }
#line 1943 "a51.tab.c"
    break;

  case 95: /* jnc_stmt: JNC IDENTIFIER  */
#line 263 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JNC_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1952 "a51.tab.c"
    break;

  case 96: /* jnz_stmt: JNZ IDENTIFIER  */
#line 269 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JNZ_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1961 "a51.tab.c"
    break;

  case 97: /* jz_stmt: JZ IDENTIFIER  */
#line 275 "a51.y"
            {
              insertSymbol(yyvsp[0], lc);
              add_stmt(yyvsp[-1], JZ_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
            }
#line 1970 "a51.tab.c"
    break;

  case 98: /* lcall_stmt: LCALL IDENTIFIER  */
#line 281 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], LCALL_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1979 "a51.tab.c"
    break;

  case 99: /* lcall_stmt: LCALL NUMBER  */
#line 286 "a51.y"
              {
                add_stmt(yyvsp[-1], LCALL_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1987 "a51.tab.c"
    break;

  case 100: /* ljmp_stmt: LJMP IDENTIFIER  */
#line 291 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], LJMP_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 1996 "a51.tab.c"
    break;

  case 101: /* ljmp_stmt: LJMP NUMBER  */
#line 296 "a51.y"
              {
                add_stmt(yyvsp[-1], LJMP_OP, yyvsp[0], NULL, NULL, ABSOLUTE, 3);
              }
#line 2004 "a51.tab.c"
    break;

  case 102: /* mov_stmt: MOV A ',' reg  */
#line 301 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xe0, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2012 "a51.tab.c"
    break;

  case 103: /* mov_stmt: MOV A ',' dir  */
#line 305 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xe0, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2020 "a51.tab.c"
    break;

  case 104: /* mov_stmt: MOV A ',' '@' ind_reg  */
#line 309 "a51.y"
            {
              add_stmt(yyvsp[-4], 0xe0, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2028 "a51.tab.c"
    break;

  case 105: /* mov_stmt: MOV A ',' '#' NUMBER  */
#line 313 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x70, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2036 "a51.tab.c"
    break;

  case 106: /* mov_stmt: MOV reg ',' A  */
#line 317 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xf0, yyvsp[-2], yyvsp[0], NULL, REG_A, 3);
            }
#line 2044 "a51.tab.c"
    break;

  case 107: /* mov_stmt: MOV reg ',' dir  */
#line 321 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xa0, yyvsp[-2], yyvsp[0], NULL, REG_DIRECT, 3);
            }
#line 2052 "a51.tab.c"
    break;

  case 108: /* mov_stmt: MOV reg ',' '#' NUMBER  */
#line 325 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x70, yyvsp[-3], yyvsp[0], NULL, REG_IMMEDIATE, 3);
            }
#line 2060 "a51.tab.c"
    break;

  case 109: /* mov_stmt: MOV dir ',' A  */
#line 329 "a51.y"
            {
              add_stmt(yyvsp[-3], 0xf0, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 2068 "a51.tab.c"
    break;

  case 110: /* mov_stmt: MOV dir ',' reg  */
#line 333 "a51.y"
            {
              add_stmt(yyvsp[-3], 0x80, yyvsp[-2], yyvsp[0], NULL, DIRECT_REG, 3);
            }
#line 2076 "a51.tab.c"
    break;

  case 111: /* mov_stmt: MOV dir ',' dir  */
#line 337 "a51.y"
            {
              add_stmt(yyvsp[-3], 0x80, yyvsp[-2], yyvsp[0], NULL, DIRECT_DIRECT, 3);
            }
#line 2084 "a51.tab.c"
    break;

  case 112: /* mov_stmt: MOV dir ',' '@' ind_reg  */
#line 341 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x80, yyvsp[-3], yyvsp[0], NULL, DIRECT_IND_REG, 3);
            }
#line 2092 "a51.tab.c"
    break;

  case 113: /* mov_stmt: MOV dir ',' '#' NUMBER  */
#line 345 "a51.y"
            {
              add_stmt(yyvsp[-4], 0x70, yyvsp[-3], yyvsp[0], NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2100 "a51.tab.c"
    break;

  case 114: /* mov_stmt: MOV '@' ind_reg ',' A  */
#line 349 "a51.y"
            {
              add_stmt(yyvsp[-4], 0xf0, yyvsp[-2], yyvsp[0], NULL, IND_REG_A, 3);
            }
#line 2108 "a51.tab.c"
    break;

  case 115: /* mov_stmt: MOV '@' ind_reg ',' dir  */
#line 353 "a51.y"
            {
              add_stmt(yyvsp[-4], 0xa0, yyvsp[-2], yyvsp[0], NULL, IND_REG_DIRECT, 3);
            }
#line 2116 "a51.tab.c"
    break;

  case 116: /* mov_stmt: MOV '@' ind_reg ',' '#' NUMBER  */
#line 357 "a51.y"
            {
              add_stmt(yyvsp[-5], 0x70, yyvsp[-3], yyvsp[0], NULL, IND_REG_IMMEDIATE, 3);
            }
#line 2124 "a51.tab.c"
    break;

  case 117: /* mov_stmt: MOV C ',' bit  */
#line 361 "a51.y"
            {
              /* Add to ... */
            }
#line 2132 "a51.tab.c"
    break;

  case 118: /* mov_stmt: MOV bit ',' C  */
#line 365 "a51.y"
            {
              /* Add to ... */
            }
#line 2140 "a51.tab.c"
    break;

  case 119: /* mov_stmt: MOV DPTR ',' '#' NUMBER  */
#line 369 "a51.y"
            {
              /* Add to ... */
            }
#line 2148 "a51.tab.c"
    break;

  case 120: /* movc_stmt: MOVC A ',' '@' A '+' DPTR  */
#line 374 "a51.y"
              {
                /* Add to ... */
              }
#line 2156 "a51.tab.c"
    break;

  case 121: /* movc_stmt: MOVC A ',' '@' A '+' PC  */
#line 378 "a51.y"
              {
                /* Add to ... */
              }
#line 2164 "a51.tab.c"
    break;

  case 122: /* movx_stmt: MOVX A ',' '@' ind_reg  */
#line 383 "a51.y"
              {
                /* Add to ... */
              }
#line 2172 "a51.tab.c"
    break;

  case 123: /* movx_stmt: MOVX A ',' '@' DPTR  */
#line 387 "a51.y"
              {
                /* Add to ... */
              }
#line 2180 "a51.tab.c"
    break;

  case 124: /* movx_stmt: MOVX '@' ind_reg ',' A  */
#line 391 "a51.y"
              {
                /* Add to ... */
              }
#line 2188 "a51.tab.c"
    break;

  case 125: /* movx_stmt: MOVX '@' DPTR ',' A  */
#line 395 "a51.y"
              {
                /* Add to ... */
              }
#line 2196 "a51.tab.c"
    break;

  case 126: /* mul_stmt: MUL AB  */
#line 400 "a51.y"
            {
              add_stmt(yyvsp[-1], MUL_OP, yyvsp[0], NULL, NULL, A_TYPE, 3);
            }
#line 2204 "a51.tab.c"
    break;

  case 127: /* nop_stmt: NOP  */
#line 405 "a51.y"
            {
              add_stmt(yyvsp[0], NOP_OP, NULL, NULL, NULL, NULL, 3);
            }
#line 2212 "a51.tab.c"
    break;

  case 128: /* orl_stmt: ORL A ',' reg  */
#line 410 "a51.y"
            {
              add_stmt(yyvsp[-3], ORL_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2220 "a51.tab.c"
    break;

  case 129: /* orl_stmt: ORL A ',' dir  */
#line 414 "a51.y"
            {
              add_stmt(yyvsp[-3], ORL_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2228 "a51.tab.c"
    break;

  case 130: /* orl_stmt: ORL A ',' '@' ind_reg  */
#line 418 "a51.y"
            {
              add_stmt(yyvsp[-4], ORL_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2236 "a51.tab.c"
    break;

  case 131: /* orl_stmt: ORL A ',' '#' NUMBER  */
#line 422 "a51.y"
            {
              add_stmt(yyvsp[-4], ORL_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2244 "a51.tab.c"
    break;

  case 132: /* orl_stmt: ORL dir ',' A  */
#line 426 "a51.y"
            {
              add_stmt(yyvsp[-3], ORL_OP, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 2252 "a51.tab.c"
    break;

  case 133: /* orl_stmt: ORL dir ',' '#' NUMBER  */
#line 430 "a51.y"
            {
              add_stmt(yyvsp[-4], ORL_OP, yyvsp[-3], yyvsp[0], NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2260 "a51.tab.c"
    break;

  case 134: /* orl_stmt: ORL C ',' bit  */
#line 434 "a51.y"
            {
              /* Add to ... */
            }
#line 2268 "a51.tab.c"
    break;

  case 135: /* orl_stmt: ORL C ',' '/' bit  */
#line 438 "a51.y"
            {
              /* Add to ... */
            }
#line 2276 "a51.tab.c"
    break;

  case 136: /* pop_stmt: POP dir  */
#line 443 "a51.y"
            {
              add_stmt(yyvsp[-1], POP_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
            }
#line 2284 "a51.tab.c"
    break;

  case 137: /* push_stmt: PUSH dir  */
#line 448 "a51.y"
              {
                add_stmt(yyvsp[-1], PUSH_OP, yyvsp[0], NULL, NULL, DIRECT_TYPE, 3);
              }
#line 2292 "a51.tab.c"
    break;

  case 138: /* ret_stmt: RET  */
#line 453 "a51.y"
            {
              add_stmt(yyvsp[0], RET_OP, NULL, NULL, NULL, NULL, 3); 
            }
#line 2300 "a51.tab.c"
    break;

  case 139: /* reti_stmt: RETI  */
#line 458 "a51.y"
              {
                add_stmt(yyvsp[0], RETI_OP, NULL, NULL, NULL, NULL, 3); 
              }
#line 2308 "a51.tab.c"
    break;

  case 140: /* rl_stmt: RL A  */
#line 463 "a51.y"
            {
              add_stmt(yyvsp[-1], RL_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2316 "a51.tab.c"
    break;

  case 141: /* rlc_stmt: RLC A  */
#line 468 "a51.y"
            {
              add_stmt(yyvsp[-1], RLC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2324 "a51.tab.c"
    break;

  case 142: /* rr_stmt: RR A  */
#line 473 "a51.y"
            {
              add_stmt(yyvsp[-1], RR_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2332 "a51.tab.c"
    break;

  case 143: /* rrc_stmt: RRC A  */
#line 478 "a51.y"
            {
              add_stmt(yyvsp[-1], RRC_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
            }
#line 2340 "a51.tab.c"
    break;

  case 144: /* setb_stmt: SETB C  */
#line 483 "a51.y"
              {
                add_stmt(yyvsp[-1], SETB_OP, yyvsp[0], NULL, NULL, C_TYPE, 3);
              }
#line 2348 "a51.tab.c"
    break;

  case 145: /* setb_stmt: SETB bit  */
#line 487 "a51.y"
              {
                add_stmt(yyvsp[-1], SETB_OP, yyvsp[0], NULL, NULL, BIT_TYPE, 3);
              }
#line 2356 "a51.tab.c"
    break;

  case 146: /* sjmp_stmt: SJMP IDENTIFIER  */
#line 492 "a51.y"
              {
                insertSymbol(yyvsp[0], lc);
                add_stmt(yyvsp[-1], SJMP_OP, yyvsp[0], NULL, NULL, RELATIVE, 3);
              }
#line 2365 "a51.tab.c"
    break;

  case 147: /* subb_stmt: SUBB A ',' reg  */
#line 498 "a51.y"
            {
              add_stmt(yyvsp[-3], SUBB_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2373 "a51.tab.c"
    break;

  case 148: /* subb_stmt: SUBB A ',' dir  */
#line 502 "a51.y"
            {
              add_stmt(yyvsp[-3], SUBB_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2381 "a51.tab.c"
    break;

  case 149: /* subb_stmt: SUBB A ',' '@' ind_reg  */
#line 506 "a51.y"
            {
              add_stmt(yyvsp[-4], SUBB_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2389 "a51.tab.c"
    break;

  case 150: /* subb_stmt: SUBB A ',' '#' NUMBER  */
#line 510 "a51.y"
            {
              add_stmt(yyvsp[-4], SUBB_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2397 "a51.tab.c"
    break;

  case 151: /* swap_stmt: SWAP A  */
#line 515 "a51.y"
              {
                add_stmt(yyvsp[-1], SWAP_OP, yyvsp[0], NULL, NULL, A_TYPE, 3); 
              }
#line 2405 "a51.tab.c"
    break;

  case 152: /* xch_stmt: XCH A ',' reg  */
#line 520 "a51.y"
            {
              add_stmt(yyvsp[-3], XCH_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2413 "a51.tab.c"
    break;

  case 153: /* xch_stmt: XCH A ',' dir  */
#line 524 "a51.y"
            {
              add_stmt(yyvsp[-3], XCH_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2421 "a51.tab.c"
    break;

  case 154: /* xch_stmt: XCH A ',' '@' ind_reg  */
#line 528 "a51.y"
            {
              add_stmt(yyvsp[-4], XCH_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2429 "a51.tab.c"
    break;

  case 155: /* xchd_stmt: XCHD A ',' '@' ind_reg  */
#line 533 "a51.y"
              {
                add_stmt(yyvsp[-4], XCHD_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
              }
#line 2437 "a51.tab.c"
    break;

  case 156: /* xrl_stmt: XRL A ',' reg  */
#line 538 "a51.y"
            {
              add_stmt(yyvsp[-3], XRL_OP, yyvsp[-2], yyvsp[0], NULL, A_REG_TYPE, 3);
            }
#line 2445 "a51.tab.c"
    break;

  case 157: /* xrl_stmt: XRL A ',' dir  */
#line 542 "a51.y"
            {
              add_stmt(yyvsp[-3], XRL_OP, yyvsp[-2], yyvsp[0], NULL, A_DIRECT, 3);
            }
#line 2453 "a51.tab.c"
    break;

  case 158: /* xrl_stmt: XRL A ',' '@' ind_reg  */
#line 546 "a51.y"
            {
              add_stmt(yyvsp[-4], XRL_OP, yyvsp[-3], yyvsp[0], NULL, A_IND_REG_TYPE, 3);
            }
#line 2461 "a51.tab.c"
    break;

  case 159: /* xrl_stmt: XRL A ',' '#' NUMBER  */
#line 550 "a51.y"
            {
              add_stmt(yyvsp[-4], XRL_OP, yyvsp[-3], yyvsp[0], NULL, A_IMMEDIATE, 3);
            }
#line 2469 "a51.tab.c"
    break;

  case 160: /* xrl_stmt: XRL dir ',' A  */
#line 554 "a51.y"
            {
              add_stmt(yyvsp[-3], XRL_OP, yyvsp[-2], yyvsp[0], NULL, DIRECT_A, 3);
            }
#line 2477 "a51.tab.c"
    break;

  case 161: /* xrl_stmt: XRL dir ',' '#' NUMBER  */
#line 558 "a51.y"
            {
              add_stmt(yyvsp[-4], XRL_OP, yyvsp[-3], yyvsp[0], NULL, DIRECT_IMMEADIATE, 3);
            }
#line 2485 "a51.tab.c"
    break;

  case 162: /* label: IDENTIFIER ':'  */
#line 563 "a51.y"
        {
          insertSymbol(yyvsp[-1], lc);
        }
#line 2493 "a51.tab.c"
    break;


#line 2497 "a51.tab.c"

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

#line 575 "a51.y"


int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

