----------------------------------------------------------------

Todos os ficheiros que estão aqui fora fazem parte do que foi feito nestas últimas semanas. Na pasta old está o que foi feito antes, mas penso que já é desnecessário e está confuso. Só não apaguei just in case seja preciso algo.

----------------------------------------------------------------

Links de apoio que usei:

https://www.quut.com/c/ANSI-C-grammar-y.html

https://www.quut.com/c/ANSI-C-grammar-l-2011.html

https://cop3402fall20.github.io/projects/project1.html

https://github.com/drifter1/compiler/blob/master/Abstract%20Syntax%20Tree%20Structure/ast.h

------------------------------------------------------

Como correr:

./parser test_input.c

------------------------------------------------------
Como compilar:

bison -d bison_test2.y
flex Scanner.l
gcc -o parser bison_test2.tab.c bison_test2.tab.h lex.yy.c -lm


OU apenas usar

make
make clean (para limpar)

/*------------------------------------------------------------*/
/*                         TO DO LIST                         */
/*------------------------------------------------------------*/

-Continuar a AST. Será necessário acrescentar variáveis para, por exemplo, tabela de símbolos, informaçoes sobre a funçao, bla bla. Esta ideia inicial é fazer tudo numa estrutura apenas de árvore. Nao uma estrutura para cada tipo de nó. Penso que seja desnecessário. A AST ainda não está acabada, ao fazer "./parser test_codes/test_funcast.c" é possível ver o que é imprimido da árvore criada. 
funcDefNK
    Tipo: void 
    idNK: func
    parameterNK
      Tipo: char 
      idNK: a
    Tipo: int 
      Tipo: double 
      Tipo: float 
    Ainda há coisas a fazer, não está ainda a acontecer print do valor que foi guardado nem está a sair tudo completamente direito. Falta por as funçoes de createNode e addChild em toda a gramática. Penso que basta seguir os exemplos que já tem nas funções e em outros locais. É necessário rever como a árvore está a ser criada para ver se a estrutura de filhos e pais não está errada, em termos de filhos a mais e desnessários e filhos nos corretos pais, o que está a acontecer (façam o exemplo anterior que vẽm que as declaraçoes nao estao com a mesma indentaçao, logo não devem estar no mesmo nível da árvore). Also pode haver variáveis desnecessárias (100% certeza), às vezes passava cenas do tiny e devo me ter esquecido de apagar algumas

-Acrescentar gramática no Parser (pointers, modificadores de função e variáveis...)

-Ver o lexer. Adicionar o reconhecimento de char 'A' e char de tipo. Adicionar palavras relacionadas com o 8051.
        /* {_char} { yylval.val = (long int) yytext; } */

-Fazer a Análise Semântica

-Geração de código (Carol), as duas ainda não coincidem, a árvore sintática utilizada na geraçao parte é apenas um exemplo

-Saber o que fazer com os defines, includes e constants (pré processamento ou acrescentar ao parser??)