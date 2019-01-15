
#include "stdafx.h"

// constructor. create dynamic storage containing value n
DynamicInt::DynamicInt(int n)
{
	pn = new int(n);
}

// copy constructor. create dynamic memory with the same
// value as object x
DynamicInt::DynamicInt(const DynamicInt &x)
{
	this->pn = new int(*x.pn);
}

// destructor. delete dynamic memory
DynamicInt::~DynamicInt(void)
{
	delete pn;
}

// assignment operator. copy value stored by x into
// the dynamic memory of the current object. return
// a reference to the current object
DynamicInt& DynamicInt::operator= (const DynamicInt& x)
{
		*(this->pn) = *(x.pn);
		
		return *this;
}

// return the integer value stored in the object
int DynamicInt::GetVal(void)
{
	return *pn;
}

// change the integer value stored in the object
void DynamicInt::SetVal(int n)
{
	*pn = n;
}

// conversion operator. return integer value
DynamicInt::operator int(void)
{
	return *pn;
}

// 对于每个包含有类型为 DynamicInt 的对象的输出语句都将执行重载后的“<<”运算符。
// stream output operator
ostream& operator<< (ostream& ostr,const DynamicInt& x)
{
	ostr << *(x.pn);
	
	return ostr;
}

// stream input operator
istream& operator>> (istream& istr,DynamicInt& x)
{
	istr >> *(x.pn);
	
	return istr;
}

