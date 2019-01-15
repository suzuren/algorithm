

#ifndef _LISTTRVERSE_H
#define _LISTTRVERSE_H
// ����˳�����Ա�
Status SqListKeyTrverse(SqList L, Status (*VisitInt) (KeyType e))
{
	if(L.length == 0)
	{
		return ERROR;
	}
	else
	{
		for(int i=1; i<=L.length; i++)
		{
			VisitInt(L.r[i].key);
		}
	}
	return OK;
}

Status SqListInfoTrverse(SqList L, Status (*VisitChar) (InfoType e))
{
	if(L.length == 0)
	{
		return ERROR;
	}
	else
	{
		for(int i=1; i<=L.length; i++)
		{
			VisitChar(L.r[i].otherinfo);
		}
	}
	return OK;
}

#endif


