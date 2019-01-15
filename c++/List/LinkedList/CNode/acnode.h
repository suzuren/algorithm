
#ifndef _ACNODE_H
#define _ACNODE_H


// �����ձ���ʼ�����ݵĹ��캯��
template <class T>
CNode<T>::CNode(const T& item)
{
	// �����ָ��������ʼ������
	next=this;
	data=item;
}

// �ڵ�ǰ���֮�������p
template <class T>
void CNode<T>::InsertAfter(CNode<T> *p)
{
	// p ָ��ǰ���ĺ�̽�㣬Ȼ�󽫵�ǰ���ָ��p
	p->next=this->next;
	this->next=p;
}

// ɾ����ǰ�ڵ�֮��Ľ�㣬��������ָ��
template <class T>
CNode<T> * CNode<T>::DeleteAfter(void)
{
	// ����ָ��ɾ������ָ��
	CNode<T> *tempPtr=this->next;
	// ��nextΪthis������NULL
	if(this->next==this)
		return NULL;
	// ��ǰ���ָ��tempPtr�ĺ�̽��
	this->next=tempPtr->next;

	// ����ָ��ɾ������ָ��
	return tempPtr;
}

// �������
template < class T >
void CNode<T>::PrintList(CNode < T > *head)
{
	// ��currPtrָ��ӱ�ͷ��ʼ������
	CNode<T> *currPtr=head;

	// �����ǰ�������ݣ�ֱ�������
	while(1)
	{
		cout<<currPtr->data<<endl;
		// ָ����һ���
		currPtr=currPtr->next;
		
		if(currPtr==head)
		{
			break;
		}

	}
}
#endif