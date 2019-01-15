
#define	TRUE	1
#define	FLASE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

#define ElemType int
#define Status   int
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "DuLNode.h"
#include "CreateList_DuL.h"
#include "Output_DuL.h"
#include "GetElemP_DuL.h"
#include "ListInsert_DuL.h"
#include "ListDelete_DuL.h"

int main()
{
	srand( (unsigned)time( NULL ) );
	DuLinkList dhead;
	int del=ERROR;

	dhead = CreateList_DuL(dhead,13);
	printf("创建链表：\n");
	Output_DuL(dhead);

	
	ListInsert_DuL(dhead, 3,33);
	printf("插入链表：\n");
	Output_DuL(dhead);

	
	ListDelete_DuL(dhead,2,del);
	printf("删除链表：\n");
	Output_DuL(dhead);
	printf("del = %d\n",del);
	
	return 0;
}