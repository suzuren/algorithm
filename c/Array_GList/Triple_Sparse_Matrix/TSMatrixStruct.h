

#ifndef _TSMATRIXSTRUCT_H
#define _TSMATRIXSTRUCT_H

#define MAXNZSIZE    50 // 假设非零元个数的最大值为 MAXSIZE
#define MAXLINESIZE  9  // 最大行数
#define MAXCOLSSIZE  9  // 最大列数
#define ElemType int

typedef struct
{
	int l;		// 该非零元的行下标
	int c;		// 该非零元的列下标
	ElemType v; // 该非零元素的值
}Triple;

typedef struct
{
	Triple data[MAXNZSIZE +1]; // 非零元三元组表，data[0] 未用
	int    ln;	// 矩阵的行数
	int    cn;  // 矩阵的列数
	int    tn;  // 非零元个数
}TSMatrix;

#endif

