
#ifndef _STRUCTURE_H
#define _STRUCTURE_H

// **********************************************************

#include <stdlib.h>

#define ERROR 0
#define OK    1
#define FALSE 2
#define TRUE  3

#define LISTMAXSIZE 23		// 一个用作示例的小顺序表的最大长度
#define MAX_INT	    32767	// 最大整数

typedef int KeyType;		// 定义关键字类型为整数类型
typedef char InfoType;
typedef int Status;

#define LT(X,Y)	  ( (X) <  (Y) )

// **********************************************************

typedef struct
{
	KeyType  key;          // 关键字项
	InfoType otherinfo;    // 其他数据项
}RedType;                  // 记录类型

// **********************************************************
// 顺序表的结构体
typedef struct
{
	RedType r[LISTMAXSIZE+1];  // r[0] 闲置或用作哨兵单元
	int     length;            // 顺序表长度
}SqList;                       // 顺序表类型

// **********************************************************

#define SLMAXSIZE 100	// 静态链表容量
// 静态链表的结构体
typedef struct			// 表结点类型
{
	RedType rc;			// 记录项
	int next;			// 指针项
}SLNode;

typedef struct			// 静态链表类型 Static Link
{
	SLNode r[SLMAXSIZE];		// 0号单元为表头结点
	int length;			// 链表当前长度
}SLinkListType;

// **********************************************************

#endif

