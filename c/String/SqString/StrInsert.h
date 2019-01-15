
#ifndef _STRINSERT_H
#define _STRINSERT_H

Status StrInsert(SqString &S,int pos, SqString T)
{
	if(pos<1 || pos>S.len+1)
		return ERROR;
	if(S.len+T.len <= MAXSSIZE)
	{
		for(int i=S.len+T.len; i>=pos-1+T.len; i--)
		{
			S.ch[i] = S.ch[i-T.len];
		}
		for(i=0; i<T.len; i++)
		{
			S.ch[pos-1+i] = T.ch[i];
		}
		S.len = S.len+T.len;
		return OK;
	}
	return ERROR;
}

#endif