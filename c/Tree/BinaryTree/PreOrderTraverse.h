
#ifndef _PREORDERTRAVESE_H
#define _PREORDERTRAVESE_H

Status PreOrderTraverse(BiTree T, Status (*Visit)(TElemType e))
{// ������������� -- �ݹ鷽ʽ
	// �㷨6.1
	// ���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú�����
	// �������������T�ĵݹ��㷨����ÿ������Ԫ�ص��ú���Visit��
	// ��򵥵�Visit�����ǣ�
	//     Status PrintElement( ElemType e ) {  // ���Ԫ��e��ֵ
	//        printf( e );  // ʵ��ʱ�����ϸ�ʽ��
	//        return OK;
	//     }
	// ����ʵ����PreOrderTraverse(T, PrintElement);

	if (T) // ���T����Ϊ��    ���TΪ�棬��ô T != NULL;
	{
		if (Visit(T->data)) // �������
		{
			if (PreOrderTraverse(T->lchild, Visit))
			{
				if (PreOrderTraverse(T->rchild, Visit))
				{
					return OK;
				}
			}
		}
		return ERROR;
	}
	else
	{
		return OK;
	}
	return OK;
} // PreOrderTraverse
/*

// ��������ǵݹ��㷨��������һ���P��
// 1) ���ʽ��P���������P��ջ;
// 2) �жϽ��P�������Ƿ�Ϊ�գ�
// ��Ϊ�գ���ȡջ����㲢���г�ջ����������ջ�������Һ�����Ϊ��ǰ�Ľ��P��ѭ����1);
// ����Ϊ�գ���P��������Ϊ��ǰ�Ľ��P;
// 3) ֱ��PΪNULL����ջΪ�գ������������
Status PreOrderTraverse(BiTree T, Status (*Visit)(TElemType e))
{
	SqStack S;
	BiTree p = T;
	InitStack(S);
	Push(S, p); // ���ڵ���ջ
	while( StackEmpty(S) != OK ) // ջ���գ������ѭ��
	{
		Pop(S, p); // ���ʸ��ڵ�
		if(Visit(p->data) != OK)
		{
			return ERROR;
		}
		if(p->rchild) // // �����ߵ���ͷ����pָ��NULL��ʱ������Ϊ�٣����ָ��ڵ㲻��Ҫ��ջ
		{
			Push(S, p->rchild);
		}
		if(p->lchild)
		{
			Push(S, p->lchild);
		}
	}
	DestroyStack(S);
	return OK;
}

*/

#endif


