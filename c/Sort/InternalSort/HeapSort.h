
#ifndef _HEAPSORT_H
#define _HEAPSORT_H

void HeapAdjust(HeapType & H, int s, int m)
{   // 算法10.10
	// 已知H.r[s..m]中记录的关键字除H.r[s].key之外均满足堆的定义，
	// 本函数调整H.r[s]的关键字，使H.r[s..m]成为一个大顶堆
	// （对其中记录的关键字而言）
	int j;
	RedType rc;
	rc = H.r[s]; // rc 记录第 s 个元素
	for (j = 2 * s; j <= m; j *= 2) // 沿key较大的孩子结点向下筛选
	{
		if (j < m && H.r[j].key < H.r[j + 1].key) // j为key较大的记录的下标
		{
			++ j; 
		}
		if (rc.key >= H.r[j].key) // rc 应插入在位置s上
		{
			break;
		}
		H.r[s] = H.r[j];
		s = j;
	}
	H.r[s] = rc; // 插入
} // HeapAdjust

Status HeapSort(HeapType & H)
{ // 算法10.11
	// 对顺序表H进行堆排序。
	int i;
	RedType temp;
	for (i = H.length / 2; i > 0; --i) // 把H.r[1..H.length]建成大顶堆
	{// 从第 length/2 个元素开始筛选
		HeapAdjust (H, i, H.length);
	}
	for (i = H.length; i > 1; --i)
	{
		temp = H.r[i];
		H.r[i] = H.r[1];
		H.r[1] = temp; // 将堆顶记录和当前未经排序子序列Hr[1..i]中
		// 最后一个记录相互交换
		HeapAdjust(H, 1, i - 1); // 将H.r[1..i-1] 重新调整为大顶堆
	}
	return OK;
} // HeapSort

#endif

