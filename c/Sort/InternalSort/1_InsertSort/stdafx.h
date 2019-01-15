
#ifndef _STDAFX_H
#define _STDAFX_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Structure.h"
#include "InitList.h"

#include "Visit.h"
#include "ListTrverse.h"


// 函数声明
Status SInsertSort(SqList & L);	// 直接插入排序
Status BInsertSort(SqList & L); // 折半插入排序
Status Two_PathInsertSort(SqList & L);



#endif

