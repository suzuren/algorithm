
#define Status int

#define OVERFLOW  -1

#define ERROR  0
#define OK     1
#define TRUE   2
#define FALSE  3

#include <stdio.h>
#include <stdlib.h>


#include "bitnode.h"

#include "initbitree.h"
#include "destroybitree.h"
#include "createbitree.h"
#include "ClearBiTree.h"
#include "BiTreeEmpty.h"
#include "BiTreeDepth.h"
#include "Root.h"
#include "Value.h"
#include "Assign.h"

#include "LinkQueueStructure.h"
#include "InitQueue.h"
#include "EnQueue.h"
#include "DeQueue.h"
#include "QueueEmpty.h"

#include "Parent.h"

#include "Point.h"

#include "LeftChild.h"
#include "RightChild.h"
#include "LeftSibling.h"
#include "RightSibling.h"
#include "InsertChild.h"
#include "DeleteChild.h"

#include "Visit.h"

#include "SqStack.h"
#include "InitStack.h"
#include "StackEmpty.h"
#include "Push.h"
#include "Pop.h"
#include "GetTop.h"
#include "DestroyStack.h"

#include "PreOrderTraverse.h"
#include "InOrderTraverse.h"
#include "PostOrderTraverse.h"
#include "LevelOrderTraverse.h"

int main()
{
	int j = ERROR;

	BiTree BT;
	j = InitBiTree(BT);

	j = DestroyBiTree(BT);
	if(j == FALSE)
		printf("binary tree is empty,do not destroy.\n");
	else if(j == TRUE)
		printf("binary tree binary tree finish.\n");
	printf("\n");

//	TElemType definition[] = {'-','+','a','#','#','*','b','#','#','-','c','#','#','d','#','#','/','e','#','#','f','#','#'};
	TElemType definition[] = {'A','B','C','#','#','D','E','#','G','#','#','F','#','#','#','\0'};
	BT = 	CreateBiTree(BT, definition);

	printf("  PreOrderTraverse: ");
	j = PreOrderTraverse(BT,Visit);
	printf("\n");

	printf("   InOrderTraverse: ");
	j = InOrderTraverse(BT,Visit);
	printf("\n");

	printf(" PostOrderTraverse: ");
	j = PostOrderTraverse(BT, Visit);
	printf("\n");

	printf("LeverOrderTraverse: ");
	j = LevelOrderTraverse(BT, Visit);
	printf("\n");

	
//	j = ClearBiTree(BT);
//	if(j == OK)
//		printf("binary tree clear.\n");
	printf("\n");

	j = BiTreeEmpty(BT);
	if(j == TRUE)
	{
		printf("binary tree is empty.\n");
	}
	else if(j == FALSE)
	{
		printf("binary tree not is empty.\n");
	}
	printf("\n");

	int depth = BiTreeDepth(BT);
	printf("binary tree depth is %d.\n",depth);
	printf("\n");


	BiTree root = Root(BT);
	printf("binary tree root is 0x%p.\n",root);
	printf("\n");

	TElemType elem = '0';
	elem = Value(BT,elem);
	printf("binary tree value is %c.\n",elem);
	printf("\n");

	TElemType value = 'S';
	elem = Assign(BT,value);
	printf("binary tree Assign is %c.\n",value);
	printf("\n");


	elem = 'D';
	printf("%c",elem);
	elem = Parent(BT,elem);
	printf(" parent is %c.\n",elem);
	printf("\n");

	elem = 'D';
	TElemType lc =  LeftChild(BT, elem);
	TElemType rc = RightChild(BT, elem);
	printf("%c left child is %c,right child is %c\n",elem,lc,rc);
	printf("\n");

	elem = 'F';
	TElemType lbrother = LeftSibling(BT,elem);
	printf("%c left brother is %c.\n",elem,lbrother);
	printf("\n");

	elem = 'C';
	TElemType rbrother = RightSibling(BT,elem);
	printf("%c right brother is %c.\n",elem,rbrother);
	printf("\n");

//	BiTree p = BT->lchild->lchild; // 此为 C 节点
//	int LR = 0;
//	BiTree c;
//	j = InitBiTree(c);
//	TElemType sc[] = {'H','I','#','#','J','#','#','\0'};
//	c = CreateBiTree(c,sc);
//	j = InsertChild(BT, p, LR, c);

	BiTree p = BT->lchild; // 此为 C 节点
	int LR = 0;
	j = DeleteChild(BT, p, LR);  // 删除孩子，LR=0 为左，LR=1为右
	if(j == TRUE)
	{
		printf("delete child succeed.\n");
	}
	printf("LeverOrderTraverse: ");
	j = LevelOrderTraverse(BT, Visit);
	
	printf("\n");
	printf("\n");
	printf("End of main ...\n");
	printf("\n");
	return OK;
}
