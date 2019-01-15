
#define Status int

#define OK     1
#define ERROR  0

#define TRUE   1
#define FALSE  0

#include <stdio.h>

#include "SString.h"
#include "StrCopy.h"
#include "StrEmpty.h"
#include "StrCompare.h"
#include "StrLength.h"
#include "ClearString.h"
#include "Concat.h"
#include "SubString.h"




#include "PrintStr.h"

int main()
{
	int j = ERROR;

	SString S = {17,'a','c','a','b','a','a','b','c','a','a','b','a','a','b','c','a','c'};
	SString T = { 8,'a','b','a','a','b','c','a','c'};
	SString Sub = {"0"};

	j = SubString(Sub, S, 3, 4);
	j = Concat(Sub,S,T);
	j = StrCopy(Sub,T);
	j = ClearString(T);

	PrintStr(S);
	PrintStr(T);
	PrintStr(Sub);
	return OK;

}

