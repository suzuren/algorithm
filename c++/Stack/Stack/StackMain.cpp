

#include "stdafx.h"

#include "StackClass.h"
#include "astack.h"

int main(int argc, int argv[])
{
	Stack S;
	S.Push(10);
	cout<<S.peek()<<endl;
	DataType temp;
	if( !(S.StackEmpty()) )
	{
		temp=S.Pop();
	}
	cout<<temp<<endl;
	S.ClearStrack();

	return 0;
}