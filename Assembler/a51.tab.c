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
#include "code_gen.h"

int yylex(void);
int yyerror(char * message);


#line 84 "a51.tab.c"

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
  YYSYMBOL_ACALL = 3,                      /* ACALL  */
  YYSYMBOL_ADD = 4,                        /* ADD  */
  YYSYMBOL_ADDC = 5,                       /* ADDC  */
  YYSYMBOL_AJMP = 6,                       /* AJMP  */
  YYSYMBOL_ANL = 7,                        /* ANL  */
  YYSYMBOL_CJNE = 8,                       /* CJNE  */
  YYSYMBOL_CLR = 9,                        /* CLR  */
  YYSYMBOL_CPL = 10,                       /* CPL  */
  YYSYMBOL_DA = 11,                        /* DA  */
  YYSYMBOL_DEC = 12,                       /* DEC  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_DJNZ = 14,                      /* DJNZ  */
  YYSYMBOL_INC = 15,                       /* INC  */
  YYSYMBOL_JB = 16,                        /* JB  */
  YYSYMBOL_JBC = 17,                       /* JBC  */
  YYSYMBOL_JC = 18,                        /* JC  */
  YYSYMBOL_JMP = 19,                       /* JMP  */
  YYSYMBOL_JNB = 20,                       /* JNB  */
  YYSYMBOL_JNC = 21,                       /* JNC  */
  YYSYMBOL_JNZ = 22,                       /* JNZ  */
  YYSYMBOL_JZ = 23,                        /* JZ  */
  YYSYMBOL_LCALL = 24,                     /* LCALL  */
  YYSYMBOL_LJMP = 25,                      /* LJMP  */
  YYSYMBOL_MOV = 26,                       /* MOV  */
  YYSYMBOL_MOVC = 27,                      /* MOVC  */
  YYSYMBOL_MUL = 28,                       /* MUL  */
  YYSYMBOL_NOP = 29,                       /* NOP  */
  YYSYMBOL_ORL = 30,                       /* ORL  */
  YYSYMBOL_POP = 31,                       /* POP  */
  YYSYMBOL_PUSH = 32,                      /* PUSH  */
  YYSYMBOL_RET = 33,                       /* RET  */
  YYSYMBOL_RETI = 34,                      /* RETI  */
  YYSYMBOL_RL = 35,                        /* RL  */
  YYSYMBOL_RLC = 36,                       /* RLC  */
  YYSYMBOL_RR = 37,                        /* RR  */
  YYSYMBOL_RRC = 38,                       /* RRC  */
  YYSYMBOL_SETB = 39,                      /* SETB  */
  YYSYMBOL_SJMP = 40,                      /* SJMP  */
  YYSYMBOL_SUBB = 41,                      /* SUBB  */
  YYSYMBOL_SWAP = 42,                      /* SWAP  */
  YYSYMBOL_XCH = 43,                       /* XCH  */
  YYSYMBOL_XCHD = 44,                      /* XCHD  */
  YYSYMBOL_XRL = 45,                       /* XRL  */
  YYSYMBOL_STRING = 46,                    /* STRING  */
  YYSYMBOL_SEG = 47,                       /* SEG  */
  YYSYMBOL_AREG = 48,                      /* AREG  */
  YYSYMBOL_REG = 49,                       /* REG  */
  YYSYMBOL_A = 50,                         /* A  */
  YYSYMBOL_C = 51,                         /* C  */
  YYSYMBOL_B = 52,                         /* B  */
  YYSYMBOL_PC = 53,                        /* PC  */
  YYSYMBOL_SFR = 54,                       /* SFR  */
  YYSYMBOL_AB = 55,                        /* AB  */
  YYSYMBOL_DPTR = 56,                      /* DPTR  */
  YYSYMBOL_NUMBER = 57,                    /* NUMBER  */
  YYSYMBOL_RAM_BIT_ADDRESS = 58,           /* RAM_BIT_ADDRESS  */
  YYSYMBOL_SFR_BIT_ADDRESS = 59,           /* SFR_BIT_ADDRESS  */
  YYSYMBOL_COMMA = 60,                     /* COMMA  */
  YYSYMBOL_HASH_TAG = 61,                  /* HASH_TAG  */
  YYSYMBOL_AT = 62,                        /* AT  */
  YYSYMBOL_AT_SIGN = 63,                   /* AT_SIGN  */
  YYSYMBOL_TWO_DOTS = 64,                  /* TWO_DOTS  */
  YYSYMBOL_SUM = 65,                       /* SUM  */
  YYSYMBOL_MINUS = 66,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 67,                  /* MULTIPLY  */
  YYSYMBOL_MODULE = 68,                    /* MODULE  */
  YYSYMBOL_EQ = 69,                        /* EQ  */
  YYSYMBOL_LT = 70,                        /* LT  */
  YYSYMBOL_MT = 71,                        /* MT  */
  YYSYMBOL_DIVISION = 72,                  /* DIVISION  */
  YYSYMBOL_OP_PAR = 73,                    /* OP_PAR  */
  YYSYMBOL_CL_PAR = 74,                    /* CL_PAR  */
  YYSYMBOL_SHIFT_L = 75,                   /* SHIFT_L  */
  YYSYMBOL_SHIFT_R = 76,                   /* SHIFT_R  */
  YYSYMBOL_ALIGN = 77,                     /* ALIGN  */
  YYSYMBOL_EVEN = 78,                      /* EVEN  */
  YYSYMBOL_ORG = 79,                       /* ORG  */
  YYSYMBOL_EQU = 80,                       /* EQU  */
  YYSYMBOL_USING = 81,                     /* USING  */
  YYSYMBOL_DB = 82,                        /* DB  */
  YYSYMBOL_DD = 83,                        /* DD  */
  YYSYMBOL_DW = 84,                        /* DW  */
  YYSYMBOL_DBIT = 85,                      /* DBIT  */
  YYSYMBOL_DS = 86,                        /* DS  */
  YYSYMBOL_END = 87,                       /* END  */
  YYSYMBOL_IDENTIFIER = 88,                /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_stmt_seq = 90,                  /* stmt_seq  */
  YYSYMBOL_stmt = 91,                      /* stmt  */
  YYSYMBOL_direct_stmt = 92,               /* direct_stmt  */
  YYSYMBOL_inst_stmt = 93,                 /* inst_stmt  */
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
  YYSYMBOL_mul_stmt = 119,                 /* mul_stmt  */
  YYSYMBOL_nop_stmt = 120,                 /* nop_stmt  */
  YYSYMBOL_orl_stmt = 121,                 /* orl_stmt  */
  YYSYMBOL_pop_stmt = 122,                 /* pop_stmt  */
  YYSYMBOL_push_stmt = 123,                /* push_stmt  */
  YYSYMBOL_ret_stmt = 124,                 /* ret_stmt  */
  YYSYMBOL_reti_stmt = 125,                /* reti_stmt  */
  YYSYMBOL_rl_stmt = 126,                  /* rl_stmt  */
  YYSYMBOL_rlc_stmt = 127,                 /* rlc_stmt  */
  YYSYMBOL_rr_stmt = 128,                  /* rr_stmt  */
  YYSYMBOL_rrc_stmt = 129,                 /* rrc_stmt  */
  YYSYMBOL_setb_stmt = 130,                /* setb_stmt  */
  YYSYMBOL_sjmp_stmt = 131,                /* sjmp_stmt  */
  YYSYMBOL_subb_stmt = 132,                /* subb_stmt  */
  YYSYMBOL_swap_stmt = 133,                /* swap_stmt  */
  YYSYMBOL_xch_stmt = 134,                 /* xch_stmt  */
  YYSYMBOL_xchd_stmt = 135,                /* xchd_stmt  */
  YYSYMBOL_xrl_stmt = 136,                 /* xrl_stmt  */
  YYSYMBOL_res_stmt = 137,                 /* res_stmt  */
  YYSYMBOL_138_1 = 138,                    /* $@1  */
  YYSYMBOL_init_stmt = 139,                /* init_stmt  */
  YYSYMBOL_init_seq = 140,                 /* init_seq  */
  YYSYMBOL_init_el = 141,                  /* init_el  */
  YYSYMBOL_seg_stmt = 142,                 /* seg_stmt  */
  YYSYMBOL_end_stmt = 143,                 /* end_stmt  */
  YYSYMBOL_label = 144,                    /* label  */
  YYSYMBOL_org = 145,                      /* org  */
  YYSYMBOL_align = 146,                    /* align  */
  YYSYMBOL_even = 147,                     /* even  */
  YYSYMBOL_equ = 148,                      /* equ  */
  YYSYMBOL_exp = 149,                      /* exp  */
  YYSYMBOL_simple_exp = 150,               /* simple_exp  */
  YYSYMBOL_term = 151,                     /* term  */
  YYSYMBOL_factor = 152,                   /* factor  */
  YYSYMBOL_dir = 153,                      /* dir  */
  YYSYMBOL_bit = 154                       /* bit  */
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
#define YYFINAL  200
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   604

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  377

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   343


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
      85,    86,    87,    88
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    46,    48,    48,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    58,    63,
      67,    71,    75,    80,    84,    88,    92,    97,   102,   106,
     110,   114,   118,   122,   126,   130,   135,   139,   143,   147,
     152,   156,   160,   165,   169,   173,   178,   183,   187,   191,
     195,   200,   205,   209,   214,   218,   222,   226,   230,   235,
     240,   245,   250,   255,   260,   265,   270,   275,   280,   286,
     290,   294,   298,   302,   306,   310,   314,   318,   322,   326,
     330,   334,   338,   342,   346,   350,   354,   359,   363,   368,
     373,   378,   382,   386,   390,   394,   398,   402,   406,   411,
     416,   421,   426,   431,   436,   441,   446,   451,   455,   460,
     465,   469,   473,   477,   482,   487,   491,   495,   500,   505,
     509,   513,   517,   521,   525,   531,   530,   554,   554,   554,
     556,   556,   558,   568,   573,   577,   594,   607,   612,   621,
     630,   643,   648,   653,   661,   672,   675,   678,   681,   684,
     687,   690,   694,   697,   700,   704,   707,   710,   712,   716,
     720,   723,   727,   731,   735,   737,   737
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
  "\"end of file\"", "error", "\"invalid token\"", "ACALL", "ADD", "ADDC",
  "AJMP", "ANL", "CJNE", "CLR", "CPL", "DA", "DEC", "DIV", "DJNZ", "INC",
  "JB", "JBC", "JC", "JMP", "JNB", "JNC", "JNZ", "JZ", "LCALL", "LJMP",
  "MOV", "MOVC", "MUL", "NOP", "ORL", "POP", "PUSH", "RET", "RETI", "RL",
  "RLC", "RR", "RRC", "SETB", "SJMP", "SUBB", "SWAP", "XCH", "XCHD", "XRL",
  "STRING", "SEG", "AREG", "REG", "A", "C", "B", "PC", "SFR", "AB", "DPTR",
  "NUMBER", "RAM_BIT_ADDRESS", "SFR_BIT_ADDRESS", "COMMA", "HASH_TAG",
  "AT", "AT_SIGN", "TWO_DOTS", "SUM", "MINUS", "MULTIPLY", "MODULE", "EQ",
  "LT", "MT", "DIVISION", "OP_PAR", "CL_PAR", "SHIFT_L", "SHIFT_R",
  "ALIGN", "EVEN", "ORG", "EQU", "USING", "DB", "DD", "DW", "DBIT", "DS",
  "END", "IDENTIFIER", "$accept", "stmt_seq", "stmt", "direct_stmt",
  "inst_stmt", "acall_stmt", "add_stmt", "addc_stmt", "ajmp_stmt",
  "anl_stmt", "cjne_stmt", "clr_stmt", "cpl_stmt", "da_stmt", "dec_stmt",
  "div_stmt", "djnz_stmt", "inc_stmt", "jb_stmt", "jbc_stmt", "jc_stmt",
  "jmp_stmt", "jnb_stmt", "jnc_stmt", "jnz_stmt", "jz_stmt", "lcall_stmt",
  "ljmp_stmt", "mov_stmt", "movc_stmt", "mul_stmt", "nop_stmt", "orl_stmt",
  "pop_stmt", "push_stmt", "ret_stmt", "reti_stmt", "rl_stmt", "rlc_stmt",
  "rr_stmt", "rrc_stmt", "setb_stmt", "sjmp_stmt", "subb_stmt",
  "swap_stmt", "xch_stmt", "xchd_stmt", "xrl_stmt", "res_stmt", "$@1",
  "init_stmt", "init_seq", "init_el", "seg_stmt", "end_stmt", "label",
  "org", "align", "even", "equ", "exp", "simple_exp", "term", "factor",
  "dir", "bit", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     516,   -72,   -25,    -2,   -36,   138,   -41,     5,    75,     7,
     248,    19,   393,   130,   -24,   -24,   -16,    58,   -24,    35,
      44,    50,    54,    56,   118,    96,    98,   -73,   375,    70,
      70,   -73,   -73,   121,   123,   128,   133,     8,    97,   152,
     157,   164,   165,   430,   167,   140,   -73,   140,   -31,   -31,
     -31,   140,   -73,   -61,    73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   162,   171,   -73,   -73,   178,   179,   -73,   -73,   -73,
     140,   -73,    59,     4,   -14,   -73,   180,   181,   182,   194,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   195,   -73,   -73,   190,   193,   -73,   -73,   -73,   206,
     -73,   199,   201,   -73,   177,   204,   -73,   -73,   -73,   -73,
     -73,   205,   207,   209,   213,   226,   217,   220,   221,   -73,
     227,   228,   229,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   230,   -73,   231,   232,   233,   234,   142,    59,
      59,   -73,   -73,   241,   -73,   241,   241,    59,   257,   366,
     -73,   -73,   265,   285,   298,   -54,    66,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   -49,   245,   413,
     247,   -73,   225,   235,   -73,   236,   237,   243,   239,   144,
     311,   -24,   255,   258,   222,   269,   267,   328,   -48,   -30,
     348,   389,   268,   361,   -29,   -73,   -73,   -31,   250,   -73,
     -73,    59,   -73,   140,   283,   -73,   -73,   140,   284,   -73,
     -73,   140,   291,   -73,   -24,   -73,   -73,     4,     4,     4,
     -14,   -14,   -73,   -73,   -73,   -73,   -73,   -73,   140,   140,
     140,   281,   282,   -73,   -73,   -73,   -73,   288,   -73,   -73,
     140,   -73,   -73,   140,   296,   -73,   -73,   140,   403,   -73,
     -73,   140,   302,   -73,   -73,   304,   -73,   140,   307,   -73,
     -24,   -73,   -73,   140,   -73,   140,   308,   -73,   -73,   315,
     -73,   317,   -73,   140,   320,   -73,   -73,   140,   -73,   140,
      59,   -73,    59,   -73,    59,   -73,   -73,    59,   -32,   -27,
     287,   140,   -73,    59,    59,   -73,    59,   -73,   140,   -73,
      59,   -73,   305,    59,   -73,   -73,    59,    59,   -73,   -73,
     -73,    59,   -73,    59,    59,   290,   293,   -73,   -20,    59,
      12,   -73,   -73,   295,   -73,   -73,   -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,   141,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,     0,   182,     0,     0,     0,
       0,     0,   177,     0,     0,     2,     5,     4,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    56,    57,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    12,    13,    11,    14,     6,     7,     8,     9,    10,
      58,     0,     0,    67,   201,     0,     0,   203,   202,   199,
       0,   200,   204,   188,   191,   197,     0,     0,     0,     0,
      80,    81,   205,   206,    82,    83,    84,    85,    86,    88,
      87,     0,    89,    91,     0,     0,    95,    94,    98,     0,
      96,     0,     0,   101,     0,     0,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,     0,   139,   140,   143,   144,   145,   146,   147,
     148,   149,     0,   154,     0,     0,     0,     0,     0,   181,
     180,   172,   173,   167,   170,   169,   168,   165,   178,     0,
       1,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,   176,     0,     0,   179,
     184,   183,    59,     0,     0,    60,    63,     0,     0,    64,
      68,     0,     0,    69,     0,    74,   198,   187,   185,   186,
     189,   190,   192,   194,   193,   196,   195,    72,     0,     0,
       0,     0,     0,    92,    93,    99,   100,     0,   103,   113,
       0,   114,   109,     0,     0,   110,   124,     0,     0,   117,
     116,     0,     0,   118,   125,     0,   131,     0,     0,   132,
       0,   137,   135,     0,   150,     0,     0,   151,   155,     0,
     156,     0,   159,     0,     0,   160,   163,     0,   171,     0,
      62,    61,    66,    65,    71,    70,    75,    73,     0,     0,
       0,     0,   102,   115,   112,   111,   126,   121,     0,   122,
     120,   119,     0,   134,   133,   138,   136,   153,   152,   157,
     158,   162,   161,   164,   166,     0,     0,    76,     0,   123,
       0,    78,    77,     0,   128,   127,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -73,   -73,   325,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   160,   141,   189,   -73,   -73,   -73,   -73,   -73,   -73,
     -45,   -60,    14,   -50,    17,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   248,
     102,   193,   194,   103,   104,   105,   106,   107,   108,   109,
     122,   123,   124,   125,   126,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     189,   277,   190,   198,   132,   133,   197,   137,   127,   128,
     132,   133,   278,   151,   152,   191,   110,   155,   264,   199,
     312,   326,   129,   167,   310,   111,   192,   142,   365,   145,
     150,   313,   327,   366,   132,   133,   180,   207,   208,   209,
     373,   166,   207,   208,   209,   172,   173,   174,   112,   207,
     208,   209,   113,   212,   213,   130,   131,   138,   214,   179,
     187,   215,   216,   132,   133,   374,   132,   133,   375,   210,
     211,   114,   153,   200,   143,   206,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,   114,
      44,   154,   117,   156,   118,   135,   136,   119,   207,   208,
     209,   114,   157,   132,   133,   207,   208,   209,   158,   114,
     266,   114,   159,   120,   160,   114,   168,   267,   268,   269,
      45,    46,    47,   169,   251,    48,    49,    50,   121,    51,
      52,    53,   272,   273,   274,   275,   276,   161,   162,   163,
     117,   175,   118,   176,   164,   119,   132,   133,   177,   146,
     147,   165,   117,   178,   118,   181,   148,   119,   115,   116,
     117,   120,   118,   149,   289,   119,   117,   119,   118,   245,
     246,   119,   182,   120,   265,   290,   121,   183,   330,   195,
     196,   120,   332,   120,   184,   185,   334,   120,   121,   255,
     259,   263,   202,   114,   270,   271,   121,   227,   121,   188,
     296,   203,   121,   337,   338,   339,   281,   311,   204,   205,
     217,   218,   219,   220,   221,   343,   291,   295,   344,   114,
     222,   303,   346,   223,   309,   224,   350,   317,   320,   225,
     325,   226,   353,   336,   228,   229,   114,   230,   356,   231,
     357,   299,   300,   232,   117,   233,   118,   234,   361,   119,
     235,   236,   363,   301,   364,   302,   114,   237,   238,   239,
     240,   241,   242,   243,   244,   120,   368,   139,   140,   114,
     117,   247,   118,   369,    44,   119,   279,   282,   287,   355,
     121,   141,   114,   283,   252,   349,   297,   117,   298,   118,
     304,   120,   119,   284,   285,   286,   253,   288,   254,   114,
     305,   321,   331,   333,   256,   329,   121,   117,   120,   118,
     335,   340,   119,   341,   342,   345,   257,   260,   258,   114,
     117,   351,   118,   121,   352,   119,   354,   358,   120,   261,
     292,   262,   114,   117,   359,   118,   360,   114,   119,   362,
     370,   120,   293,   121,   294,   367,   114,   306,   371,   201,
     117,   372,   118,   376,   120,   119,   121,   249,   328,   307,
     114,   308,     0,     0,   114,     0,     0,   314,     0,   121,
     117,   120,   118,     0,   114,   119,     0,     0,     0,   315,
     322,   316,     0,   117,   114,   118,   121,     0,   119,     0,
     250,   120,   323,   119,   324,   170,   171,   117,     0,   118,
       0,   114,   119,     0,   120,     0,   121,     0,   318,   120,
       0,   117,   144,   118,     0,   117,   119,   118,   120,   121,
     119,     0,   319,   347,   121,   117,     0,   118,     0,     0,
     119,     0,   120,   121,   348,   117,   120,   118,     0,     0,
     119,     0,     0,     0,   280,     0,   120,   121,     0,     0,
     186,   121,   117,     0,   118,     0,   120,   119,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    47,     0,     0,    48,    49,
      50,     0,    51,    52,    53
};

