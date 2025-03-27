Como correr:

make execute tst para correr o test2.c
make execute test para correr o test_input.c

Como compilar:

make bison
make flex
gcc -o parser bison_test2.tab.c bison_test2.tab.h lex.yy.c -lm

Falta implementar o bison para os especificos de 8051 ver https://courses.cs.washington.edu/courses/cse466/01au/Lab/C51.pdf
Talvez falta adicionar alguns especificos de 8051 no flex.
O If não sei se funciona de forma correta porque tentei implementar a forma do AT para evitar a ambiguidade mas dáme ainda problemas.
Criar ast para guardar a informação em vez de calcular ali.
Criar hash table.