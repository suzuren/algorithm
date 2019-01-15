

#ifndef _CNODE_H
#define _CNODE_H


enum AppendNewline
{
	noNewline,
	addNewline
};

template <class T>
class CNode
{
private:
	// nextΪָ����һ����ѭ��ָ��
	CNode<T> *next;
public:
	// data Ϊ���г�Ա
	T data;
	// ���캯��
	CNode(void);
	CNode(const T& item);

	// ���±�ķ���
	void InsertAfter(CNode<T> *p);
	CNode<T> *DeleteAfter(void);

	// ������һ����ָ��
	CNode <T> *NextNode(void)const;

	// �������
	void PrintList(CNode<T> *head);
};


#endif