
TYPE = code

all: flex_ bison_

execute_test: all
	./a.out test_codes/test_$(TYPE).txt
execute: all
	./a.out

flex_:
	@echo "[Make]Flex step"
	flex /2versao/Scanner.l

bison_:
	@echo "[Make]Bison step"
	bison -t -d -v /2versao/bison_test2.y
	g++ lex.yy.c /2versao/bison_test.tab2.c 
#nothing yet :)
