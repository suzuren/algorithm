
#ifndef _DESTROYLIST_SQ_H
#define _DESTROYLIST_SQ_H

Status DestroyList_Sq(SqList &L)
{
	if (L.elem == NULL)
		return ERROR;
	else
		free(L.elem);
	return OK;
}

#endif

