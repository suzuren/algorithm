
#define Status int

#define OVERFLOW  -1

#define ERROR  0
#define OK     1

#define BOOL   bool
#define TRUE   true
#define FALSE  true

#include <stdio.h>
#include <stdlib.h>

#include "BiThrNodeStruct.h"
#include "CreateBiThrTree.h"

#include "InThreading.h"

#include "InOrderThreading.h"

#include "Visit.h"

#include "InOrderTraverse_Thr.h"

Status main()
{
	int j = ERROR;

	BiThrTree BTT;
	BiThrTree thrt;

	TElemType definition[] = {'A','B','C','#','#','D','E','#','G','#','#','F','#','#','#','\0'};
	BTT = CreateBiThrTree(BTT, definition);
	
	thrt = BTT;
	j = InOrderThreading(thrt, BTT);

	j = InOrderTraverse_Thr(BTT, Visit);
	return OK;
}

