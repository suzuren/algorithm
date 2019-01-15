
#ifndef _ENQUEUE_H
#define _ENQUEUE_H

Status EnQueue(LinkQueue & Q,QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
	if(!p)
		exit(OVERFLOW);
	p->data = e;
	p->next = NULL;
	Q.rear->next = p;
	Q.rear = p;
	return OK;
}

#endif