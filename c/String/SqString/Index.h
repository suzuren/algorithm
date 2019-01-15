
#ifndef _INDEX_H
#define _INDEX_H

int Index(SqString S, SqString T, int pos)
{
	// T为非空串。若主串S中第pos个字符之后存在与T相等的子串，
	// 则返回第一个这样的子串在S中的位置，否则返回0
	SqString sub;
	if ( pos >= 0 )
	{
		int n = StrLength(S);
		int m = StrLength(T);
		int i = pos;
		while (i <= n - m + 1)
		{
			SubString (sub, S, i, m);
			if (StrCompare(sub, T) == 0)
				++ i;
			else
				return i;
		} // while
	} // if
	return OK;
}

#endif