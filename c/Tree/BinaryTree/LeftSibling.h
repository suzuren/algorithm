
#ifndef _LEFTSIBLING_H
#define _LEFTSIBLING_H

TElemType LeftSibling(BiTree T, TElemType e)
{// 返回 e 的左兄弟，若 e 是 T 的左孩子，或者无左兄弟，则返回 NULL

	if(T)
	{
		TElemType value = Parent(T, e);
		BiTree p = Point(T, value);
		if( p && (p->lchild) && (p->lchild->data) != e )
			return (p->lchild->data);
	}
	return NULL;
}

#endif

