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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NOP = 258,                     /* NOP  */
    AJMP = 259,                    /* AJMP  */
    LJMP = 260,                    /* LJMP  */
    SJMP = 261,                    /* SJMP  */
    ACALL = 262,                   /* ACALL  */
    LCALL = 263,                   /* LCALL  */
    RET = 264,                     /* RET  */
    RETI = 265,                    /* RETI  */
    JMP = 266,                     /* JMP  */
    CJNE = 267,                    /* CJNE  */
    DJNZ = 268,                    /* DJNZ  */
    JC = 269,                      /* JC  */
    JNC = 270,                     /* JNC  */
    JZ = 271,                      /* JZ  */
    JNZ = 272,                     /* JNZ  */
    JB = 273,                      /* JB  */
    JBC = 274,                     /* JBC  */
    JNB = 275,                     /* JNB  */
    MOV = 276,                     /* MOV  */
    MOVC = 277,                    /* MOVC  */
    MOVX = 278,                    /* MOVX  */
    XCH = 279,                     /* XCH  */
    XCHD = 280,                    /* XCHD  */
    SWAP = 281,                    /* SWAP  */
    PUSH = 282,                    /* PUSH  */
    POP = 283,                     /* POP  */
    INC = 284,                     /* INC  */
    DEC = 285,                     /* DEC  */
    ADD = 286,                     /* ADD  */
    ADDC = 287,                    /* ADDC  */
    DIV = 288,                     /* DIV  */
    SUBB = 289,                    /* SUBB  */
    MUL = 290,                     /* MUL  */
    DA = 291,                      /* DA  */
    SETB = 292,                    /* SETB  */
    CLR = 293,                     /* CLR  */
    CPL = 294,                     /* CPL  */
    RR = 295,                      /* RR  */
    RRC = 296,                     /* RRC  */
    RL = 297,                      /* RL  */
    RLC = 298,                     /* RLC  */
    ORL = 299,                     /* ORL  */
    XRL = 300,                     /* XRL  */
    ANL = 301,                     /* ANL  */
    A = 302,                       /* A  */
    B = 303,                       /* B  */
    PSW = 304,                     /* PSW  */
    DPTR = 305,                    /* DPTR  */
    DPL = 306,                     /* DPL  */
    DPH = 307,                     /* DPH  */
    SP = 308,                      /* SP  */
    P0 = 309,                      /* P0  */
    P1 = 310,                      /* P1  */
    TCON = 311,                    /* TCON  */
    TMOD = 312,                    /* TMOD  */
    TLO = 313,                     /* TLO  */
    TL1 = 314,                     /* TL1  */
    TH0 = 315,                     /* TH0  */
    TH1 = 316,                     /* TH1  */
    SCON = 317,                    /* SCON  */
    SBUF = 318,                    /* SBUF  */
    PC = 319,                      /* PC  */
    R0 = 320,                      /* R0  */
    R1 = 321,                      /* R1  */
    R2 = 322,                      /* R2  */
    R3 = 323,                      /* R3  */
    R4 = 324,                      /* R4  */
    R5 = 325,                      /* R5  */
    R6 = 326,                      /* R6  */
    R7 = 327,                      /* R7  */
    C = 328,                       /* C  */
    BIN = 329,                     /* BIN  */
    HEX = 330,                     /* HEX  */
    DECIMAL = 331,                 /* DECIMAL  */
    ID = 332,                      /* ID  */
    AB = 333                       /* AB  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_R0 = 65,                        /* R0  */
  YYSYMBOL_R1 = 66,                        /* R1  */
  YYSYMBOL_R2 = 67,                        /* R2  */
  YYSYMBOL_R3 = 68,                        /* R3  */
  YYSYMBOL_R4 = 69,                        /* R4  */
  YYSYMBOL_R5 = 70,                        /* R5  */
  YYSYMBOL_R6 = 71,                        /* R6  */
  YYSYMBOL_R7 = 72,                        /* R7  */
  YYSYMBOL_C = 73,                         /* C  */
  YYSYMBOL_BIN = 74,                       /* BIN  */
  YYSYMBOL_HEX = 75,                       /* HEX  */
  YYSYMBOL_DECIMAL = 76,                   /* DECIMAL  */
  YYSYMBOL_ID = 77,                        /* ID  */
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
  YYSYMBOL_add_stmt = 88,                  /* add_stmt  */
  YYSYMBOL_addc_stmt = 89,                 /* addc_stmt  */
  YYSYMBOL_anl_stmt = 90,                  /* anl_stmt  */
  YYSYMBOL_cjne_stmt = 91,                 /* cjne_stmt  */
  YYSYMBOL_clr_stmt = 92,                  /* clr_stmt  */
  YYSYMBOL_cpl_stmt = 93,                  /* cpl_stmt  */
  YYSYMBOL_da_stmt = 94,                   /* da_stmt  */
  YYSYMBOL_dec_stmt = 95,                  /* dec_stmt  */
  YYSYMBOL_div_stmt = 96,                  /* div_stmt  */
  YYSYMBOL_djnz_stmt = 97,                 /* djnz_stmt  */
  YYSYMBOL_inc_stmt = 98,                  /* inc_stmt  */
  YYSYMBOL_jb_stmt = 99,                   /* jb_stmt  */
  YYSYMBOL_jbc_stmt = 100,                 /* jbc_stmt  */
  YYSYMBOL_jc_stmt = 101,                  /* jc_stmt  */
  YYSYMBOL_jmp_stmt = 102,                 /* jmp_stmt  */
  YYSYMBOL_jnb_stmt = 103,                 /* jnb_stmt  */
  YYSYMBOL_jnc_stmt = 104,                 /* jnc_stmt  */
  YYSYMBOL_jnz_stmt = 105,                 /* jnz_stmt  */
  YYSYMBOL_jz_stmt = 106,                  /* jz_stmt  */
  YYSYMBOL_lcall_stmt = 107,               /* lcall_stmt  */
  YYSYMBOL_ljmp_stmt = 108,                /* ljmp_stmt  */
  YYSYMBOL_mov_stmt = 109,                 /* mov_stmt  */
  YYSYMBOL_movc_stmt = 110,                /* movc_stmt  */
  YYSYMBOL_movx_stmt = 111,                /* movx_stmt  */
  YYSYMBOL_mul_stmt = 112,                 /* mul_stmt  */
  YYSYMBOL_nop_stmt = 113,                 /* nop_stmt  */
  YYSYMBOL_orl_stmt = 114,                 /* orl_stmt  */
  YYSYMBOL_pop_stmt = 115,                 /* pop_stmt  */
  YYSYMBOL_push_stmt = 116,                /* push_stmt  */
  YYSYMBOL_ret_stmt = 117,                 /* ret_stmt  */
  YYSYMBOL_reti_stmt = 118,                /* reti_stmt  */
  YYSYMBOL_rl_stmt = 119,                  /* rl_stmt  */
  YYSYMBOL_rlc_stmt = 120,                 /* rlc_stmt  */
  YYSYMBOL_rr_stmt = 121,                  /* rr_stmt  */
  YYSYMBOL_rrc_stmt = 122,                 /* rrc_stmt  */
  YYSYMBOL_setb_stmt = 123,                /* setb_stmt  */
  YYSYMBOL_sjmp_stmt = 124,                /* sjmp_stmt  */
  YYSYMBOL_subb_stmt = 125,                /* subb_stmt  */
  YYSYMBOL_swap_stmt = 126,                /* swap_stmt  */
  YYSYMBOL_xch_stmt = 127,                 /* xch_stmt  */
  YYSYMBOL_xchd_stmt = 128,                /* xchd_stmt  */
  YYSYMBOL_xrl_stmt = 129,                 /* xrl_stmt  */
  YYSYMBOL_label = 130,                    /* label  */
  YYSYMBOL_dir = 131,                      /* dir  */
  YYSYMBOL_bit = 132,                      /* bit  */
  YYSYMBOL_reg = 133,                      /* reg  */
  YYSYMBOL_ind_reg = 134,                  /* ind_reg  */
  YYSYMBOL_num = 135                       /* num  */
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
#define YYFINAL  186
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   948

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  342

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
       0,    33,    33,    33,    35,    35,    35,    35,    35,    35,
      35,    36,    36,    36,    36,    36,    36,    36,    37,    37,
      37,    37,    37,    37,    37,    38,    38,    38,    38,    38,
      38,    38,    39,    39,    39,    39,    39,    39,    39,    40,
      40,    40,    40,    40,    40,    40,    41,    43,    47,    51,
      55,    60,    64,    68,    72,    82,    86,    90,    94,    98,
     102,   106,   110,   115,   119,   123,   127,   132,   136,   140,
     145,   149,   153,   158,   160,   164,   168,   172,   177,   182,
     186,   191,   195,   199,   203,   207,   212,   217,   222,   227,
     232,   237,   242,   247,   252,   256,   261,   265,   270,   274,
     278,   282,   286,   290,   294,   298,   302,   306,   310,   314,
     318,   322,   326,   330,   334,   339,   343,   348,   352,   356,
     360,   365,   370,   375,   379,   383,   387,   391,   395,   399,
     403,   408,   413,   418,   423,   428,   433,   438,   443,   448,
     452,   457,   462,   466,   470,   474,   479,   484,   488,   492,
     497,   502,   506,   510,   514,   518,   522,   527,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   534,   536,   536,   536,   536,
     536,   536,   536,   536,   538,   538,   540,   540,   540
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
  "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "C", "BIN", "HEX",
  "DECIMAL", "ID", "AB", "','", "'@'", "'#'", "'/'", "'+'", "':'",
  "$accept", "stmt_seq", "stmt", "add_stmt", "addc_stmt", "anl_stmt",
  "cjne_stmt", "clr_stmt", "cpl_stmt", "da_stmt", "dec_stmt", "div_stmt",
  "djnz_stmt", "inc_stmt", "jb_stmt", "jbc_stmt", "jc_stmt", "jmp_stmt",
  "jnb_stmt", "jnc_stmt", "jnz_stmt", "jz_stmt", "lcall_stmt", "ljmp_stmt",
  "mov_stmt", "movc_stmt", "movx_stmt", "mul_stmt", "nop_stmt", "orl_stmt",
  "pop_stmt", "push_stmt", "ret_stmt", "reti_stmt", "rl_stmt", "rlc_stmt",
  "rr_stmt", "rrc_stmt", "setb_stmt", "sjmp_stmt", "subb_stmt",
  "swap_stmt", "xch_stmt", "xchd_stmt", "xrl_stmt", "label", "dir", "bit",
  "reg", "ind_reg", "num", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-138)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     292,  -138,   -10,   -65,    -6,  -138,  -138,   -66,   722,   752,
     -29,   -28,   -16,    -5,  -138,  -138,  -138,   611,   -18,   -34,
      29,    35,    50,   842,   842,   645,   675,    55,    56,    26,
      62,    37,    63,    43,     4,     5,    71,    72,    75,    76,
     782,   872,   812,    40,   140,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,    79,    48,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,   -48,    49,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,    51,    52,  -138,  -138,  -138,
    -138,  -138,    53,    57,    58,    59,    60,    65,   -48,   108,
     109,   111,   112,   113,    -3,   114,   115,  -138,  -138,  -138,
    -138,  -138,   -48,  -138,  -138,  -138,   -48,  -138,  -138,   116,
     117,  -138,   118,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,   120,   121,   122,
     124,   125,   126,   128,   129,  -138,  -138,  -138,   127,   -21,
    -138,  -138,   133,    54,   141,   143,   146,   148,   149,   296,
      61,  -138,   150,   331,   155,    32,   151,   153,   156,   160,
     705,   162,  -138,  -138,   366,   401,   436,   471,   158,   -38,
     506,   -37,   541,   163,   -36,    84,    25,   165,   170,    25,
    -138,  -138,  -138,  -138,  -138,   -48,    25,  -138,  -138,    25,
    -138,   576,   -48,    25,  -138,  -138,  -138,  -138,    25,  -138,
     183,    46,   205,   207,   -48,  -138,  -138,   -48,   -48,    25,
    -138,  -138,   -48,    25,  -138,  -138,   -48,    25,  -138,  -138,
     -48,    25,  -138,  -138,  -138,  -138,  -138,    25,   -48,    25,
    -138,  -138,  -138,    25,   -48,    25,  -138,  -138,  -138,  -138,
    -138,    25,  -138,   177,   181,    25,   180,  -138,  -138,  -138,
    -138,    25,  -138,  -138,  -138,  -138,   184,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
     186,  -138,   185,   189,  -138,   -44,  -138,   191,  -138,  -138,
    -138,  -138
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   122,     0,     0,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   175,   175,   175,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,   175,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   186,
     187,   188,    96,    97,   141,    94,    95,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,     0,     0,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,     0,     0,   174,    88,    91,
      93,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   132,   131,
      81,    85,     0,    83,    82,    74,     0,    76,    75,     0,
       0,    78,     0,   121,    73,   139,   140,    67,    68,    69,
      70,    71,    72,   137,   138,   135,   136,     0,     0,     0,
       0,     0,     0,     0,     0,   157,     1,     3,     0,     0,
     184,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    77,     0,     0,     0,     0,   175,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,     0,
      80,    79,    86,    87,    90,     0,     0,    99,    98,     0,
     112,     0,     0,     0,   106,   105,   113,   102,     0,   103,
       0,     0,     0,     0,     0,   148,   147,     0,     0,     0,
      48,    47,     0,     0,    52,    51,     0,     0,   143,   142,
       0,     0,   124,   123,   175,   129,   127,     0,     0,     0,
     152,   151,   155,     0,     0,     0,    56,    55,   175,    61,
      59,     0,    89,     0,     0,     0,     0,   100,   101,   114,
     109,     0,   110,   107,   108,   104,     0,   118,   117,   120,
     119,   149,   150,    49,    50,    53,    54,   144,   145,   125,
     126,   130,   128,   153,   154,   156,    57,    58,    62,    60,
       0,    63,     0,     0,   111,     0,    64,     0,    65,   115,
     116,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,   216,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,    33,   -12,    -1,  -137,
      -2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   125,   132,   108,   192,
     127
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,   202,    96,   133,   134,   140,   339,   209,   126,   276,
     282,   290,    94,   143,    97,   212,   141,   190,   191,   213,
     340,   166,   169,   172,   154,   158,   109,   110,   111,   142,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   277,   283,   291,   144,   208,   128,   129,
     139,   167,   170,    89,    90,    91,   148,   149,   153,   157,
     226,   130,   190,   191,    89,    90,    91,    92,    89,    90,
      91,    95,   131,   179,   181,   184,   145,   168,   171,   247,
     110,   111,   146,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   307,   147,   297,    89,
      90,    91,   159,   160,   161,   303,    89,    90,    91,   162,
     164,   190,   191,   248,   308,   163,   165,   311,   173,   174,
     312,   313,   175,   176,   185,   315,   188,   189,   193,   317,
     194,   195,   196,   319,   292,   229,   197,   198,   199,   200,
     186,   323,   239,     1,   201,     2,     3,   326,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   203,   204,   240,
     205,   206,   207,   210,   211,   214,   215,   216,   238,   217,
     218,   219,   245,   220,   221,   222,   275,   223,   224,   256,
     225,   289,   228,   261,   265,   269,   273,    43,   230,   281,
     231,   287,   227,   232,   293,   233,   234,   296,   246,   241,
     306,   250,   237,   251,   298,   252,   244,   299,   249,   253,
     274,   304,   257,   255,   294,   288,   305,   260,   264,   268,
     272,   295,   309,   280,   310,   286,   330,   314,   331,   333,
     187,   316,   321,   336,   337,   318,   338,   335,   341,   320,
       0,     0,     0,     0,   302,   322,   328,   324,     0,     0,
       0,   325,     0,   327,     0,     0,     0,     0,     0,   329,
       0,     0,     0,   332,     0,     1,     0,     2,     3,   334,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,   109,   110,   111,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,    99,   100,   101,   102,   103,   104,   105,   106,    43,
      89,    90,    91,     0,     0,     0,   235,   236,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,    99,   100,   101,   102,
     103,   104,   105,   106,     0,    89,    90,    91,     0,     0,
       0,   242,   243,   109,   110,   111,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,    99,   100,   101,   102,   103,   104,   105,   106,     0,
      89,    90,    91,     0,     0,     0,   258,   259,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,    99,   100,   101,   102,
     103,   104,   105,   106,     0,    89,    90,    91,     0,     0,
       0,   262,   263,   109,   110,   111,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,    99,   100,   101,   102,   103,   104,   105,   106,     0,
      89,    90,    91,     0,     0,     0,   266,   267,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,    99,   100,   101,   102,
     103,   104,   105,   106,     0,    89,    90,    91,     0,     0,
       0,   270,   271,   109,   110,   111,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,    99,   100,   101,   102,   103,   104,   105,   106,     0,
      89,    90,    91,     0,     0,     0,   278,   279,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,    99,   100,   101,   102,
     103,   104,   105,   106,     0,    89,    90,    91,     0,     0,
       0,   284,   285,   300,   110,   111,     0,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,    91,     0,     0,     0,     0,   301,   135,   110,
     111,   136,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   137,    89,    90,    91,     0,     0,
       0,   138,   150,   110,   111,   151,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
      99,   100,   101,   102,   103,   104,   105,   106,     0,    89,
      90,    91,   155,   110,   111,   152,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
      99,   100,   101,   102,   103,   104,   105,   106,     0,    89,
      90,    91,   109,   110,   111,   156,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    98,
      99,   100,   101,   102,   103,   104,   105,   106,     0,    89,
      90,    91,     0,     0,     0,   254,     0,    99,   100,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,   109,
     110,   111,   107,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,    99,   100,   101,
     102,   103,   104,   105,   106,     0,    89,    90,    91,   177,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   178,    89,    90,    91,   182,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,    89,    90,    91,   109,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,   180,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       2,   138,     4,    15,    16,    17,    50,   144,     9,    47,
      47,    47,    77,    47,    80,   152,    17,    65,    66,   156,
      64,    33,    34,    35,    25,    26,    47,    48,    49,    47,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    81,    81,    81,    80,    50,    77,    77,
      17,    47,    47,    74,    75,    76,    23,    24,    25,    26,
      81,    77,    65,    66,    74,    75,    76,    77,    74,    75,
      76,    77,    77,    40,    41,    42,    47,    73,    73,    47,
      48,    49,    47,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    50,    47,   235,    74,
      75,    76,    47,    47,    78,   242,    74,    75,    76,    47,
      47,    65,    66,    81,   251,    78,    73,   254,    47,    47,
     257,   258,    47,    47,    84,   262,    47,    79,    79,   266,
      79,    79,    79,   270,    50,    81,    79,    79,    79,    79,
       0,   278,    81,     3,    79,     5,     6,   284,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    79,    79,   201,
      79,    79,    79,    79,    79,    79,    79,    79,   199,    79,
      79,    79,   203,    79,    79,    79,   218,    79,    79,   210,
      83,   223,    79,   214,   215,   216,   217,    77,    77,   220,
      77,   222,   189,    77,   226,    77,    77,   229,    73,    79,
      47,    80,   199,    80,   236,    79,   203,   239,   205,    79,
      82,   243,    80,   210,    79,    82,   248,   214,   215,   216,
     217,    81,    47,   220,    47,   222,    79,   259,    77,    79,
      44,   263,   274,    77,    79,   267,    77,    83,    77,   271,
      -1,    -1,    -1,    -1,   241,   277,   288,   279,    -1,    -1,
      -1,   283,    -1,   285,    -1,    -1,    -1,    -1,    -1,   291,
      -1,    -1,    -1,   295,    -1,     3,    -1,     5,     6,   301,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    77,
      74,    75,    76,    -1,    -1,    -1,    80,    81,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    -1,    -1,
      -1,    80,    81,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    81,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    -1,    -1,
      -1,    80,    81,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    81,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    -1,    -1,
      -1,    80,    81,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    80,    81,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    -1,    -1,
      -1,    80,    81,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    81,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    80,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    47,    48,    49,    80,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    47,    48,    49,    80,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    47,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    80,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    47,
      48,    49,    80,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    77,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    74,
      75,    76,    77,   135,    77,    77,   135,    80,    47,    65,
      66,    67,    68,    69,    70,    71,    72,    80,   133,    47,
      48,    49,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   131,   133,   135,    77,    77,
      77,    77,   132,   132,   132,    47,    50,    73,    80,   131,
     132,   133,    47,    47,    80,    47,    47,    47,   131,   131,
      47,    50,    80,   131,   133,    47,    80,   131,   133,    47,
      47,    78,    47,    78,    47,    73,   132,    47,    73,   132,
      47,    73,   132,    47,    47,    47,    47,    47,    73,   131,
      47,   131,    47,    73,   131,    84,     0,    87,    47,    79,
      65,    66,   134,    79,    79,    79,    79,    79,    79,    79,
      79,    79,   134,    79,    79,    79,    79,    79,    50,   134,
      79,    79,   134,   134,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    83,    81,   131,    79,    81,
      77,    77,    77,    77,    77,    80,    81,   131,   133,    81,
     132,    79,    80,    81,   131,   133,    73,    47,    81,   131,
      80,    80,    79,    79,    80,   131,   133,    80,    80,    81,
     131,   133,    80,    81,   131,   133,    80,    81,   131,   133,
      80,    81,   131,   133,    82,   132,    47,    81,    80,    81,
     131,   133,    47,    81,    80,    81,   131,   133,    82,   132,
      47,    81,    50,   135,    79,    81,   135,   134,   135,   135,
      47,    81,   131,   134,   135,   135,    47,    50,   134,    47,
      47,   134,   134,   134,   135,   134,   135,   134,   135,   134,
     135,   132,   135,   134,   135,   135,   134,   135,   132,   135,
      79,    77,   135,    79,   135,    83,    77,    79,    77,    50,
      64,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    92,    92,    92,
      93,    93,    93,    94,    95,    95,    95,    95,    96,    97,
      97,    98,    98,    98,    98,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   111,
     111,   112,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     123,   124,   125,   125,   125,   125,   126,   127,   127,   127,
     128,   129,   129,   129,   129,   129,   129,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   135,   135,   135
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     4,     5,     6,     7,     7,     8,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     4,
       4,     2,     2,     2,     3,     2,     4,     4,     2,     5,
       4,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       5,     5,     4,     4,     5,     4,     4,     5,     5,     5,
       5,     6,     4,     4,     5,     7,     7,     5,     5,     5,
       5,     2,     1,     4,     4,     5,     5,     4,     5,     4,
       5,     2,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     5,     5,     2,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
  case 47: /* add_stmt: ADD A ',' reg  */
