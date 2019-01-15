
#ifndef _TQUEUE_H
#define _TQUEUE_H

template <class TQ>
class TQueue
{
private:
	// queue array and its parameters
	int front, rear, count;
	TQ qlist[MaxQSize];
	
public:
	// constructor
	TQueue (void); // initialize integer data members
	
	// queue modification operations
	void QInsert(const TQ & item);
	TQ QDelete(void);
	void ClearQueue(void);
	
	// queue access
	TQ QFront(void) const;
	
	// queue test methods
	int QLength(void) const;
	int QEmpty(void) const;
	int QFull(void) const;
	
	void QPrint(void);
};

#endif