
#ifndef _PREORDERTRAVESE_H
#define _PREORDERTRAVESE_H

Status PreOrderTraverse(BiTree T, Status (*Visit)(TElemType e))
{// 先序遍历二叉树 -- 递归方式
	// 算法6.1
	// 采用二叉链表存储结构，Visit是对数据元素操作的应用函数，
	// 先序遍历二叉树T的递归算法，对每个数据元素调用函数Visit。
	// 最简单的Visit函数是：
	//     Status PrintElement( ElemType e ) {  // 输出元素e的值
	//        printf( e );  // 实用时，加上格式串
	//        return OK;
	//     }
	// 调用实例：PreOrderTraverse(T, PrintElement);

	if (T) // 如果T树不为空    如果T为真，那么 T != NULL;
	{
		if (Visit(T->data)) // 如果数据
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

// 先序遍历非递归算法，对于任一结点P：
// 1) 访问结点P，并将结点P入栈;
// 2) 判断结点P的左孩子是否为空，
// 若为空，则取栈顶结点并进行出栈操作，并将栈顶结点的右孩子置为当前的结点P，循环至1);
// 若不为空，则将P的左孩子置为当前的结点P;
// 3) 直到P为NULL并且栈为空，则遍历结束。
Status PreOrderTraverse(BiTree T, Status (*Visit)(TElemType e))
{
	SqStack S;
	BiTree p = T;
	InitStack(S);
	Push(S, p); // 根节点入栈
	while( StackEmpty(S) != OK ) // 栈不空，则继续循环
	{
		Pop(S, p); // 访问根节点
		if(Visit(p->data) != OK)
		{
			return ERROR;
		}
		if(p->rchild) // // 向右走到尽头，当p指向NULL的时候条件为假，则空指针节点不需要入栈
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


