
Status DestroyStack(SqStack &S)
{


	free(S.base);
	S.base = NULL;
	S.top  = NULL;
	S.stacksize = ERROR;
	return OK;
}