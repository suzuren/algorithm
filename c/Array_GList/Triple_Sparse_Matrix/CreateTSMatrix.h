
#ifndef _CREATETSMATRIX_H
#define _CREATETSMATRIX_H

Status CreateTSMatrix(TSMatrix &M)
{
//	fflush(stdin);       // 清空缓存

//	printf("Input line number: ");
//	scanf("%d",&M->mu);  // 矩阵的行数
//	fflush(stdin);

//	printf("Input clos number: ");
//	scanf("%d",&M->nu);  // 列数
//	fflush(stdin);

//	printf("Not-Zero elem number: ");
//	scanf("%d",&M->tu);  // 非零元个数
//	fflush(stdin);

	M.ln = 4;
	M.cn = 4;
//	M.tn = 23;
	
	ElemType arr[MAXLINESIZE][MAXCOLSSIZE] = {0};

	int l = ERROR;
	int c = ERROR;
	int tn = ERROR;
	int count = 1; // data[0] 未用
	
//	M.ln = rand()%(MAXLINESIZE-2)+3; // line in (3 - MAXLINESIZE)
//	M.cn = rand()%(MAXCOLSSIZE-2)+3; // cols in (3 - MAXCOLSSIZE)

	for (int i = 0; i < M.ln; i++)   // 因为data[0] 未用
	{
		l = rand()%M.ln;
		c = rand()%M.cn;
		for (int j = 0; j < M.cn; j++)
		{		
			arr[l][c] = rand()%31 + 3;
		}
	}
	for(l=0; l<M.ln; l++)
	{
		for(c=0; c<M.cn; c++)
		{
			if(arr[l][c] != 0)
			{				
				M.data[count].l = l;
				M.data[count].c = c;
				M.data[count].v = arr[l][c];
				++count;
			}
		}
	}
	M.tn = count-1;
	return OK;
}

#endif
