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
    FLOAT_NUMBER = 261,            /* FLOAT_NUMBER  */
    AUTO = 262,                    /* AUTO  */
    BOOL = 263,                    /* BOOL  */
    BREAK = 264,                   /* BREAK  */
    CASE = 265,                    /* CASE  */
    CHAR = 266,                    /* CHAR  */
    CONST = 267,                   /* CONST  */
    CONTINUE = 268,                /* CONTINUE  */
    DEFAULT = 269,                 /* DEFAULT  */
    DO = 270,                      /* DO  */
    DOUBLE = 271,                  /* DOUBLE  */
    ELSE = 272,                    /* ELSE  */
    ENUM = 273,                    /* ENUM  */
    EXTERN = 274,                  /* EXTERN  */
    FLOAT = 275,                   /* FLOAT  */
    FOR = 276,                     /* FOR  */
    GOTO = 277,                    /* GOTO  */
    IF = 278,                      /* IF  */
    INT = 279,                     /* INT  */
    LONG = 280,                    /* LONG  */
    REGISTER = 281,                /* REGISTER  */
    RETURN = 282,                  /* RETURN  */
    SHORT = 283,                   /* SHORT  */
    SIGNED = 284,                  /* SIGNED  */
    SIZEOF = 285,                  /* SIZEOF  */
    STATIC = 286,                  /* STATIC  */
    STRUCT = 287,                  /* STRUCT  */
    SWITCH = 288,                  /* SWITCH  */
    TYPEDEF = 289,                 /* TYPEDEF  */
    UNION = 290,                   /* UNION  */
    UNSIGNED = 291,                /* UNSIGNED  */
    VOID = 292,                    /* VOID  */
    VOLATILE = 293,                /* VOLATILE  */
    WHILE = 294,                   /* WHILE  */
    PACKED = 295,                  /* PACKED  */
    PREPROCESS_HASH = 296,         /* PREPROCESS_HASH  */
    PREPROCESS_DEFINE = 297,       /* PREPROCESS_DEFINE  */
    PREPROCESS_INCLUDE = 298,      /* PREPROCESS_INCLUDE  */
    PREPROCESS_IFDEF = 299,        /* PREPROCESS_IFDEF  */
    PREPROCESS_IFNDEF = 300,       /* PREPROCESS_IFNDEF  */
    PREPROCESS_IF = 301,           /* PREPROCESS_IF  */
    PREPROCESS_ELSE = 302,         /* PREPROCESS_ELSE  */
    PREPROCESS_ELIF = 303,         /* PREPROCESS_ELIF  */
    PREPROCESS_ENDIF = 304,        /* PREPROCESS_ENDIF  */
    PREPROCESS_UNDEF = 305,        /* PREPROCESS_UNDEF  */
    PREPROCESS_ERROR = 306,        /* PREPROCESS_ERROR  */
    PREPROCESS_LINE = 307,         /* PREPROCESS_LINE  */
    PREPROCESS_PRAGMA = 308,       /* PREPROCESS_PRAGMA  */
    OPEN_PAREN = 309,              /* OPEN_PAREN  */
    CLOSE_PAREN = 310,             /* CLOSE_PAREN  */
    OPEN_SQUARE = 311,             /* OPEN_SQUARE  */
    CLOSE_SQUARE = 312,            /* CLOSE_SQUARE  */
    OPEN_CURLY = 313,              /* OPEN_CURLY  */
    CLOSE_CURLY = 314,             /* CLOSE_CURLY  */
    SEMICOLON = 315,               /* SEMICOLON  */
    COMMA = 316,                   /* COMMA  */
    DOT = 317,                     /* DOT  */
    TWO_DOTS = 318,                /* TWO_DOTS  */
    APOSTROPHE = 319,              /* APOSTROPHE  */
    QUOTATION_MARK = 320,          /* QUOTATION_MARK  */
    ARROW = 321,                   /* ARROW  */
    PLUSPLUS = 322,                /* PLUSPLUS  */
    MINUSMINUS = 323,              /* MINUSMINUS  */
    PLUS = 324,                    /* PLUS  */
    MINUS = 325,                   /* MINUS  */
    LOGIC_NOT = 326,               /* LOGIC_NOT  */
    LOGIC_AND = 327,               /* LOGIC_AND  */
    LOGIC_OR = 328,                /* LOGIC_OR  */
    BIT_NOT = 329,                 /* BIT_NOT  */
    BIT_AND = 330,                 /* BIT_AND  */
    BIT_OR = 331,                  /* BIT_OR  */
    BIT_XOR = 332,                 /* BIT_XOR  */
    TERNARY = 333,                 /* TERNARY  */
    ASTERISK = 334,                /* ASTERISK  */
    RIGHT_SLASH = 335,             /* RIGHT_SLASH  */
    PERCENT = 336,                 /* PERCENT  */
    RIGHT_SHIFT = 337,             /* RIGHT_SHIFT  */
    LEFT_SHIFT = 338,              /* LEFT_SHIFT  */
    GREATER_THAN = 339,            /* GREATER_THAN  */
    GREATER_THAN_EQUAL = 340,      /* GREATER_THAN_EQUAL  */
    SMALLER_THAN = 341,            /* SMALLER_THAN  */
    SMALLER_THAN_EQUAL = 342,      /* SMALLER_THAN_EQUAL  */
    EQUAL = 343,                   /* EQUAL  */
    DIFFERENT = 344,               /* DIFFERENT  */
    ASSIGN = 345,                  /* ASSIGN  */
    ASSIGN_PLUS = 346,             /* ASSIGN_PLUS  */
    ASSIGN_MINUS = 347,            /* ASSIGN_MINUS  */
    ASSIGN_MULT = 348,             /* ASSIGN_MULT  */
    ASSIGN_DIV = 349,              /* ASSIGN_DIV  */
    ASSIGN_PERCENT = 350,          /* ASSIGN_PERCENT  */
    ASSIGN_AND = 351,              /* ASSIGN_AND  */
    ASSIGN_OR = 352,               /* ASSIGN_OR  */
    ASSIGN_XOR = 353,              /* ASSIGN_XOR  */
    ASSIGN_LEFT_SHIFT = 354,       /* ASSIGN_LEFT_SHIFT  */
    ASSIGN_RIGHT_SHIFT = 355       /* ASSIGN_RIGHT_SHIFT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "bison_test2.y"

	int val;
    double fval;
    char* string;
    char cval;

    TreeNode* node;
	

#line 174 "bison_test2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TEST2_TAB_H_INCLUDED  */
