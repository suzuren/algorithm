
#ifndef _GLISTSTRUCT2_H
#define _GLISTSTRUCT2_H

#define AtomType char

typedef enum
{
	ATOM, LIST   // ATOM=0，表示原子；LIST=1，表示子表
}ElemTag;

typedef struct GLNode
{// 扩展线性存储结构
	ElemTag            tag;  // 标志位tag用来区别原子结点和表结点
	union
	{
		AtomType       atom; // 原子结点的值域atom 
		struct GLNode  * hp; // 表结点的头指针
	};
	struct GLNode      * tp; // 相当于线性链表的next，指向下一个元素节点
}*GList;                     // 广义表类型GList是一种扩展的线性链表

#endif

// 共用体和结构体有下列区别:

// 1. 共用体和结构体都是由多个不同的数据类型成员组成, 
//    但在任何同一时刻, 共用体只存放了一个被选中的成员, 
//    而结构体的所有成员都存在。

// 2. 对于共用体的不同成员赋值, 将会对其它成员重写, 原来成员的值就不存在了, 
//    而对于结构体的不同成员赋值是互不影响的。

