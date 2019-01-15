#ifndef _POP_H
#define _POP_H
Status Pop(SqStack &S,SElemType &e)
{
	if(S.top == S.base)
		return ERROR;
	e = * --S.top;
	return OK;
}
#endif