
#include "stdafx.h"

// �ж�ջ�Ƿ�Ϊ��

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