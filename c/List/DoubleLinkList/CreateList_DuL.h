
DuLinkList CreateList_DuL(DuLinkList & dhead,int n)
{
	dhead = (DuLinkList)malloc(sizeof(DuLNode));
//	dhead ->data = rand()%13;
	DuLinkList pre,rear;
	rear = dhead;
	pre = rear;
	for(int i=0; i<n; i++)
	{
		rear = (DuLinkList)malloc(sizeof(DuLNode));
		rear->data = rand()%32;
		rear->prior = pre;
		pre->next = rear;
		pre = rear;
	}
	rear->next = NULL;
	return dhead;
}