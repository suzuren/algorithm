
#ifndef _QUEUELENGTH_H
#define _QUEUELENGTH_H

int QueueLength(SqQueue Q)
{
	int qlen = ERROR;
	qlen = (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
	return qlen;
}

#endif