

#include "stdafx.h"

Status Pop(LinkStack *S,SElemType &e)
{
	if(S->top == NULL)
	{
		return ERROR;
	}
	e = S->top->data;
	SNode *del = S->top;
	S->top = S->top->next;
	free(del);	
	return OK;
}