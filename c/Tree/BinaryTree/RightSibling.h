
#ifndef _RIGHTSIBLING_H
#define _RIGHTSIBLING_H

TElemType RightSibling(BiTree T, TElemType e)
{// ���� e �����ֵܣ��� e �� T ���Һ��ӣ����������ֵܣ��򷵻� NULL
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

