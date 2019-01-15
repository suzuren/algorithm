
#ifndef _ARRAYSTRUCT_H
#define _ARRAYSTRUCT_H

#define MAX_ARRAY_DIM 8
#define ElemType     int

typedef struct
{
	ElemType *base;    // 数组的元素基址         | 数组元素基址是数组首元素的地址
	int  dim;          // 数组维数               | 数组的维界基址是在多维数组中的概念，因为多维数组常被看做数组的数组，维界基址应该是某一维的首元素地址；例如a[2][3]那么基址就是a[0]和a[1]
	int  *bounds;      // 数组的维界基址         | 
	int  *constants;   // 数组映像函数常量基址   | 
}Array;

#endif


