#ifndef _INORDERTHREADING_H
#define _INORDERTHREADING_H

// �㷨6.6
// �������������T��������������������Thrtָ��ͷ��㡣

BiThrTree pre = NULL;

Status InOrderThreading(BiThrTree & Thrt, BiThrTree T)
{
	Thrt = (BiThrTree) malloc ( sizeof(BiThrNode) );
	if (!Thrt)
		exit(OVERFLOW);

	Thrt->LTag = Link;   // ��־����Ϊָ��
	Thrt->RTag = Thread; // ��־�Һ���Ϊ����

	Thrt->rchild = Thrt; // ��ָ���ָ
	if (!T)
	{
		Thrt->lchild = Thrt; // ���������գ�����ָ���ָ
	}
	else
	{
		Thrt->lchild = T;   // ͷ�����ָ��ָ�����ĸ�
		pre = Thrt;

		InThreading(T);     // �㷨6.7�����������������������
		
		pre->rchild = Thrt;
		pre->RTag = Thread; // ���һ�����������

		Thrt->rchild = pre;
	}
	return OK;
} // InOrderThreading


#endif

