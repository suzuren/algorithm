

#include "stdafx.h"

int main()
{
	int j=ERROR;
	LinkStack s;

	InitStack(&s);
	j = EmptyStack(&s);
	if(j==TRUE)
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("Stack is not empty.\n");
	}

	Push(&s, 'A');
	Push(&s, 'B');


	Push(&s, 'C');

	StackTraverse(s, visit);

	int len = StackLength(s);
	printf("link stack length: %d\n",len);

	SElemType topelem = ERROR;
	GetTop(s,topelem);
	printf("link stack top elem is %c\n",topelem);

	SElemType delelem = ERROR;
	Pop(&s, delelem);
	printf("pop elem is %c\n",delelem);

	ClearStack(&s);
	if(s.top==NULL)
	{
		printf("link stack is clear.\n");
	}

	DestroyStack(&s);
	if(s.top==NULL)
	{
		printf("link stack is destroy.\n");
	}
	printf("\n");
	return 0;
}

