
#ifndef _LISTINSERT_SQ_H
#define _LISTINSERT_SQ_H

// �㷨2.4
// ��˳�����Ա�L�ĵ�i��Ԫ��֮ǰ�����µ�Ԫ��e��
// i�ĺϷ�ֵΪ1��i��ListLength_Sq(L)+1

Status ListInsert_Sq(SqList & L, int i, ElemType e)
{
	ElemType * p;
	if (i < 1 || i > L.length + 1)
		return ERROR; // iֵ���Ϸ�

	if (L.length >= L.listsize)
	{ // ��ǰ�洢�ռ���������������
		ElemType * newbase = (ElemType *)realloc(L.elem,(L.listsize + LISTINCREMENT) * sizeof (ElemType));
		if (!newbase)
			return ERROR; // �洢����ʧ��

		L.elem = newbase; // �»�ַ
		L.listsize += LISTINCREMENT; // ���Ӵ洢����
	}

	ElemType * q = &(L.elem[i - 1]); // q Ϊ����λ��

	for (p = &(L.elem[L.length - 1]); p >= q; --p)
		*(p + 1) = *p;

	// ����λ�ü�֮���Ԫ������
	*q = e;     // ����e
	++L.length; // ������1

	return OK;
} // ListInsert_Sq

#endif

