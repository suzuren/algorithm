
#ifndef _VALUE_H
#define _VALUE_H

Status Value(Array A, ElemType & e)
{ 
	// �����±�Ϸ�����e����ֵΪA����Ӧ��Ԫ��ֵ

	va_list ap;
	Status result;
	int off;

	va_start(ap, e);
	if ((result = Locate(A, ap, off)) <= 0) /* ����Locate() */
		return result;
	e = *(A.base + off);
	return OK;
}


#endif