#line 44 "a51.y"
            {
              add_stmt(yyvsp[-3], ADD_OP, yyvsp[-2], yyvsp[0], NULL, REG_TYPE, 3);
            }
#line 1683 "a51.tab.c"
    break;

  case 48: /* add_stmt: ADD A ',' dir  */
#line 48 "a51.y"
            {
              add_stmt(yyvsp[-3], ADD_OP, yyvsp[-2], yyvsp[0], NULL, DIRECT, 3);
            }
#line 1691 "a51.tab.c"
    break;

  case 49: /* add_stmt: ADD A ',' '@' ind_reg  */
#line 52 "a51.y"
            {
              add_stmt(yyvsp[-4], ADD_OP, yyvsp[-3], yyvsp[0], NULL, IND_REG_TYPE, 3);
            }
#line 1699 "a51.tab.c"
    break;

  case 50: /* add_stmt: ADD A ',' '#' num  */
#line 56 "a51.y"
            {
              add_stmt(yyvsp[-4], ADD_OP, yyvsp[-3], yyvsp[0], NULL, IMMEDIATE, 3);
            }
#line 1707 "a51.tab.c"
    break;

  case 51: /* addc_stmt: ADDC A ',' reg  */
#line 61 "a51.y"
            {
              /* Add to ... */
            }
