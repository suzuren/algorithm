
#include "stdafx.h"


// "<" for two DynamicInt objects
int operator< (DynamicInt &a, DynamicInt &b)
{
	// compare their values
	return a.GetVal() < b.GetVal();
}

// generate a dynamic array of n DynamicInt objects having
// random values in the range 1..1000
DynamicInt *Initialize(int n)
{
	// use one random sequence
//	static RandomNumber rnd;
	// allocate a dynamic array of n objects,
	// each with initial value 0
	DynamicInt *p = new DynamicInt[n];
	
	// if the memory allocation failed, terminate the program
	if (p == NULL)
	{
		cerr << "Initialize: memor allocation failed!" << endl;
		exit(1);
	}
	
	// reassign the object values to random integers in range 1..1000
	for (int i = 0; i < n; i++)
		p[i].SetVal(i + 1);

//		p[i].SetVal(rnd.Random(1000) + 1);
		
	// return address of the dynamic array
	return p;
}

int main(int argc, char argv[])
{
	int n;
	DynamicInt *p;
	
	cout << "How many DynamicInt objects in the array? ";
	cin >> n;
	
	// create n objects with random values
	p = Initialize(n);
	
	// sort the array using the exchange sort. note that
	// the "<" operator is used by the sort function
//	ExchangeSort(p,n);
	
	// output the sorted objects
	for (int i = 0; i < n; i++)
		cout << p[i] << "  ";
	cout << endl;

	
//  test ...
	DynamicInt *t = new DynamicInt;
	t->SetVal(11);
	int gt = t->GetVal();
	cout <<"*t = "<< *t << endl;

	DynamicInt *s;
	s=t;
	cout <<"*s = "<< *s << endl;

	cout << endl;

	return 0;
}

/*
<Run>

How many DynamicInt objects in the array? 10
24  272  348  374  465  474  737  888  938  978
*/

