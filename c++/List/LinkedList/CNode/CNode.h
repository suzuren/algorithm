

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
	// next为指向下一结点的循环指针
	CNode<T> *next;
public:
	// data 为公有成员
	T data;
	// 构造函数
	CNode(void);
	CNode(const T& item);

	// 更新表的方法
	void InsertAfter(CNode<T> *p);
	CNode<T> *DeleteAfter(void);

	// 保持下一结点的指针
	CNode <T> *NextNode(void)const;

	// 输出链表
	void PrintList(CNode<T> *head);
};


#endif