

#include "stdafx.h"

int main(int argc, char argv[])
{
	// Node��Ĺ��캯����ʼ�������������Լ�˽��ָ����ȱʡ����£�nextֵΪ��
	
	Node <int> t(10);			// �������t����ֵ=10��nextָ��Ϊ�ա�
	
	Node <int> *u;
	u =  new Node<int> (20);	// ���Ϊu����ռ䣬��ʹ������ֵ=20��nextָ��Ϊ��
	
	Node <char> *p,*q,*r;
	q =  new Node<char>('B');	// q������ֵΪ��B��
	p =  new Node<char>('A',q);	// p������ֵΪ��A����next��ָ��ָ��q��
	r =  new Node<char>('C');	// �ڵ�r������ֵΪ��C��
	q->InsertAfter(r);			// ��r�����β

//	cout<<p->data<<endl;		// ����ַ�A��
//	p=p->NextNode();			// ������һ���ڵ�
//	cout<<p->data<<endl;		// ����ַ�B��

//	r = q->DeleteAfter();		// ɾ����β������ֵ����r

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