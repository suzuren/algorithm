
#ifndef _PARENT_H
#define _PARENT_H

TElemType Parent(BiTree T,TElemType e)
{// ���ؽڵ� e ��˫��, ���Ϊ�����ڵ㣬���� NULL
	LinkQueue Q;
	QElemType qe;
	if(T->data == e)
	{
		return NULL;
	}
	else if(T != NULL)
	{
		InitQueue(Q);
		EnQueue(Q, T); // �������
		while( TRUE != QueueEmpty(Q) ) // ���в�Ϊ��
		{
			DeQueue(Q, qe); // ���ӣ�����Ԫ�ظ���qe
			if(qe->lchild && qe->lchild->data == e || qe->rchild && qe->rchild->data == e) // �ҵ��������ڵ� e
			{
				return qe->data;
			}
			else // ����Ҳ����ڵ�e����������һ�����
			{
				if(qe->lchild) // ���Ӳ�Ϊ��
				{
					EnQueue(Q, qe->lchild);// �������
				}
				if(qe->rchild) // �Һ��Ӳ�Ϊ��
				{
					EnQueue(Q, qe->rchild);// �Һ������
				}
			}
		}
	}
	return NULL;
}

#endif
