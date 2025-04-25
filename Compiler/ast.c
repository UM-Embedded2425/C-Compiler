#include "ast.h"
#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


//variáveis daqui são para sair, só para não dar erro neste momento

int lineno = 0; //mantém o número da linha atual do código fonte 
FILE * source; //ponteiro para o arquivo de entrada

/* Função geral para a criação de todos os nodos possiveis
 * que irão formar a árvore sintática. Necessário adicionar mais
 * variáveis depois para poder funcionar para toda a gramática
 * e funcionar com a tabela de símbolos i guess
 */

TreeNode * createNode(NodeKind kind){ 
    TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
    
    int i;
    if (t==NULL)
        printf("Out of memory error at line \n");
    else {
        t->nodekind = kind;
        t->lineno = lineno;
    }

    return t;
}

/* Função para conectar os no criados de filhos ao
 * respetivo no pai.
 */

TreeNode * addChild(TreeNode *pparent, TreeNode *pnchild) {
    
    if (pparent==NULL || pnchild==NULL)
        printf("Invalid parameters\n");

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
    printf(" ");
}

/*Print generated tree*/

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
          printf("parameterNK\n");
          break;
        case declarNK:
          printf("Tipo: %s\n", tipos[tree->nodeAttr.val]);
          break;
        case whileNK:
          printf("whileNK\n");
          break;
        case ifNK:
          printf("If:\n");
          break;
        case switchNK:
          printf("switchNK:\n");
          break;
        case caseNK:
          printf("caseNK:\n");
          break;
        case continueNK:
          printf("continueNK:\n");
          break;
        case breakNK:
          printf("break:\n");
          break;
        case gotoNK:
          printf("gotoNK:\n");
          break;
        case returnNK:
          printf("returnNK:\n");
          break;
        case opNK:
          printf("opNK: %s\n",operadores[tree->nodeAttr.val]);
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