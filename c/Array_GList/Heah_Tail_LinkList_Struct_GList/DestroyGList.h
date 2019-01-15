
#ifndef _DESTROYGLIST_H
#define _DESTROYGLIST_H

Status DestroyGList(GList *L)
{
	GList head = NULL;
	GList tail = NULL;
	if(*L != NULL)
	{
		if( (*L)->tag == ATOM )
		{
			free(*L);
			*L = NULL;
		}
		else  // �Ǳ��㣬��Ӧ��ɾ����ͷ�ͱ�β���
		{
			head = (*L)->ptr.hp;
			tail = (*L)->ptr.tp;
			free(*L);
			*L = NULL;
			// �ݹ�ɾ����ͷ�ͱ�β�ڵ�
			DestroyGList(&head);
			DestroyGList(&tail);
		}
		return OK;
	}
	return ERROR;
}

#endif
