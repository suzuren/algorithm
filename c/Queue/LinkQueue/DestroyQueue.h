
#ifndef _DESTROYQUEUE_H
#define _DESTROYQUEUE_H

Status DestroyQueue(LinkQueue & Q)
{
	while(Q.front)
	{
		Q.rear = Q.front->next;
		free(Q.front);
		Q.front = Q.rear;
	}
	return OK;
}

#endif