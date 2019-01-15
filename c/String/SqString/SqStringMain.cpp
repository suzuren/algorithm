
#define	 TRUE	1
#define	 FALSE	0
#define	 OK		1
#define	 ERROR	0
#define	 INFEASIBLE	-1
#define	 OVERFLOW	-2

#define  MAXSSIZE    33
//#define MAXRANDSSIZE 13

#define  SElemType char
#define  Status    int

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "RandCreateStr.h"

#include "sqstringstructure.h"
#include "DisplyStr.h"

#include "strassign.h"
#include "StrCopy.h"
#include "StrEmpty.h"
#include "StrCompare.h"
#include "StrLength.h"
#include "ClearString.h"
#include "Concat.h"
#include "SubString.h"
#include "Index.h"

#include "StrInsert.h"
#include "StrDelete.h"
#include "DestroyString.h"

#include "Replace.h"

int main()
{
	srand((unsigned)time(NULL));

	int j = ERROR;
	printf("\n");
	int olen = rand()%(MAXSSIZE-9+1) + 9; // 9 - MAXSSIZE 之间
	int tlen = rand()%(MAXSSIZE-9+1) + 9;

	SElemType os[MAXSSIZE] = {'0'};
	SElemType ts[MAXSSIZE] = {'0'};

	j = RandCreateStr(os, olen);
	j = RandCreateStr(ts, tlen);

	printf("One string: %s\n",os);
	printf("Two string: %s\n",ts);
	
	SqString SOS, STS,SCS,SUB;
	
	j = StrAssign(SOS, os);
	j = StrAssign(STS, ts);

//	j = StrCopy(SOS, STS);  先不打开代码
//	j = ClearString(SOS);

	printf("\n");
	j = StrEmpty(SOS);
	if(j == 1)
		printf("String is empty.\n");
	else
		printf("String is not empty.\n");

	printf("\n");
	j = StrCompare(SOS,STS);
	if(j == 1)
		printf("SOS greater STS.\n");
	else if(j == 0)
		printf("SOS equal STS.\n");
	else
		printf("SOS less STS.\n");

	printf("\n");
	int strlen = StrLength(SOS);
	printf("String length: %d\n",strlen);

	j = Concat(SCS,SOS,STS);

	j = SubString(SUB,SOS,3,3);

	int pos = 3;
	j = Index(SOS, SUB, pos);
	printf("Index pos: %d\n",pos);
	printf("\n");

	printf("Disply SOS: ");
	j = DisplyStr(SOS);
	printf("Disply STS: ");
	j = DisplyStr(STS);
	printf("Disply SCS: ");
	j = DisplyStr(SCS);
	printf("Disply SUB: ");
	j = DisplyStr(SUB);
	printf("\n");

	j = StrInsert(SOS,7,SUB);
	printf("Disply insert SOS: ");
	j = DisplyStr(SOS);

	j = StrDelete(SOS,7,3);
	printf("Disply delete SOS: ");
	j = DisplyStr(SOS);

//	j = Replace(SOS, SUB,STS);

	return OK;
}
