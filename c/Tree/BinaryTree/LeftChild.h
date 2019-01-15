
#ifndef _LEFRCHILD_H
#define _LEFRCHILD_H

// ��ʼ���������������ڣ�e��T��ĳ����㡣
// �������������e�����ӡ���e�����ӣ��򷵻ء��ա���

TElemType LeftChild(BiTree T,TElemType e)
{
	BiTree p = NULL;
	if(T != NULL)
	{
		p = Point(T, e);
		if(p!=NULL && p->lchild != NULL)
		{
			return p->lchild->data;
		}
	}
	return NULL;
}

#endif

