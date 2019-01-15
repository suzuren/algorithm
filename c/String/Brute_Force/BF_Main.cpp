
#define Status bool
#define ERROR  0
#define OK     1


#include <stdio.h>
#include <stdlib.h>

#include "SString.h"
#include "Index_BF.h"

int main()
{
	SString S1 = {13,'a','b','a','b','c','a','b','c','a','c','b','a','b'};
	SString T1 = { 5,'a','b','c','a','c'};

	SString S = {17,'a','c','a','b','a','a','b','c','a','a','b','a','a','b','c','a','c'};
	SString T = { 8,'a','b','a','a','b','c','a','c'};
	printf("\n");
	int pos = Index_BF(S, T, 1);
	printf("\tPattern matching position in: %d.\n",pos);
	printf("\n");
	return 0;
}