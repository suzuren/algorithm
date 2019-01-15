
#ifndef _PUSH_H
#define _PUSH_H

Status Push(SqStack &S, SElemType e)
{
	if(S.top >= STACK_MAX_SIZE - 1)
		return ERROR;
	else
	{
		S.stack[ S.top ] = e;
		S.top++;
		return OK;
	}
}

#endif