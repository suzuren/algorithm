
#define Status int
#define OK	   1
#define ERROR  0

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> // ��׼ͷ�ļ����ṩ�� va_start��va_arg �� va_end,

#include <math.h>

#include "arraystruct.h"
#include "InitArray.h"
#include "DestroyArray.h"

#include "Locate.h"

#include "Value.h"
#include "Assign.h"

int main()
{
	int j = ERROR;

	Array SA;
	j = InitArray(SA, 2);

	j = DestroyArray(SA);

	ElemType elem = 3;

	// ���������������г��� ������
//	j = Value(SA, elem);
//	j = Assign(SA, elem);

	return OK;
}