
#ifndef _STRUCTURE_H
#define _STRUCTURE_H

typedef struct QNode
{
	QElemType	   data;
	struct QNode * next;
}QNode, *QueuePtr;

typedef struct
{
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;

#endif

