
void conversion(int n, int d)
/*将十进制整数 N 转换为 d(2或8) 进制数*/
{
	SqStack S;
	int k = ERROR;
	int e = ERROR;
	InitStack(S);
	while (n > 0)
	{
		k = n%d;
		Push(S, k);
		n = n / d;
	}
	/*  求出所有的余数，进栈  */
	
	while (1) /*  栈不空时出栈，输出  */
	{
		Pop(S, e);
		printf("%1d ", e);
		if (S.top == S.base)
			break;
	}
}