#line 1715 "a51.tab.c"
    break;

  case 52: /* addc_stmt: ADDC A ',' dir  */
#line 65 "a51.y"
            {
              /* Add to ... */
            }
#line 1723 "a51.tab.c"
    break;

  case 53: /* addc_stmt: ADDC A ',' '@' ind_reg  */
#line 69 "a51.y"
            {
              /* Add to ... */
            }
#line 1731 "a51.tab.c"
    break;

  case 54: /* addc_stmt: ADDC A ',' '#' num  */
#line 73 "a51.y"
            {
              /* Add to ... */
            }
#line 1739 "a51.tab.c"
    break;

  case 55: /* anl_stmt: ANL A ',' reg  */
#line 83 "a51.y"
            {
              /* Add to ... */
            }
#line 1747 "a51.tab.c"
    break;

  case 56: /* anl_stmt: ANL A ',' dir  */
#line 87 "a51.y"
            {
              /* Add to ... */
            }
#line 1755 "a51.tab.c"
    break;

  case 57: /* anl_stmt: ANL A ',' '@' ind_reg  */
#line 91 "a51.y"
            {
              /* Add to ... */
            }
#line 1763 "a51.tab.c"
    break;

  case 58: /* anl_stmt: ANL A ',' '#' num  */
#line 95 "a51.y"
            {
              /* Add to ... */
            }
