
#ifndef _ASSIGN_H
#define _ASSIGN_H

Status Assign(Array &A, ElemType e)
{ 
	// 若各下标合法，则将e的值赋给 A 的指定的元素
	va_list ap;
	Status result;
	int off;

	va_start(ap, e);
	if ((result = Locate(A, ap, off)) <= 0) // 调用Locate()
		return result;
	*(A.base + off) = e;
	return OK;
}

#endif

