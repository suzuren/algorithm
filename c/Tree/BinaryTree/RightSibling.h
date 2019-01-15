
#ifndef _RIGHTSIBLING_H
#define _RIGHTSIBLING_H

TElemType RightSibling(BiTree T, TElemType e)
{// 返回 e 的右兄弟，若 e 是 T 的右孩子，或者无右兄弟，则返回 NULL
	if(T)
	{
		TElemType value = Parent(T, e);
		BiTree p = Point(T, value);
		if( p && (p->rchild) && (p->rchild->data) != e )
			return (p->rchild->data);
	}
	return NULL;
}

#endif

