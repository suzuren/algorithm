
#ifndef _INITARRAY_H
#define _INITARRAY_H

Status InitArray(Array & A, int dim)
{
	/* ��ά��dim�͸�ά���ȺϷ���������Ӧ������A��������OK */

	int elemtotal = 1; /* elemtotal��Ԫ����ֵ */
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
			return UNDERFLOW; /* ��math.h�ж���Ϊ4 */
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

