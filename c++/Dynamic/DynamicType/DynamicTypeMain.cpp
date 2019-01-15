
#include "stdafx.h"

int main(int argc, char argv[])
{

	DynamicType<int> *p, Q(0);
	DynamicType<char> *c;
	
	/* (a) */
	p = new DynamicType<int> (5);

	/* (b) */
	cout << p->GetVal() << "  " << int(*p)
		 << "  " << *p << endl;

	/* (c) */
	// c = new DynamicType<char> [65]; // incorrect. no default constructor
	c = new DynamicType<char> (65);
	
	/* (d) */
	cin >> *p;
	Q = *p;
	cout << Q << endl;
	
	/* (e) */
	DynamicType<int> R(Q);
	
	cout << R << endl;
	
	/* (f) */
	Q = DynamicType<int> (68);
	*c = DynamicType<char> (char(int (Q)));
	cout << *c << "  " << char(*c) << "  " << int(*c) << endl;

	return 0;
}
