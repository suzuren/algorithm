
#ifndef _GETELEM_H
#define _GETELEM_H

LinkList GetElem_L(LinkList & head, int i, ElemType & e) { // �㷨2.8
	// LΪ��ͷ���ĵ������ͷָ�롣
	// ����i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR
	LinkList p;
	p = head->next;
	int j = 1; // ��ʼ����pָ���һ����㣬jΪ������
	while (p && j < i) { // ˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
		p = p->next;
		++j;
	}
	if (!p || j > i)
		return ERROR; // ��i��Ԫ�ز�j����
	e = p->data; // ȡ��i��Ԫ��
	return head;
} // GetElem_L

#endif