
#ifndef _ANODE_H
#define _ANODE_H


// 构造函数，初始化数据及指针成员
template <class T>
Node<T>::Node(const T& item,Node<T> * ptrnext):data(item),next(ptrnext)
{}

// 返回私有成员next的值
template <class T>
Node<T> * Node<T>::NextNode(void)const
{
	return next;
}

// 在当前结点之后插入结点p
template <class T>
void Node<T>::InsertAfter(Node<T> *p)
{
	// p指向当前结点的后继结点，然后将当前结点指向p
	p->next=next;
	next=p;
}

// 删除当前节点的后继结点并返回其指针
template <class T>
Node<T> * Node<T>::DeleteAfter(void)
{
	// 保存指向被删除结点的指针
	Node<T> *tempPtr=next;
	// 若没有后继结点，返回NULL
	if(next==NULL)
		return NULL;
	// 使当前结点指向tempPtr的后继结点
	next=tempPtr->next;
	return tempPtr;
}


#endif