
#ifndef _STRDELETE_H
#define _STRDELETE_H

Status StrDelete(SqString &S,int pos,int len)
{
	if( pos<0 || len<0 || pos+len>S.len )
		return ERROR;
	else
	{
		for(int i= pos+len-1; i<=S.len-1; i++)
		{
			S.ch[i-len] = S.ch[i];
		}
		S.len = S.len - len;
		return OK;
	}
	return FALSE;
}

#endif