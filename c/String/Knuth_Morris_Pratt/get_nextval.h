
#ifndef _GET_NEXTVAL_H
#define _GET_NEXTVAL_H

Status get_nextval(SString T, int * next)
{ // �㷨4.8
	// ��ģʽ��T��next��������ֵ����������nextval��
	int i = 1;
	int j = 0;
	next[1] = 0;
	while (i < T[0])
	{
		if (j == 0 || T[i] == T[j])
		{
			++i;
			++j;
			if (T[i] != T[j])
				next[i] = j;
			else
				next[i] = next[j];
		}
		else
			j = next[j];
	}
	return true;
} // get_nextval

#endif
