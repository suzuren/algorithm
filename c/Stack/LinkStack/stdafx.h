
#ifndef _STDAFX_H
#define _STDAFX_H

#define	TRUE	1
#define	FALSE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

typedef char SElemType;
typedef int  Status;

#include <stdio.h>
#include <stdlib.h>

#include "Structure.h"

Status InitStack(LinkStack *S);
Status EmptyStack(LinkStack *S);
Status Push(LinkStack *S, SElemType e);
void visit(SElemType e);
Status StackTraverse(LinkStack S, void (*visit)(SElemType));
int StackLength(LinkStack S);
Status GetTop(LinkStack S, SElemType &e);
Status Pop(LinkStack *S,SElemType &e);
Status ClearStack(LinkStack *S);
Status DestroyStack(LinkStack *S);

#endif

