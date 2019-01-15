
#ifndef _VALUE_H
#define _VALUE_H

Status Value(Array A, ElemType & e)
{ 
	// 若各下标合法，则e被赋值为A的相应的元素值

	va_list ap;
	Status result;
	int off;

	va_start(ap, e);
	if ((result = Locate(A, ap, off)) <= 0) /* 调用Locate() */
		return result;
	e = *(A.base + off);
	return OK;
}


#endif

