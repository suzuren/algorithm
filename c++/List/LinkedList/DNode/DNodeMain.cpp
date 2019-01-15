

#include "stdafx.h"

int main(int argc, char argv[])
{
	DNode <int> t1(70);

	DNode <int> *t2 = NULL;
	t2 = new DNode<int> (60);


	DNode <int> t3(30);
	DNode <int> t4(40);

	DNode <int> *h = NULL;
	h = new DNode<int> (50);

	

	h->InsertLeft (&t1);
	h->InsertLeft (t2);
	h->InsertRight(&t3);
	h->InsertRight(&t4);

	h->PrintList(&t1);

	return 0;
}