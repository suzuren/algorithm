
#include "stdafx.h"

int StackLength(LinkStack S)
{
	int len=0;
	while(1)
	{
		len = len+1;
		S.top=S.top->next;
		if(S.top==NULL)
		{
			break;
		}
	}
	return len;
}