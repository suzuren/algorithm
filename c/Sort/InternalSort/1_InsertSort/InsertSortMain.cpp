

#include "stdafx.h"

int main()
{
	printf("\n");
	srand((unsigned)time(NULL));

	Status j = ERROR;
	SqList SL;

	j = InitSqList(SL);	//≥ı ºªØÀ≥–Úœﬂ–‘±Ì

	printf("SqList lenght: %d.\n",SL.length);
	printf("\n");

 // Test SqList ...
	printf("Test SqList ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL, VisitChar);
	printf("\n");
	printf("\n");

//  SqList SInsertSort ... ºÚµ•≤Â»Î≈≈–Ú
	SqList SL1 = SL;
	j = SInsertSort(SL1);

	printf("SInsert Sort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL1, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL1, VisitChar);
	printf("\n");
	printf("\n");

// SqList BInsertSort ... ’€∞Î≤Â»Î≈≈–Ú
	SqList SL2 = SL;
	j = BInsertSort(SL2);

	printf("BInsert Sort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL2, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL2, VisitChar);
	printf("\n");
	printf("\n");

// SqList Two_PathInsertSort ... 2-¬∑≤Â»Î≈≈–Ú
	SqList SL3 = SL;
	j = Two_PathInsertSort(SL3);

	printf("Two Path Insert Sort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL3, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL3, VisitChar);
	printf("\n");
	printf("\n");

// Static Link Lsit InsertSort ... æ≤Ã¨¡¥±Ì≤Â»Î≈≈–Ú
	SLinkListType SLL;
	InitSLinkList(SLL, SL);


	return OK;
}