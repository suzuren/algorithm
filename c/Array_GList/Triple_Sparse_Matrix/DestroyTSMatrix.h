
#ifndef _DESTROYTSMATRIX_H
#define _DESTROYTSMATRIX_H

Status DestroyTSMatrix(TSMatrix &M)
{
	M.ln = 0;
	M.cn = 0;
	M.tn = 0;
	return OK;
}

#endif

