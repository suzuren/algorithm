
#ifndef _MULTTSMATRIX_H
#define _MULTTSMATRIX_H

Status MultTSMatrix(TSMatrix M, TSMatrix N, TSMatrix & Q)
{// 稀疏矩阵的乘积
	int l = ERROR;
	int c = ERROR;
	int i = ERROR;
	int j = ERROR;
	ElemType *Nc = NULL;
	ElemType *Tc = NULL;
	TSMatrix T;
	if(M.cn != N.ln)
	{
		printf("two TSMatrix line and cols not equal.\n");
		return ERROR;
	}
	T.ln = M.cn;
	T.cn = N.ln;
	T.tn = 0;
	Nc = (ElemType *)malloc((N.cn+1)* sizeof(ElemType)); //Nc为矩阵N一列的临时数组（非压缩，[0]不用）
	Tc = (ElemType *)malloc((M.ln+1)* sizeof(ElemType)); //Tc为矩阵T一行的临时数组（非压缩，[0]不用）
	if(!Nc || !Tc)
	{
		printf("create temp array Nc or Tc failed.\n");
		return ERROR;	
	}
	for(c=0; c<N.cn; c++)
	{
		for(i=1; i<=N.ln; i++)
		{
			Nc[i] = 0; // Nc 初始化 [0]未用
		}
		for(i=1; i<=N.ln; i++)
		{
			Tc[i] = 0; // Tc 初始化 [0]未用
		}
		for(i=1; i<=N.tn; i++)
		{
			if(N.data[i].c == c) // 属于第 c 列
			{
				Nc[N.data[i].l] = N.data[i].v; // 根据其所在行将其元素值赋给相应的Nc
			}
			for(j=1; j<=M.tn; j++)
			{
				Tc[M.data[j].l] += M.data[j].v * Nc[M.data[j].c]; // Tc中存N的第c列与M相乘的结果
			}
			for(j=1; j<=M.tn; j++)
			{
				if(Tc[j] != 0)
				{
					T.data[++T.tn].v = Tc[j];
					T.data[T.tn].l   = c;
					T.data[T.tn].c   = j;
				}
			}
		}
	}
	if (T.tn > MAXNZSIZE)
	{
		printf("Not Zero elem too much.\n");
		return ERROR;
	}
	TransposeTSMatrix(T, Q);
	DestroyTSMatrix(T);
	free(Tc);
	free(Nc);
	return OK;
}
#endif

