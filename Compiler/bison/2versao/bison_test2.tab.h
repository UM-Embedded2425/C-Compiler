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

#ifndef YY_YY_BISON_TEST2_TAB_H_INCLUDED
# define YY_YY_BISON_TEST2_TAB_H_INCLUDED
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
    TOK_EOF = 0,                   /* "end of input"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* "identifier"  */
    LETTER = 259,                  /* LETTER  */
    STRINGER_PARAM = 260,          /* "letter"  */
    NUMBER = 261,                  /* NUMBER  */
    HEX_NUMBER = 262,              /* HEX_NUMBER  */
    OCTAL_NUMBER = 263,            /* OCTAL_NUMBER  */
    BINARY_NUMBER = 264,           /* BINARY_NUMBER  */
    AUTO = 265,                    /* AUTO  */
    BREAK = 266,                   /* BREAK  */
    CASE = 267,                    /* CASE  */
    CHAR = 268,                    /* CHAR  */
    CONST = 269,                   /* CONST  */
    CONTINUE = 270,                /* CONTINUE  */
    DEFAULT = 271,                 /* DEFAULT  */
    DO = 272,                      /* DO  */
    DOUBLE = 273,                  /* DOUBLE  */
    ELSE = 274,                    /* ELSE  */
    ENUM = 275,                    /* ENUM  */
    EXTERN = 276,                  /* EXTERN  */
    FLOAT = 277,                   /* FLOAT  */
    FOR = 278,                     /* FOR  */
    GOTO = 279,                    /* GOTO  */
    IF = 280,                      /* IF  */
    INT = 281,                     /* INT  */
    LONG = 282,                    /* LONG  */
    REGISTER = 283,                /* REGISTER  */
    RETURN = 284,                  /* RETURN  */
    SHORT = 285,                   /* SHORT  */
    SIGNED = 286,                  /* SIGNED  */
    SIZEOF = 287,                  /* SIZEOF  */
    STATIC = 288,                  /* STATIC  */
    STRUCT = 289,                  /* STRUCT  */
    SWITCH = 290,                  /* SWITCH  */
    TYPEDEF = 291,                 /* TYPEDEF  */
    UNION = 292,                   /* UNION  */
    UNSIGNED = 293,                /* UNSIGNED  */
    VOID = 294,                    /* VOID  */
    VOLATILE = 295,                /* VOLATILE  */
    WHILE = 296,                   /* WHILE  */
    PACKED = 297,                  /* PACKED  */
    PREPROCESS_HASH = 298,         /* PREPROCESS_HASH  */
    PREPROCESS_DEFINE = 299,       /* PREPROCESS_DEFINE  */
    PREPROCESS_INCLUDE = 300,      /* PREPROCESS_INCLUDE  */
    PREPROCESS_IFDEF = 301,        /* PREPROCESS_IFDEF  */
    PREPROCESS_IFNDEF = 302,       /* PREPROCESS_IFNDEF  */
    PREPROCESS_IF = 303,           /* PREPROCESS_IF  */
    PREPROCESS_ELSE = 304,         /* PREPROCESS_ELSE  */
    PREPROCESS_ELIF = 305,         /* PREPROCESS_ELIF  */
    PREPROCESS_ENDIF = 306,        /* PREPROCESS_ENDIF  */
    PREPROCESS_UNDEF = 307,        /* PREPROCESS_UNDEF  */
    PREPROCESS_ERROR = 308,        /* PREPROCESS_ERROR  */
    PREPROCESS_LINE = 309,         /* PREPROCESS_LINE  */
    PREPROCESS_PRAGMA = 310,       /* PREPROCESS_PRAGMA  */
    OPEN_PAREN = 311,              /* OPEN_PAREN  */
    CLOSE_PAREN = 312,             /* CLOSE_PAREN  */
    OPEN_SQUARE = 313,             /* OPEN_SQUARE  */
    CLOSE_SQUARE = 314,            /* CLOSE_SQUARE  */
    OPEN_CURLY = 315,              /* OPEN_CURLY  */
    CLOSE_CURLY = 316,             /* CLOSE_CURLY  */
    SEMICOLON = 317,               /* SEMICOLON  */
    COMMA = 318,                   /* COMMA  */
    DOT = 319,                     /* DOT  */
    TWO_DOTS = 320,                /* TWO_DOTS  */
    APOSTROPHE = 321,              /* APOSTROPHE  */
    QUOTATION_MARK = 322,          /* QUOTATION_MARK  */
    ARROW = 323,                   /* ARROW  */
    PLUSPLUS = 324,                /* PLUSPLUS  */
    MINUSMINUS = 325,              /* MINUSMINUS  */
    PLUS = 326,                    /* PLUS  */
    MINUS = 327,                   /* MINUS  */
    LOGIC_NOT = 328,               /* LOGIC_NOT  */
    LOGIC_AND = 329,               /* LOGIC_AND  */
    LOGIC_OR = 330,                /* LOGIC_OR  */
    BIT_NOT = 331,                 /* BIT_NOT  */
    BIT_AND = 332,                 /* BIT_AND  */
    BIT_OR = 333,                  /* BIT_OR  */
    BIT_XOR = 334,                 /* BIT_XOR  */
    TERNARY = 335,                 /* TERNARY  */
    ASTERISK = 336,                /* ASTERISK  */
    RIGHT_SLASH = 337,             /* RIGHT_SLASH  */
    PERCENT = 338,                 /* PERCENT  */
    RIGHT_SHIFT = 339,             /* RIGHT_SHIFT  */
    LEFT_SHIFT = 340,              /* LEFT_SHIFT  */
    GREATER_THAN = 341,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL = 342,      /* GREATER_THAN_EQUAL  */
    SMALLER_THAN = 343,            /* SMALLER_THAN  */
    SMALLER_THAN_EQUAL = 344,      /* SMALLER_THAN_EQUAL  */
    EQUAL = 345,                   /* EQUAL  */
    DIFFERENT = 346,               /* DIFFERENT  */
    ASSIGN = 347,                  /* ASSIGN  */
    ASSIGN_PLUS = 348,             /* ASSIGN_PLUS  */
    ASSIGN_MINUS = 349,            /* ASSIGN_MINUS  */
    ASSIGN_MULT = 350,             /* ASSIGN_MULT  */
    ASSIGN_DIV = 351,              /* ASSIGN_DIV  */
    ASSIGN_PERCENT = 352,          /* ASSIGN_PERCENT  */
    ASSIGN_AND = 353,              /* ASSIGN_AND  */
    ASSIGN_OR = 354,               /* ASSIGN_OR  */
    ASSIGN_XOR = 355,              /* ASSIGN_XOR  */
    ASSIGN_LEFT_SHIFT = 356,       /* ASSIGN_LEFT_SHIFT  */
    ASSIGN_RIGHT_SHIFT = 357,      /* ASSIGN_RIGHT_SHIFT  */
    NOINTVECTOR = 358,             /* NOINTVECTOR  */
    COMPACT = 359,                 /* COMPACT  */
    DB = 360,                      /* DB  */
    DISABLE = 361,                 /* DISABLE  */
    EJECT = 362,                   /* EJECT  */
    ASM = 363,                     /* ASM  */
    ENDASM = 364,                  /* ENDASM  */
    INTPROMOTE = 365,              /* INTPROMOTE  */
    FLOATFUZZY = 366,              /* FLOATFUZZY  */
    INTERVAL = 367,                /* INTERVAL  */
    LARGE = 368,                   /* LARGE  */
    LISTINCLUDE = 369,             /* LISTINCLUDE  */
    MAXAREGS = 370,                /* MAXAREGS  */
    CODE = 371,                    /* CODE  */
    DATA = 372,                    /* DATA  */
    IDATA = 373,                   /* IDATA  */
    BDATA = 374,                   /* BDATA  */
    XDATA = 375,                   /* XDATA  */
    PDATA = 376,                   /* PDATA  */
    SMALL = 377,                   /* SMALL  */
    BIT = 378,                     /* BIT  */
    SBIT = 379,                    /* SBIT  */
    SFR = 380,                     /* SFR  */
    SFR16 = 381,                   /* SFR16  */
    AT = 382,                      /* AT  */
    ALIEN = 383,                   /* ALIEN  */
    INTERRUPT = 384,               /* INTERRUPT  */
    PRIORITY = 385,                /* PRIORITY  */
    REENTRANT = 386,               /* REENTRANT  */
    TASK = 387,                    /* TASK  */
    USING = 388,                   /* USING  */
    STRINGER = 389,                /* STRINGER  */
    LOWER_THAN_ELSE = 390          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 1 "bison_test2.y"

    char* string;
    int num;  // For numeric values

#line 204 "bison_test2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TEST2_TAB_H_INCLUDED  */
