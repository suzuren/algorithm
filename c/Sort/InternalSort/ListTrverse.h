

#ifndef _SQLISTTRVERSE_H
#define _SQLISTTRVERSE_H

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

Status SLinkListRcTrverse(SLinkList SL, Status (*VisitChar) (RcdType e))
{
	if(SL.length == 0)
	{
		return ERROR;
	}
	else
	{
		for(int i=1; i<=SL.length; i++)
		{
			VisitChar(SL.r[i].rc);
		}
	}
	return OK;
}

Status SLinkListNextTrverse(SLinkList SL, Status (*VisitInt) (int e))
{
	if(SL.length == 0)
	{
		return ERROR;
	}
	else
	{
		for(int i=1; i<=SL.length; i++)
		{
			VisitInt(SL.r[i].next);
		}
	}
	return OK;
}

#endif


