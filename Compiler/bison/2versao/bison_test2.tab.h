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
    LETTER = 259,                  /* "letter"  */
    NUMBER = 260,                  /* NUMBER  */
    HEX_NUMBER = 261,              /* HEX_NUMBER  */
    OCTAL_NUMBER = 262,            /* OCTAL_NUMBER  */
    BINARY_NUMBER = 263,           /* BINARY_NUMBER  */
    AUTO = 264,                    /* AUTO  */
    BREAK = 265,                   /* BREAK  */
    CASE = 266,                    /* CASE  */
    CHAR = 267,                    /* CHAR  */
    CONST = 268,                   /* CONST  */
    CONTINUE = 269,                /* CONTINUE  */
    DEFAULT = 270,                 /* DEFAULT  */
    DO = 271,                      /* DO  */
    DOUBLE = 272,                  /* DOUBLE  */
    ELSE = 273,                    /* ELSE  */
    ENUM = 274,                    /* ENUM  */
    EXTERN = 275,                  /* EXTERN  */
    FLOAT = 276,                   /* FLOAT  */
    FOR = 277,                     /* FOR  */
    GOTO = 278,                    /* GOTO  */
    IF = 279,                      /* IF  */
    INT = 280,                     /* INT  */
    LONG = 281,                    /* LONG  */
    REGISTER = 282,                /* REGISTER  */
    RETURN = 283,                  /* RETURN  */
    SHORT = 284,                   /* SHORT  */
    SIGNED = 285,                  /* SIGNED  */
    SIZEOF = 286,                  /* SIZEOF  */
    STATIC = 287,                  /* STATIC  */
    STRUCT = 288,                  /* STRUCT  */
    SWITCH = 289,                  /* SWITCH  */
    TYPEDEF = 290,                 /* TYPEDEF  */
    UNION = 291,                   /* UNION  */
    UNSIGNED = 292,                /* UNSIGNED  */
    VOID = 293,                    /* VOID  */
    VOLATILE = 294,                /* VOLATILE  */
    WHILE = 295,                   /* WHILE  */
    PACKED = 296,                  /* PACKED  */
    PREPROCESS_HASH = 297,         /* PREPROCESS_HASH  */
    PREPROCESS_DEFINE = 298,       /* PREPROCESS_DEFINE  */
    PREPROCESS_INCLUDE = 299,      /* PREPROCESS_INCLUDE  */
    PREPROCESS_IFDEF = 300,        /* PREPROCESS_IFDEF  */
    PREPROCESS_IFNDEF = 301,       /* PREPROCESS_IFNDEF  */
    PREPROCESS_IF = 302,           /* PREPROCESS_IF  */
    PREPROCESS_ELSE = 303,         /* PREPROCESS_ELSE  */
    PREPROCESS_ELIF = 304,         /* PREPROCESS_ELIF  */
    PREPROCESS_ENDIF = 305,        /* PREPROCESS_ENDIF  */
    PREPROCESS_UNDEF = 306,        /* PREPROCESS_UNDEF  */
    PREPROCESS_ERROR = 307,        /* PREPROCESS_ERROR  */
    PREPROCESS_LINE = 308,         /* PREPROCESS_LINE  */
    PREPROCESS_PRAGMA = 309,       /* PREPROCESS_PRAGMA  */
    OPEN_PAREN = 310,              /* OPEN_PAREN  */
    CLOSE_PAREN = 311,             /* CLOSE_PAREN  */
    OPEN_SQUARE = 312,             /* OPEN_SQUARE  */
    CLOSE_SQUARE = 313,            /* CLOSE_SQUARE  */
    OPEN_CURLY = 314,              /* OPEN_CURLY  */
    CLOSE_CURLY = 315,             /* CLOSE_CURLY  */
    SEMICOLON = 316,               /* SEMICOLON  */
    COMMA = 317,                   /* COMMA  */
    DOT = 318,                     /* DOT  */
    TWO_DOTS = 319,                /* TWO_DOTS  */
    APOSTROPHE = 320,              /* APOSTROPHE  */
    QUOTATION_MARK = 321,          /* QUOTATION_MARK  */
    ARROW = 322,                   /* ARROW  */
    PLUSPLUS = 323,                /* PLUSPLUS  */
    MINUSMINUS = 324,              /* MINUSMINUS  */
    PLUS = 325,                    /* PLUS  */
    MINUS = 326,                   /* MINUS  */
    LOGIC_NOT = 327,               /* LOGIC_NOT  */
    LOGIC_AND = 328,               /* LOGIC_AND  */
    LOGIC_OR = 329,                /* LOGIC_OR  */
    BIT_NOT = 330,                 /* BIT_NOT  */
    BIT_AND = 331,                 /* BIT_AND  */
    BIT_OR = 332,                  /* BIT_OR  */
    BIT_XOR = 333,                 /* BIT_XOR  */
    TERNARY = 334,                 /* TERNARY  */
    ASTERISK = 335,                /* ASTERISK  */
    RIGHT_SLASH = 336,             /* RIGHT_SLASH  */
    PERCENT = 337,                 /* PERCENT  */
    RIGHT_SHIFT = 338,             /* RIGHT_SHIFT  */
    LEFT_SHIFT = 339,              /* LEFT_SHIFT  */
    GREATER_THAN = 340,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL = 341,      /* GREATER_THAN_EQUAL  */
    SMALLER_THAN = 342,            /* SMALLER_THAN  */
    SMALLER_THAN_EQUAL = 343,      /* SMALLER_THAN_EQUAL  */
    EQUAL = 344,                   /* EQUAL  */
    DIFFERENT = 345,               /* DIFFERENT  */
    ASSIGN = 346,                  /* ASSIGN  */
    ASSIGN_PLUS = 347,             /* ASSIGN_PLUS  */
    ASSIGN_MINUS = 348,            /* ASSIGN_MINUS  */
    ASSIGN_MULT = 349,             /* ASSIGN_MULT  */
    ASSIGN_DIV = 350,              /* ASSIGN_DIV  */
    ASSIGN_PERCENT = 351,          /* ASSIGN_PERCENT  */
    ASSIGN_AND = 352,              /* ASSIGN_AND  */
    ASSIGN_OR = 353,               /* ASSIGN_OR  */
    ASSIGN_XOR = 354,              /* ASSIGN_XOR  */
    ASSIGN_LEFT_SHIFT = 355,       /* ASSIGN_LEFT_SHIFT  */
    ASSIGN_RIGHT_SHIFT = 356       /* ASSIGN_RIGHT_SHIFT  */
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

#line 170 "bison_test2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TEST2_TAB_H_INCLUDED  */
