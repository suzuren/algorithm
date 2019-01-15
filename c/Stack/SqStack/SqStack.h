#ifndef _SQSTACK_H
#define _SQSTACK_H
struct SqStack
{
	SElemType *base;
	SElemType *top;
	int stacksize;
};
typedef struct SqStack SqStack;

#endif
