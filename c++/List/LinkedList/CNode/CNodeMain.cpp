

#include "stdafx.h"

int main(int argc, char argv[])
{
	CNode <int> t1(10);
	CNode <int> t2(20);
	CNode <int> t3(30);
	CNode <int> t4(40);

	CNode <int> *h = NULL;
	h = new CNode<int> (50); // ������Ҫ��h�����ֵ���г�ʼ������Ȼ����Ĳ�������

	CNode <int> *d=NULL;

	h->InsertAfter(&t1);
	h->InsertAfter(&t2);
	h->InsertAfter(&t3);
	h->InsertAfter(&t4);

	h->PrintList(h);

	d=h->DeleteAfter();

	
	return 0;
}