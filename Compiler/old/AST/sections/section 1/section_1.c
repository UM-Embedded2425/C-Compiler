#include "ast.h"

ast_t* stmt_seq_node ()
{
    ast_t * base = statment_node ();
    ast_t * p_base = base;
    yytoken_kind_t token = get_token();
    
    while((token != TOK_EOF) && (token != ELSE))
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

ast_t* statment_node ()
{
    ast_t * base = NULL;
    int token = get_token();
    switch (token)
    {
    case IF:
        
        break;
    
    case WHILE:
    
        break;
    case FOR:

    break;
    case SWITCH:

    break;
    case BREAK:

    break;
    case CONTINUE:

    break;


    default:
        break;
    }
}

ast_t* control_stmt_node ()
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

ast_t* declaration_stmt_node ()
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

ast_t* exp_stmt_node ()
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




