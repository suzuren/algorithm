
#ifndef _INDEX_KMP_H
#define _INDEX_KMP_H

int Index_KMP(SString S, SString T, int pos)
{   // �㷨4.6

	// ����ģʽ��T��next������T������S�е�pos���ַ�֮���λ��
	// ��KMP�㷨�����У�T�ǿգ�1��pos��StrLength(S)��
	int next[255];
	int i = pos;
	int j = 1;
	get_nextval(T, next);
	while (i <= S[0] && j <= T[0])
	{
		if (j == 0 || S[i] == T[j])
		{
			++i; ++j; // �����ȽϺ���ַ�
		}
		else
			j = next[j]; // ģʽ�������ƶ�
	}
	if (j > T[0])
		return i - T[0]; // ƥ��ɹ�
	else
		return 0;
} // Index_KMP

#endif