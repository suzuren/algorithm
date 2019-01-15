
#include "stdafx.h"

Status Push(LinkStack *S, SElemType e)
{
	SNode *tmp = (SNode *)malloc(sizeof(SNode));
	tmp->data = e;
	tmp->next=S->top;
	S->top=tmp;
	return OK;
}