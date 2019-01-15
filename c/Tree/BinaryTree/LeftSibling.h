
#ifndef _LEFTSIBLING_H
#define _LEFTSIBLING_H

TElemType LeftSibling(BiTree T, TElemType e)
{// ���� e �����ֵܣ��� e �� T �����ӣ����������ֵܣ��򷵻� NULL

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

