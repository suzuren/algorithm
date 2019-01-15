
#ifndef _ANODE_H
#define _ANODE_H


// ���캯������ʼ�����ݼ�ָ���Ա
template <class T>
Node<T>::Node(const T& item,Node<T> * ptrnext):data(item),next(ptrnext)
{}

// ����˽�г�Աnext��ֵ
template <class T>
Node<T> * Node<T>::NextNode(void)const
{
	return next;
}

// �ڵ�ǰ���֮�������p
template <class T>
void Node<T>::InsertAfter(Node<T> *p)
{
	// pָ��ǰ���ĺ�̽�㣬Ȼ�󽫵�ǰ���ָ��p
	p->next=next;
	next=p;
}

// ɾ����ǰ�ڵ�ĺ�̽�㲢������ָ��
template <class T>
Node<T> * Node<T>::DeleteAfter(void)
{
	// ����ָ��ɾ������ָ��
	Node<T> *tempPtr=next;
	// ��û�к�̽�㣬����NULL
	if(next==NULL)
		return NULL;
	// ʹ��ǰ���ָ��tempPtr�ĺ�̽��
	next=tempPtr->next;
	return tempPtr;
}


#endif