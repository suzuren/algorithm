
#ifndef _INDEX_H
#define _INDEX_H

int Index(SqString S, SqString T, int pos)
{
	// TΪ�ǿմ���������S�е�pos���ַ�֮�������T��ȵ��Ӵ���
	// �򷵻ص�һ���������Ӵ���S�е�λ�ã����򷵻�0
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