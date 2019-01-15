
#ifndef _DNODE_H
#define _DNODE_H

template <class T>
class DNode
{
private:
	// 指向左、右结点的指针
	DNode<T> * left;
	DNode<T> * right;
public:
	// data 为公有成员
	T data;

	// 构造函数
	DNode(void);
	DNode(const T& item);

	// 改变表的方法
	void InsertRight(DNode<T> *p);
	void InsertLeft (DNode<T> *p);

	// 从链表中删除当前节点并返回其指针
	DNode <T> * DeleteNode(void);

	// 取得指向左、右方向结点的指针
	DNode <T> *NextNodeRight(void)const;
	DNode <T> *NextNodeLeft (void)const;

	// 输出链表
	void PrintList(DNode <T> *head);
};

#endif

