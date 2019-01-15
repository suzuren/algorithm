
#include "stdafx.h"

Status GetTop(LinkStack S, SElemType &e)
{
	if(S.top == NULL)
		return ERROR;
	e = S.top->data;
	return OK;
}