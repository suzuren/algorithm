
#include "stdafx.h"

Status StackTraverse(LinkStack S, void (*visit)(SElemType))
{
	while(1)
	{
		visit(S.top->data);
		if(S.top->next == NULL)
		{
			break;
		}
		S.top=S.top->next;
	}
	return OK;
}
