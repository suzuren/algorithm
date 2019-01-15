
#include "stdafx.h"

// ÅÐ¶ÏÕ»ÊÇ·ñÎª¿Õ

Status EmptyStack(LinkStack *S)
{
	if(S->top == NULL)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}