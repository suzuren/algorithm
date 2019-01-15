
#define	TRUE	1
#define	FALSE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

#define SElemType int
#define Status	  int
#define STACK_INIT_SIZE 13
#define STACKINCREMENT  3

#include <stdio.h>
#include <stdlib.h>

#include "sqstack.h"

#include "initstack.h"
#include "DestroyStack.h"
#include "ClearStack.h"
#include "EmptyStack.h"
#include "StackLength.h"
#include "GetTop.h"
#include "push.h"
#include "Pop.h"

#include "visit.h"
#include "StackTraverse.h"

#include "outputstack.h"




int main()
{
	SqStack s;

	InitStack(s);
	EmptyStack(s);

	Push(s, 3);
	Push(s, 4);
	Push(s, 5);

	StackTraverse(s,visit);

	int len = StackLength(s);
	
	OutputStack(s);	
	
	SElemType topelem = ERROR;
	GetTop(s,topelem);

	SElemType delelem = ERROR;
	Pop(s, delelem);	

	ClearStack(s);

	DestroyStack(s);

	OutputStack(s);
	
	printf("\n");
	return 0;
}

