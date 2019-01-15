
#define ERROR 0
#define OK    1
#define FALSE 2
#define TRUE  3

#define Status int

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "stdafx.h"

#include "InitList.h"

#include "Visit.h"
#include "ListTrverse.h"

#include "LT.h"

#include "InsertSort.h"         // ≤Â»Î≈≈–Ú
#include "BinaryInsertSort.h"	// ∞Î≤Â»Î≈≈–Ú

#include "Arrange.h"			// 2-¬∑≤Â»Î≈≈–Ú

#include "ShellSort.h"          // œ£∂˚≈≈–Ú

#include "BubbleSort.h"			// ∆≈›≈≈–Ú

#include "QuickSort.h"			// øÏÀŸ≈≈–Ú
#include "SelectSort.h"         // ºÚµ•—°‘Ò≈≈–Ú
#include "HeapSort.h"			// ∂—≈≈–Ú

#include "MergeSort.h"			// 2-¬∑πÈ≤¢≈≈–Ú
#include "RadixSort.h"			// ¡¥ Ωª˘ ˝≈≈–Ú
int main()
{
	printf("\n");
	srand((unsigned)time(NULL));

	Status j = ERROR;
	SqList SL;
	SLinkList SLL;

	j = InitSqList(SL);
	j = InitSLinkList(SLL, SL);

	printf("SqList lenght: %d.\n",SL.length);
	printf("SLinkList lenght: %d.\n",SLL.length);
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

// Test SLinkList ...
//	printf("Test SLinkList ...\n");
//	printf("   Next: ");
//	j = SLinkListNextTrverse(SLL, VisitInt);
//	printf("\n");
//	printf("     Rc: ");
//	j = SLinkListRcTrverse(SLL, VisitChar);
//	printf("\n");
//	printf("\n");

// SqList InsertSort ...
	SqList SL1 = SL;
	j = InsertSort(SL1);

	printf("InsertSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL1, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL1, VisitChar);
	printf("\n");
	printf("\n");

// SqList BinaryInsertSort ...
	SqList SL2 = SL;
	j = BinaryInsertSort(SL2);

	printf("BinaryInsertSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL2, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL2, VisitChar);
	printf("\n");
	printf("\n");

// SLinkList Arrange ...
//	SLinkList SLL1 = SLL;
//	j = Arrange(SLL1);
//	printf("Arrange ...\n");
//	printf("   Next: ");
//	j = SLinkListNextTrverse(SLL1, VisitInt);
//	printf("\n");
//	printf("     Rc: ");
//	j = SLinkListRcTrverse(SLL1, VisitChar);
//	printf("\n");
//	printf("\n");

// SqList ShellSort ...
	int dlta[MAXSIZE];
	j = SL.length/2;
	int c = 0;
	for(int i=0; i<SL.length/2; i+=2)
	{
		dlta[c++] = j ;
		j = j -2;
	}
	if(dlta[c-1] == 0 || dlta[c-1] == 2)
	{
		dlta[c-1] = 1;
	}
	SqList SL3 = SL;
	j = ShellSort(SL3, dlta, c);

	printf("ShellSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL3, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL3, VisitChar);
	printf("\n");
	printf("\n");

// SqList BubbleSort ...
	SqList SL4 = SL;
	j = BubbleSort(SL4);

	printf("BubbleSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL4, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL4, VisitChar);
	printf("\n");
	printf("\n");

// SqList QuickSort ...
	SqList SL5 = SL;
	j = QuickSort(SL5);

	printf("QuickSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL5, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL5, VisitChar);
	printf("\n");
	printf("\n");

// SqList SelectSort ...
	SqList SL6 = SL;
	j = SelectSort(SL6);

	printf("SelectSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL6, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL6, VisitChar);
	printf("\n");
	printf("\n");

// HeapType HeapSort
	HeapType SH = SL;
	j = HeapSort(SH);

	printf("HeapSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SH, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SH, VisitChar);
	printf("\n");
	printf("\n");

// SqList MergeSort ...
	SqList SL7 = SL;
	j = MergeSort(SL7);

	printf("MergeSort ...\n");
	printf("    Key: ");
	j = SqListKeyTrverse(SL7, VisitInt);
	printf("\n");
	printf("   Info: ");
	j = SqListInfoTrverse(SL7, VisitChar);
	printf("\n");
	printf("\n");




	printf("\n");
	printf("\n");
	printf("\n");
	return OK;
}