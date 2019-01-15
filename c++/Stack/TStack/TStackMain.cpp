

#include "stdafx.h"


int main(int argc, int argv[])
{
	TStack<int> S;
	S.Push(10);
	cout<<S.peek()<<endl;
	int temp;
	if( !(S.TStackEmpty()) )
	{
		temp=S.Pop();
	}
	cout<<temp<<endl;
	S.ClearTStrack();

	return 0;
}