#line 1771 "a51.tab.c"
    break;

  case 59: /* anl_stmt: ANL dir ',' A  */
#line 99 "a51.y"
            {
              /* Add to ... */
            }
#line 1779 "a51.tab.c"
    break;

  case 60: /* anl_stmt: ANL dir ',' '#' num  */
#line 103 "a51.y"
            {
              /* Add to ... */
            }
#line 1787 "a51.tab.c"
    break;

  case 61: /* anl_stmt: ANL C ',' bit  */
#line 107 "a51.y"
            {
              /* Add to ... */
            }
#line 1795 "a51.tab.c"
    break;

  case 62: /* anl_stmt: ANL C ',' '/' bit  */
#line 111 "a51.y"
            {
              /* Add to ... */
            }
#line 1803 "a51.tab.c"
    break;

  case 63: /* cjne_stmt: CJNE A ',' dir ',' ID  */
#line 116 "a51.y"
            {
              /* Add to ... */
            }
#line 1811 "a51.tab.c"
    break;

  case 64: /* cjne_stmt: CJNE A ',' '#' num ',' ID  */
#line 120 "a51.y"
            {
              /* Add to ... */
            }
#line 1819 "a51.tab.c"
    break;

  case 65: /* cjne_stmt: CJNE reg ',' '#' num ',' ID  */
