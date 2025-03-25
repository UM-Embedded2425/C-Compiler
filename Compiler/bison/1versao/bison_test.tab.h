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

#ifndef YY_YY_BISON_TEST_TAB_H_INCLUDED
# define YY_YY_BISON_TEST_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    YYerror = 256,                 /*  error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* "identifier"  */
    LETTER = 259,                  /* "letter"  */
    NUMBER = 260,                  /* "integer"  */
    BREAK = 261,                   /* "break"  */
    CASE = 262,                    /* "case"  */
    CHAR = 263,                    /* "char"  */
    CONST = 264,                   /* "const"  */
    CONTINUE = 265,                /* "continue"  */
    DEFAULT = 266,                 /* "default"  */
    DO = 267,                      /* "do"  */
    DOUBLE = 268,                  /* "double"  */
    ELSE = 269,                    /* "else"  */
    ENUM = 270,                    /* "enum"  */
    EXTERN = 271,                  /* "extern"  */
    FLOAT = 272,                   /* "float"  */
    FOR = 273,                     /* "for"  */
    GOTO = 274,                    /* "goto"  */
    IF = 275,                      /* "if"  */
    INT = 276,                     /* "int"  */
    LONG = 277,                    /* "long"  */
    REGISTER = 278,                /* "register"  */
    RETURN = 279,                  /* "return"  */
    SHORT = 280,                   /* "short"  */
    SIGNED = 281,                  /* "signed"  */
    SIZEOF = 282,                  /* "sizeof"  */
    STATIC = 283,                  /* "static"  */
    STRUCT = 284,                  /* "struct"  */
    SWITCH = 285,                  /* "switch"  */
    TYPEDEF = 286,                 /* "typedef"  */
    UNION = 287,                   /* "union"  */
    UNSIGNED = 288,                /* "unsigned"  */
    VOID = 289,                    /* "void"  */
    VOLATILE = 290,                /* "volatile"  */
    WHILE = 291,                   /* "while"  */
    PACKED = 292,                  /* "__Packed"  */
    OPEN_PAREN = 293,              /* "("  */
    CLOSE_PAREN = 294,             /* ")"  */
    OPEN_SQUARE = 295,             /* "["  */
    CLOSE_SQUARE = 296,            /* "]"  */
    OPEN_CURLY = 297,              /* "{"  */
    CLOSE_CURLY = 298,             /* "}"  */
    SEMICOLON = 299,               /* ";"  */
    COMMA = 300,                   /* ","  */
    DOT = 301,                     /* "."  */
    ARROW = 302,                   /* "->"  */
    PLUSPLUS = 303,                /* "++"  */
    MINUSMINUS = 304,              /* "--"  */
    PLUS = 305,                    /* "+"  */
    MINUS = 306,                   /* "-"  */
    LOGIC_NOT = 307,               /* "!"  */
    LOGIC_AND = 308,               /* "&&"  */
    LOGIC_OR = 309,                /* "||"  */
    BIT_NOT = 310,                 /* "~"  */
    BIT_AND = 311,                 /* "&"  */
    BIT_OR = 312,                  /* "|"  */
    BIT_XOR = 313,                 /* "^"  */
    TERNARY = 314,                 /* "?"  */
    ASTERISC = 315,                /* "*"  */
    RIGHT_SLASH = 316,             /* "/"  */
    PERCENT = 317,                 /* "%"  */
    RIGHT_SHIFT = 318,             /* ">>"  */
    LEFT_SHIFT = 319,              /* "<<"  */
    GRATER_THAN = 320,             /* ">"  */
    GRATER_THAN_EQUAL = 321,       /* ">="  */
    SMALLER_THAN = 322,            /* "<"  */
    SMALLER_THAN_EQUAL = 323,      /* "<="  */
    EQUAL = 324,                   /* "=="  */
    DIFFERENT = 325,               /* "!="  */
    ASSIGN = 326,                  /* "="  */
    ASSIGN_PLUS = 327,             /* "+="  */
    ASSIGN_MINUS = 328,            /* "-="  */
    ASSIGN_MULT = 329,             /* "*="  */
    ASSIGN_DIV = 330,              /* "/="  */
    ASSIGN_PERCENT = 331,          /* "%="  */
    ASSIGN_AND = 332,              /* "&="  */
    ASSIGN_OR = 333,               /* "|="  */
    ASSIGN_XOR = 334,              /* "^="  */
    ASSIGN_LEFT_SHIFT = 335,       /* "<<="  */
    ASSIGN_RIGHT_SHIFT = 336,      /* ">>="  */
    TWO_DOTS = 337                 /* ":"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 1 "bison_test.y"

    char* string;

#line 112 "bison_test.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TEST_TAB_H_INCLUDED  */
