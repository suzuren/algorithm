
#ifndef _LISTDELETE_L_H
#define _LISTDELETE_L_H

LinkList ListDelete_L(LinkList & L, int i, ElemType & e) { // �㷨2.10
	// �ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
	LinkList p, q;
	p = L;
	int j = 0;
	while (p->next && j < i - 1) { // Ѱ�ҵ�i����㣬����pָ����ǰ��
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i - 1)
		return ERROR;  // ɾ��λ�ò�����
	q = p->next;
	p->next = q->next; // ɾ�����ͷŽ��
	e = q->data;
	free(q);
	return L;
} // ListDelete_L

#endif