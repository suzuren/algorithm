

#define OK    1
#define ERROR 0
#define Status int

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "TSMatrixStruct.h"
#include "CreateTSMatrix.h"

#include "DestroyTSMatrix.h"

#include "PrintTSMatrix1.h"
#include "PrintTSMatrix2.h"

#include "CopyTSMatrix.h"
#include "AddTSMatrix.h"
#include "SubtTSMatrix.h"

#include "TransposeTSMatrix.h"

#include "MultTSMatrix.h"



int main()
{
	srand((unsigned)time(NULL));

	int j = ERROR;
	TSMatrix SM, SN, SQ;

    j = CreateTSMatrix(SM);
	j = CreateTSMatrix(SN);

	j = DestroyTSMatrix(SQ);
	
	printf("\n");

	printf("Triple sparse matrix information SM ...\n");
    j = PrintTSMatrix1(SM);
	printf("\n\n");

//	printf("Triple sparse matrix information SN ...\n");
//	j = PrintTSMatrix1(SN);
//	printf("\n\n");

//	printf("Triple sparse matrix information SQ ...\n");
//	j = PrintTSMatrix1(SQ);
//	printf("\n\n");

//	j = CopyTSMatrix(SM, SQ);
//	printf("Copy SQ ...\n");
//	j = PrintTSMatrix1(SQ);
//	printf("\n\n");

//	j = AddTSMatrix(SM, SN, SQ);
//	printf("Add SQ ...\n");
//	j = PrintTSMatrix1(SQ);
//	printf("\n\n");

//	j = SubtTSMatrix(SM, SN, SQ);
//	printf("Subt SQ ...\n");
//	j = PrintTSMatrix1(SQ);
//	printf("\n\n");

//	j = TransposeTSMatrix(SM, SQ);
//	printf("Transpose TSMatrix SQ ...\n");
//	j = PrintTSMatrix1(SQ);
//	printf("\n\n");

//	MultTSMatrix(SM, SN, SQ); // 这个函数结果不对
//	printf("Mult TSMatrix SQ ...\n");
//	j = PrintTSMatrix1(SQ);
//	printf("\n\n");

	return OK;
}