
#include "stdafx.h"

int main(int argc, char argv[])
{
	// safe array of 10 integers
	ArrCL<int> A(10);

	// read 10 values
	cout<<"Enter the ten Numbers,Please."<<endl;
	for (int i = 0; i < 10; i++)
		cin >> A[i];
		
	// sort the safe array by using the pointer conversion operator
	// in the call to the already written exchange sort function
//	ExchangeSort((int *)A,10);

	// print the sorted array
	for (i = 0; i < 10; i++)
		cout << A[i] << "  ";
	cout << endl;
	
	// 10 is an invalid index. program will terminate
	cout << A[10] << endl;

	return 0;
}
