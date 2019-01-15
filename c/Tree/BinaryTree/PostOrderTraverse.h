
#ifndef _POSTORDERTRAVERSE_H
#define _POSTORDERTRAVERSE_H

/*
Status PostOrderTraverse(BiTree T, Status ( *Visit)(TElemType))
{// ������������� -- �ݹ鷽ʽ
	if (T)
	{
		if(PostOrderTraverse(T->lchild, Visit))
		{
			if(PostOrderTraverse(T->rchild, Visit))
			{
				if(Visit(T->data))
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
}
*/
Status PostOrderTraverse(BiTree T, Status ( *Visit)(TElemType))
{// ������������� -- �ǵݹ鷽ʽ
	SqStack S;
	InitStack(S);
	BiTree p, q;
	Push(S, T);  // ��ָ����ջ
	while(!StackEmpty(S))
	{
		while(GetTop(S, p) && p && (p->lchild || p->rchild))
		{
			Push(S, p->rchild);
			Push(S, p->lchild);
		}// ��ʱջ���п�ָ�룬��ʾĳ���ڵ��������Ϊ��

		if(!StackEmpty(S)) //���ʽ��
		{
			Pop(S, p);
			if(p)
			{
				if(!Visit(p->data))
				{
					return ERROR;
				}
			}
			else // ����������Ϊ�յĽڵ㣬�������Ϸ���
			{
				Pop(S, p);
				if(p)
				{
					if(!Visit(p->data))
					{
						return ERROR;
					}
				}
			}
			while(GetTop(S, q) && q && p == q->rchild)
			{// ����ǰΪ���������������ջ
				Pop(S, p);
				if(!Visit(p->data))
				{
					return ERROR;
				}
				GetTop(S, q);
			}
		}// if end
	}// while end
	DestroyStack(S);
	return OK;
}
#endif
