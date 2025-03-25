
TYPE = code

all: flex_ bison_

execute_test: all
	./a.out test_codes/test_$(TYPE).txt
execute: all
	./a.out

flex_:
	@echo "[Make]Flex step"
	flex flex_test.l

bison_:
	@echo "[Make]Bison step"
	bison -t -d -v bison_test.y
	g++ lex.yy.c bison_test.tab.c 
#nothing yet :)
