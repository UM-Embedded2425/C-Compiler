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
    XCHL = 281,                    /* XCHL  */
    SWAP = 282,                    /* SWAP  */
    PUSH = 283,                    /* PUSH  */
    POP = 284,                     /* POP  */
    INC = 285,                     /* INC  */
    DEC = 286,                     /* DEC  */
    ADD = 287,                     /* ADD  */
    ADDC = 288,                    /* ADDC  */
    DIV = 289,                     /* DIV  */
    SUBB = 290,                    /* SUBB  */
    MUL = 291,                     /* MUL  */
    DA = 292,                      /* DA  */
    SETB = 293,                    /* SETB  */
    CLR = 294,                     /* CLR  */
    CPL = 295,                     /* CPL  */
    RR = 296,                      /* RR  */
    RRC = 297,                     /* RRC  */
    RL = 298,                      /* RL  */
    RLC = 299,                     /* RLC  */
    ORL = 300,                     /* ORL  */
    XRL = 301,                     /* XRL  */
    ANL = 302,                     /* ANL  */
    A = 303,                       /* A  */
    B = 304,                       /* B  */
    PSW = 305,                     /* PSW  */
    DPTR = 306,                    /* DPTR  */
    DPL = 307,                     /* DPL  */
    DPH = 308,                     /* DPH  */
    SP = 309,                      /* SP  */
    P0 = 310,                      /* P0  */
    P1 = 311,                      /* P1  */
    TCON = 312,                    /* TCON  */
    TMOD = 313,                    /* TMOD  */
    TLO = 314,                     /* TLO  */
    TL1 = 315,                     /* TL1  */
    TH0 = 316,                     /* TH0  */
    TH1 = 317,                     /* TH1  */
    SCON = 318,                    /* SCON  */
    SBUF = 319,                    /* SBUF  */
    PC = 320,                      /* PC  */
    IE = 321,                      /* IE  */
    IP = 322,                      /* IP  */
    GPIO_PORT = 323,               /* GPIO_PORT  */
    GPIO_PIN = 324,                /* GPIO_PIN  */
    R0 = 325,                      /* R0  */
    R1 = 326,                      /* R1  */
    R2 = 327,                      /* R2  */
    R3 = 328,                      /* R3  */
    R4 = 329,                      /* R4  */
    R5 = 330,                      /* R5  */
    R6 = 331,                      /* R6  */
    R7 = 332,                      /* R7  */
    C = 333,                       /* C  */
    NUMBER = 334,                  /* NUMBER  */
    IDENTIFIER = 335,              /* IDENTIFIER  */
    AB = 336,                      /* AB  */
    HASH_TAG = 337,                /* HASH_TAG  */
    OP_CLOSE_PAREN = 338,          /* OP_CLOSE_PAREN  */
    OP_OPEN_PAREN = 339            /* OP_OPEN_PAREN  */
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


#endif /* !YY_YY_A51_TAB_H_INCLUDED  */
