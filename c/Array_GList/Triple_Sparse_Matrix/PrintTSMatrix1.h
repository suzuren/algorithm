
#ifndef _PRINTTSMATRIX1_H
#define _PRINTTSMATRIX1_H

Status PrintTSMatrix1(TSMatrix M)
{
	if (M.tn > 0)
	{
		ElemType arr[MAXLINESIZE][MAXCOLSSIZE] = {0};
		int l = ERROR;
		int c = ERROR;
		for (int i = 0; i <= M.tn; i++)
		{
			l = M.data[i].l;
			c = M.data[i].c;
			arr[l][c] = M.data[i].v;
		}
		for (l = 0; l < M.ln; l++)
		{
			printf("\n\n");
			for (c = 0; c < M.cn; c++)
			{
				printf(" %-3d", arr[l][c]);
			}
		}
	}
	else
	{
		printf("Empty Matrix!\n");
	}
	return OK;
}

#endif


