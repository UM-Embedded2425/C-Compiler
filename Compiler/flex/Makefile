
TYPE = code

all: flex_ bison_

execute_test: all
	./a.out test_codes/test_$(TYPE).txt
execute: all
	./a.out

flex_:
	@echo "[Make]Flex step"
	flex flex_test.l
	gcc lex.yy.c


bison_:
	@echo "[Make]Bison step"

#nothing yet :)
