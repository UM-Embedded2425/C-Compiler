#include "utils.h"
#include "globals.h"
#include "symtab.h"
#include "code_gen.h"

#include "a51.tab.h"

#define PRINT_SYMTAB

extern FILE *yyin;
int current_line;

int main(int argc,char *argv[]) {

    initIR();
    initSymbolTable();
    current_line = 1;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        exit(1);
    }
  
    yyin = fopen(argv[1], "r");
    yyparse();

    #ifdef PRINT_SYMTAB
        printSymbolTable();
    #endif
    
    printf("\nCode Generation\n");
    printf("------------\n");
    codeGen();
  
    fclose(yyin);
    return 0;
}







