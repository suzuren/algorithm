
#ifndef _OUTPUTLIST_L_H
#define _OUTPUTLIST_L_H

void OutputList_L(LinkList head)
{
	LinkList p = head->next;
	while (1)
	{
		
		printf("%d ", p->data);
		if (p->next == NULL)
			break;
		p = p->next;		
	}
	printf("\n");
}

#endif