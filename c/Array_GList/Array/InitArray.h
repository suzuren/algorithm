
#ifndef _INITARRAY_H
#define _INITARRAY_H

Status InitArray(Array & A, int dim)
{
	/* 若维数dim和各维长度合法，则构造相应的数组A，并返回OK */

	int elemtotal = 1; /* elemtotal是元素总值 */
	va_list ap;

	if (dim < 1 || dim > MAX_ARRAY_DIM)
		return ERROR;

	A.dim = dim;
	A.bounds = (int *)malloc(dim * sizeof(int));
	if (!A.bounds)
		exit(OVERFLOW);

	va_start(ap, dim);
	for (int i = 0; i<dim; ++i)
	{
		A.bounds[i] = va_arg(ap, int);
		if (A.bounds[i] < 0)
			return UNDERFLOW; /* 在math.h中定义为4 */
		elemtotal *= A.bounds[i];
	}
	va_end(ap);

	A.base = (ElemType *)malloc(elemtotal * sizeof(ElemType));
	if (!A.base)
		exit(OVERFLOW);

	A.constants = (int *)malloc(dim * sizeof(int));
	if (!A.constants)
		exit(OVERFLOW);

	A.constants[dim - 1] = 1;
	for (i = dim-2; i >= 0; --i)
	{
		A.constants[i] = A.bounds[i + 1] * A.constants[i+1];
	}

	return OK;
}

#endif

