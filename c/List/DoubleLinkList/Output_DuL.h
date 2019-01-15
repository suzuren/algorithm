
void Output_DuL(DuLinkList & dhead)
{
	DuLinkList p = dhead->next;
	//	printf("\n");
	while (1)
	{
		printf("%d ", p->data);
		if (p->next == NULL)
			break;
		p = p->next;
	}
	printf("\n");
}