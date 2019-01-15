
#ifndef _INSERTCHILD_H
#define _INSERTCHILD_H

Status InsertChild(BiTree &T, BiTree p, int LR,BiTree c)
{
	if(T)
	{
		if(LR == 0) //  把二叉树c插入p所指节点的子树
		{
			c->rchild = p->lchild; // p所节点的原有左子树成为c的右子树
			p->lchild = c;         // 二叉树 c 成为 p 的左子树
		}
	}
	else if(LR == 1)
	{
		c->rchild = p->rchild;    // p 指结点的原有右子树成为 c 的右子树
		p->rchild = c;
	}
	return OK;
}

#endif

