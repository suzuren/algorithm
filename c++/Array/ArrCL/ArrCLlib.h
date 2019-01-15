
#include "stdafx.h"
// constructor. assign array size to be n
template <class T>
ArrCL<T>::ArrCL (int n): length(n)
{
	// if n exceeds ARRAYSIZE, print a warning message and truncate
	// the size to ARRAYSIZE
	if (n > ARRAYSIZE)
	{
		cerr << "Warning:  array size reduced to " << ARRAYSIZE << endl;
		n = ARRAYSIZE;
	}
}

// return the number of elements in the array
template <class T>
int ArrCL<T>::ListSize(void)
{
	return length;
}

// index operator. implement a "safe array" by
// checking that index n is in the range 0..(length-1)
// �����±������
template <class T>
T& ArrCL<T>::operator[] (int n)
{
	// ����Խ����
	if ( n < 0 || n > length)
	{
		cerr << "Index out of range: " << n << endl;
		exit(1);
	}
	
	// return a reference to array element arr[n]
	// ��˽�������з���Ԫ��ֵ
	return arr[n];
}

// pointer conversion operator. return the memory address
// of the array in which the data elements are stored
// ָ��ת�������
template <class T>
ArrCL<T>::operator T* (void)
{
	// ���ص�ǰ����˽��������׵�ַ
	return arr;
}




