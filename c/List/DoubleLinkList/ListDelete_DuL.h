
Status ListDelete_DuL(DuLinkList & L, int i, ElemType & e) {//�㷨2.19
	// ɾ����ͷ����˫��ѭ�����Ա�L�ĵ�i��Ԫ�أ�i�ĺϷ�ֵΪ1��i�ܱ�
	DuLinkList p;
	if (!(p = GetElemP_DuL(L, i))) // ��L��ȷ����i��Ԫ�ص�λ��ָ��p
		return ERROR; // p=NULL, ����i��Ԫ�ز�����
	e = p->data;
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);
	return OK;
} // ListDelete_DuL
