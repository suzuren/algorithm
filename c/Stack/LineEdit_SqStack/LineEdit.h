
void LineEdit()
{ // �㷨3.2
	//�����ַ�ջS�����ն˽���һ�в����������ù��̵���������
	char ch, *temp;
	SqStack S;
	InitStack(S); //�����ջS
	printf("������һ��(#:�˸�@:����):\n");
	ch = getchar(); //���ն˽��յ�һ���ַ�
	while (ch != EOF)
	{ //EOFΪȫ�Ľ�����
		while (ch != EOF && ch != '\n')
		{
			switch (ch)
			{
				case '#':
					Pop(S, ch); break; // ����ջ�ǿ�ʱ��ջ
				case '@':
					ClearStack(S); break; // ����SΪ��ջ
				default :
					Push(S, ch); break; // ��Ч�ַ���ջ,δ����ջ������
			}
			ch = getchar(); // ���ն˽�����һ���ַ�
		}
		temp = S.base;
		while (temp != S.top)
		{
			printf("%c", *temp);
			++temp;
		}
		// ����ջ�׵�ջ����ջ���ַ����������ù��̵���������
		ClearStack(S); // ����SΪ��ջ
		printf("\n");
		if (ch != EOF)
		{
			printf("������һ��(#:�˸�@:����):\n");
			ch = getchar();
		}
	}
	DestroyStack(S);
}