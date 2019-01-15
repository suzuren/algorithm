
#ifndef _ADDTSMATRIX_H
#define _ADDTSMATRIX_H

int compare(int c1, int c2) // 两个数字比较，返回值如下
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
	if (M.ln != N.ln || M.cn != N.cn) // 查看是否满足相加条件
	{
		printf("Add to TSMatrix line or cols different.\n");
		return ERROR;
	}
	Q.ln = M.ln;
	Q.cn = M.cn;
	while (m <= M.tn && n <= N.tn) // 查看M和N元素是否处理完
	{
		switch (compare(M.data[m].l, N.data[n].l)) // 比较哪一个行号比较大
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
	while(m<=M.tn) // 矩阵N的元素全部处理完毕
	{
		Q.data[++q] = M.data[m++];
	}
	while(n<=N.tn) // 矩阵M的元素全部处理完毕
	{
		Q.data[++q] = N.data[n++];
	}
	Q.tn = q; // 矩阵 Q 的非零元素个数
	if(q>MAXNZSIZE) // 非零元素过多
	{
		printf("Not Zero elem too much.\n");
		return ERROR;
	}
	return OK;
}

#endif
