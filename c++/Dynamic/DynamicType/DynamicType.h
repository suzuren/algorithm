
#ifndef _DYNAMICTYPE_H
#define _DYNAMICTYPE_H

template <class T>
class DynamicType
{
	private:
		T *pt;
	public:
		// constructor and copy constructor
		DynamicType(T value);
		DynamicType(const DynamicType<T>& x);

		// destructor
		~DynamicType(void);

		// assignment operator
		DynamicType<T>& operator= (const DynamicType<T>& x);

		// data handling methods
		T GetVal(void);			// retrieve value
		void SetVal(T value);	// set value
		// conversion operator
		operator T(void);		// return value
		
		// stream input and output
		friend ostream& operator<< (ostream& ostr,const DynamicType<T>& x);
		friend istream& operator>> (istream& istr,DynamicType<T>& x);
};

// 类的成员函数实现和类的定义要同一个文件，不然会出错

// constructor. create dynamic storage containing value
template <class T>
DynamicType<T>::DynamicType(T value)
{
	pt = new T(value);
}

// copy constructor. create dynamic memory with the same
// value as object x
template <class T>
DynamicType<T>::DynamicType(const DynamicType &x)
{
	pt = new T(*x.pt);
}

// destructor. delete dynamic memory
template <class T>
DynamicType<T>::~DynamicType(void)
{
	delete pt;
}

// assignment operator. copy value stored by x into
// the dynamic memory of the current object. return
// a reference to the current object
template <class T>
DynamicType<T>& DynamicType<T>::operator= (const DynamicType<T>& x)
{
		*pt = *(x.pt);
		
		return *this;
}

// return the value stored in the object
template <class T>
T DynamicType<T>::GetVal(void)
{
	return *pt;
}

// change the value stored in the object
template <class T>
void DynamicType<T>::SetVal(T value)
{
	*pt = value;
}

// conversion operator. return value of type T
template <class T>
DynamicType<T>::operator T(void)
{
	return *pt;
}

// stream output operator
template <class T>
ostream& operator<< (ostream& ostr,const DynamicType<T>& x)
{
	ostr << *(x.pt);
	
	return ostr;
}

// stream input operator
template <class T>
istream& operator>> (istream& istr,DynamicType<T>& x)
{
	istr >> *(x.pt);
	
	return istr;
}


#endif


