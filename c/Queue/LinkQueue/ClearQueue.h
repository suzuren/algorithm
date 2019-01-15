
#ifndef _CLEARQUEUE_H
#define _CLEARQUEUE_H

Status ClearQueue(LinkQueue & Q)
{
	QueuePtr qhead = Q.front; // 保存队头节点
	Q.front = Q.front->next;
	while(Q.front)
	{
		Q.rear = Q.front->next;
		free(Q.front);
		Q.front = Q.rear;
	}
	// 清空后保持队头不变
	Q.front = qhead;
	Q.front->next = NULL;
	Q.rear = Q.front;
	return OK;
}

#endif