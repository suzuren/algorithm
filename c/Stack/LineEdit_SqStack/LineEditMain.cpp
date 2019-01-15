
#define	OK		1
#define	ERROR	0

#define	OVERFLOW	-2

#define SElemType char
#define Status	  int
#define STACK_INIT_SIZE 13
#define STACKINCREMENT  3

#include <stdio.h>
#include <stdlib.h>

#include "sqstack.h"
#include "initstack.h"
#include "push.h"
#include "Pop.h"
#include "clearstack.h"
#include "destroystack.h"
#include "LineEdit.h"

int main()
{
	LineEdit();
	printf("\n");
	return 0;
}
