
#ifndef _HEAPLIB_H
#define _HEAPLIB_H

// print error message and terminate the program 
template <class T>
void Heap<T>::error(char errmsg[])
{
   cerr <<  errmsg << endl;
   exit(1);
}

// utility to restore the heap; starting at index i,
// exchange parent and child so that subtree from i is a heap
template <class T>
void Heap<T>::FilterDown (T target, int currentpos)
{
   int childpos;
   
   // compute the left child index and begin a scan down
   // path of children, stopping at end of list (heapsize)
   childpos = 2 * currentpos + 1;         
   if (childpos < heapsize)         // check for end of list
   {
      // Index of right child is childpos+1. Set childpos to
      // index of the smaller of the two children
      if ((childpos+1 < heapsize) && 
            (hlist[childpos+1] <= hlist[childpos]))
         childpos = childpos + 1;

      // parent is less than children, heap ok. quit
      if (target <= hlist[childpos])
      {
         hlist[currentpos] = target;
         return;
      }
      else 
      {
         // move value of smaller child to the parent;
         // position of smaller child is now vacated  
         hlist[currentpos] = hlist[childpos];
 	     FilterDown(target,childpos);
      } 
   }
   else
      hlist[currentpos] = target;
}

// utility to restore the heap; starting at index i,
// move up tree from parent to parent. exchange elements if
// the child has a value less than the parent
template <class T>
void Heap<T>::FilterUp (T target, int currentpos)
{
   int parentpos;

   // target is repositioned in path
   parentpos = (currentpos-1)/2;
   
   // traverse path of parents up to the root 
   if (currentpos != 0)
   {
      // if parent <= target, heap condition is ok.
      if (hlist[parentpos] <= target)
      {
         hlist[currentpos] = target;
         return;
      }
      // move child value to parent and update index to 
      // look at the next parent. 
      else
      {
         // move data from parent position to current
         // position.
         hlist[currentpos] = hlist[parentpos];
         FilterUp(target,parentpos);
      } 
   }
   else
   	hlist[0] = target;
}

template <class T>
Heap<T>::Heap(int size)
{  
   if (size <= 0) 
      error("Bad list size.");
   hlist = new T[size];
   if (hlist == 0)
      error("Memory allocation failure."); 
   maxheapsize = size;
   heapsize = 0;
   inArray = 0;
}

// constructor to convert an array to a heap.
// the array and its size are passed as parameters
template <class T>
Heap<T>::Heap(T arr[],int n)
{
   int currentpos;

   // n <= 0 is invalid array size; terminate program
   if (n <= 0) 
      error("Bad list size.");
      
   // use n to set heap size and maximum heap size; assign
   // the arrary arr to the heap list     
   maxheapsize = n;
   heapsize = n ;
   hlist = arr;
   
   // set currentpos to last parent index; call FilterDown
   // in a loop with index in the range currentpos down to 0;
   currentpos = (heapsize - 2)/2;
   while(currentpos >= 0)
   { 
      // establish heap condition for subtree with root
	  // hlist[currentpos]
      FilterDown(hlist[currentpos],currentpos);
      currentpos--;
   }
   // set inArray to True so Heap will not deallocate array
   inArray = 1;
}

template <class T>
Heap<T>::Heap(const Heap<T>& A)
{
   int n = A.heapsize;
         
   heapsize = n;                          
   maxheapsize = A.maxheapsize;
   hlist = new T[maxheapsize];                     
   if (hlist == 0)
      error("Memory allocation failure."); 
   while (n--) 
      hlist[n] = A.hlist[n];                 
   inArray = 0;   // always build new heap in dynamic memory
}

template <class T>
Heap<T>::~Heap(void)
{ 
   if (!inArray)  // don't delete hlist unless allocated.
      delete[] hlist;
}

template <class T>                              
Heap<T>& Heap<T>::operator=(const Heap<T>& rhs)
{
   int n = rhs.heapsize;

   heapsize = n;        
   if (maxheapsize != rhs.maxheapsize || inArray)
   {
      maxheapsize = rhs.maxheapsize;
      // destroy the heap if not allocated in static array
      if (!inArray)
         delete [] hlist;
      hlist = new T[maxheapsize]; // allocate a new array
      if (hlist == NULL)
         error("Memory allocation failure.");
   }
   while (n--)  // do item by item copy 
      hlist[n] = rhs.hlist[n];
   inArray = 0; // assignment puts heap in dynamic memory
   return *this;
}

template <class T>
int Heap<T>::ListSize(void) const
{ 
   return heapsize; 
}

template <class T>
int Heap<T>::ListEmpty(void) const
{
   return heapsize == 0;
}

template <class T>
int Heap<T>::ListFull(void) const
{
   return heapsize == maxheapsize;
}

template <class T>
const T& Heap<T>::operator[](int i)
{  
   if (i < 0 || i >= heapsize)
      error("Heap index out of range: ");
   return hlist[i];
}

// insert a new item in the heap and update the structure
template <class T>
void Heap<T>::Insert(const T& item)
{
   // check for a full heap and terminate if True
   if (heapsize == maxheapsize)
      error("Heap full");
   // store the item at the end of the heap and increment 
   // heapsize;   call FilterUp to restore the heap condition
   hlist[heapsize] = item; 
   FilterUp(item, heapsize);
   heapsize++;
}

// return the value of the first element and update the heap
// a deletion with an empty heap creates an error message and 
// terminates the program
template <class T>
T Heap<T>::Delete(void)
{
   T tempitem;

   // check for an empty heap
   if (heapsize == 0)
      error("Heap empty"); 

   // copy the root to tempitem; replace the root with the last
   // value in the heap and decrement the heap size
   tempitem = hlist[0];
   hlist[0] = hlist[heapsize-1]; 
   heapsize--;
   
   // call FilterDown to position the new root value in heap
   FilterDown( hlist[0],0);
   
   // return the original root value
   return tempitem;
}

template <class T>
void Heap<T>::ClearList(void)
{
   heapsize = 0;
}

#endif

// 将数组 A 按降序排序
template <class T>
void HeapSort(T A[], int n)
{
	// 构造函数将 A 转换为堆
	Heap<T> H(A, n);
	T elt;
	// 迭代装入元素 A[n-1], ... , A[i]
	for(int i=n-1, i>=1; i--)
	{
		// 从堆中删除最小的元素并存入 A[i]
		elt = H.Delete();
		A[i] = elt;
	}
}