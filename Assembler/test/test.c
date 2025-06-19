#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main(int argc, char const *argv[])
{

    FILE *output;
    output = fopen("test.txt", "w+");

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        exit(1);
    }
   
    if (output == NULL) {
        fprintf(stderr, "Error opening file test.txt\n");
        return 1;
    }

    for (size_t i = 0; i < atoi(argv[1]); i++)
    {
        fprintf(output, "0000\n");
    }

    fseek(output, atoi(argv[2])*5, SEEK_SET);

    fprintf(output, "1234\n");

    fseek(output, 0, SEEK_END);

    fprintf(output, "4321\n");

    fclose(output);
    
    return 0;
}
