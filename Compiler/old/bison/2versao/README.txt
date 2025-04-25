Como correr:

./parser test_input.c


Como compilar:

bison -d bison_test2.y
flex Scanner.l
gcc -o parser bison_test2.tab.c bison_test2.tab.h lex.yy.c -lm
