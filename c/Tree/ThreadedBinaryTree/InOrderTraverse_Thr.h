
#ifndef _INORDERTRAVERSE_THR_H
#define _INORDERTRAVERSE_THR_H

	// �㷨6.5
	// Tָ��ͷ��㣬ͷ��������lchildָ�����㣬ͷ��������lchildָ��
	// ������������һ����㡣��������������������ʾ�Ķ�����T��
	// ��ÿ������Ԫ�ص��ú���Visit��

Status InOrderTraverse_Thr(BiThrTree T, Status (*Visit)(TElemType e)) 
{

	BiThrTree p = NULL;
	p = T->lchild; // p ָ������
	while (p != T) // �������������ʱ��p==T
	{
		while (p->LTag == Link)
			p = p->lchild;

		if (!Visit(p->data)) // ������������Ϊ�յĽ��
			return ERROR;
		while (p->RTag == Thread && p->rchild != T)
		{
			p = p->rchild;
			Visit(p->data); // ���ʺ�̽��
		}
		p = p->rchild; // p��������������
	}
	return OK;
} // InOrderTraverse_Thr

#endif

