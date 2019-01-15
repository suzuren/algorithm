
#ifndef _INITQUEUE_H
#define _INITQUEUE_H

Status InitQueue(SqQueue &Q)
{
	Q.base = (QElemType *)malloc (MAXQSIZE * sizeof(QElemType));
	if(!Q.base)
		exit(OVERFLOW);
	Q.front = Q.rear = 0;
	return OK;
}

#endif
