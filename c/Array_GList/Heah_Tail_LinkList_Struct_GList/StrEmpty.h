
#ifndef _STREMPTY_H
#define _STREMPTY_H

Status StrEmpty(SString S)
{
	if(S[0] == 0)
		return TRUE;
	else
		return FALSE;
}

#endif