
#define Status int
#define	TRUE   1
#define	FALSE  0
#define OK     1
#define ERROR  0

#include <stdio.h>
#include <stdlib.h>

#include "SStringStruct.h"
#include "StrCopy.h"
#include "StrEmpty.h"
#include "StrCompare.h"
#include "StrLength.h"
#include "ClearString.h"
#include "SubString.h"
#include "crt_SString.h"
#include "sever.h"

#include "GListStruct.h"
#include "InitGList.h"
#include "CreateGList.h"
#include "DestroyGList.h"

int main()
{

	char s[3] = "()";
	SString emp;
	crt_SString(emp, s);

	printf("\n");
	int j = ERROR;

	GList SGL;
	
	j = InitGList(&SGL);
	if(j == OK)
	{
		printf("GList initialize succeed.\n");
	}
	printf("\n");


	j = DestroyGList(&SGL);
	if(j == OK)
	{
		printf("GList destroy succeed.\n");
	}
	else
	{
		printf("GList is empty,not destroy.\n");
	
	}
	printf("\n");



	printf("\n");
	return OK;
}
