
#ifndef _QUEUE_H
#define _QUEUE_H

class Queue
{
private:
	// queue array and its parameters
	int front, rear, count;
	DataType qlist[MaxQSize];
	
public:
	// constructor
	Queue (void); // initialize integer data members
	
	// queue modification operations
	void QInsert(const DataType & item);
	DataType QDelete(void);
	void ClearQueue(void);
	
	// queue access
	DataType QFront(void) const;
	
	// queue test methods
	int QLength(void) const;
	int QEmpty(void) const;
	int QFull(void) const;
	
	void QPrint(void);
};

#endif