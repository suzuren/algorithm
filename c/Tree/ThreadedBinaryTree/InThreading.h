#ifndef _INTHREADING_H
#define _INTHREADING_H

// 算法6.7
// 中序遍历进行中序线索化
void InThreading(BiThrTree p)
{
	BiThrTree pre = NULL;
	if (p)
	{
		InThreading(p->lchild); // 递归左子树线索化
		if (!p->lchild)         // 没有左孩子
		{
			p->LTag = Thread;   // 建前驱线索
			p->lchild = pre;    // 左孩子指针指向前驱
		}
		if (!pre->rchild)       // 前驱没有右孩子
		{
			pre->RTag = Thread; // 建后继线索
			pre->rchild = p;    // 前驱右孩子指针指向后继(当前结点p) 
		}
		pre = p;                // 保持 pre 指向p的前驱
		InThreading(p->rchild); // 递归右子树线索化
	}
} // InThreading


#endif

