
#ifndef _DESTROYBITREE_H
#define _DESTROYBITREE_H

Status DestroyBiTree(BiTree &T)
{
	if(T == NULL)
	{
		return FALSE;
	}
	else
	{
		DestroyBiTree(T->lchild);
		DestroyBiTree(T->rchild);
		free(T);
		T = NULL;
		return TRUE;
	}
	return OK;
}

#endif

