
#ifndef _MERGESORT_H
#define _MERGESORT_H

void Merge (RedType SR[], RedType TR[], int i, int m, int n)
{	// 算法10.12
	// 将有序的SR[i..m]和SR[m+1..n]归并为有序的TR[i..n]

	int j, k;
	for (j = m + 1, k = i; i <= m && j <= n; ++k)
	{
		// 将SR中记录由小到大地并入TR
		if ( TRUE != LT(SR[i].key, SR[j].key) )
		{
			TR[k] = SR[i++];
		}
		else
		{
			TR[k] = SR[j++];
		}
	}
	if (i <= m) // TR[k..n] = SR[i..m];  将剩余的SR[i..m]复制到TR
	{
		while (k <= n && i <= m)
		{
			TR[k++] = SR[i++];
		}
	}
	if (j <= n) // 将剩余的SR[j..n]复制到TR
	{
		while (k <= n && j <= n)
		{
			TR[k++] = SR[j++];
		}
	}	
} // Merge

void MSort(RedType SR[], RedType TR1[], int s, int t)
{   // 算法10.13
	// 将SR[s..t]归并排序为TR1[s..t]。
	int m;
	RedType TR2[MAXSIZE];
	if (s == t)
	{
		TR1[t] = SR[s];
	}
	else
	{
		m = (s + t) / 2;          // 将SR[s..t]平分为SR[s..m]和SR[m+1..t]
		MSort(SR, TR2, s, m);     // 递归地将SR[s..m]归并为有序的TR2[s..m]
		MSort(SR, TR2, m + 1, t); // 将SR[m+1..t]归并为有序的TR2[m+1..t]
		Merge(TR2, TR1, s, m, t); // 将TR2[s..m]和TR2[m+1..t]归并到TR1[s..t]
	}
} // MSort

Status MergeSort(SqList & L)
{   // 算法10.14
	// 对顺序表L作归并排序。

	MSort(L.r, L.r, 1, L.length);

	return OK;
} // MergeSort

#endif
