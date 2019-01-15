
#ifndef _HEAP_H
#define _HEAP_H

template <class T> 
class Heap
{                       
   private:
      // hlist points at the array which can be allocated by
      // the constructor (inArray == 0) or passed as a
      // parameter (inArray == 1)         
      T *hlist;
      int inArray;
      
      // max number allowed and current size of heap
      int maxheapsize;        
      int heapsize;                // identifies end of list
         
      // error message utility function 
      void error(char errmsg[]);

      // utility functions for Delete/Insert to restore heap.
      // implemented recursively
      void FilterDown (T target, int currentpos);
      void FilterUp   (T target, int currentpos);
   public:
      // constructors/destructor
      Heap(int maxsize);           // create empty heap
      Heap(T arr[],int n);         // "heapify" arr
      Heap(const Heap<T>& H);      // copy constructor
      ~Heap(void);                 // destructor
      
      // overloaded operators: "=", "[]", "T*"
      Heap<T>& operator= (const Heap<T>& rhs);
      const T& operator[](int i);

      // list methods       
      int ListSize(void) const;
      int ListEmpty(void) const;
      int ListFull(void) const;
      void Insert(const T& item);
      T Delete(void);
      void ClearList(void);

	  // 将数组 A 按降序排序
	  void HeapSort(T A[], int n);
};

#endif

