#ifndef _DELETECHILD_H
#define _DELETECHILD_H 

Status DeleteChild(BiTree &T, BiTree p, int LR)
{// p 指向 T 中某个节点
	if(p)
	{
		if(LR == 0)
		{
			DestroyBiTree(p->lchild);
			return TRUE;
		}
		else if(LR == 1)
		{
			DestroyBiTree(p->rchild);
			return TRUE;
		}
	}
	return OK;
}

#endif

