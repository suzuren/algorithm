
#ifndef _LOCATE_H
#define _LOCATE_H

Status Locate(Array A, va_list ap, int & off) // Value()��Assign()���ô˺���
{
	// ��apָʾ�ĸ��±�ֵ�Ϸ����������Ԫ����A�е���Ե�ַoff
	int  ind;
	off = 0;
	for (int i = 0;i < A.dim;i++)
	{
		ind = va_arg(ap, int);
		if (ind < 0 || ind >= A.bounds[i])
			return OVERFLOW;
		off += A.constants[i] * ind;
	}
	return OK;
}

#endif