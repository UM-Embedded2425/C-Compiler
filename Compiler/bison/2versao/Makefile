all: flex bison

flex: 
	flex Scanner.l

bison: 
	bison -d bison_test2.y
	gcc -o parser bison_test2.tab.c bison_test2.tab.h lex.yy.c -lm

test:
	./parser test_input.c

execute:
	./parser

tst:
	./parser test2.c

clean:
	rm -f parser lex.yy.c bison_test2.tab.* bison_test2.output
