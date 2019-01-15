
#ifndef _CLEARBITREE_H
#define _CLEARBITREE_H

Status ClearBiTree(BiTree &T)
{
	if(T != NULL)
	{
		ClearBiTree(T->lchild);
		ClearBiTree(T->rchild);
		free(T);
	}
	T = NULL;
	return OK;
}

#endif