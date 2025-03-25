#ifndef __AST__
#define __AST__

#include "../bison/bison_test.tab.h"

typedef struct ast_s ast_t;
#define NULL ((void*)0)
struct ast_s
{
    yytoken_kind_t token_kind;// bison.tab.h
    ast_t* siblings; //haha slibings
    ast_t* children;
    char error;
};

yytoken_kind_t get_token();

unsigned char match (yytoken_kind_t token);

//section 1
ast_t* stmt_seq_node ();

ast_t* statment_node ();

//section 2
ast_t*  control_stmt_node();
ast_t*  if_node();

ast_t* alocate_ast(int count);

#endif