
#include "Structure.h"

Status Two_PathInsertSort(SqList & L)
{ // 2_路插入排序
	int i, j, first, final;

	RedType * d = (RedType *)malloc(L.length * sizeof(RedType)); // 生成L.length个记录的临时空间

	d[0] = L.r[1];		// 设L的第1个记录为d中排好序的记录(在位置[0])
	first = 0;			// first、final分别指示d中排好序的记录的第1个和最后1个记录的位置
	final = 0;

	for (i=2; i<=L.length; ++i) // 依次将L的第2个～最后1个记录插入d中
	{
		if (L.r[i].key < d[first].key)
		{ // 待插记录小于d中最小值，插到d[first]之前(不需移动d数组的元素)
			first = (first - 1 + L.length)%L.length; // 设d为循环向量
			d[first] = L.r[i];
		}
		else if (L.r[i].key > d[final].key)
		{ // 待插记录大于d中最大值，插到d[final]之后(不需移动d数组的元素)
			final = final + 1;
			d[final] = L.r[i];
		}
		else
		{ // 待插记录大于d中最小值，小于d中最大值，插到d的中间(需要移动d数组的元素)
			j = final++; // 移动d的尾部元素以便按序插入记录

			while (L.r[i].key < d[j].key)
			{
				d[(j + 1)%L.length] = d[j];
				j = (j - 1 + L.length)%L.length;
			}
			d[j + 1] = L.r[i];
		}
	}
	for (i = 1;i <= L.length;i++) // 把d赋给L.r
	{
			L.r[i] = d[(i+first-1)%L.length]; // 线性关系
	}
	return OK;
}
