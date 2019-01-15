
Status OutputStack(SqStack S)
{
	SElemType e = ERROR;
	while(1)
	{
		Pop(S, e);
		printf("%d ",e);
		if(S.top == S.base)
			break;
	}
	return OK;
}