
#ifndef _HTNODE_H
#define _HTNODE_H

typedef struct
{
//	char info;
	unsigned int weight;
	unsigned int parent, lchild, rchild;
}HTNode, *HuffmanTree;			// ��̬��������洢�շ�����

typedef char ** HuffmanCode;	// ��̬��������洢�շ��������

#endif

