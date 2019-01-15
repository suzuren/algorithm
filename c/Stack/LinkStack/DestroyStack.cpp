
#include "stdafx.h"

Status DestroyStack(LinkStack *S)
{
	SNode *des=NULL;
	while(1)
	{
		if(S->top==NULL)
		{
			break;
		}
		des = S->top;
		S->top = S->top->next;
		free(des);

	}
	return OK;
}