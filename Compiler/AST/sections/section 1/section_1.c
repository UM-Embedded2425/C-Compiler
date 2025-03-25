#include "ast.h"

ast_t* stmt_seq_node ()
{
    ast_t * base = statment_node ();
    ast_t * p_base = base;
    yytoken_kind_t token = get_token();
    
    while((token != TOK_EOF) && (token != ELSE));
        {
            ast_t* test;
            test = statment_node ();
            if (!match(SEMICOLON))
                return NULL;
            if (test != NULL)
            {
                if (base == NULL) base = p_base = test;
                else
                {
                    p_base->siblings = test;
                    p_base = test;
                }
            }
        }
    return base;
}
/*
ast_t* statment_node ()
{
    ast_t * base = NULL;
    switch (get_token())
    {
    case :
        break;
    
    default:
        break;
    }
}
*/



