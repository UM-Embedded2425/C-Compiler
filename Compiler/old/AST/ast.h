#ifndef __AST__
#define __AST__

#include "bison_test2.tab.h"

#define MAXCHILDREN 3

typedef int TokenType; 

typedef enum {StmtK,ExpK} NodeKind;
typedef enum {IfK,RepeatK,AssignK,ReadK,WriteK} StmtKind;
typedef enum {OpK,ConstK,IdK} ExpKind;

/* ExpType is used for type checking */
typedef enum {Void,Integer,Boolean} ExpType;

//não ter numero maximo de filhos, para nao limitar codigo

typedef struct treeNode
   { struct treeNode * child[MAXCHILDREN];
     struct treeNode * sibling;
     int lineno;
     NodeKind nodekind;
     union { StmtKind stmt; ExpKind exp;} kind;
     union { TokenType op;
             int val;
             char * name; } attr;
     ExpType type; /* for type checking of exps */
   } TreeNode;


   TreeNode * newStmtNode(StmtKind);

   TreeNode * newExpNode(ExpKind);

#endif