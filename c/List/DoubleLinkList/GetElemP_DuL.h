DuLinkList GetElemP_DuL(DuLinkList va, int i) {
	// LΪ��ͷ���ĵ������ͷָ�롣
	// ����i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR

	DuLinkList p;
	p = va->next;
	int j = 1; // ��ʼ����pָ���һ����㣬jΪ������

	while (p != va && j < i)
	{ //˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
		p = p->next;
		++j;
	}
	if (p == va && j < i)
		return NULL; // ��i��Ԫ�ز�����
	else
		return p;
} // GetElem_L