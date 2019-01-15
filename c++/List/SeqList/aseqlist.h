
#ifndef _SEQLISTLIB_H
#define _SEQLISTLIB_H

#include "stdafx.h"

// constructor. set size to 0
template <class T>
SeqList<T>::SeqList (void): size(0)
{}

// return number of elements in list 
template <class T>
int SeqList<T>::ListSize(void) const
{
   return size;
}

// tests for an empty list
template <class T>
int SeqList<T>::ListEmpty(void) const
{
   return size == 0;
}

// clears list by setting size to 0
template <class T>
void SeqList<T>::ClearList(void)
{
   size = 0;
}

// Take item as key and search the list. return True if item
// is in the list and False otherwise. if found,
// assign the list element to the reference parameter item
template <class T>
int SeqList<T>::Find(T& item) const
{
   int i = 0;

   if (ListEmpty())
      return 0;            // return False when list empty
   while (i < size && !(item == listitem[i]))
      i++;
   if (i < size)
   {
      item = listitem[i];  // assign list element to item
      return 1;            // return True
   }
   else
      return 0;            // return False
}

// insert item at the rear of the list. terminate the program
// if the list size would exceed MaxListSize.
template <class T>
void SeqList<T>::Insert(const T& item)
{
   // will an insertion exceed maximum list size allowed?
   if (size+1 > MaxListSize)
   {
      cerr << "Maximum list size exceeded" << endl;
      exit(1);
   }
   
   // index of rear is current value of size. insert at rear
   listitem[size] = item;
   size++;                 // increment list size
}

// search for item in the list and delete it if found
template <class T>
void SeqList<T>::Delete(const T& item)
{
   int i = 0;

   // search for item
   while (i < size && !(item == listitem[i]))
      i++;
   
   if (i < size)           // successful if i < size
   {
      // shift the tail of the list to the left one position
      while (i < size-1)
      {
         listitem[i] = listitem[i+1];
         i++;
      }
      size--;              // decrement size
   }
}

// delete element at front of list and return its value.
// terminate the program with an error message if the list is empty.
template <class T>
T SeqList<T>::DeleteFront(void)
{
   T frontItem;
   
   // list is empty if size == 0
   if (size == 0)
   {
      cerr << "Attempt to delete the front of an empty list!" << endl;
      exit(1);
   }
   
   frontItem = listitem[0];  // get value from position 0.
   Delete(frontItem);        // delete the first item and shift terms
   return frontItem;         // return the original value
}


// return value at position pos in list. if pos is not valid
// list position, teminate program with an error message.
template <class T>
T SeqList<T>::GetData(int pos) const
{
   // terminate program if pos out of range 
   if (pos < 0 || pos >= size)
   {
      cerr << "pos is out of range!" << endl;
      exit(1);
   }
   return listitem[pos];
}

template <class T>
void SeqList<T>::PrintList(const SeqList<T>& L)
{
	for(int i=0;i < L.ListSize();i++)
		cout << L.GetData(i) << "  ";
	cout << endl;
}

#endif

