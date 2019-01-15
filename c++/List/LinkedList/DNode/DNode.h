
#ifndef _DNODE_H
#define _DNODE_H

template <class T>
class DNode
{
private:
	// ָ�����ҽ���ָ��
	DNode<T> * left;
	DNode<T> * right;
public:
	// data Ϊ���г�Ա
	T data;

	// ���캯��
	DNode(void);
	DNode(const T& item);

	// �ı��ķ���
	void InsertRight(DNode<T> *p);
	void InsertLeft (DNode<T> *p);

	// ��������ɾ����ǰ�ڵ㲢������ָ��
	DNode <T> * DeleteNode(void);

	// ȡ��ָ�����ҷ������ָ��
	DNode <T> *NextNodeRight(void)const;
	DNode <T> *NextNodeLeft (void)const;

	// �������
	void PrintList(DNode <T> *head);
};

#endif

