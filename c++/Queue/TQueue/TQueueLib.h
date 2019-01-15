
#ifndef _TQUEUELIB_H
#define _TQUEUELIB_H

                                 
// initialize queue front, rear, count
template <class TQ>
TQueue<TQ>::TQueue (void) : front(0), rear(0), count(0)
{}

// insert item into the queue 
template <class TQ>
void TQueue<TQ>::QInsert (const TQ& item)
{
    // terminate if queue is full
    if (count == MaxQSize)
    {
        cerr << "Queue overflow!" << endl;
        exit(1);
    }
    // increment count, assign item to qlist and update rear
    count++;
    qlist[rear] = item;
    rear = (rear+1) % MaxQSize;
}

// delete element from front of queue and return its value
template <class TQ>
TQ TQueue<TQ>::QDelete(void)
{
    TQ temp;

    // if qlist is empty, terminate the program
    if (count == 0)
    {
        cerr << "Deleting from an empty queue!" << endl;
        exit(1);
    }
    
    // record value at the front of the queue
    temp = qlist[front];

    // decrement count, advance front and return former front
    count--;
    front = (front+1) % MaxQSize;
    return temp;
}

// return value of the first entry 
template <class TQ>
TQ TQueue<TQ>::QFront(void) const
{
    return qlist[front];
}

// return number of queue elements
template <class TQ>
int TQueue<TQ>::QLength(void) const
{
    return count;
}

// test for an empty queue
template <class TQ>
int TQueue<TQ>::QEmpty(void) const
{
    // return the logical value count == 0
    return count == 0;
}

// test for a full queue
template <class TQ>
int TQueue<TQ>::QFull(void) const
{
    // return the logical value count == MaxQSize
    return count == MaxQSize;
}

// clear the queue by resetting count, front and rear to 0
template <class TQ>
void TQueue<TQ>::ClearQueue(void) 
{
    count = 0;
    front = 0; 
    rear = 0; 
}

template <class TQ>
void TQueue<TQ>::QPrint()
{
	// index moves circularly through the queue
	int index = front;
	int i = 1; 
	
	// print each of the count elements in the queue
	while (i <= count)
	{
		cout << qlist[index] << "  ";
		// every 8th element, generat a new line
		if (i % 8 == 0)
			cout << endl;
		// move to next queue element
		index = (index + 1) % MaxQSize;
		i++;
	}
}



#endif