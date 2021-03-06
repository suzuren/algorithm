
#ifndef _INITLIST_H
#define _INITLIST_H

Status InitSqList(SqList &L)
{// 初始化顺序线性表
	int len = rand()% (LISTMAXSIZE-3+1) + 3; // 3 - LISTMAXSIZE
	for(int i = 1; i<=len; i++)
	{
		L.r[i].otherinfo = 'A'+rand()%26;
		L.r[i].key = L.r[i].otherinfo;
	}
	L.length = len;
	return OK;
}

Status InitSLinkList(SLinkListType & SL, SqList L)
{
	for(int i = 1; i<=L.length; i++)
	{
		SL.r[i].rc   = L.r[i];
		SL.r[i].next = i-1;
	}
//	SL.r[0].rc   = 'A'+26;
//	SL.r[0].next = 1;
	SL.length	 = L.length;
	return OK;
}

#endif

