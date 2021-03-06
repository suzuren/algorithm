
#ifndef _INORDERTRAVERSE_THR_H
#define _INORDERTRAVERSE_THR_H

	// 算法6.5
	// T指向头结点，头结点的左链lchild指向根结点，头结点的右链lchild指向
	// 中序遍历的最后一个结点。中序遍历二叉线索链表表示的二叉树T，
	// 对每个数据元素调用函数Visit。

Status InOrderTraverse_Thr(BiThrTree T, Status (*Visit)(TElemType e)) 
{

	BiThrTree p = NULL;
	p = T->lchild; // p 指向根结点
	while (p != T) // 空树或遍历结束时，p==T
	{
		while (p->LTag == Link)
			p = p->lchild;

		if (!Visit(p->data)) // 访问其左子树为空的结点
			return ERROR;
		while (p->RTag == Thread && p->rchild != T)
		{
			p = p->rchild;
			Visit(p->data); // 访问后继结点
		}
		p = p->rchild; // p进至其右子树根
	}
	return OK;
} // InOrderTraverse_Thr

#endif

