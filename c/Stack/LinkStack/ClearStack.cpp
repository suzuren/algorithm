
#include "stdafx.h"

Status ClearStack(LinkStack *S)
{
	SNode *del=NULL;
	while(1)
	{
		if(S->top==NULL)
		{
			break;
		}
		del = S->top;
		S->top = S->top->next;
		free(del);

	}
	return OK;
}