
#ifndef _GETHEAD_H
#define _GETHEAD_H

Status GetHead(LinkQueue Q,QElemType &qhe)
{
	QueuePtr qhead = NULL;
	if(Q.front == Q.rear)
		return ERROR;
	qhead = Q.front->next;
	qhe = qhead->data;
	return OK;
}

#endif