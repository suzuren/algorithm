
#ifndef _STRUCTURE_H
#define _STRUCTURE_H

// **********************************************************

#define MAXSIZE 23    // 一个用作示例的小顺序表的最大长度

typedef int KeyType;  // 定义关键字类型为整数类型

typedef char InfoType;

typedef struct
{
	KeyType  key;          // 关键字项
	InfoType otherinfo;    // 其他数据项
}RedType;                  // 记录类型

typedef struct
{
	RedType r[MAXSIZE+1];  // r[0] 闲置或用作哨兵单元
	int     length;        // 顺序表长度
}SqList;                   // 顺序表类型

// **********************************************************
// Arrange  2-路插入排序 数据类型

typedef char RcdType;

typedef struct
{
	RcdType rc;		// 记录项
	int     next;	// 指针项
}SLNode;			// 表节点类型

typedef struct
{
	SLNode r[MAXSIZE+1];	// 0 号单元为表头节点
	int    length;			// 链表当前长度
}SLinkList;  				// 静态链表类型

// **********************************************************

typedef SqList HeapType;   // 堆采用顺序表存储表示

// **********************************************************

// 链式基数排序所需结构类型
#define MAX_NUM_OF_KEY 8			// 关键字项数的最大值
#define RADIX		   10			// 关键字基数，此时是十进制整数的基数
#define MAX_SPACE      133			// 

typedef struct
{
	KeyType keys[MAX_NUM_OF_KEY];	// 关键字
	InfoType otherinfo;				// 其他数据项
	int next;
}SLCell;					// 静态链表节点类型

typedef struct
{
	SLCell r[MAX_SPACE];	// 静态链表的可用空间，r[0] 为头结点
	int    keynum;			// 记录当前关键字个数
	int    recnum;			// 静态链表的当前长度
}SLList;					// 静态链表类型

typedef int ArrType[RADIX];	// 指针数组类型

// **********************************************************

#endif

