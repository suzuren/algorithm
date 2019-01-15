

#ifndef _TSMATRIXSTRUCT_H
#define _TSMATRIXSTRUCT_H

#define MAXNZSIZE    50 // �������Ԫ���������ֵΪ MAXSIZE
#define MAXLINESIZE  9  // �������
#define MAXCOLSSIZE  9  // �������
#define ElemType int

typedef struct
{
	int l;		// �÷���Ԫ�����±�
	int c;		// �÷���Ԫ�����±�
	ElemType v; // �÷���Ԫ�ص�ֵ
}Triple;

typedef struct
{
	Triple data[MAXNZSIZE +1]; // ����Ԫ��Ԫ���data[0] δ��
	int    ln;	// ���������
	int    cn;  // ���������
	int    tn;  // ����Ԫ����
}TSMatrix;

#endif

