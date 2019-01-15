
#ifndef _NODELIB_H
#define _NODELIB_H


// 创建一个结点，数据值为item，指针为nextPrt
template < class T >
Node<T> * Node<T>::GetNode(const T & item, Node<T> *nextPtr = NULL)
{
	Node <T> * newNode = NULL;
	// 为新结点申请内存，并将参数传入。若失败则退出程序
	newNode = new Node <T> (item,nextPtr);
	if(newNode == NULL)
	{
		cerr<<"Memorry allocation failure!"<<endl;
		exit(1);
	}
	return newNode;
}

// 往表头插入结点
template < class T >
void Node<T>::InsertFront(Node < T > *&head, T item)
{
	// 申请结点，并使其指向原表头，再修改原表头
	head = GetNode(item,head);
}

// 输出链表
template < class T >
void Node<T>::PrintList(Node < T > *head, AppendNewline addnl)
{
	// 用currPtr指针从表头开始遍历表
	Node<T> *currPtr=head;

	// 输出当前结点的数据，直到表结束
	while(currPtr!=NULL)
	{
		//当 addl == addNewLine 时输出换行符
		if(addnl == addNewline)
		{
			cout<<currPtr->data<<endl;
		}
		else
		{
			cout<<currPtr->data<<" ";
		}
		// 指向下一结点
		currPtr=currPtr->NextNode();
	}
}

#endif

