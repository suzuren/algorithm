
#ifndef _POP_H
#define _POP_H

Status Pop(SqStack &S,SElemType &e)
{
	if(S.top == 0)
		return ERROR;
	else
	{
		e = S.stack[ S.top ];
		S.top--;
		return OK;
	}
}

#endif