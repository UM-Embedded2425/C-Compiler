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
    IE = 320,                      /* IE  */
    IP = 321,                      /* IP  */
    R0 = 322,                      /* R0  */
    R1 = 323,                      /* R1  */
    R2 = 324,                      /* R2  */
    R3 = 325,                      /* R3  */
    R4 = 326,                      /* R4  */
    R5 = 327,                      /* R5  */
    R6 = 328,                      /* R6  */
    R7 = 329,                      /* R7  */
    C = 330,                       /* C  */
    NUMBER = 331,                  /* NUMBER  */
    IDENTIFIER = 332,              /* IDENTIFIER  */
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


#endif /* !YY_YY_A51_TAB_H_INCLUDED  */
