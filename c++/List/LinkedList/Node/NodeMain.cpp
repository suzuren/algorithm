

#include "stdafx.h"

int main(int argc, char argv[])
{
	// Node类的构造函数初始化公共数据域以及私有指针域。缺省情况下，next值为空
	
	Node <int> t(10);			// 创建结点t，其值=10且next指针为空。
	
	Node <int> *u;
	u =  new Node<int> (20);	// 结点为u申请空间，并使其数据值=20，next指针为空
	
	Node <char> *p,*q,*r;
	q =  new Node<char>('B');	// q的数据值为‘B’
	p =  new Node<char>('A',q);	// p的数据值为‘A’且next的指针指向q。
	r =  new Node<char>('C');	// 节点r的数据值为‘C’
	q->InsertAfter(r);			// 将r插入表尾

//	cout<<p->data<<endl;		// 输出字符A。
//	p=p->NextNode();			// 移向下一个节点
//	cout<<p->data<<endl;		// 输出字符B。

//	r = q->DeleteAfter();		// 删除表尾，将其值赋给r

	Node <char> *temp=NULL;
	temp = temp->GetNode('D',p);

	temp->InsertFront(temp,'E');

	cout<<"enum noNewline:"<<endl;
	temp->PrintList(temp,noNewline);
	cout<<endl<<endl;
	
	cout<<"enum addNewline"<<endl;
	temp->PrintList(temp,addNewline);
	cout<<endl;

	return 0;
}