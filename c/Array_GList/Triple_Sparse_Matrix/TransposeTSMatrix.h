
#ifndef _TRANSPOSETSMATRIX_H
#define _TRANSPOSETSMATRIX_H

Status TransposeTSMatrix(TSMatrix M, TSMatrix & T)
{   // 算法5.1

	// 采用三元组顺序表存储表示，求稀疏矩阵M的转置矩阵T

	int t = 1;
	T.ln = M.cn;
	T.cn = M.ln;
	T.tn = M.tn;
	if (T.tn > 0)
	{
		for (int cols = 0; cols < M.cn; ++cols) // 从第0列开始，到最后一列
		{
			for (int p = 1; p <= M.tn; ++p) // data[0] 未用
			{
				if (M.data[p].c == cols) // 如果列数相等
				{
					T.data[t].l = M.data[p].c; // 把列号放到行号
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


