

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
	// next为指向下一结点的指针
	Node<T> *next;
public:
	// data 为公有成员
	T data;
	// 构造函数
	Node(const T& item,Node<T> * ptrnext=NULL);

	// 修改表的方法
	void InsertAfter(Node<T> *p);
	Node<T> *DeleteAfter(void);

	// 保持下一结点的指针
	Node <T> *NextNode(void)const;

	// 创建一个结点，数据值为item，指针为nextPrt
	Node<T> *GetNode(const T& item,Node<T> *nextPtr);

	// 往表头插入结点
	void InsertFront(Node<T> *&head,T item);

	// 输出链表
	void PrintList(Node<T> *head, AppendNewline addnl);
};


#endif