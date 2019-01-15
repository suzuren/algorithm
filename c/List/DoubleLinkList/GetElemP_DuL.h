DuLinkList GetElemP_DuL(DuLinkList va, int i) {
	// L为带头结点的单链表的头指针。
	// 当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR

	DuLinkList p;
	p = va->next;
	int j = 1; // 初始化，p指向第一个结点，j为计数器

	while (p != va && j < i)
	{ //顺指针向后查找，直到p指向第i个元素或p为空
		p = p->next;
		++j;
	}
	if (p == va && j < i)
		return NULL; // 第i个元素不存在
	else
		return p;
} // GetElem_L