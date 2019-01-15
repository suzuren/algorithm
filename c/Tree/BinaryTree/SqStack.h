#ifndef _SQSTACK_H
#define _SQSTACK_H

#define STACK_INIT_SIZE 33
#define STACKINCREMENT  3
#define SElemType BiTree

struct SqStack
{
	SElemType *base;
	SElemType *top;
	int stacksize;
};
typedef struct SqStack SqStack;

#endif
