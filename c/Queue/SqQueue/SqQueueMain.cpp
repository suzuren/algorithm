
#define	TRUE	1
#define	FALSE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

#define MAXQSIZE	13

#define QElemType int
#define Status	  int

#include <stdio.h>
#include <stdlib.h>

#include "sqqueuestructure.h"

#include "InitQueue.h"
//#include "DestroyQueue.h"
//#include "ClearQueue.h"
//#include "QueueEmpty.h"

#include "QueueLength.h"

//#include "GetHead.h"
#include "EnQueue.h"
#include "dequeue.h"

#include "visit.h"
#include "queuetraverse.h"

int main()
{
	SqQueue SQ;
	int j = ERROR;
	j = InitQueue(SQ);
	j = EnQueue(SQ, 9);
	j = EnQueue(SQ, 4);
	j = EnQueue(SQ, 5);

	int qlen = ERROR;
	qlen = QueueLength(SQ);
	printf("Queue length %d.\n",qlen);

	j = QueueTraverse(SQ,visit);

	QElemType de = ERROR;
	j = DeQueue(SQ, de);
	printf("Elem %d out queue.\n",de);


	return OK;
}