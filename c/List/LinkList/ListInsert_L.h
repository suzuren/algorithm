
#ifndef _LISTINSERT_L_H
#define _LISTINSERT_L_H

LinkList ListInsert_L(LinkList & L, int i, ElemType e) { // �㷨2.9
	// �ڴ�ͷ���ĵ������Ա�L�ĵ�i��Ԫ��֮ǰ����Ԫ��e
	LinkList p, s;
	p = L;
	int j = 0;
	while (p && j < i - 1) { // Ѱ�ҵ�i-1�����
		p = p->next;
		++j;
	}
	if (!p || j > i - 1) // iС��1���ߴ��ڱ�
		return ERROR;
	s = (LinkList)malloc(sizeof(LNode)); // �����½��
	s->data = e;
	s->next = p->next; // ����L��
	p->next = s;
	return L;
} // LinstInsert_L

#endif
