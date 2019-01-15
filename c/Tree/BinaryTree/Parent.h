
#ifndef _PARENT_H
#define _PARENT_H

TElemType Parent(BiTree T,TElemType e)
{// 返回节点 e 的双亲, 如果为树根节点，返回 NULL
	LinkQueue Q;
	QElemType qe;
	if(T->data == e)
	{
		return NULL;
	}
	else if(T != NULL)
	{
		InitQueue(Q);
		EnQueue(Q, T); // 树根入队
		while( TRUE != QueueEmpty(Q) ) // 队列不为空
		{
			DeQueue(Q, qe); // 出队，队列元素赋给qe
			if(qe->lchild && qe->lchild->data == e || qe->rchild && qe->rchild->data == e) // 找到二叉树节点 e
			{
				return qe->data;
			}
			else // 如果找不到节点e，则进入更深一个层次
			{
				if(qe->lchild) // 左孩子不为空
				{
					EnQueue(Q, qe->lchild);// 左孩子入队
				}
				if(qe->rchild) // 右孩子不为空
				{
					EnQueue(Q, qe->rchild);// 右孩子入队
				}
			}
		}
	}
	return NULL;
}

#endif
