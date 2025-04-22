#
#
# Makefile for as51
#
#

CC = gcc

CFLAGS = -g

YACC = bison
LEX = flex

OBJS = a51.tab.o lex.yy.o main.o utils.o symtab.o code_gen.o

as51: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o as51 

main.o: main.c globals.h utils.h code_gen.h
	$(CC) $(CFLAGS) -c main.c 

utils.o: utils.c utils.h globals.h
	$(CC) $(CFLAGS) -c utils.c

lex.yy.o: lex.yy.c utils.h globals.h symtab.h
	$(CC) $(CFLAGS) -c lex.yy.c

lex.yy.c: lex.l a51.tab.h
	$(LEX) lex.l

a51.tab.o: a51.tab.c symtab.h globals.h utils.h symtab.h
	$(CC) $(FLAGS) -c a51.tab.c

a51.tab.h a51.tab.c: a51.y 
	$(YACC) -vd a51.y

symtab.o: symtab.c symtab.h globals.h utils.h
	$(CC) $(CFLAGS) -c symtab.c

code_gen.o: code_gen.c globals.h symtab.h 
	$(CC) $(CFLAGS) -c code_gen.c

clean:
	-rm as51
	-rm lex.yy.c
	-rm a51.tab.c a51.tab.h a51.output output.coe
	-rm $(OBJS)

all: as51

