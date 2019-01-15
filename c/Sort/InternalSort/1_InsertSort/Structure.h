
#ifndef _STRUCTURE_H
#define _STRUCTURE_H

// **********************************************************

#include <stdlib.h>

#define ERROR 0
#define OK    1
#define FALSE 2
#define TRUE  3

#define LISTMAXSIZE 23		// һ������ʾ����С˳������󳤶�
#define MAX_INT	    32767	// �������

typedef int KeyType;		// ����ؼ�������Ϊ��������
typedef char InfoType;
typedef int Status;

#define LT(X,Y)	  ( (X) <  (Y) )

// **********************************************************

typedef struct
{
	KeyType  key;          // �ؼ�����
	InfoType otherinfo;    // ����������
}RedType;                  // ��¼����

// **********************************************************
// ˳���Ľṹ��
typedef struct
{
	RedType r[LISTMAXSIZE+1];  // r[0] ���û������ڱ���Ԫ
	int     length;            // ˳�����
}SqList;                       // ˳�������

// **********************************************************

#define SLMAXSIZE 100	// ��̬��������
// ��̬����Ľṹ��
typedef struct			// ��������
{
	RedType rc;			// ��¼��
	int next;			// ָ����
}SLNode;

typedef struct			// ��̬�������� Static Link
{
	SLNode r[SLMAXSIZE];		// 0�ŵ�ԪΪ��ͷ���
	int length;			// ����ǰ����
}SLinkListType;

// **********************************************************

#endif

