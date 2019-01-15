#ifndef _STACKCLASS_H
#define _STACKCLASS_H

#include "stdafx.h"

class Stack
{

private:
	DataType stacklist[MaxStackSize];
	int top;
public:

	// ���캯������ʼ��top
	Stack(void);

	// �ı�ջ�Ĳ���
	void Push(const DataType & item);
	DataType Pop(void);
	void ClearStrack(void);

	// ����ջ��Ԫ��
	DataType peek(void) const;

	// ���ջ״̬�ķ���
	int StackEmpty(void)const;
	int StackFull(void)const;	//������ʵ��

};

#endif
