
#ifndef _INITQUEUE_H
#define _INITQUEUE_H

Status InitQueue(LinkQueue & Q)
{
	Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if(!Q.front)
		exit(OVERFLOW);
	Q.front->next = NULL;
	return OK;
}

#endif