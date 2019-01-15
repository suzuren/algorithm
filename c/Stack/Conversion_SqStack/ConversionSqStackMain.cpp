//#define	TRUE	1
//#define	FLASE	0
#define	OK		1
#define	ERROR	0
//#define	INFEASIBLE	-1
#define	OVERFLOW	-2

#define SElemType int
#define Status	  int
#define STACK_INIT_SIZE 100
#define STACKINCREMENT  10

#include <stdio.h>
#include <stdlib.h>

#include "sqstack.h"
#include "initstack.h"
#include "push.h"
//#include "GetTop.h"
#include "Pop.h"
#include "conversion.h"
int main()
{
	printf("将十进制整数 N 转换为 d(2或8) 进制数\n");
	conversion(12,8);
	printf("\n");
	return 0;
}