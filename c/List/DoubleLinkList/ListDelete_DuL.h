
Status ListDelete_DuL(DuLinkList & L, int i, ElemType & e) {//算法2.19
	// 删除带头结点的双链循环线性表L的第i个元素，i的合法值为1≤i≤表长
	DuLinkList p;
	if (!(p = GetElemP_DuL(L, i))) // 在L中确定第i个元素的位置指针p
		return ERROR; // p=NULL, 即第i个元素不存在
	e = p->data;
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);
	return OK;
} // ListDelete_DuL
