
#ifndef _POINT_H
#define _POINT_H

BiTree Point(BiTree T, TElemType e)
{//���ض�����T��ָ��Ԫ��ֵΪe�Ľ��ָ��
	LinkQueue Q;
	QElemType qe;
	if (T)
	{
		InitQueue(Q);  // ��ʼ������
		EnQueue(Q, T); // ��ָ�����
		while ( TRUE != QueueEmpty(Q) )//�Ӳ���
		{
			DeQueue(Q, qe);    // ���ӣ�����Ԫ�ظ��� qe
			if (qe->data == e) // qe ��ָ���Ϊ��ֵΪe
				return qe;     // ��ֱ�ӷ��� qe �ڵ�
			if (qe->lchild)    // ������
			{
				EnQueue(Q, qe->lchild);  // �������, ��Ժ���������ӣ���ֵ��ȥ���Ϳ��Ը���һ����α������ҷ���
			}
			if (qe->rchild)    // ���Һ���
			{
				EnQueue(Q, qe->rchild);  // ����Һ���,
			}
		}
	}
	return NULL;
}

#endif

