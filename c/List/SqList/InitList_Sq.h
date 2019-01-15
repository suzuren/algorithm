
#ifndef _INITLIST_SQ_H
#define _INITLIST_SQ_H

// 算法2.3
// 构造一个空的线性表L。

Status InitList_Sq(SqList & L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (!L.elem)  // 存储分配失败
		return OK;

	L.length = 0; // 空表长度为0
	L.listsize = LIST_INIT_SIZE; // 初始存储容量

	return OK;
} // InitList_Sq

#endif


