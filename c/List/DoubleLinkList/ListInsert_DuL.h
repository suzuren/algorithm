
Status ListInsert_DuL(DuLinkList & L, int i, ElemType e) { //算法2.18
	// 在带头结点的双链循环线性表L的第i个元素之前插入元素e，
	// i的合法值为1≤i≤表长+1。

	DuLinkList p, s;
	if (!(p = GetElemP_DuL(L, i))) // 在L中确定第i个元素的位置指针p
		return ERROR; // p=NULL, 即第i个元素不存在
	if (!(s = (DuLinkList)malloc(sizeof(DuLNode))))
		return ERROR;
	s->data = e;
	s->prior = p->prior;
	p->prior->next = s;
	s->next = p;
	p->prior = s;
	return OK;
} // ListInsert_DuL