#ifndef _DELETECHILD_H
#define _DELETECHILD_H 

Status DeleteChild(BiTree &T, BiTree p, int LR)
{// p ָ�� T ��ĳ���ڵ�
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

