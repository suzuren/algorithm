
#ifndef _DEQUEUE_H
#define _DEQUEUE_H

Status DeQueue(SqQueue & Q,QElemType &e)
{
	if(Q.front == Q.rear)
		return ERROR;
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) %MAXQSIZE;	
	return OK;
}

#endif