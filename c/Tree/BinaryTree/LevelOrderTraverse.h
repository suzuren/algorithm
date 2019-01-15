#ifndef _LEVELORDERTRAVERSE_H
#define _LEVELORDERTRAVERSE_H

Status LevelOrderTraverse(BiTree T, Status (*Visit)(TElemType))
{//�������
	LinkQueue Q;
	QElemType a;
	if (T)
	{
		InitQueue(Q);  // ��ʼ������
		EnQueue(Q, T); // ��ָ�����
		while (TRUE != QueueEmpty(Q))
		{
			DeQueue(Q, a);   // ����Ԫ�أ�����a
			Visit(a->data);  // ����a��ָ���
			if (a->lchild != NULL) // ������������գ������
				EnQueue(Q, a->lchild);
			if (a->rchild != NULL) // ������������գ������
				EnQueue(Q, a->rchild);
		}
	}
	return OK;
}

#endif