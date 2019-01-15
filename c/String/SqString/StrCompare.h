
#ifndef _STRCOMPARE_H
#define _STRCOMPARE_H

int StrCompare(SqString S,SqString T)
{
	if(S.len > T.len)
		return 1;
	else if(S.len == T.len)
		return 0;
	else
		return -1;
}

#endif