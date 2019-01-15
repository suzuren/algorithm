
#ifndef _GLISTSTRUCT_H
#define _GLISTSTRUCT_H

#define AtomType char

typedef enum
{
	ATOM, LIST   // ATOM==0，表示原子；LIST==1，表示子表
}ElemTag;

typedef struct GLNode
{// 头尾链表存储结构
	ElemTag            tag;  // 标志位tag用来区别原子结点和表结点
	union
	{
		AtomType       atom; // 原子结点的值域atom
		struct
		{
			struct GLNode * hp;
			struct GLNode * tp;
		}ptr;  // ptr是表节点的指针域
	};
}*GList;

#endif
