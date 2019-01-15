

#ifndef _NODECLASS_H
#define _NODECLASS_H


enum AppendNewline
{
	noNewline,
	addNewline
};

template <class T>
class Node
{
private:
	// nextΪָ����һ����ָ��
	Node<T> *next;
public:
	// data Ϊ���г�Ա
	T data;
	// ���캯��
	Node(const T& item,Node<T> * ptrnext=NULL);

	// �޸ı�ķ���
	void InsertAfter(Node<T> *p);
	Node<T> *DeleteAfter(void);

	// ������һ����ָ��
	Node <T> *NextNode(void)const;

	// ����һ����㣬����ֵΪitem��ָ��ΪnextPrt
	Node<T> *GetNode(const T& item,Node<T> *nextPtr);

	// ����ͷ������
	void InsertFront(Node<T> *&head,T item);

	// �������
	void PrintList(Node<T> *head, AppendNewline addnl);
};


#endif