
#ifndef _LOCATE_H
#define _LOCATE_H

Status Locate(Array A, va_list ap, int & off) // Value()、Assign()调用此函数
{
	// 若ap指示的各下标值合法，则求出该元素在A中的相对地址off
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