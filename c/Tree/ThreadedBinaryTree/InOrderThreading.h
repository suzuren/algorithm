#ifndef _INORDERTHREADING_H
#define _INORDERTHREADING_H

// 算法6.6
// 中序遍历二叉树T，并将其中序线索化，Thrt指向头结点。

BiThrTree pre = NULL;

Status InOrderThreading(BiThrTree & Thrt, BiThrTree T)
{
	Thrt = (BiThrTree) malloc ( sizeof(BiThrNode) );
	if (!Thrt)
		exit(OVERFLOW);

	Thrt->LTag = Link;   // 标志左孩子为指针
	Thrt->RTag = Thread; // 标志右孩子为线索

	Thrt->rchild = Thrt; // 右指针回指
	if (!T)
	{
		Thrt->lchild = Thrt; // 若二叉树空，则左指针回指
	}
	else
	{
		Thrt->lchild = T;   // 头结点左指针指向树的根
		pre = Thrt;

		InThreading(T);     // 算法6.7：中序遍历进行中序线索化
		
		pre->rchild = Thrt;
		pre->RTag = Thread; // 最后一个结点线索化

		Thrt->rchild = pre;
	}
	return OK;
} // InOrderThreading


#endif

