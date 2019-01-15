
#include "stdafx.h"

void main(void)
{
	SeqList<int>	L1;
	SeqList<char>	L2;
	SeqList<double> L3;
	
	int		a[] = {1,2,3};
	char	b[] = "abc";
	double	c[] = {1.1,2.2,3.3};
	
	for(int i=0;i < 3;i++)
	{
		L1.Insert(a[i]);
		L2.Insert(b[i]);
		L3.Insert(c[i]);
	}

	L1.Delete(2);

	int t = L1.GetData(0);

	char item = 'b';
	int j = L2.Find(item);

	char d = L2.DeleteFront();

	L1.PrintList(L1);
	L2.PrintList(L2);
	L3.PrintList(L3);
}