#line 124 "a51.y"
            {
              /* Add to ... */
            }
#line 1827 "a51.tab.c"
    break;

  case 66: /* cjne_stmt: CJNE '@' ind_reg ',' '#' num ',' ID  */
#line 128 "a51.y"
            {
              /* Add to ... */
            }
#line 1835 "a51.tab.c"
    break;

  case 67: /* clr_stmt: CLR A  */
#line 133 "a51.y"
            {
              /* Add to ... */
            }
#line 1843 "a51.tab.c"
    break;

  case 68: /* clr_stmt: CLR C  */
#line 137 "a51.y"
            {
              /* Add to ... */
            }
#line 1851 "a51.tab.c"
    break;

  case 69: /* clr_stmt: CLR bit  */
#line 141 "a51.y"
            {
              /* Add to ... */
            }
#line 1859 "a51.tab.c"
    break;

  case 70: /* cpl_stmt: CPL A  */
#line 146 "a51.y"
            {
              /* Add to ... */
            }
#line 1867 "a51.tab.c"
    break;

  case 71: /* cpl_stmt: CPL C  */
#line 150 "a51.y"
            {
              /* Add to ... */
            }
#line 1875 "a51.tab.c"
    break;

  case 72: /* cpl_stmt: CPL bit  */
#line 154 "a51.y"
            {
              /* Add to ... */
            }
