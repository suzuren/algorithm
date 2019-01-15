
#ifndef _INORDERTRAVERSE_H
#define _INORDERTRAVERSE_H

/*
Status InOrderTraverse(BiTree T, Status (*Visit)(TElemType))
{
	// �㷨6.2
	// ���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú�����
	// �������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit��
	SqStack S;
	BiTree p;
	InitStack(S); // ��ʼ��ջ
	Push(S, T); // ��ָ���ջ
	while (!StackEmpty(S))
	{
		while (GetTop(S, p) && p) // ջ���գ���ȡͷԪ�سɹ�����OK, p != NULL
		{
			Push(S, p->lchild);   // �����ߵ���ͷ
		}
		Pop(S, p); // ��ָ����ջ
		if (!StackEmpty(S))
		{// ���ʽ�㣬����һ��
			Pop(S, p);
			if (!Visit(p->data)) // �������������������ߵ���ͷ������󣬰��ұߵ���ջ���� while (GetTop(S, p) && p) ���м�飬�Ƿ�Ϊ��
				return ERROR;
			Push(S, p->rchild);
		}
	}
	return OK;
} // InOrderTraverse
*/
// ****************************************************************************************************

Status InOrderTraverse(BiTree T, Status (*Visit)(TElemType  e))
{
	// �㷨6.3
	// ���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú�����
	// �������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit��
	SqStack S;
	BiTree p;
	InitStack(S); p = T;
	while (p || !StackEmpty(S))
	{
		if (p)
		{
			Push(S, p);    // �ǿ�ָ���ջ
			p = p->lchild; // �������
		}
		else
		{
			Pop(S, p);  // �ϲ�ָ����ջ
			if (!Visit(p->data)) // ��������ָ���
				return ERROR;
			p = p->rchild; // �����ҽ�
		}
	}
	return OK;
} // InOrderTraverse

#endif
