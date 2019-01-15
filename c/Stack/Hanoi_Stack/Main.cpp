
int Count=0;

#include <stdio.h>

#include "move.h"
#include "hanoi.h"

int main()
{
	printf("\n");

	hanoi(3, 'x', 'y', 'z');

	printf("\n");
	return 0;
}