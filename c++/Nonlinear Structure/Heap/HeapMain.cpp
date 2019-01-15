
#include "stdafx.h"

void main(void)
{
	srand( (unsigned)time( NULL ) );

    int A[15];

	// initialize and print array A containing 15
	// random integers in the range 0..99
    cout << "Initial array:" << endl;
	for(int i=0;i < 15;i++)
	{
		A[i] = rand()%100;
        cout << A[i] << "  ";
	}
    cout << endl;

    // declare a heap of 15 elements and insert elements of A
    Heap<int>  H(15);
    for(i=0;i < 15;i++)
    	H.Insert(A[i]);
    
//	H.HeapSort(A, 15);

    cout << "Deleting elements from the heap:" << endl;
    // repeatedly extract smallest value
    while(!H.ListEmpty())
        cout << H.Delete() << "  ";
    cout << endl;
}


