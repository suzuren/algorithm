
#ifndef _STRCOPY_H
#define _STRCOPY_H

Status StrCopy(SString &T, SString S)
{
	for(int i=1; i<=S[0]; i++)
	{
		T[i] = S[i];
	}
	T[0] = S[0];
	return OK;
}

#endif

