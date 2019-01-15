
#ifndef _HTNODE_H
#define _HTNODE_H

typedef struct
{
//	char info;
	unsigned int weight;
	unsigned int parent, lchild, rchild;
}HTNode, *HuffmanTree;			// 动态分配数组存储赫夫曼树

typedef char ** HuffmanCode;	// 动态分配数组存储赫夫曼编码表

#endif

