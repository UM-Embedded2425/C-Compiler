#include "utils.h"
#include "globals.h"
#include "symtab.h"
#include "code_gen.h"

#include "a51.tab.h"

//#define PRINT_SYMTAB

extern FILE *yyin;
int current_line;
int end;

int main(int argc,char *argv[]) {

    initIR();
    initSymbolTable();
    current_line = 1;
    end = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        exit(1);
    }
  
    if((yyin = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Error opening file %s\n", argv[1]);
        exit(1);
    }
    yyparse();

    #ifdef PRINT_SYMTAB
        printSymbolTable();
    #endif
    
    if (!end_error) {
        codeGen();
    }

    fprintf(stderr, "Assembly process completed.\n");
  
    fclose(yyin);
    return 0;
}


