
#ifndef _ARRAYSTRUCT_H
#define _ARRAYSTRUCT_H

#define MAX_ARRAY_DIM 8
#define ElemType     int

typedef struct
{
	ElemType *base;    // �����Ԫ�ػ�ַ         | ����Ԫ�ػ�ַ��������Ԫ�صĵ�ַ
	int  dim;          // ����ά��               | �����ά���ַ���ڶ�ά�����еĸ����Ϊ��ά���鳣��������������飬ά���ַӦ����ĳһά����Ԫ�ص�ַ������a[2][3]��ô��ַ����a[0]��a[1]
	int  *bounds;      // �����ά���ַ         | 
	int  *constants;   // ����ӳ����������ַ   | 
}Array;

#endif


