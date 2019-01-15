
#ifndef _STRUCTURE_H
#define _STRUCTURE_H

// **********************************************************

#define MAXSIZE 23    // һ������ʾ����С˳������󳤶�

typedef int KeyType;  // ����ؼ�������Ϊ��������

typedef char InfoType;

typedef struct
{
	KeyType  key;          // �ؼ�����
	InfoType otherinfo;    // ����������
}RedType;                  // ��¼����

typedef struct
{
	RedType r[MAXSIZE+1];  // r[0] ���û������ڱ���Ԫ
	int     length;        // ˳�����
}SqList;                   // ˳�������

// **********************************************************
// Arrange  2-·�������� ��������

typedef char RcdType;

typedef struct
{
	RcdType rc;		// ��¼��
	int     next;	// ָ����
}SLNode;			// ��ڵ�����

typedef struct
{
	SLNode r[MAXSIZE+1];	// 0 �ŵ�ԪΪ��ͷ�ڵ�
	int    length;			// ����ǰ����
}SLinkList;  				// ��̬��������

// **********************************************************

typedef SqList HeapType;   // �Ѳ���˳���洢��ʾ

// **********************************************************

// ��ʽ������������ṹ����
#define MAX_NUM_OF_KEY 8			// �ؼ������������ֵ
#define RADIX		   10			// �ؼ��ֻ�������ʱ��ʮ���������Ļ���
#define MAX_SPACE      133			// 

typedef struct
{
	KeyType keys[MAX_NUM_OF_KEY];	// �ؼ���
	InfoType otherinfo;				// ����������
	int next;
}SLCell;					// ��̬����ڵ�����

typedef struct
{
	SLCell r[MAX_SPACE];	// ��̬����Ŀ��ÿռ䣬r[0] Ϊͷ���
	int    keynum;			// ��¼��ǰ�ؼ��ָ���
	int    recnum;			// ��̬����ĵ�ǰ����
}SLList;					// ��̬��������

typedef int ArrType[RADIX];	// ָ����������

// **********************************************************

#endif

