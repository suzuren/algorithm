Status GetTop(SqStack S, SElemType &e)
{
	if(S.top == S.base)
		return ERROR;
	e = *(S.top - 1);
	return OK;
}