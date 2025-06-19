# Nome do executável
TARGET = parser

# Fontes
PARSER = parser.y
LEXER = scanner.l
SRCS = ast.c

# Compilador
CC = gcc
CFLAGS = -Wall -g

all: $(TARGET)

$(TARGET): $(PARSER) $(LEXER) $(SRCS)
	bison -d $(PARSER)
	flex $(LEXER)
	$(CC) $(CFLAGS) -o $(TARGET) parser.tab.c lex.yy.c $(SRCS)

clean:
	rm -f $(TARGET) parser.tab.* lex.yy.c *.output