static const yytype_int16 yycheck[] =
{
      45,    50,    47,    64,    58,    59,    51,     8,    49,    50,
      58,    59,    61,    14,    15,    46,    88,    18,    72,    80,
      50,    50,    63,    24,    72,    50,    57,    10,    60,    12,
      13,    61,    61,    60,    58,    59,    37,    69,    70,    71,
      60,    24,    69,    70,    71,    28,    29,    30,    50,    69,
      70,    71,    88,    67,    68,    50,    51,    50,    72,    51,
      43,    75,    76,    58,    59,    53,    58,    59,    56,    65,
      66,     1,    88,     0,    55,   120,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     1,
      47,    63,    52,    88,    54,    50,    51,    57,    69,    70,
      71,     1,    88,    58,    59,    69,    70,    71,    88,     1,
      74,     1,    88,    73,    88,     1,    50,   207,   208,   209,
      77,    78,    79,    55,   199,    82,    83,    84,    88,    86,
      87,    88,   212,   213,   214,   215,   216,    49,    50,    51,
      52,    50,    54,    50,    56,    57,    58,    59,    50,    49,
      50,    63,    52,    50,    54,    88,    56,    57,    50,    51,
      52,    73,    54,    63,    50,    57,    52,    57,    54,    57,
      58,    57,    50,    73,   205,    61,    88,    50,   253,    49,
      50,    73,   257,    73,    50,    50,   261,    73,    88,   202,
     203,   204,    60,     1,   210,   211,    88,    50,    88,    62,
     231,    60,    88,   278,   279,   280,   219,   238,    60,    60,
      60,    60,    60,    49,    49,   290,   229,   230,   293,     1,
      60,   234,   297,    60,   237,    49,   301,   240,   241,    60,
     243,    60,   307,   264,    60,    60,     1,    60,   313,    60,
     315,    49,    50,    60,    52,    49,    54,    60,   323,    57,
      60,    60,   327,    61,   329,    63,     1,    60,    60,    60,
      60,    60,    60,    60,    60,    73,   341,    49,    50,     1,
      52,    60,    54,   348,    47,    57,    61,    60,    65,   310,
      88,    63,     1,    88,    49,   298,    61,    52,    60,    54,
      51,    73,    57,    88,    88,    88,    61,    88,    63,     1,
      63,    63,    49,    49,    49,    85,    88,    52,    73,    54,
      49,    60,    57,    61,    56,    49,    61,    49,    63,     1,
      52,    49,    54,    88,    50,    57,    49,    49,    73,    61,
      49,    63,     1,    52,    49,    54,    49,     1,    57,    49,
      65,    73,    61,    88,    63,    88,     1,    49,    88,    54,
      52,    88,    54,    88,    73,    57,    88,   198,   247,    61,
       1,    63,    -1,    -1,     1,    -1,    -1,    49,    -1,    88,
      52,    73,    54,    -1,     1,    57,    -1,    -1,    -1,    61,
      49,    63,    -1,    52,     1,    54,    88,    -1,    57,    -1,
      54,    73,    61,    57,    63,    50,    51,    52,    -1,    54,
      -1,     1,    57,    -1,    73,    -1,    88,    -1,    49,    73,
      -1,    52,    49,    54,    -1,    52,    57,    54,    73,    88,
      57,    -1,    63,    50,    88,    52,    -1,    54,    -1,    -1,
      57,    -1,    73,    88,    61,    52,    73,    54,    -1,    -1,
      57,    -1,    -1,    -1,    61,    -1,    73,    88,    -1,    -1,
      50,    88,    52,    -1,    54,    -1,    73,    57,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    -1,    -1,    82,    83,
      84,    -1,    86,    87,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    47,    77,    78,    79,    82,    83,
      84,    86,    87,    88,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   139,   142,   143,   144,   145,   146,   147,   148,
      88,    50,    50,    88,     1,    50,    51,    52,    54,    57,
      73,    88,   149,   150,   151,   152,   153,    49,    50,    63,
      50,    51,    58,    59,   154,    50,    51,   154,    50,    49,
      50,    63,   153,    55,    49,   153,    49,    50,    56,    63,
     153,   154,   154,    88,    63,   154,    88,    88,    88,    88,
      88,    49,    50,    51,    56,    63,   153,   154,    50,    55,
      50,    51,   153,   153,   153,    50,    50,    50,    50,    51,
     154,    88,    50,    50,    50,    50,    50,   153,    62,   149,
     149,    46,    57,   140,   141,   140,   140,   149,    64,    80,
       0,    91,    60,    60,    60,    60,   149,    69,    70,    71,
      65,    66,    67,    68,    72,    75,    76,    60,    60,    60,
      49,    49,    60,    60,    49,    60,    60,    50,    60,    60,
      60,    60,    60,    49,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    57,    58,    60,   138,   142,
      54,   149,    49,    61,    63,   153,    49,    61,    63,   153,
      49,    61,    63,   153,    72,   154,    74,   150,   150,   150,
     151,   151,   152,   152,   152,   152,   152,    50,    61,    61,
      61,   153,    60,    88,    88,    88,    88,    65,    88,    50,
      61,   153,    49,    61,    63,   153,   154,    61,    60,    49,
      50,    61,    63,   153,    51,    63,    49,    61,    63,   153,
      72,   154,    50,    61,    49,    61,    63,   153,    49,    63,
     153,    63,    49,    61,    63,   153,    50,    61,   141,    85,
     149,    49,   149,    49,   149,    49,   154,   149,   149,   149,
      60,    61,    56,   149,   149,    49,   149,    50,    61,   153,
     149,    49,    50,   149,    49,   154,   149,   149,    49,    49,
      49,   149,    49,   149,   149,    60,    60,    88,   149,   149,
      65,    88,    88,    60,    53,    56,    88
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   101,   102,   103,   103,   103,
     103,   104,   105,   105,   106,   106,   106,   106,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   119,
     120,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   130,   131,
     132,   132,   132,   132,   133,   134,   134,   134,   135,   136,
     136,   136,   136,   136,   136,   138,   137,   139,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   143,   144,   144,
     145,   146,   147,   148,   148,   149,   149,   149,   149,   150,
     150,   150,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   152,   153,   153,   153,   154,   154
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       4,     5,     5,     4,     4,     5,     5,     2,     4,     4,
       5,     5,     4,     5,     4,     5,     6,     7,     7,     8,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     4,     4,     2,     2,     2,     3,     2,     4,
       4,     2,     5,     4,     2,     2,     2,     2,     2,     4,
       4,     5,     5,     4,     4,     5,     4,     4,     4,     5,
       5,     5,     5,     6,     4,     4,     5,     7,     7,     2,
       1,     4,     4,     5,     5,     4,     5,     4,     5,     2,
       2,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       4,     4,     5,     5,     2,     4,     4,     5,     5,     4,
       4,     5,     5,     4,     5,     0,     5,     2,     2,     2,
       1,     3,     1,     1,     1,     3,     3,     1,     2,     3,
       2,     2,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1
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
  case 58: /* acall_stmt: ACALL IDENTIFIER  */
#line 59 "a51.y"
             {
              add_stmt(ACALL_OP, ACALL_OP, 0, 0, &((yyvsp[0].bucket)->value), NO_TYPE, 3); 
             }
#line 1545 "a51.tab.c"
    break;

  case 59: /* add_stmt: ADD A COMMA REG  */
#line 64 "a51.y"
            {
              add_stmt(ADD_OP, ADD_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 1553 "a51.tab.c"
    break;

  case 60: /* add_stmt: ADD A COMMA dir  */
#line 68 "a51.y"
            {
              add_stmt(ADD_OP, ADD_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 1561 "a51.tab.c"
    break;

  case 61: /* add_stmt: ADD A COMMA AT_SIGN REG  */
#line 72 "a51.y"
            {
              add_stmt(ADD_OP, ADD_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 1569 "a51.tab.c"
    break;

  case 62: /* add_stmt: ADD A COMMA HASH_TAG exp  */
#line 76 "a51.y"
            {
              add_stmt(ADD_OP, ADD_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IMMEDIATE, 3);
            }
#line 1577 "a51.tab.c"
    break;

  case 63: /* addc_stmt: ADDC A COMMA REG  */
#line 81 "a51.y"
            {
              add_stmt(ADDC_OP, ADDC_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 1585 "a51.tab.c"
    break;

  case 64: /* addc_stmt: ADDC A COMMA dir  */
#line 85 "a51.y"
            {
              add_stmt(ADDC_OP, ADDC_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 1593 "a51.tab.c"
    break;

  case 65: /* addc_stmt: ADDC A COMMA AT_SIGN REG  */
#line 89 "a51.y"
            {
              add_stmt(ADDC_OP, ADDC_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 1601 "a51.tab.c"
    break;

  case 66: /* addc_stmt: ADDC A COMMA HASH_TAG exp  */
#line 93 "a51.y"
            {
              add_stmt(ADDC_OP, ADDC_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IMMEDIATE, 3);
            }
#line 1609 "a51.tab.c"
    break;

  case 67: /* ajmp_stmt: AJMP IDENTIFIER  */
#line 98 "a51.y"
              {
                add_stmt(AJMP_OP, AJMP_OP, 0, 0, &((yyvsp[0].bucket)->value), NO_TYPE, 3);
              }
#line 1617 "a51.tab.c"
    break;

  case 68: /* anl_stmt: ANL A COMMA REG  */
#line 103 "a51.y"
            {
              add_stmt(ANL_OP, ANL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 1625 "a51.tab.c"
    break;

  case 69: /* anl_stmt: ANL A COMMA dir  */
#line 107 "a51.y"
            {
              add_stmt(ANL_OP, ANL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 1633 "a51.tab.c"
    break;

  case 70: /* anl_stmt: ANL A COMMA AT_SIGN REG  */
#line 111 "a51.y"
            {
              add_stmt(ANL_OP, ANL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 1641 "a51.tab.c"
    break;

  case 71: /* anl_stmt: ANL A COMMA HASH_TAG exp  */
#line 115 "a51.y"
            {
              add_stmt(ANL_OP, ANL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IMMEDIATE, 3);
            }
#line 1649 "a51.tab.c"
    break;

  case 72: /* anl_stmt: ANL dir COMMA A  */
#line 119 "a51.y"
            {
              add_stmt(ANL_OP, ANL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, DIRECT_A, 3);
            }
#line 1657 "a51.tab.c"
    break;

  case 73: /* anl_stmt: ANL dir COMMA HASH_TAG exp  */
#line 123 "a51.y"
            {
              add_stmt(ANL_OP, ANL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, DIRECT_IMMEDIATE, 3);
            }
#line 1665 "a51.tab.c"
    break;

  case 74: /* anl_stmt: ANL C COMMA bit  */
#line 127 "a51.y"
            {
              add_stmt(ANL_OP, 0x80, (yyvsp[-2].num), (yyvsp[0].num), NULL, C_BIT, 3);
            }
#line 1673 "a51.tab.c"
    break;

  case 75: /* anl_stmt: ANL C COMMA DIVISION bit  */
#line 131 "a51.y"
            {
              add_stmt(ANL_OP, 0xB0, (yyvsp[-3].num), (yyvsp[0].num), NULL, C_NBIT, 3);
            }
#line 1681 "a51.tab.c"
    break;

  case 76: /* cjne_stmt: CJNE A COMMA dir COMMA IDENTIFIER  */
#line 136 "a51.y"
            {
              add_stmt(CJNE_OP, CJNE_OP, (yyvsp[-4].num), (yyvsp[-2].num), &((yyvsp[0].bucket)->value), A_DIRECT, 3);
            }
#line 1689 "a51.tab.c"
    break;

  case 77: /* cjne_stmt: CJNE A COMMA HASH_TAG exp COMMA IDENTIFIER  */
#line 140 "a51.y"
            {
              add_stmt(CJNE_OP, CJNE_OP, (yyvsp[-5].num), (yyvsp[-2].num), &((yyvsp[0].bucket)->value), A_IMMEDIATE, 3);
            }
#line 1697 "a51.tab.c"
    break;

  case 78: /* cjne_stmt: CJNE REG COMMA HASH_TAG exp COMMA IDENTIFIER  */
#line 144 "a51.y"
            {
              add_stmt(CJNE_OP, CJNE_OP, (yyvsp[-5].num), (yyvsp[-2].num), &((yyvsp[0].bucket)->value), REG_IMMEDIATE, 3);
            }
#line 1705 "a51.tab.c"
    break;

  case 79: /* cjne_stmt: CJNE AT_SIGN REG COMMA HASH_TAG exp COMMA IDENTIFIER  */
#line 148 "a51.y"
            {
              add_stmt(CJNE_OP, CJNE_OP, (yyvsp[-5].num), (yyvsp[-2].num), &((yyvsp[0].bucket)->value), IND_REG_IMMEDIATE, 3);
            }
#line 1713 "a51.tab.c"
    break;

  case 80: /* clr_stmt: CLR A  */
#line 153 "a51.y"
            {
              add_stmt(CLR_OP, 0xE4, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
            }
#line 1721 "a51.tab.c"
    break;

  case 81: /* clr_stmt: CLR C  */
#line 157 "a51.y"
            {
              add_stmt(CLR_OP, CLR_OP, (yyvsp[0].num), 0, NULL, C_TYPE, 3);
            }
#line 1729 "a51.tab.c"
    break;

  case 82: /* clr_stmt: CLR bit  */
#line 161 "a51.y"
            {
              add_stmt(CLR_OP, CLR_OP, (yyvsp[0].num), 0, NULL, BIT_TYPE, 3);
            }
#line 1737 "a51.tab.c"
    break;

  case 83: /* cpl_stmt: CPL A  */
#line 166 "a51.y"
            {
              add_stmt(CPL_OP, 0xF4, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
            }
#line 1745 "a51.tab.c"
    break;

  case 84: /* cpl_stmt: CPL C  */
#line 170 "a51.y"
            {
              add_stmt(CPL_OP, CPL_OP, (yyvsp[0].num), 0, NULL, C_TYPE, 3);
            }
#line 1753 "a51.tab.c"
    break;

  case 85: /* cpl_stmt: CPL bit  */
#line 174 "a51.y"
            {
              add_stmt(CPL_OP, CPL_OP, (yyvsp[0].num), 0, NULL, BIT_TYPE, 3);
            }
#line 1761 "a51.tab.c"
    break;

  case 86: /* da_stmt: DA A  */
#line 179 "a51.y"
          {
            add_stmt(DA_OP, DA_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
          }
#line 1769 "a51.tab.c"
    break;

  case 87: /* dec_stmt: DEC A  */
#line 184 "a51.y"
          {
            add_stmt(DEC_OP, DEC_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
          }
#line 1777 "a51.tab.c"
    break;

  case 88: /* dec_stmt: DEC REG  */
#line 188 "a51.y"
          {
            add_stmt(DEC_OP, DEC_OP, (yyvsp[0].num), 0, NULL, REG_TYPE, 3);
          }
#line 1785 "a51.tab.c"
    break;

  case 89: /* dec_stmt: DEC dir  */
#line 192 "a51.y"
          {
            add_stmt(DEC_OP, DEC_OP, (yyvsp[0].num), 0, NULL, DIRECT_TYPE, 3);
          }
#line 1793 "a51.tab.c"
    break;

  case 90: /* dec_stmt: DEC AT_SIGN REG  */
#line 196 "a51.y"
          {
            add_stmt(DEC_OP, DEC_OP, (yyvsp[0].num), 0, NULL, IND_REG_TYPE, 3);
          }
#line 1801 "a51.tab.c"
    break;

  case 91: /* div_stmt: DIV AB  */
#line 201 "a51.y"
            {
              add_stmt(DIV_OP, DIV_OP, (yyvsp[0].num), 0, NULL, AB_TYPE, 3);
            }
#line 1809 "a51.tab.c"
    break;

  case 92: /* djnz_stmt: DJNZ REG COMMA IDENTIFIER  */
#line 206 "a51.y"
            {
              add_stmt(DJNZ_OP, DJNZ_OP, (yyvsp[-2].num), 0, &((yyvsp[0].bucket)->value), REG_TYPE, 3);
            }
#line 1817 "a51.tab.c"
    break;

  case 93: /* djnz_stmt: DJNZ dir COMMA IDENTIFIER  */
#line 210 "a51.y"
            {
              add_stmt(DJNZ_OP, DJNZ_OP, (yyvsp[-2].num), 0, &((yyvsp[0].bucket)->value), DIRECT_TYPE, 3);
            }
#line 1825 "a51.tab.c"
    break;

  case 94: /* inc_stmt: INC A  */
#line 215 "a51.y"
          {
            add_stmt(INC_OP, INC_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
          }
#line 1833 "a51.tab.c"
    break;

  case 95: /* inc_stmt: INC REG  */
#line 219 "a51.y"
          {
            add_stmt(INC_OP, INC_OP, (yyvsp[0].num), 0, NULL, REG_TYPE, 3);
          }
#line 1841 "a51.tab.c"
    break;

  case 96: /* inc_stmt: INC dir  */
#line 223 "a51.y"
          {
            add_stmt(INC_OP, INC_OP, (yyvsp[0].num), 0, NULL, DIRECT_TYPE, 3);
          }
#line 1849 "a51.tab.c"
    break;

  case 97: /* inc_stmt: INC AT_SIGN REG  */
#line 227 "a51.y"
          {
            add_stmt(INC_OP, INC_OP, (yyvsp[0].num), 0, NULL, IND_REG_TYPE, 3);
          }
#line 1857 "a51.tab.c"
    break;

  case 98: /* inc_stmt: INC DPTR  */
#line 231 "a51.y"
          {
            add_stmt(INC_OP, 0xA3, (yyvsp[0].num), 0, NULL, DPTR_TYPE, 3);
          }
#line 1865 "a51.tab.c"
    break;

  case 99: /* jb_stmt: JB bit COMMA IDENTIFIER  */
#line 236 "a51.y"
          {
            add_stmt(JB_OP, JB_OP, (yyvsp[-2].num), 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
          }
#line 1873 "a51.tab.c"
    break;

  case 100: /* jbc_stmt: JBC bit COMMA IDENTIFIER  */
#line 241 "a51.y"
          {
            add_stmt(JBC_OP, JBC_OP, (yyvsp[-2].num), 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
          }
#line 1881 "a51.tab.c"
    break;

  case 101: /* jc_stmt: JC IDENTIFIER  */
#line 246 "a51.y"
          {
            add_stmt(JC_OP, JC_OP, 0, 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
          }
#line 1889 "a51.tab.c"
    break;

  case 102: /* jmp_stmt: JMP AT_SIGN A SUM DPTR  */
#line 251 "a51.y"
          {
            add_stmt(JMP_OP, JMP_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, ABSOLUTE, 3);
          }
#line 1897 "a51.tab.c"
    break;

  case 103: /* jnb_stmt: JNB bit COMMA IDENTIFIER  */
#line 256 "a51.y"
          {
            add_stmt(JNB_OP, JNB_OP, (yyvsp[-2].num), 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
          }
#line 1905 "a51.tab.c"
    break;

  case 104: /* jnc_stmt: JNC IDENTIFIER  */
#line 261 "a51.y"
          {
            add_stmt(JNC_OP, JNC_OP, 0, 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
          }
#line 1913 "a51.tab.c"
    break;

  case 105: /* jnz_stmt: JNZ IDENTIFIER  */
#line 266 "a51.y"
          {
            add_stmt(JNZ_OP, JNZ_OP, 0, 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
          }
#line 1921 "a51.tab.c"
    break;

  case 106: /* jz_stmt: JZ IDENTIFIER  */
#line 271 "a51.y"
          {
            add_stmt(JZ_OP, JZ_OP, 0, 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
          }
#line 1929 "a51.tab.c"
    break;

  case 107: /* lcall_stmt: LCALL IDENTIFIER  */
#line 276 "a51.y"
          {
            add_stmt(LCALL_OP, LCALL_OP, 0, 0, &((yyvsp[0].bucket)->value), ABSOLUTE, 3);
          }
#line 1937 "a51.tab.c"
    break;

  case 108: /* ljmp_stmt: LJMP IDENTIFIER  */
#line 281 "a51.y"
          {
            add_stmt(LJMP_OP, LJMP_OP, 0, 0, &((yyvsp[0].bucket)->value), ABSOLUTE, 3);
          }
#line 1945 "a51.tab.c"
    break;

  case 109: /* mov_stmt: MOV A COMMA REG  */
#line 287 "a51.y"
            {
              add_stmt(MOV_OP, 0xE8, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 1953 "a51.tab.c"
    break;

  case 110: /* mov_stmt: MOV A COMMA dir  */
#line 291 "a51.y"
            {
              add_stmt(MOV_OP, 0xE5, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 1961 "a51.tab.c"
    break;

  case 111: /* mov_stmt: MOV A COMMA AT_SIGN REG  */
#line 295 "a51.y"
            {
              add_stmt(MOV_OP, 0xE6, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3); 
            }
#line 1969 "a51.tab.c"
    break;

  case 112: /* mov_stmt: MOV A COMMA HASH_TAG exp  */
#line 299 "a51.y"
            {
              add_stmt(MOV_OP, MOV_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IMMEDIATE, 3);
            }
#line 1977 "a51.tab.c"
    break;

  case 113: /* mov_stmt: MOV REG COMMA A  */
#line 303 "a51.y"
            {
              add_stmt(MOV_OP, 0xF8, (yyvsp[-2].num), (yyvsp[0].num), NULL, REG_A, 3);
            }
#line 1985 "a51.tab.c"
    break;

  case 114: /* mov_stmt: MOV REG COMMA dir  */
#line 307 "a51.y"
            {
              add_stmt(MOV_OP, 0xA8, (yyvsp[-2].num), (yyvsp[0].num), NULL, REG_DIRECT, 3);
            }
#line 1993 "a51.tab.c"
    break;

  case 115: /* mov_stmt: MOV REG COMMA HASH_TAG exp  */
#line 311 "a51.y"
            {
              add_stmt(MOV_OP, MOV_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, REG_IMMEDIATE, 3);
            }
#line 2001 "a51.tab.c"
    break;

  case 116: /* mov_stmt: MOV dir COMMA A  */
#line 315 "a51.y"
            {
              add_stmt(MOV_OP, 0xF5, (yyvsp[-2].num), (yyvsp[0].num), NULL, DIRECT_A, 3);
            }
#line 2009 "a51.tab.c"
    break;

  case 117: /* mov_stmt: MOV dir COMMA REG  */
#line 319 "a51.y"
            {
              add_stmt(MOV_OP, 0X88, (yyvsp[-2].num), (yyvsp[0].num), NULL, DIRECT_REG, 3);
            }
#line 2017 "a51.tab.c"
    break;

  case 118: /* mov_stmt: MOV dir COMMA dir  */
#line 323 "a51.y"
            {
              add_stmt(MOV_OP, 0x85, (yyvsp[-2].num), (yyvsp[0].num), NULL, DIRECT_DIRECT, 3);
            }
#line 2025 "a51.tab.c"
    break;

  case 119: /* mov_stmt: MOV dir COMMA AT_SIGN REG  */
#line 327 "a51.y"
            {
              add_stmt(MOV_OP, 0x86, (yyvsp[-3].num), (yyvsp[0].num), NULL, DIRECT_IND_REG, 3);
            }
#line 2033 "a51.tab.c"
    break;

  case 120: /* mov_stmt: MOV dir COMMA HASH_TAG exp  */
#line 331 "a51.y"
            {
              add_stmt(MOV_OP, MOV_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2041 "a51.tab.c"
    break;

  case 121: /* mov_stmt: MOV AT_SIGN REG COMMA A  */
#line 335 "a51.y"
            {
              add_stmt(MOV_OP, 0xF6, (yyvsp[-2].num), (yyvsp[0].num), NULL, IND_REG_A, 3);
            }
#line 2049 "a51.tab.c"
    break;

  case 122: /* mov_stmt: MOV AT_SIGN REG COMMA dir  */
#line 339 "a51.y"
            {
              add_stmt(MOV_OP, 0xA6, (yyvsp[-2].num), (yyvsp[0].num), NULL, IND_REG_DIRECT, 3);
            }
#line 2057 "a51.tab.c"
    break;

  case 123: /* mov_stmt: MOV AT_SIGN REG COMMA HASH_TAG exp  */
#line 343 "a51.y"
            {
              add_stmt(MOV_OP, MOV_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, IND_REG_IMMEDIATE, 3);
            }
#line 2065 "a51.tab.c"
    break;

  case 124: /* mov_stmt: MOV C COMMA bit  */
#line 347 "a51.y"
            {
              add_stmt(MOV_OP, 0xA2, (yyvsp[-2].num), (yyvsp[0].num), NULL, C_BIT, 3);
            }
#line 2073 "a51.tab.c"
    break;

  case 125: /* mov_stmt: MOV bit COMMA C  */
#line 351 "a51.y"
            {
              add_stmt(MOV_OP, 0x92, (yyvsp[-2].num), (yyvsp[0].num), NULL, BIT_C, 3);
            }
#line 2081 "a51.tab.c"
    break;

  case 126: /* mov_stmt: MOV DPTR COMMA HASH_TAG exp  */
#line 355 "a51.y"
            {
              add_stmt(MOV_OP, 0x90, (yyvsp[-3].num), (yyvsp[0].num), NULL, DPTR_IMMEDIATE, 3);
            }
#line 2089 "a51.tab.c"
    break;

  case 127: /* movc_stmt: MOVC A COMMA AT_SIGN A SUM DPTR  */
#line 360 "a51.y"
            {
              add_stmt(MOVC_OP, 0x93, (yyvsp[-5].num), (yyvsp[-2].num)+(yyvsp[0].num), NULL, DPTR_TYPE, 3);
            }
#line 2097 "a51.tab.c"
    break;

  case 128: /* movc_stmt: MOVC A COMMA AT_SIGN A SUM PC  */
#line 364 "a51.y"
            {
              add_stmt(MOVC_OP, MOVC_OP, (yyvsp[-5].num), (yyvsp[-2].num)+(yyvsp[0].num), NULL, PC_TYPE, 3);
            }
#line 2105 "a51.tab.c"
    break;

  case 129: /* mul_stmt: MUL AB  */
#line 369 "a51.y"
            {
              add_stmt(MUL_OP, MUL_OP, (yyvsp[0].num), 0, NULL, AB_TYPE, 3);
            }
#line 2113 "a51.tab.c"
    break;

  case 130: /* nop_stmt: NOP  */
#line 374 "a51.y"
            {
              add_stmt(NOP_OP, NOP_OP, 0, 0, NULL, NO_TYPE, 3);
            }
#line 2121 "a51.tab.c"
    break;

  case 131: /* orl_stmt: ORL A COMMA REG  */
#line 379 "a51.y"
            {
             add_stmt(ORL_OP, ORL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 2129 "a51.tab.c"
    break;

  case 132: /* orl_stmt: ORL A COMMA dir  */
#line 383 "a51.y"
            {
              add_stmt(ORL_OP, ORL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 2137 "a51.tab.c"
    break;

  case 133: /* orl_stmt: ORL A COMMA AT_SIGN REG  */
#line 387 "a51.y"
            {
              add_stmt(ORL_OP, ORL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 2145 "a51.tab.c"
    break;

  case 134: /* orl_stmt: ORL A COMMA HASH_TAG exp  */
#line 391 "a51.y"
            {
              add_stmt(ORL_OP, ORL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IMMEDIATE, 3);
            }
#line 2153 "a51.tab.c"
    break;

  case 135: /* orl_stmt: ORL dir COMMA A  */
#line 395 "a51.y"
            {
              add_stmt(ORL_OP, ORL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, DIRECT_A, 3);
            }
#line 2161 "a51.tab.c"
    break;

  case 136: /* orl_stmt: ORL dir COMMA HASH_TAG exp  */
#line 399 "a51.y"
            {
              add_stmt(ORL_OP, ORL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2169 "a51.tab.c"
    break;

  case 137: /* orl_stmt: ORL C COMMA bit  */
#line 403 "a51.y"
            {
              add_stmt(ORL_OP, 0x70, (yyvsp[-2].num), (yyvsp[0].num), NULL, C_BIT, 3);
            }
#line 2177 "a51.tab.c"
    break;

  case 138: /* orl_stmt: ORL C COMMA DIVISION bit  */
#line 407 "a51.y"
            {
              add_stmt(ORL_OP, 0xA0, (yyvsp[-3].num), (yyvsp[0].num), NULL, C_NBIT, 3);
            }
#line 2185 "a51.tab.c"
    break;

  case 139: /* pop_stmt: POP dir  */
#line 412 "a51.y"
            {
              add_stmt(POP_OP, POP_OP, (yyvsp[0].num), 0, NULL, DIRECT_TYPE, 3);
            }
#line 2193 "a51.tab.c"
    break;

  case 140: /* push_stmt: PUSH dir  */
#line 417 "a51.y"
            {
              add_stmt(PUSH_OP, PUSH_OP, (yyvsp[0].num), 0, NULL, DIRECT_TYPE, 3);
            }
#line 2201 "a51.tab.c"
    break;

  case 141: /* ret_stmt: RET  */
#line 422 "a51.y"
            {
              add_stmt(RET_OP, RET_OP, 0, 0, NULL, NO_TYPE, 3);
            }
#line 2209 "a51.tab.c"
    break;

  case 142: /* reti_stmt: RETI  */
#line 427 "a51.y"
            {
              add_stmt(RETI_OP, RETI_OP, 0, 0, NULL, NO_TYPE, 3);
            }
#line 2217 "a51.tab.c"
    break;

  case 143: /* rl_stmt: RL A  */
#line 432 "a51.y"
          {
            add_stmt(RL_OP, RL_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
          }
#line 2225 "a51.tab.c"
    break;

  case 144: /* rlc_stmt: RLC A  */
#line 437 "a51.y"
            {
              add_stmt(RLC_OP, RLC_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
            }
#line 2233 "a51.tab.c"
    break;

  case 145: /* rr_stmt: RR A  */
#line 442 "a51.y"
          {
            add_stmt(RR_OP, RR_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
          }
#line 2241 "a51.tab.c"
    break;

  case 146: /* rrc_stmt: RRC A  */
#line 447 "a51.y"
            {
              add_stmt(RRC_OP, RRC_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
            }
#line 2249 "a51.tab.c"
    break;

  case 147: /* setb_stmt: SETB C  */
#line 452 "a51.y"
            {
              add_stmt(SETB_OP, SETB_OP, (yyvsp[0].num), 0, NULL, C_TYPE, 3);
            }
#line 2257 "a51.tab.c"
    break;

  case 148: /* setb_stmt: SETB bit  */
#line 456 "a51.y"
            {
              add_stmt(SETB_OP, SETB_OP, (yyvsp[0].num), 0, NULL, BIT_TYPE, 3);
            }
#line 2265 "a51.tab.c"
    break;

  case 149: /* sjmp_stmt: SJMP IDENTIFIER  */
#line 461 "a51.y"
            {
              add_stmt(SJMP_OP, SJMP_OP, 0, 0, &((yyvsp[0].bucket)->value), RELATIVE, 3);
            }
#line 2273 "a51.tab.c"
    break;

  case 150: /* subb_stmt: SUBB A COMMA REG  */
#line 466 "a51.y"
            {
              add_stmt(SUBB_OP, SUBB_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 2281 "a51.tab.c"
    break;

  case 151: /* subb_stmt: SUBB A COMMA dir  */
#line 470 "a51.y"
            {
              add_stmt(SUBB_OP, SUBB_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 2289 "a51.tab.c"
    break;

  case 152: /* subb_stmt: SUBB A COMMA AT_SIGN REG  */
#line 474 "a51.y"
            {
              add_stmt(SUBB_OP, SUBB_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 2297 "a51.tab.c"
    break;

  case 153: /* subb_stmt: SUBB A COMMA HASH_TAG exp  */
#line 478 "a51.y"
            {
              add_stmt(SUBB_OP, SUBB_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IMMEDIATE, 3);
            }
#line 2305 "a51.tab.c"
    break;

  case 154: /* swap_stmt: SWAP A  */
#line 483 "a51.y"
            {
              add_stmt(SWAP_OP, SWAP_OP, (yyvsp[0].num), 0, NULL, A_TYPE, 3);
            }
#line 2313 "a51.tab.c"
    break;

  case 155: /* xch_stmt: XCH A COMMA REG  */
#line 488 "a51.y"
            {
              add_stmt(XCH_OP, XCH_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 2321 "a51.tab.c"
    break;

  case 156: /* xch_stmt: XCH A COMMA dir  */
#line 492 "a51.y"
            {
              add_stmt(XCH_OP, XCH_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 2329 "a51.tab.c"
    break;

  case 157: /* xch_stmt: XCH A COMMA AT_SIGN REG  */
#line 496 "a51.y"
            {
              add_stmt(XCH_OP, XCH_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 2337 "a51.tab.c"
    break;

  case 158: /* xchd_stmt: XCHD A COMMA AT_SIGN REG  */
#line 501 "a51.y"
            {
              add_stmt(XCHD_OP, XCHD_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 2345 "a51.tab.c"
    break;

  case 159: /* xrl_stmt: XRL A COMMA REG  */
#line 506 "a51.y"
            {
             add_stmt(XRL_OP, XRL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_REG_TYPE, 3);
            }
#line 2353 "a51.tab.c"
    break;

  case 160: /* xrl_stmt: XRL A COMMA dir  */
#line 510 "a51.y"
            {
              add_stmt(XRL_OP, XRL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, A_DIRECT, 3);
            }
#line 2361 "a51.tab.c"
    break;

  case 161: /* xrl_stmt: XRL A COMMA AT_SIGN REG  */
#line 514 "a51.y"
            {
              add_stmt(XRL_OP, XRL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IND_REG_TYPE, 3);
            }
#line 2369 "a51.tab.c"
    break;

  case 162: /* xrl_stmt: XRL A COMMA HASH_TAG exp  */
#line 518 "a51.y"
            {
              add_stmt(XRL_OP, XRL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, A_IMMEDIATE, 3);
            }
#line 2377 "a51.tab.c"
    break;

  case 163: /* xrl_stmt: XRL dir COMMA A  */
#line 522 "a51.y"
            {
              add_stmt(XRL_OP, XRL_OP, (yyvsp[-2].num), (yyvsp[0].num), NULL, DIRECT_A, 3);
            }
#line 2385 "a51.tab.c"
    break;

  case 164: /* xrl_stmt: XRL dir COMMA HASH_TAG exp  */
#line 526 "a51.y"
            {
              add_stmt(XRL_OP, XRL_OP, (yyvsp[-3].num), (yyvsp[0].num), NULL, DIRECT_IMMEDIATE, 3);
            }
#line 2393 "a51.tab.c"
    break;

  case 165: /* $@1: %empty  */
#line 531 "a51.y"
{
  if (lc.segment == BIT_SEGMENT){
    lc.value[lc.segment] += (yyvsp[0].num)*8;
  }else  if(lc.segment == CODE_SEGMENT){
    add_stmt(CSEG_OP, 0, 0, 0, NULL, NO_TYPE, (yyvsp[0].num));
  }else{
    lc.value[lc.segment] += (yyvsp[0].num);
  }
  if(lc.value[lc.segment] > max_seg[lc.segment]){
      yyerror("Reservation out of bounds");
    }
}
#line 2410 "a51.tab.c"
    break;

  case 166: /* res_stmt: DS exp $@1 DBIT exp  */
#line 543 "a51.y"
        {
  if (lc.segment != BIT_SEGMENT){
    yyerror("Bit reservation in non bit segment");
  }else{
    lc.value[BIT_SEGMENT] += (yyvsp[-3].num);
    if(lc.value[BIT_SEGMENT] > max_seg[BIT_SEGMENT]){
      yyerror("Reservation out of bounds");
    }
  }
}
#line 2425 "a51.tab.c"
    break;

  case 172: /* init_el: STRING  */
#line 558 "a51.y"
               {
  long int parameter = 0;
  for (int i = 0; i < strlen((yyvsp[0].str)); i += 1 << init_mode){
    parameter = 0;
    for(int i2 = 0; i2 < (1 << init_mode) && (i+i2 < strlen((yyvsp[0].str))); i2++){
      parameter |= (yyvsp[0].str)[i+i2] << (init_mode - i2);
    }
    add_stmt(DB_OP, DB_OP, parameter, 0, NULL, NO_TYPE, 1 << init_mode);
  }
  free((yyvsp[0].str));
}
#line 2441 "a51.tab.c"
    break;

  case 173: /* init_el: NUMBER  */
#line 568 "a51.y"
          {
  int parameter = (yyvsp[0].num);
  add_stmt(DB_OP, DB_OP, parameter, 0, NULL, NO_TYPE, 1 << init_mode);
}
#line 2450 "a51.tab.c"
    break;

  case 174: /* seg_stmt: SEG  */
#line 574 "a51.y"
{
  lc.segment = (yyvsp[0].segment);
  (yyval.num) = lc.value[lc.segment];
}
#line 2459 "a51.tab.c"
    break;

  case 175: /* seg_stmt: SEG AT NUMBER  */
#line 578 "a51.y"
{
  if((yyvsp[0].num) < 0 || (yyvsp[0].num) > max_seg[(yyvsp[-2].segment)]){
    yyerror("Segment definition out of bounds");
  }else{
    lc.segment = (yyvsp[-2].segment);
    if((yyvsp[-2].segment) == CODE_SEGMENT){
      if ((yyvsp[0].num) < lc.value[lc.segment]){
        yyerror("Segment already defined");
      } else{
        (yyval.num) = (yyvsp[0].num);
        add_stmt(CSEG_OP, 0, 0, 0, NULL, NO_TYPE, (yyvsp[0].num) - lc.value[lc.segment]);
      }
    }
    lc.value[lc.segment] = (yyvsp[0].num);
    (yyval.num) = (yyvsp[0].num);
  }
}
#line 2481 "a51.tab.c"
    break;

  case 176: /* seg_stmt: SEG AT RAM_BIT_ADDRESS  */
#line 595 "a51.y"
{ 
  if((yyvsp[-2].segment) != BIT_SEGMENT){
    yyerror("Address not allowed in bit segment format for this segment type");
  } else if((yyvsp[0].num) < 0 || (yyvsp[0].num) > max_seg[(yyvsp[-2].segment)]){
    yyerror("Segment definition out of bounds");
  } else{
    lc.segment = (yyvsp[-2].segment);
    lc.value[lc.segment] = (yyvsp[0].num);
    (yyval.num) = (yyvsp[0].num);
  }
}
#line 2497 "a51.tab.c"
    break;

  case 177: /* end_stmt: END  */
#line 608 "a51.y"
            {

            }
#line 2505 "a51.tab.c"
    break;

  case 178: /* label: IDENTIFIER TWO_DOTS  */
#line 613 "a51.y"
{
  if((yyvsp[-1].bucket)->segment != UNDEF_SEGMENT){
    yyerror("Label already defined");
  } else{
  (yyvsp[-1].bucket)->value = lc.value[lc.segment];
  (yyvsp[-1].bucket)->segment = lc.segment;
  }
}
#line 2518 "a51.tab.c"
    break;

  case 179: /* label: IDENTIFIER TWO_DOTS seg_stmt  */
#line 621 "a51.y"
                            {
  if((yyvsp[-2].bucket)->segment != UNDEF_SEGMENT){
    yyerror("Label already defined");
  } else{
  (yyvsp[-2].bucket)->value = (yyvsp[0].num);
  (yyvsp[-2].bucket)->segment = lc.segment;
  }
}
#line 2531 "a51.tab.c"
    break;

  case 180: /* org: ORG exp  */
#line 631 "a51.y"
{
  if(lc.segment == CODE_SEGMENT){
      if ((yyvsp[0].num) < lc.value[lc.segment]){
        yyerror("Segment already defined");
      } else{
        add_stmt(CSEG_OP, 0, 0, 0, NULL, NO_TYPE, (yyvsp[0].num) - lc.value[lc.segment]);
      }
    }else{
      lc.value[lc.segment] = (yyvsp[0].num);
    }
}
#line 2547 "a51.tab.c"
    break;

  case 181: /* align: ALIGN exp  */
#line 644 "a51.y"
{
  lc.value[lc.segment] = lc.value[lc.segment]&(~((1<<(yyvsp[0].num))-1))+ (1 << (yyvsp[0].num));
}
#line 2555 "a51.tab.c"
    break;

  case 182: /* even: EVEN  */
#line 649 "a51.y"
{
  lc.value[lc.segment] += lc.value[lc.segment]%2;
}
#line 2563 "a51.tab.c"
    break;

  case 183: /* equ: IDENTIFIER EQU exp  */
#line 654 "a51.y"
{
  if ((yyvsp[-2].bucket)->segment != UNDEF_SEGMENT){
    yyerror("Symbol already defined");
  } else{
    (yyvsp[-2].bucket)->segment = INMEDIATE;
    (yyvsp[-2].bucket)->value = (yyvsp[0].num);
  }
}
#line 2576 "a51.tab.c"
    break;

  case 184: /* equ: IDENTIFIER EQU SFR  */
#line 662 "a51.y"
{
  if ((yyvsp[-2].bucket)->segment != UNDEF_SEGMENT){
    yyerror("Symbol already defined");
  } else{
    (yyvsp[-2].bucket)->segment = REGISTER;
    (yyvsp[-2].bucket)->value = (yyvsp[0].num);
  }
}
#line 2589 "a51.tab.c"
    break;

  case 185: /* exp: exp LT simple_exp  */
#line 673 "a51.y"
                 { (yyval.num) = (yyvsp[-2].num) < (yyvsp[0].num);
                 }
#line 2596 "a51.tab.c"
    break;

  case 186: /* exp: exp MT simple_exp  */
#line 676 "a51.y"
                 { (yyval.num) = (yyvsp[-2].num) > (yyvsp[0].num);
                 }
#line 2603 "a51.tab.c"
    break;

  case 187: /* exp: exp EQ simple_exp  */
#line 679 "a51.y"
                 { (yyval.num) = (yyvsp[-2].num) == (yyvsp[0].num);
                 }
#line 2610 "a51.tab.c"
    break;

  case 188: /* exp: simple_exp  */
#line 681 "a51.y"
                         { (yyval.num) = (yyvsp[0].num); 
            }
#line 2617 "a51.tab.c"
    break;

  case 189: /* simple_exp: simple_exp SUM term  */
#line 685 "a51.y"
                 { (yyval.num) = (yyvsp[-2].num) + (yyvsp[0].num);
                 }
#line 2624 "a51.tab.c"
    break;

  case 190: /* simple_exp: simple_exp MINUS term  */
#line 688 "a51.y"
                 { (yyval.num) = (yyvsp[-2].num) - (yyvsp[0].num);
                 }
#line 2631 "a51.tab.c"
    break;

  case 191: /* simple_exp: term  */
#line 690 "a51.y"
                   { (yyval.num) = (yyvsp[0].num); 
            }
#line 2638 "a51.tab.c"
    break;

  case 192: /* term: term MULTIPLY factor  */
#line 695 "a51.y"
                 { (yyval.num) = (yyvsp[-2].num) * (yyvsp[0].num);
                 }
#line 2645 "a51.tab.c"
    break;

  case 193: /* term: term DIVISION factor  */
#line 698 "a51.y"
                 { (yyval.num) = (yyvsp[-2].num) / (yyvsp[0].num);
                 }
#line 2652 "a51.tab.c"
    break;

  case 194: /* term: term MODULE factor  */
#line 701 "a51.y"
              {
                (yyval.num) = (yyvsp[-2].num) % (yyvsp[0].num);
              }
#line 2660 "a51.tab.c"
    break;

  case 195: /* term: term SHIFT_R factor  */
#line 704 "a51.y"
                                 {
              (yyval.num) = (yyvsp[-2].num) >> (yyvsp[0].num);
            }
#line 2668 "a51.tab.c"
    break;

  case 196: /* term: term SHIFT_L factor  */
#line 707 "a51.y"
                                 {
              (yyval.num) = (yyvsp[-2].num) << (yyvsp[0].num);
            }
#line 2676 "a51.tab.c"
    break;

  case 197: /* term: factor  */
#line 710 "a51.y"
                     { (yyval.num) = (yyvsp[0].num);}
#line 2682 "a51.tab.c"
    break;

  case 198: /* factor: OP_PAR exp CL_PAR  */
#line 713 "a51.y"
                 { 
                  (yyval.num) = (yyvsp[-1].num);
                 }
#line 2690 "a51.tab.c"
    break;

  case 199: /* factor: NUMBER  */
#line 717 "a51.y"
                 {
                    (yyval.num) = (yyvsp[0].num);
                 }
#line 2698 "a51.tab.c"
    break;

  case 200: /* factor: IDENTIFIER  */
#line 720 "a51.y"
                         {
                  (yyval.num) = (yyvsp[0].bucket)->value;
                 }
#line 2706 "a51.tab.c"
    break;

  case 201: /* factor: error  */
#line 723 "a51.y"
                   {printf("Error in factor\n");
            (yyval.num) = 0;}
#line 2713 "a51.tab.c"
    break;

  case 202: /* dir: SFR  */
#line 728 "a51.y"
        {
          (yyval.num) = (yyvsp[0].num);
        }
#line 2721 "a51.tab.c"
    break;

  case 203: /* dir: B  */
#line 732 "a51.y"
        {
          (yyval.num) = (yyvsp[0].num);
        }
#line 2729 "a51.tab.c"
    break;


#line 2733 "a51.tab.c"

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

#line 739 "a51.y"


int yyerror(char * message)
{ printf("Error at line %d: %s\n",current_line,message);
  end_error = 1;
  return 0;
}
