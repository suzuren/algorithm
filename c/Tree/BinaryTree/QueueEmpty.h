
#ifndef _QUEUEEMPTY_H
#define _QUEUEEMPTY_H

Status QueueEmpty(LinkQueue Q)
{
	if(Q.front->next == NULL)
		return TRUE;
	else
		return FALSE;
}

#endif
