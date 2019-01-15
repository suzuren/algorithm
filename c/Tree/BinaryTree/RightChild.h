
#ifndef _RIGHTCHILD_H
#define _RIGHTCHILD_H

//��ʼ���������������ڣ�e��T��ĳ����㡣
//�������������e���Һ��ӡ���e���Һ��ӣ��򷵻ء��ա���

TElemType RightChild(BiTree T, TElemType e)
{
	BiTree p;
	if (T)
	{
		p = Point(T, e);
		if (p && p->rchild)
			return p->rchild->data;
	}
	return NULL;
}

#endif

