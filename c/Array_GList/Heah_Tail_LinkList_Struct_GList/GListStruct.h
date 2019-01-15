
#ifndef _GLISTSTRUCT_H
#define _GLISTSTRUCT_H

#define AtomType char

typedef enum
{
	ATOM, LIST   // ATOM==0����ʾԭ�ӣ�LIST==1����ʾ�ӱ�
}ElemTag;

typedef struct GLNode
{// ͷβ����洢�ṹ
	ElemTag            tag;  // ��־λtag��������ԭ�ӽ��ͱ���
	union
	{
		AtomType       atom; // ԭ�ӽ���ֵ��atom
		struct
		{
			struct GLNode * hp;
			struct GLNode * tp;
		}ptr;  // ptr�Ǳ�ڵ��ָ����
	};
}*GList;

#endif
