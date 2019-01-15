
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
		else  // 是表结点，则应该删除表头和表尾结点
		{
			head = (*L)->ptr.hp;
			tail = (*L)->ptr.tp;
			free(*L);
			*L = NULL;
			// 递归删除表头和表尾节点
			DestroyGList(&head);
			DestroyGList(&tail);
		}
		return OK;
	}
	return ERROR;
}

#endif
