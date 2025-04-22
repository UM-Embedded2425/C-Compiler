/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_A51_TAB_H_INCLUDED
# define YY_YY_A51_TAB_H_INCLUDED
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
    ACALL = 258,                   /* ACALL  */
    ADD = 259,                     /* ADD  */
    ADDC = 260,                    /* ADDC  */
    AJMP = 261,                    /* AJMP  */
    ANL = 262,                     /* ANL  */
    CJNE = 263,                    /* CJNE  */
    CLR = 264,                     /* CLR  */
    CPL = 265,                     /* CPL  */
    DA = 266,                      /* DA  */
    DEC = 267,                     /* DEC  */
    DIV = 268,                     /* DIV  */
    DJNZ = 269,                    /* DJNZ  */
    INC = 270,                     /* INC  */
    JB = 271,                      /* JB  */
    JBC = 272,                     /* JBC  */
    JC = 273,                      /* JC  */
    JMP = 274,                     /* JMP  */
    JNB = 275,                     /* JNB  */
    JNC = 276,                     /* JNC  */
    JNZ = 277,                     /* JNZ  */
    JZ = 278,                      /* JZ  */
    LCALL = 279,                   /* LCALL  */
    LJMP = 280,                    /* LJMP  */
    MOV = 281,                     /* MOV  */
    MOVC = 282,                    /* MOVC  */
    MUL = 283,                     /* MUL  */
    NOP = 284,                     /* NOP  */
    ORL = 285,                     /* ORL  */
    POP = 286,                     /* POP  */
    PUSH = 287,                    /* PUSH  */
    RET = 288,                     /* RET  */
    RETI = 289,                    /* RETI  */
    RL = 290,                      /* RL  */
    RLC = 291,                     /* RLC  */
    RR = 292,                      /* RR  */
    RRC = 293,                     /* RRC  */
    SETB = 294,                    /* SETB  */
    SJMP = 295,                    /* SJMP  */
    SUBB = 296,                    /* SUBB  */
    SWAP = 297,                    /* SWAP  */
    XCH = 298,                     /* XCH  */
    XCHD = 299,                    /* XCHD  */
    XRL = 300,                     /* XRL  */
    STRING = 301,                  /* STRING  */
    SEG = 302,                     /* SEG  */
    AREG = 303,                    /* AREG  */
    REG = 304,                     /* REG  */
    A = 305,                       /* A  */
    C = 306,                       /* C  */
    B = 307,                       /* B  */
    PC = 308,                      /* PC  */
    SFR = 309,                     /* SFR  */
    AB = 310,                      /* AB  */
    DPTR = 311,                    /* DPTR  */
    NUMBER = 312,                  /* NUMBER  */
    RAM_BIT_ADDRESS = 313,         /* RAM_BIT_ADDRESS  */
    SFR_BIT_ADDRESS = 314,         /* SFR_BIT_ADDRESS  */
    COMMA = 315,                   /* COMMA  */
    HASH_TAG = 316,                /* HASH_TAG  */
    AT = 317,                      /* AT  */
    AT_SIGN = 318,                 /* AT_SIGN  */
    TWO_DOTS = 319,                /* TWO_DOTS  */
    SUM = 320,                     /* SUM  */
    MINUS = 321,                   /* MINUS  */
    MULTIPLY = 322,                /* MULTIPLY  */
    MODULE = 323,                  /* MODULE  */
    EQ = 324,                      /* EQ  */
    LT = 325,                      /* LT  */
    MT = 326,                      /* MT  */
    DIVISION = 327,                /* DIVISION  */
    OP_PAR = 328,                  /* OP_PAR  */
    CL_PAR = 329,                  /* CL_PAR  */
    SHIFT_L = 330,                 /* SHIFT_L  */
    SHIFT_R = 331,                 /* SHIFT_R  */
    ALIGN = 332,                   /* ALIGN  */
    EVEN = 333,                    /* EVEN  */
    ORG = 334,                     /* ORG  */
    EQU = 335,                     /* EQU  */
    USING = 336,                   /* USING  */
    DB = 337,                      /* DB  */
    DD = 338,                      /* DD  */
    DW = 339,                      /* DW  */
    DBIT = 340,                    /* DBIT  */
    DS = 341,                      /* DS  */
    END = 342,                     /* END  */
    IDENTIFIER = 343               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "a51.y"

    bucketList *bucket;
    int num;
    segment_t segment;
    char* str;
    // other types you might need

#line 160 "a51.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_A51_TAB_H_INCLUDED  */
