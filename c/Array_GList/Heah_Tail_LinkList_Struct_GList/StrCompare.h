
#ifndef _STRCOMPARE_H
#define _STRCOMPARE_H

int StrCompare(SString S,SString T)
{
	if(S[0] > T[0])
		return 1;
	else if(S[0] == T[0])
		return 0;
	else
		return -1;
}

#endif