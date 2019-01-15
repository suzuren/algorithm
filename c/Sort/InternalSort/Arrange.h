
#ifndef _ARRANGE_H
#define _ARRANGE_H

// 表插入排序的基本操作仍是将一个记录插入到已排好的序的有序表中。
// 和直接插入排序相比，不同之处仅是以修改 2n 次指针值代替移动记录，
// 排序过程中所需进行的关键字间的比较次数相同。
// 因此，表插入排序的时间复杂度是 n 平方

// 算法10.3  2-路插入排序
// 根据静态链表SL中各结点的指针值调整记录位置，
// 使得SL中记录按关键字非递减有序顺序排列

Status Arrange(SLinkList & SL)
{
	SLNode temp;
	int p, q;
	p = SL.r[0].next; // p指示第一个记录的当前位置

	for (int i = 1; i <= SL.length; ++i)
	{
		// SL.r[1..i-1]中记录已按关键字有序排列，
		// 第i个记录在SL中的当前位置应不小于i
		while (p < i)
		{
			p = SL.r[p].next; // 找到第i个记录，并用 p 指示其在 SL 中当前位置
		}
		q = SL.r[p].next;	  // q指示尚未调整的表尾
		if (p != i)
		{
			temp = SL.r[p];
			SL.r[p] = SL.r[i];
			SL.r[i] = temp;
			SL.r[i].next = p; // 指向被移走的记录，使得以后可由while循环找回
		}
		p = q; // p指示尚未调整的表尾，为找第i+1个记录作准备
	}
	return OK;
} // Arrange

#endif


