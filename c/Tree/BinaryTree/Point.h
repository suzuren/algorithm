
#ifndef _POINT_H
#define _POINT_H

BiTree Point(BiTree T, TElemType e)
{//返回二叉树T中指向元素值为e的结点指针
	LinkQueue Q;
	QElemType qe;
	if (T)
	{
		InitQueue(Q);  // 初始化队列
		EnQueue(Q, T); // 根指针入队
		while ( TRUE != QueueEmpty(Q) )//队不空
		{
			DeQueue(Q, qe);    // 出队，队列元素赋给 qe
			if (qe->data == e) // qe 所指结点为的值为e
				return qe;     // 就直接返回 qe 节点
			if (qe->lchild)    // 有左孩子
			{
				EnQueue(Q, qe->lchild);  // 入队左孩子, 入对后在上面出队，赋值过去，就可以更深一个层次遍历查找返回
			}
			if (qe->rchild)    // 有右孩子
			{
				EnQueue(Q, qe->rchild);  // 入队右孩子,
			}
		}
	}
	return NULL;
}

#endif

