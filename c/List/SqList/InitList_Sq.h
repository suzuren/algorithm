
#ifndef _INITLIST_SQ_H
#define _INITLIST_SQ_H

// �㷨2.3
// ����һ���յ����Ա�L��

Status InitList_Sq(SqList & L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (!L.elem)  // �洢����ʧ��
		return OK;

	L.length = 0; // �ձ���Ϊ0
	L.listsize = LIST_INIT_SIZE; // ��ʼ�洢����

	return OK;
} // InitList_Sq

#endif


