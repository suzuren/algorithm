
#ifndef _BITNODE_H
#define _BITNODE_H

#define  TElemType char
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild;
	struct BiTNode *rchild;
}BiTNode, *BiTree;

#endif