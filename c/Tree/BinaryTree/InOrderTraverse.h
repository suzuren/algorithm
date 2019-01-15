
#ifndef _INORDERTRAVERSE_H
#define _INORDERTRAVERSE_H

/*
Status InOrderTraverse(BiTree T, Status (*Visit)(TElemType))
{
	// 算法6.2
	// 采用二叉链表存储结构，Visit是对数据元素操作的应用函数。
	// 中序遍历二叉树T的非递归算法，对每个数据元素调用函数Visit。
	SqStack S;
	BiTree p;
	InitStack(S); // 初始化栈
	Push(S, T); // 根指针进栈
	while (!StackEmpty(S))
	{
		while (GetTop(S, p) && p) // 栈不空，获取头元素成功返回OK, p != NULL
		{
			Push(S, p->lchild);   // 向左走到尽头
		}
		Pop(S, p); // 空指针退栈
		if (!StackEmpty(S))
		{// 访问结点，向右一步
			Pop(S, p);
			if (!Visit(p->data)) // 在上面检查左子树向左走到尽头，输出后，把右边的入栈，在 while (GetTop(S, p) && p) 进行检查，是否为空
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
	// 算法6.3
	// 采用二叉链表存储结构，Visit是对数据元素操作的应用函数。
	// 中序遍历二叉树T的非递归算法，对每个数据元素调用函数Visit。
	SqStack S;
	BiTree p;
	InitStack(S); p = T;
	while (p || !StackEmpty(S))
	{
		if (p)
		{
			Push(S, p);    // 非空指针进栈
			p = p->lchild; // 继续左进
		}
		else
		{
			Pop(S, p);  // 上层指针退栈
			if (!Visit(p->data)) // 访问其所指结点
				return ERROR;
			p = p->rchild; // 再向右进
		}
	}
	return OK;
} // InOrderTraverse

#endif