#line 1883 "a51.tab.c"
    break;

  case 73: /* da_stmt: DA A  */
#line 158 "a51.y"
               {/* Add to ... */}
#line 1889 "a51.tab.c"
    break;

  case 74: /* dec_stmt: DEC A  */
#line 161 "a51.y"
            {
              /* Add to ... */
            }
#line 1897 "a51.tab.c"
    break;

  case 75: /* dec_stmt: DEC reg  */
#line 165 "a51.y"
            {
              /* Add to ... */
            }
#line 1905 "a51.tab.c"
    break;

  case 76: /* dec_stmt: DEC dir  */
#line 169 "a51.y"
            {
              /* Add to ... */
            }
#line 1913 "a51.tab.c"
    break;

  case 77: /* dec_stmt: DEC '@' ind_reg  */
#line 173 "a51.y"
            {
              /* Add to ... */
            }
#line 1921 "a51.tab.c"
    break;

  case 78: /* div_stmt: DIV AB  */
#line 178 "a51.y"
            {
              /* ADD TO ... */
            }
#line 1929 "a51.tab.c"
    break;

  case 79: /* djnz_stmt: DJNZ reg ',' ID  */
#line 183 "a51.y"
            {
              /* Add to ... */
            }
#line 1937 "a51.tab.c"
    break;

  case 80: /* djnz_stmt: DJNZ dir ',' ID  */
#line 187 "a51.y"
            {
              /* Add to ... */
            }
#line 1945 "a51.tab.c"
    break;

  case 81: /* inc_stmt: INC A  */
#line 192 "a51.y"
            {
              /* Add to ... */
            }
#line 1953 "a51.tab.c"
    break;

  case 82: /* inc_stmt: INC reg  */
#line 196 "a51.y"
            {
              /* Add to ... */
            }
#line 1961 "a51.tab.c"
    break;

  case 83: /* inc_stmt: INC dir  */
#line 200 "a51.y"
            {
              /* Add to ... */
            }
#line 1969 "a51.tab.c"
    break;

  case 84: /* inc_stmt: INC '@' ind_reg  */
#line 204 "a51.y"
            {
              /* Add to ... */
            }
#line 1977 "a51.tab.c"
    break;

  case 85: /* inc_stmt: INC DPTR  */
#line 208 "a51.y"
            {
              /* Add to ... */
            }
#line 1985 "a51.tab.c"
    break;

  case 86: /* jb_stmt: JB bit ',' ID  */
#line 213 "a51.y"
            {
              /* Add to ... */
            }
#line 1993 "a51.tab.c"
    break;

  case 87: /* jbc_stmt: JBC bit ',' ID  */
#line 218 "a51.y"
            {
              /* Add to ... */
            }
#line 2001 "a51.tab.c"
    break;

  case 88: /* jc_stmt: JC ID  */
#line 223 "a51.y"
            {
              /* Add to ... */
            }
#line 2009 "a51.tab.c"
    break;

  case 89: /* jmp_stmt: JMP '@' A '+' DPTR  */
#line 228 "a51.y"
            {
              /* Add to ... */
            }
#line 2017 "a51.tab.c"
    break;

  case 90: /* jnb_stmt: JNB bit ',' ID  */
#line 233 "a51.y"
            {
              /* Add to ... */
            }
#line 2025 "a51.tab.c"
    break;

  case 91: /* jnc_stmt: JNC ID  */
#line 238 "a51.y"
            {
              /* Add to ... */
            }
#line 2033 "a51.tab.c"
    break;

  case 92: /* jnz_stmt: JNZ ID  */
#line 243 "a51.y"
            {
              /* Add to ... */
            }
#line 2041 "a51.tab.c"
    break;

  case 93: /* jz_stmt: JZ ID  */
#line 248 "a51.y"
            {
              /* Add to ... */
            }
#line 2049 "a51.tab.c"
    break;

  case 94: /* lcall_stmt: LCALL ID  */
#line 253 "a51.y"
              {
                /* Add to ... */
              }
#line 2057 "a51.tab.c"
    break;

  case 95: /* lcall_stmt: LCALL num  */
#line 257 "a51.y"
              {
                /* Add to ... */
              }
#line 2065 "a51.tab.c"
    break;

  case 96: /* ljmp_stmt: LJMP ID  */
#line 262 "a51.y"
              {
                /* Add to ... */
              }
#line 2073 "a51.tab.c"
    break;

  case 97: /* ljmp_stmt: LJMP num  */
#line 266 "a51.y"
              {
                /* Add to ... */
              }
#line 2081 "a51.tab.c"
    break;

  case 98: /* mov_stmt: MOV A ',' reg  */
#line 271 "a51.y"
            {
              /* Add to ... */
            }
#line 2089 "a51.tab.c"
    break;

  case 99: /* mov_stmt: MOV A ',' dir  */
#line 275 "a51.y"
            {
              /* Add to ... */
            }
