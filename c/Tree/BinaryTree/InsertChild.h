
#ifndef _INSERTCHILD_H
#define _INSERTCHILD_H

Status InsertChild(BiTree &T, BiTree p, int LR,BiTree c)
{
	if(T)
	{
		if(LR == 0) //  �Ѷ�����c����p��ָ�ڵ������
		{
			c->rchild = p->lchild; // p���ڵ��ԭ����������Ϊc��������
			p->lchild = c;         // ������ c ��Ϊ p ��������
		}
	}
	else if(LR == 1)
	{
		c->rchild = p->rchild;    // p ָ����ԭ����������Ϊ c ��������
		p->rchild = c;
	}
	return OK;
}

#endif

