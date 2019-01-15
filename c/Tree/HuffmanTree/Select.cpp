
#include "stdafx.h"

void Select(HuffmanTree HT, int n, int & s1, int & s2, int *flag)
{
	// 1 �� n, ѡ��˫�׽ڵ�Ϊ 0 ��������С��������Ҷ�ڵ�

	int i, finds = 0;	
	// s1=1; s2=1;
	for (i = 1;i <= n; i++)
	{
		if (flag[i] == 0 && finds == 0)
		{
			s1    = i;
			finds = 1;
		}
		else if (HT[i].weight < HT[s1].weight && flag[i] == 0)
		{
			s1 = i;
		}
	}
	finds = 0;
	flag[s1] = 1;
	for (i = 1;i <= n; i++)
	{
		if (flag[i] == 0 && finds == 0)
		{
			s2    = i;
			finds = 1;
		}
		else if (HT[i].weight < HT[s2].weight && flag[i] == 0)
		{
			s2 = i;
		}
	}
	flag[s2] = 1;	
}


