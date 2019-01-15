
#define	TRUE	1
#define	FALSE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

#define Status  int

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "SqListStruct.h"

#include "InitList_Sq.h"

#include "DestroyList_Sq.h"

#include "ListInsert_Sq.h"
#include "ListDelete_Sq.h"
#include "LocateElem_Sq.h"
#include "MergeList_Sq.h"
//#include ""

int main()
{
	srand( (unsigned)time( NULL ) );

	int j = ERROR;
	SqList SLA, SLB, SLC;

	j = InitList_Sq(SLA);
	j = InitList_Sq(SLB);
	j = InitList_Sq(SLC);
	
	ElemType ie1 = rand()% 33;
	ElemType ie2 = rand()% 33;
	j = ListInsert_Sq(SLA, 1, ie1);
	j = ListInsert_Sq(SLB, 1, ie2);

	ElemType de = ERROR;
//	j = ListDelete_Sq(SLA, 1, de);

	int pos = LocateElem_Sq(SLA, de, compare);

	j = MergeList_Sq(SLA, SLB, SLC);

	j = DestroyList_Sq(SLA);

	return OK;
}