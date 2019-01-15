
#ifndef _CLEARQUEUE_H
#define _CLEARQUEUE_H

Status ClearQueue(LinkQueue & Q)
{
	QueuePtr qhead = Q.front; // �����ͷ�ڵ�
	Q.front = Q.front->next;
	while(Q.front)
	{
		Q.rear = Q.front->next;
		free(Q.front);
		Q.front = Q.rear;
	}
	// ��պ󱣳ֶ�ͷ����
	Q.front = qhead;
	Q.front->next = NULL;
	Q.rear = Q.front;
	return OK;
}

#endif