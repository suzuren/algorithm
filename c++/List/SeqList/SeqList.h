
#ifndef _SEQLIST_H
#define _SEQLIST_H

template <class T>
class SeqList
{
   private:
      // list storage array and number of current list elements
      T listitem[MaxListSize];
      int size;
      
   public:
      // constructor
      SeqList(void);
      
      // list access methods
      int ListSize(void) const;
      int ListEmpty(void) const;
      int Find (T& item) const;
      T GetData(int pos) const;
      
      // list modification methods
      void Insert(const T& item);
      void Delete(const T& item);
      T DeleteFront(void);
      void ClearList(void);

	  // Êä³öÁ´±í
	  void PrintList(const SeqList<T>& L);
};

#endif

