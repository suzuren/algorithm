#ifndef _LEVELORDERTRAVERSE_H
#define _LEVELORDERTRAVERSE_H

Status LevelOrderTraverse(BiTree T, Status (*Visit)(TElemType))
{//层序遍历
	LinkQueue Q;
	QElemType a;
	if (T)
	{
		InitQueue(Q);  // 初始化队列
		EnQueue(Q, T); // 根指针入队
		while (TRUE != QueueEmpty(Q))
		{
			DeQueue(Q, a);   // 出队元素，赋给a
			Visit(a->data);  // 访问a所指结点
			if (a->lchild != NULL) // 如果左子树不空，则入队
				EnQueue(Q, a->lchild);
			if (a->rchild != NULL) // 如果右子树不空，则入队
				EnQueue(Q, a->rchild);
		}
	}
	return OK;
}

#endif