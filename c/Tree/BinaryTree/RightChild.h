
#ifndef _RIGHTCHILD_H
#define _RIGHTCHILD_H

//初始条件：二叉树存在，e是T中某个结点。
//操作结果：返回e的右孩子。若e无右孩子，则返回“空”。

TElemType RightChild(BiTree T, TElemType e)
{
	BiTree p;
	if (T)
	{
		p = Point(T, e);
		if (p && p->rchild)
			return p->rchild->data;
	}
	return NULL;
}

#endif

