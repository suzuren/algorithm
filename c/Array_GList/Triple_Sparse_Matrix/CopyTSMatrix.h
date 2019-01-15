
#ifndef _COPYTSMATRIX_H
#define _COPYTSMATRIX_H

Status CopyTSMatrix(TSMatrix  M,TSMatrix & T)
{
	T = M;
	return OK;
}

#endif

