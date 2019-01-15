
#ifndef _LNODE_H
#define _LNODE_H

struct LNode
{
	ElemType data;
	struct LNode *next;
};

typedef struct LNode LNode;
typedef struct LNode *LinkList;

#endif

