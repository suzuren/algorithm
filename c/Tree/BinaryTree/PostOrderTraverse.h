
#ifndef _POSTORDERTRAVERSE_H
#define _POSTORDERTRAVERSE_H

/*
Status PostOrderTraverse(BiTree T, Status ( *Visit)(TElemType))
{// 后序遍历二叉树 -- 递归方式
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
{// 后序遍历二叉树 -- 非递归方式
	SqStack S;
	InitStack(S);
	BiTree p, q;
	Push(S, T);  // 根指针入栈
	while(!StackEmpty(S))
	{
		while(GetTop(S, p) && p && (p->lchild || p->rchild))
		{
			Push(S, p->rchild);
			Push(S, p->lchild);
		}// 此时栈中有空指针，表示某个节点的右子树为空

		if(!StackEmpty(S)) //访问结点
		{
			Pop(S, p);
			if(p)
			{
				if(!Visit(p->data))
				{
					return ERROR;
				}
			}
			else // 存在右子树为空的节点，继续向上返回
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
			{// 若当前为右子树，则继续出栈
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
