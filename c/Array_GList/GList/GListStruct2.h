
#ifndef _GLISTSTRUCT2_H
#define _GLISTSTRUCT2_H

#define AtomType char

typedef enum
{
	ATOM, LIST   // ATOM=0����ʾԭ�ӣ�LIST=1����ʾ�ӱ�
}ElemTag;

typedef struct GLNode
{// ��չ���Դ洢�ṹ
	ElemTag            tag;  // ��־λtag��������ԭ�ӽ��ͱ���
	union
	{
		AtomType       atom; // ԭ�ӽ���ֵ��atom 
		struct GLNode  * hp; // �����ͷָ��
	};
	struct GLNode      * tp; // �൱�����������next��ָ����һ��Ԫ�ؽڵ�
}*GList;                     // ���������GList��һ����չ����������

#endif

// ������ͽṹ������������:

// 1. ������ͽṹ�嶼���ɶ����ͬ���������ͳ�Ա���, 
//    �����κ�ͬһʱ��, ������ֻ�����һ����ѡ�еĳ�Ա, 
//    ���ṹ������г�Ա�����ڡ�

// 2. ���ڹ�����Ĳ�ͬ��Ա��ֵ, �����������Ա��д, ԭ����Ա��ֵ�Ͳ�������, 
//    �����ڽṹ��Ĳ�ͬ��Ա��ֵ�ǻ���Ӱ��ġ�

