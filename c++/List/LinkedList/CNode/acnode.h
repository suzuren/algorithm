
#ifndef _ACNODE_H
#define _ACNODE_H


// 产生空表并初始化数据的构造函数
template <class T>
CNode<T>::CNode(const T& item)
{
	// 将结点指向自身并初始化数据
	next=this;
	data=item;
}

// 在当前结点之后插入结点p
template <class T>
void CNode<T>::InsertAfter(CNode<T> *p)
{
	// p 指向当前结点的后继结点，然后将当前结点指向p
	p->next=this->next;
	this->next=p;
}

// 删除当前节点之后的结点，并返回其指针
template <class T>
CNode<T> * CNode<T>::DeleteAfter(void)
{
	// 保存指向被删除结点的指针
	CNode<T> *tempPtr=this->next;
	// 若next为this，返回NULL
	if(this->next==this)
		return NULL;
	// 当前结点指向tempPtr的后继结点
	this->next=tempPtr->next;

	// 返回指向被删除结点的指针
	return tempPtr;
}

// 输出链表
template < class T >
void CNode<T>::PrintList(CNode < T > *head)
{
	// 用currPtr指针从表头开始遍历表
	CNode<T> *currPtr=head;

	// 输出当前结点的数据，直到表结束
	while(1)
	{
		cout<<currPtr->data<<endl;
		// 指向下一结点
		currPtr=currPtr->next;
		
		if(currPtr==head)
		{
			break;
		}

	}
}
#endif