#line 2097 "a51.tab.c"
    break;

  case 100: /* mov_stmt: MOV A ',' '@' ind_reg  */
#line 279 "a51.y"
            {
              /* Add to ... */
            }
#line 2105 "a51.tab.c"
    break;

  case 101: /* mov_stmt: MOV A ',' '#' num  */
#line 283 "a51.y"
            {
              /* Add to ... */
            }
#line 2113 "a51.tab.c"
    break;

  case 102: /* mov_stmt: MOV reg ',' A  */
#line 287 "a51.y"
            {
              /* Add to ... */
            }
#line 2121 "a51.tab.c"
    break;

  case 103: /* mov_stmt: MOV reg ',' dir  */
#line 291 "a51.y"
            {
              /* Add to ... */
            }
#line 2129 "a51.tab.c"
    break;

  case 104: /* mov_stmt: MOV reg ',' '#' num  */
#line 295 "a51.y"
            {
              /* Add to ... */
            }
#line 2137 "a51.tab.c"
    break;

  case 105: /* mov_stmt: MOV dir ',' reg  */
#line 299 "a51.y"
            {
              /* Add to ... */
            }
#line 2145 "a51.tab.c"
    break;

  case 106: /* mov_stmt: MOV dir ',' dir  */
#line 303 "a51.y"
            {
              /* Add to ... */
            }
#line 2153 "a51.tab.c"
    break;

  case 107: /* mov_stmt: MOV dir ',' '@' ind_reg  */
#line 307 "a51.y"
            {
              /* Add to ... */
            }
#line 2161 "a51.tab.c"
    break;

  case 108: /* mov_stmt: MOV dir ',' '#' num  */
#line 311 "a51.y"
            {
              /* Add to ... */
            }
#line 2169 "a51.tab.c"
    break;

  case 109: /* mov_stmt: MOV '@' ind_reg ',' A  */
#line 315 "a51.y"
            {
              /* Add to ... */
            }
#line 2177 "a51.tab.c"
    break;

  case 110: /* mov_stmt: MOV '@' ind_reg ',' dir  */
#line 319 "a51.y"
            {
              /* Add to ... */
            }
#line 2185 "a51.tab.c"
    break;

  case 111: /* mov_stmt: MOV '@' ind_reg ',' '#' num  */
#line 323 "a51.y"
            {
              /* Add to ... */
            }
#line 2193 "a51.tab.c"
    break;

  case 112: /* mov_stmt: MOV C ',' bit  */
#line 327 "a51.y"
            {
              /* Add to ... */
            }
#line 2201 "a51.tab.c"
    break;

  case 113: /* mov_stmt: MOV bit ',' C  */
#line 331 "a51.y"
            {
              /* Add to ... */
            }
#line 2209 "a51.tab.c"
    break;

  case 114: /* mov_stmt: MOV DPTR ',' '#' num  */
#line 335 "a51.y"
            {
              /* Add to ... */
            }
#line 2217 "a51.tab.c"
    break;

  case 115: /* movc_stmt: MOVC A ',' '@' A '+' DPTR  */
#line 340 "a51.y"
              {
                /* Add to ... */
              }
#line 2225 "a51.tab.c"
    break;

  case 116: /* movc_stmt: MOVC A ',' '@' A '+' PC  */
#line 344 "a51.y"
              {
                /* Add to ... */
              }
#line 2233 "a51.tab.c"
    break;

  case 117: /* movx_stmt: MOVX A ',' '@' ind_reg  */
#line 349 "a51.y"
              {
                /* Add to ... */
              }
#line 2241 "a51.tab.c"
    break;

  case 118: /* movx_stmt: MOVX A ',' '@' DPTR  */
#line 353 "a51.y"
              {
                /* Add to ... */
              }
#line 2249 "a51.tab.c"
    break;

  case 119: /* movx_stmt: MOVX '@' ind_reg ',' A  */
#line 357 "a51.y"
              {
                /* Add to ... */
              }
#line 2257 "a51.tab.c"
    break;

  case 120: /* movx_stmt: MOVX '@' DPTR ',' A  */
#line 361 "a51.y"
              {
                /* Add to ... */
              }
#line 2265 "a51.tab.c"
    break;

  case 121: /* mul_stmt: MUL AB  */
#line 366 "a51.y"
            {
              /* Add to ... */
            }
#line 2273 "a51.tab.c"
    break;

  case 122: /* nop_stmt: NOP  */
#line 371 "a51.y"
            {
              /* Add to ... */
            }
#line 2281 "a51.tab.c"
    break;

  case 123: /* orl_stmt: ORL A ',' reg  */
#line 376 "a51.y"
            {
              /* Add to ... */
            }
#line 2289 "a51.tab.c"
    break;

  case 124: /* orl_stmt: ORL A ',' dir  */
#line 380 "a51.y"
            {
              /* Add to ... */
            }
#line 2297 "a51.tab.c"
    break;

  case 125: /* orl_stmt: ORL A ',' '@' ind_reg  */
#line 384 "a51.y"
            {
              /* Add to ... */
            }
#line 2305 "a51.tab.c"
    break;

  case 126: /* orl_stmt: ORL A ',' '#' num  */
#line 388 "a51.y"
            {
              /* Add to ... */
            }
#line 2313 "a51.tab.c"
    break;

  case 127: /* orl_stmt: ORL dir ',' A  */
#line 392 "a51.y"
            {
              /* Add to ... */
            }
#line 2321 "a51.tab.c"
    break;

  case 128: /* orl_stmt: ORL dir ',' '#' num  */
