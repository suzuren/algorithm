
#define	TRUE	1
#define	FALSE	0
#define	OK		1
#define	ERROR	0
#define	INFEASIBLE	-1
#define	OVERFLOW	-2

#define QElemType int
#define Status	  int

#include <stdio.h>
#include <stdlib.h>

#include "LinkQueueStructure.h"

#include "InitQueue.h"
#include "DestroyQueue.h"
#include "ClearQueue.h"
#include "QueueEmpty.h"
#include "QueueLength.h"
#include "GetHead.h"
#include "EnQueue.h"
#include "dequeue.h"

#include "visit.h"
#include "queuetraverse.h"

int main()
{
	int j = ERROR;
	QElemType e = ERROR;
	LinkQueue SQ;

	j = InitQueue(SQ);

	j = EnQueue(SQ, 7);
	j = EnQueue(SQ, 4);
	j = EnQueue(SQ, 5);

	int qlen = QueueLength(SQ);
	printf("Queue length %d.\n",qlen);

//	j = ClearQueue(SQ); // 暂时不打开

	QElemType qhe;
	j = GetHead(SQ,qhe);
	printf("Get queue head %d.\n",qhe);

	j = QueueEmpty(SQ);

	j = QueueTraverse(SQ,visit);

	j = DeQueue(SQ,e);


	j = DestroyQueue(SQ);

	return OK;
}
