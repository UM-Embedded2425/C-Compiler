#ifndef _UTIL_H_
#define _UTIL_H_

/* Vetores para ajudar a fazer o print da árvore, estão
 * relacionados como as enumerações em ast.h
*/

static const char *tipos[] = {
    "void ",
    "bool ",
    "char ",
    "short ",
    "int ",
    "long ",
    "float ",
    "double "
};

static const char *operadores[] = {
    "/= ",
    "%= ",
    "&= ",
    "|= ",
    "^= ",
    "<<= ",
    ">>= ",
    "= ",
    "+= ",
    "-= ",
    "*= ",
    "== ",
    "+ ",
    "- ",
    "* ",
    "/ ",
    "% ",
    "! ",
    "&& ",
    "|| ",
    "> ",
    ">= ",
    "< ",
    "<= ",
    "== ",
    "!= ",
    "~ ",
    "& ",
    "| ",
    "^ ",
    ">> ",
    "<< ",
    "++ ",
    "-- "
};

#endif