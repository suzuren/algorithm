#ifndef _INTHREADING_H
#define _INTHREADING_H

// �㷨6.7
// ���������������������
void InThreading(BiThrTree p)
{
	BiThrTree pre = NULL;
	if (p)
	{
		InThreading(p->lchild); // �ݹ�������������
		if (!p->lchild)         // û������
		{
			p->LTag = Thread;   // ��ǰ������
			p->lchild = pre;    // ����ָ��ָ��ǰ��
		}
		if (!pre->rchild)       // ǰ��û���Һ���
		{
			pre->RTag = Thread; // ���������
			pre->rchild = p;    // ǰ���Һ���ָ��ָ����(��ǰ���p) 
		}
		pre = p;                // ���� pre ָ��p��ǰ��
		InThreading(p->rchild); // �ݹ�������������
	}
} // InThreading


#endif

