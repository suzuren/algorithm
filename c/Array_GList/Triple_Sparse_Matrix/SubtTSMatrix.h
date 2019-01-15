
#ifndef _SUBTTSMATRIX_H
#define _SUBTTSMATRIX_H

Status SubtTSMatrix(TSMatrix M, TSMatrix N, TSMatrix & Q)
{
	if (M.ln != N.ln || M.cn != N.cn)
	{
		printf("Add to TSMatrix line or cols different.\n");
		return ERROR;
	}
	for(int i=1; i<=N.tn; i++)
	{
		N.data[i].v =( N.data[i].v * -1 );
	}
	AddTSMatrix(M, N, Q);
	return OK;
}

#endif

