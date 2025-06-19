#ifndef __AST__
#define __AST__

typedef enum {funcDefNK, funcCallNK, parameterNK, declarNK,
            whileNK, ifNK, switchNK, caseNK, continueNK, breakNK, gotoNK, returnNK,
            opNK, idNK, numberNK, fnumberNK,
            typeNK} NodeKind;

typedef enum {voidK, boolK, charK, shortK, intK, longK, floatK, doubleK} DeclarK;

typedef enum {assign_divK, assign_percentK, assign_andK, assign_orK, assign_xorK, assign_left_shiftK, assign_right_shiftK, assignK, assign_plusK, assign_minusK, assign_multK,
            plusK, minusK, asteriskK, right_slashK, percentK,
            logic_notK, logic_andK, logic_orK, greater_thank, greater_than_equalK, smaller_thank, smaller_than_equalK, equalK, differentK,
            bit_notK, bit_andK, bit_orK, bit_xorK, right_shiftK, left_shiftK,
            arrowK, plusplusK, minusminusK, ternaryK} opK;

typedef union {double fval; int val; char * name; } attr;

typedef struct treeNode{

  struct treeNode * pchild;
  struct treeNode * psibling;
  int lineno;
  NodeKind nodekind;
  attr nodeAttr;

}TreeNode;

TreeNode * createNode(NodeKind kind);
TreeNode * addChild(TreeNode *pparent, TreeNode *pchild);

void printTree(TreeNode *node);

#endif
