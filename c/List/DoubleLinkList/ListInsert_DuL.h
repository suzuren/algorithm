
Status ListInsert_DuL(DuLinkList & L, int i, ElemType e) { //�㷨2.18
	// �ڴ�ͷ����˫��ѭ�����Ա�L�ĵ�i��Ԫ��֮ǰ����Ԫ��e��
	// i�ĺϷ�ֵΪ1��i�ܱ�+1��

	DuLinkList p, s;
	if (!(p = GetElemP_DuL(L, i))) // ��L��ȷ����i��Ԫ�ص�λ��ָ��p
		return ERROR; // p=NULL, ����i��Ԫ�ز�����
	if (!(s = (DuLinkList)malloc(sizeof(DuLNode))))
		return ERROR;
	s->data = e;
	s->prior = p->prior;
	p->prior->next = s;
	s->next = p;
	p->prior = s;
	return OK;
} // ListInsert_DuL