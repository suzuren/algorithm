
#ifndef _PRINTTSMATRIX_H
#define _PRINTTSMATRIX_H
int Count = 0;
Status PrintTSMatrix2(TSMatrix M)
{// Êä³öÏ¡Êè¾ØÕó
	if(M.tn > 0)
	{
		for(int i=1; i<=M.tn; i++)
		{
			printf("  %3i. line %d, clos %3d,  elemvalue: %3d\n",++Count,M.data[i].l, M.data[i].c, M.data[i].v);
		}
	}
	else
	{
		printf("Empty Matrix!\n");
	}
	return OK;
}
#endif