
#define Status bool
#define ERROR  0
#define OK     1

#include <stdio.h>
#include <stdlib.h>

#include "SString.h"
#include "get_nextval.h"
#include "Index_KMP.h"

int main()
{
//	SString S1 = {13,'a','b','a','b','c','a','b','c','a','c','b','a','b'};
//	SString T1 = { 5,'a','b','c','a','c'};

	SString S = {17,'a','c','a','b','a','a','b','c','a','a','b','a','a','b','c','a','c'};
	SString T = { 8,'a','b','a','a','b','c','a','c'};
	printf("\n");
	int next[MAXSTRLEN];
	bool j = get_nextval(T, next);
	printf("get_nextval: ");
	for(int i=1; i<9; i++)
	{
		printf("%i",next[i]);
	}
	printf("\n");

	int pos = Index_KMP(S, T, 1);
	printf("KMP pattern matching position in: %d.\n",pos);
	printf("\n");
	return 0;
}