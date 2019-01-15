
#ifndef _NODELIB_H
#define _NODELIB_H


// ����һ����㣬����ֵΪitem��ָ��ΪnextPrt
template < class T >
Node<T> * Node<T>::GetNode(const T & item, Node<T> *nextPtr = NULL)
{
	Node <T> * newNode = NULL;
	// Ϊ�½�������ڴ棬�����������롣��ʧ�����˳�����
	newNode = new Node <T> (item,nextPtr);
	if(newNode == NULL)
	{
		cerr<<"Memorry allocation failure!"<<endl;
		exit(1);
	}
	return newNode;
}

// ����ͷ������
template < class T >
void Node<T>::InsertFront(Node < T > *&head, T item)
{
	// �����㣬��ʹ��ָ��ԭ��ͷ�����޸�ԭ��ͷ
	head = GetNode(item,head);
}

// �������
template < class T >
void Node<T>::PrintList(Node < T > *head, AppendNewline addnl)
{
	// ��currPtrָ��ӱ�ͷ��ʼ������
	Node<T> *currPtr=head;

	// �����ǰ�������ݣ�ֱ�������
	while(currPtr!=NULL)
	{
		//�� addl == addNewLine ʱ������з�
		if(addnl == addNewline)
		{
			cout<<currPtr->data<<endl;
		}
		else
		{
			cout<<currPtr->data<<" ";
		}
		// ָ����һ���
		currPtr=currPtr->NextNode();
	}
}

#endif

