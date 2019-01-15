
#ifndef _MERGESORT_H
#define _MERGESORT_H

void Merge (RedType SR[], RedType TR[], int i, int m, int n)
{	// �㷨10.12
	// �������SR[i..m]��SR[m+1..n]�鲢Ϊ�����TR[i..n]

	int j, k;
	for (j = m + 1, k = i; i <= m && j <= n; ++k)
	{
		// ��SR�м�¼��С����ز���TR
		if ( TRUE != LT(SR[i].key, SR[j].key) )
		{
			TR[k] = SR[i++];
		}
		else
		{
			TR[k] = SR[j++];
		}
	}
	if (i <= m) // TR[k..n] = SR[i..m];  ��ʣ���SR[i..m]���Ƶ�TR
	{
		while (k <= n && i <= m)
		{
			TR[k++] = SR[i++];
		}
	}
	if (j <= n) // ��ʣ���SR[j..n]���Ƶ�TR
	{
		while (k <= n && j <= n)
		{
			TR[k++] = SR[j++];
		}
	}	
} // Merge

void MSort(RedType SR[], RedType TR1[], int s, int t)
{   // �㷨10.13
	// ��SR[s..t]�鲢����ΪTR1[s..t]��
	int m;
	RedType TR2[MAXSIZE];
	if (s == t)
	{
		TR1[t] = SR[s];
	}
	else
	{
		m = (s + t) / 2;          // ��SR[s..t]ƽ��ΪSR[s..m]��SR[m+1..t]
		MSort(SR, TR2, s, m);     // �ݹ�ؽ�SR[s..m]�鲢Ϊ�����TR2[s..m]
		MSort(SR, TR2, m + 1, t); // ��SR[m+1..t]�鲢Ϊ�����TR2[m+1..t]
		Merge(TR2, TR1, s, m, t); // ��TR2[s..m]��TR2[m+1..t]�鲢��TR1[s..t]
	}
} // MSort

Status MergeSort(SqList & L)
{   // �㷨10.14
	// ��˳���L���鲢����

	MSort(L.r, L.r, 1, L.length);

	return OK;
} // MergeSort

#endif
