
#ifndef _ARRCL_H
#define _ARRCL_H


template <class T>
class ArrCL
{
	private:
		// length array elements stored in arr
		T arr[ARRAYSIZE];
		int length;
	public:
		// constructor
		ArrCL(int n = ARRAYSIZE);
		
		// return size of list
		int ListSize(void);
		
		// index operator implement a "safe array"
		T& operator[] (int n);
		
		// pointer conversion. return address arr
		operator T* (void);	
};


#endif


