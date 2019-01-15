
#ifndef _ADDTSMATRIX_H
#define _ADDTSMATRIX_H

int compare(int c1, int c2) // �������ֱȽϣ�����ֵ����
{
	if (c1 < c2)
		return -1;
	else if (c1 == c2)
		return 0;
	else
		return 1;
}

Status AddTSMatrix(TSMatrix M, TSMatrix N, TSMatrix & Q)
{
	int m = 1, n = 1, q = 0;
	if (M.ln != N.ln || M.cn != N.cn) // �鿴�Ƿ������������
	{
		printf("Add to TSMatrix line or cols different.\n");
		return ERROR;
	}
	Q.ln = M.ln;
	Q.cn = M.cn;
	while (m <= M.tn && n <= N.tn) // �鿴M��NԪ���Ƿ�����
	{
		switch (compare(M.data[m].l, N.data[n].l)) // �Ƚ���һ���кűȽϴ�
		{
		case -1:
			{
				Q.data[++q] = M.data[m++];
				break;
			}
		case 0:
			{
				if(M.data[m].c < N.data[n].c)
				{
					Q.data[++q] = M.data[m++];
				}
				else if (M.data[m].c == N.data[n].c)
				{
					Q.data[++q] = M.data[m++];
					Q.data[q].v += N.data[n++].v;
					if(Q.data[q].v == 0)
					{
						q--;
					}
				}
				else
				{
					Q.data[++q] = N.data[n++];
				}
				break;
			}
		case 1:
			{
				Q.data[++q] = N.data[n++];
				break;
			}
		}
	}
	while(m<=M.tn) // ����N��Ԫ��ȫ���������
	{
		Q.data[++q] = M.data[m++];
	}
	while(n<=N.tn) // ����M��Ԫ��ȫ���������
	{
		Q.data[++q] = N.data[n++];
	}
	Q.tn = q; // ���� Q �ķ���Ԫ�ظ���
	if(q>MAXNZSIZE) // ����Ԫ�ع���
	{
		printf("Not Zero elem too much.\n");
		return ERROR;
	}
	return OK;
}

#endif
