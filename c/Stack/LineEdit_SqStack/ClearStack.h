
Status ClearStack(SqStack &S)
{
	S.top = S.base;
	return OK;
}