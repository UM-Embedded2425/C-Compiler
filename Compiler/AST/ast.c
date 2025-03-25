#include "ast.h"

yytoken_kind_t token_list[] = {IF,OPEN_PAREN,ID,CLOSE_PAREN,SEMICOLON }; // if ( smf ) ; 
unsigned int token_count = 0;
int i = 0;
    
int main()
{
    ast_t* root = stmt_seq_node ();
}

yytoken_kind_t get_token()
{
    return token_list[i++];
}

unsigned char match (yytoken_kind_t expected)
{
    return expected == token_list[i];
        
}

ast_t* alocate_ast(int count)
{
    ast_t* t = (ast_t*) malloc(sizeof(ast_t) * count);
    if (t == NULL) {
        printf("Allocation Failed\n");
        exit(0);
    }
    return t;
}