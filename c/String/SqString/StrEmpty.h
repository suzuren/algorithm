
#ifndef _STREMPTY_H
#define _STREMPTY_H

Status StrEmpty(SqString S)
{
	if(S.len == 0)
		return OK;
	else
		return FALSE;
}

#endif