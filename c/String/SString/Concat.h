
#ifndef _CONCAT_H
#define _CONCAT_H

Status Concat(SString & T, SString S1, SString S2)
{// �㷨4.2
	// ��T������S1��S2���Ӷ��ɵ��´�����δ�ضϣ��򷵻�TRUE������FALSE��

	int i = ERROR;
	Status uncut = ERROR;

	if (S1[0] + S2[0] <= MAXSTRLEN)
	{ // δ�ض�
		for (i = 1; i <= S1[0]; i++)
		{
			T[i] = S1[i];
		}
		for (i = 1; i <= S2[0]; i++)
		{
			T[i + S1[0]] = S2[i];
		}
		T[0] = S1[0] + S2[0];
		uncut = TRUE;
	}
	else if (S1[0] < MAXSTRLEN)
	{ // �ض�
		for (i = 1; i <= S1[0]; i++)
		{
			T[i] = S1[i];
		}
		for (i = S1[0] + 1; i <= MAXSTRLEN; i++)
		{
			T[i] = S2[i - S1[0]];
		}
		T[0] = MAXSTRLEN;
		uncut = FALSE;
	}
	else
	{ // �ض�(��ȡS1)
		for (i = 0; i <= MAXSTRLEN; i++)
		{
			T[i] = S1[i];
		}
		uncut = FALSE;
	}
	return uncut;
} // Concat

#endif
