
#ifndef _MULTTSMATRIX_H
#define _MULTTSMATRIX_H

Status MultTSMatrix(TSMatrix M, TSMatrix N, TSMatrix & Q)
{// ϡ�����ĳ˻�
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
	Nc = (ElemType *)malloc((N.cn+1)* sizeof(ElemType)); //NcΪ����Nһ�е���ʱ���飨��ѹ����[0]���ã�
	Tc = (ElemType *)malloc((M.ln+1)* sizeof(ElemType)); //TcΪ����Tһ�е���ʱ���飨��ѹ����[0]���ã�
	if(!Nc || !Tc)
	{
		printf("create temp array Nc or Tc failed.\n");
		return ERROR;	
	}
	for(c=0; c<N.cn; c++)
	{
		for(i=1; i<=N.ln; i++)
		{
			Nc[i] = 0; // Nc ��ʼ�� [0]δ��
		}
		for(i=1; i<=N.ln; i++)
		{
			Tc[i] = 0; // Tc ��ʼ�� [0]δ��
		}
		for(i=1; i<=N.tn; i++)
		{
			if(N.data[i].c == c) // ���ڵ� c ��
			{
				Nc[N.data[i].l] = N.data[i].v; // �����������н���Ԫ��ֵ������Ӧ��Nc
			}
			for(j=1; j<=M.tn; j++)
			{
				Tc[M.data[j].l] += M.data[j].v * Nc[M.data[j].c]; // Tc�д�N�ĵ�c����M��˵Ľ��
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

