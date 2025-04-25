#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//variáveis daqui são para sair, só para não dar erro neste momento

int lineno = 0; //mantém o número da linha atual do código fonte 
FILE * source; //ponteiro para o arquivo de entrada
FILE * listing; //ponteiro para o arquivo de saída
FILE * code; //ponteiro para o código gerado

/* Função geral para a criação de todos os nodos possiveis
 * que irão formar a árvore sintática. Possibilidade de
 * left/right em vez de sibling?
 */

TreeNode * createNode(NodeKind kind){ 
    TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
    
    int i;
    if (t==NULL)
        fprintf(listing,"Out of memory error at line %d\n",lineno);
    else {
        t->nodekind = kind;
        t->lineno = lineno;
    }

    return t;
}

/* Função para conectar os nodos criados de filhos ao
 * respetivo nodo pai.
 */

TreeNode * addChild(TreeNode *pparent, TreeNode *pnchild) {
    
    if (pparent==NULL || pnchild==NULL)
        fprintf(listing,"Invalid parameters\n");

    if (pparent->pchild==NULL) {
        pparent->pchild = pnchild;
    } else {
        TreeNode * sibling = pparent->pchild;        
        while (sibling->psibling)
            sibling = sibling->psibling;
        sibling->psibling = pnchild;
    }

    return pparent;
}



static indentno = 0;

/* macros to increase/decrease indentation */
#define INDENT indentno+=2
#define UNINDENT indentno-=2

static void printSpaces(void)
{ int i;
  for (i=0;i<indentno;i++)
    printf(listing," ");
}

void printTree( TreeNode * tree )
{
  INDENT;
  while (tree != NULL) {
    printSpaces();
    switch (tree->nodekind) {
        case funcDefNK:
          printf("funcDefNK\n");
          break;
        case funcCallNK:
          printf("funcCallNK\n");
          break;
        case parameterNK:
          printf("parameterNK %s\n",tree->nodeAttr.val);
          break;
        case declarNK:
          printf("declarNK %s\n",tree->nodeAttr.name);
          break;
        case whileNK:
          printf("whileNK\n");
          break;
        case ifNK:
          printf("Op:\n");
          break;
        case switchNK:
          printf("switchNK:\n");
          break;
        case caseNK:
          printf("Id:\n");
          break;
        case continueNK:
          printf("Id:\n");
          break;
        case breakNK:
          printf("Id:\n");
          break;
        case gotoNK:
          printf("Id:\n");
          break;
        case returnNK:
          printf("returnNK:\n");
          break;
        case opNK:
          printf("opNK: %s\n",tree->nodeAttr.name);
          break;
        case idNK:
          printf("idNK: %s\n",tree->nodeAttr.name);
          break;
        case numberNK:
          printf("numberNK: %s\n",tree->nodeAttr.val);
          break;
        case fnumberNK:
          printf("fnumberNK: %s\n",tree->nodeAttr.fval);
          break;
        case typeNK:
          printf("typeNK: %s\n",tree->nodeAttr.name);
          break;
        default:
          printf("Unknown node kind\n");
          break;
      
    }

    if (tree->pchild != NULL)
         printTree(tree->pchild);
    tree = tree->psibling;
  }
  UNINDENT;
}

/*
void printTree(TreeNode *node, int indent) {
    while (node != NULL) {
        printIndent(indent);
        printf("%s", getNodeKindName(node->nodekind));

        // Print optional data
        if (node->nodekind == idNK || node->nodekind == typeNK) {
            printf(": %s", node->nodeAttr.name);
        } else if (node->nodekind == numberNK) {
            printf(": %d", node->nodeAttr.val);
        } else if (node->nodekind == fnumberNK) {
            printf(": %f", node->nodeAttr.fval);
        }

        printf("\n");

        // Recursively print children
        if (node->pchild != NULL) {
            printTree(node->pchild, indent + 1);
        }

        // Move to the next sibling
        node = node->psibling;
    }
}*/