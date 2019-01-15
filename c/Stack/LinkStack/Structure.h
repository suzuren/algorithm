
#ifndef _STRUCTURE_H
#define _STRUCTURE_H

typedef struct StackNode
{
	SElemType data;
	struct StackNode *next;
}SNode;

typedef struct
{
	SNode *top;
}LinkStack;


#endif