
#ifndef _TRANSPOSETSMATRIX_H
#define _TRANSPOSETSMATRIX_H

Status TransposeTSMatrix(TSMatrix M, TSMatrix & T)
{   // �㷨5.1

	// ������Ԫ��˳���洢��ʾ����ϡ�����M��ת�þ���T

	int t = 1;
	T.ln = M.cn;
	T.cn = M.ln;
	T.tn = M.tn;
	if (T.tn > 0)
	{
		for (int cols = 0; cols < M.cn; ++cols) // �ӵ�0�п�ʼ�������һ��
		{
			for (int p = 1; p <= M.tn; ++p) // data[0] δ��
			{
				if (M.data[p].c == cols) // ����������
				{
					T.data[t].l = M.data[p].c; // ���кŷŵ��к�
					T.data[t].c = M.data[p].l;
					T.data[t].v = M.data[p].v;
					++t;
				}
			}
		}
	}
	else
	{
		printf("Not Zero elem is empty,not need transpose.\n");
		return ERROR;
	}
	return OK;
} // TransposeSMatrix

#endif


