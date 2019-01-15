
#ifndef _BITREEDEPTH_H
#define _BITREEDEPTH_H

int BiTreeDepth(BiTree T)
{
	int dl = ERROR;
	int dr = ERROR;
	if(T == NULL)
	{
		return dl;
	}
	else
	{
		dl = BiTreeDepth(T->lchild);
		dr = BiTreeDepth(T->rchild);
		return dl > dr ? dl+1 : dr+1;
	}
	return OK;
}

#endif