#line 396 "a51.y"
            {
              /* Add to ... */
            }
#line 2329 "a51.tab.c"
    break;

  case 129: /* orl_stmt: ORL C ',' bit  */
#line 400 "a51.y"
            {
              /* Add to ... */
            }
#line 2337 "a51.tab.c"
    break;

  case 130: /* orl_stmt: ORL C ',' '/' bit  */
#line 404 "a51.y"
            {
              /* Add to ... */
            }
#line 2345 "a51.tab.c"
    break;

  case 131: /* pop_stmt: POP dir  */
#line 409 "a51.y"
            {
              /* Add to ... */
            }
#line 2353 "a51.tab.c"
    break;

  case 132: /* push_stmt: PUSH dir  */
#line 414 "a51.y"
              {
              /* Add to ... */
              }
#line 2361 "a51.tab.c"
    break;

  case 133: /* ret_stmt: RET  */
#line 419 "a51.y"
            {
              /* Add to ... */
            }
#line 2369 "a51.tab.c"
    break;

  case 134: /* reti_stmt: RETI  */
#line 424 "a51.y"
              {
                /* Add to ... */
              }
#line 2377 "a51.tab.c"
    break;

  case 135: /* rl_stmt: RL A  */
#line 429 "a51.y"
            {
              /* Add to ... */
            }
#line 2385 "a51.tab.c"
    break;

  case 136: /* rlc_stmt: RLC A  */
#line 434 "a51.y"
            {
              /* Add to ... */
            }
#line 2393 "a51.tab.c"
    break;

  case 137: /* rr_stmt: RR A  */
#line 439 "a51.y"
            {
              /* Add to ... */
            }
#line 2401 "a51.tab.c"
    break;

  case 138: /* rrc_stmt: RRC A  */
#line 444 "a51.y"
            {
              /* Add to ... */
            }
#line 2409 "a51.tab.c"
    break;

  case 139: /* setb_stmt: SETB C  */
#line 449 "a51.y"
              {
              /* Add to ... */
              }
#line 2417 "a51.tab.c"
    break;

  case 140: /* setb_stmt: SETB bit  */
#line 453 "a51.y"
              {
              /* Add to ... */
              }
#line 2425 "a51.tab.c"
    break;

  case 141: /* sjmp_stmt: SJMP ID  */
#line 458 "a51.y"
              {
              /* Add to ... */
              }
#line 2433 "a51.tab.c"
    break;

  case 142: /* subb_stmt: SUBB A ',' reg  */
#line 463 "a51.y"
            {
              /* Add to symbol tabel */
            }
#line 2441 "a51.tab.c"
    break;

  case 143: /* subb_stmt: SUBB A ',' dir  */
#line 467 "a51.y"
            {
              /* Add to symbol tabel */
            }
#line 2449 "a51.tab.c"
    break;

  case 144: /* subb_stmt: SUBB A ',' '@' ind_reg  */
#line 471 "a51.y"
            {
              /* Add to symbol tabel */
            }
#line 2457 "a51.tab.c"
    break;

  case 145: /* subb_stmt: SUBB A ',' '#' num  */
#line 475 "a51.y"
            {
              /* Add to ... */
            }
#line 2465 "a51.tab.c"
    break;

  case 146: /* swap_stmt: SWAP A  */
#line 480 "a51.y"
              {
                /* Add to ... */
              }
#line 2473 "a51.tab.c"
    break;

  case 147: /* xch_stmt: XCH A ',' reg  */
#line 485 "a51.y"
            {
              /* Add to ... */
            }
#line 2481 "a51.tab.c"
    break;

  case 148: /* xch_stmt: XCH A ',' dir  */
#line 489 "a51.y"
            {
              /* Add to ... */
            }
#line 2489 "a51.tab.c"
    break;

  case 149: /* xch_stmt: XCH A ',' '@' ind_reg  */
#line 493 "a51.y"
            {
              /* Add to ... */
            }
#line 2497 "a51.tab.c"
    break;

  case 150: /* xchd_stmt: XCHD A ',' '@' ind_reg  */
#line 498 "a51.y"
              {
                /* Add to ... */
              }
#line 2505 "a51.tab.c"
    break;

  case 151: /* xrl_stmt: XRL A ',' reg  */
#line 503 "a51.y"
            {
              /* Add to ... */
            }
#line 2513 "a51.tab.c"
    break;

  case 152: /* xrl_stmt: XRL A ',' dir  */
#line 507 "a51.y"
            {
              /* Add to ... */
            }
#line 2521 "a51.tab.c"
    break;

  case 153: /* xrl_stmt: XRL A ',' '@' ind_reg  */
#line 511 "a51.y"
            {
              /* Add to ... */
            }
#line 2529 "a51.tab.c"
    break;

  case 154: /* xrl_stmt: XRL A ',' '#' num  */
#line 515 "a51.y"
            {
              /* Add to ... */
            }
#line 2537 "a51.tab.c"
    break;

  case 155: /* xrl_stmt: XRL dir ',' A  */
#line 519 "a51.y"
            {
              /* Add to ... */
            }
#line 2545 "a51.tab.c"
    break;

  case 156: /* xrl_stmt: XRL dir ',' '#' num  */
#line 523 "a51.y"
            {
              /* Add to ... */
            }
#line 2553 "a51.tab.c"
    break;

  case 157: /* label: ID ':'  */
#line 528 "a51.y"
        {
          /* Add to ... */
        }
#line 2561 "a51.tab.c"
    break;


#line 2565 "a51.tab.c"

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

#line 542 "a51.y"


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

