
#ifndef _SELECTSORT_H
#define _SELECTSORT_H

KeyType SelectMinKey(SqList L, int i)
{// 选出key最小的记录，返回他的下标
	int minkey = i;
	for(; i<L.length; i++)
	{
		if(L.r[minkey].key > L.r[i+1].key)
		{
			minkey = i+1;
		}
	}
	return minkey;
}

// 简单选择排序时间复杂度为 n 平方
Status SelectSort(SqList & L)
{	// 算法10.9
	// 对顺序表L作简单选择排序。
	int i, j;
	for (i = 1; i < L.length; ++i)
	{                           // 选择第i小的记录，并交换到位
		j = SelectMinKey(L, i); // 在L.r[i..L.length]中选择key最小的记录
		if (i != j)             // 如果key最小的下标和 i 不一样，则交换
		{                       // L.r[i]←→L.r[j];   与第i个记录交换			
			L.r[0] = L.r[i];
			L.r[i] = L.r[j];
			L.r[j] = L.r[0];
		}
	}
	return OK;
} // SelectSort


#endif

