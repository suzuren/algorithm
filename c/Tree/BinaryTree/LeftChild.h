
#ifndef _LEFRCHILD_H
#define _LEFRCHILD_H

// 初始条件：二叉树存在，e是T中某个结点。
// 操作结果：返回e的左孩子。若e无左孩子，则返回“空”。

TElemType LeftChild(BiTree T,TElemType e)
{
	BiTree p = NULL;
	if(T != NULL)
	{
		p = Point(T, e);
		if(p!=NULL && p->lchild != NULL)
		{
			return p->lchild->data;
		}
	}
	return NULL;
}

#endif

