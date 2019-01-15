
#ifndef _ASSIGN_H
#define _ASSIGN_H

Status Assign(Array &A, ElemType e)
{ 
	// �����±�Ϸ�����e��ֵ���� A ��ָ����Ԫ��
	va_list ap;
	Status result;
	int off;

	va_start(ap, e);
	if ((result = Locate(A, ap, off)) <= 0) // ����Locate()
		return result;
	*(A.base + off) = e;
	return OK;
}

#endif

