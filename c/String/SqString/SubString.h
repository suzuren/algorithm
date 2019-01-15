
#ifndef _SUBSTRING_H
#define _SUBSTRING_H

Status SubString(SqString &Sub,SqString S,int pos,int len)
{
	if( pos >= 0 && pos <= StrLength(S) && len >0 && len <= (StrLength(S)-pos+1) )
	{
		for(int i=pos-1; i<pos+len-1; i++)
		{
			Sub.ch[i-pos+1] = S.ch[i];
		}
		Sub.len = len;
		return OK;
	}
	else
		return FALSE;
}

#endif
