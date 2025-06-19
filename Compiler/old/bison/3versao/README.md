Links de apoio:

https://www.quut.com/c/ANSI-C-grammar-y.html

https://www.quut.com/c/ANSI-C-grammar-l-2011.html

https://cop3402fall20.github.io/projects/project1.html

https://github.com/drifter1/compiler/blob/master/Abstract%20Syntax%20Tree%20Structure/ast.h


Como correr:

./parser test_input.c

Como compilar:

bison -d bison_test2.y
flex Scanner.l
gcc -o parser bison_test2.tab.c bison_test2.tab.h lex.yy.c -lm



/*------------------------------------------------------------*/
/*                         TO DO LIST                         */
/*------------------------------------------------------------*/

-Continuar a AST/Tentar mudar o código de forma a tirar o %types, através de %define api.value.type {TreeNode}. Mudar a estrutura da TreeNode caso achem melhor, será necessário acrescentar variáveis para, por exemplo, tabela de símbolos penso

-Acrescentar gramática no Parser (pointers, modificadores de função e variáveis...)(Não sei se é necessário passar para EBNF??)

-Endireitar todo o Lexer (definir strings)

-Fazer a Análise Semântica

-Geração de código (Carol), as duas ainda não coincidem, a árvore sintática utilizada nesta parte é apenas um exemplo

-Fazer um Makefile para ser mais simples de testar

-Saber o que fazer com os defines, includes e constants (pré processamento ou acrescentar ao parser??)