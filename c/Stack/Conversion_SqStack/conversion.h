
void conversion(int n, int d)
/*��ʮ�������� N ת��Ϊ d(2��8) ������*/
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
	/*  ������е���������ջ  */
	
	while (1) /*  ջ����ʱ��ջ�����  */
	{
		Pop(S, e);
		printf("%1d ", e);
		if (S.top == S.base)
			break;
	}
}
