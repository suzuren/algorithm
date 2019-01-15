
#ifndef _DEQUEUE_H
#define _DEQUEUE_H

Status DeQueue(LinkQueue & Q,QElemType &e)
{
	if(Q.front == Q.rear)
		return ERROR;
	QueuePtr p = NULL;
	p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if(Q.rear == p)
		Q.rear =Q.front;
	free(p);
	return OK;
}

#endif