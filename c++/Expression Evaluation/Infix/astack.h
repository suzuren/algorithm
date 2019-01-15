
#ifndef _ATStack_H
#define _ATStack_H

// ��ʼ��ջ�±�top
template <class TS>
Stack<TS>::Stack(void):top(-1)
{}

// ��ջ��ѹ��item
template <class TS>
void Stack<TS>::Push(const TS& item)
{
	// ��ջ����������ֹ����
	if(top==MaxStackSize-1)
	{
		cerr<<"Satck overflow!"<<endl;
		exit(1);
	}
	// ��top��1����item������Stacklist��
	top++;
	stacklist[top]=item;
}

// ��ջ��Ԫ�ص�����ջ��������ֵ
template <class TS>
TS Stack<TS>::Pop(void)
{
	TS temp;
	// ��ջΪ�գ������˳�
	if(top==-1)
	{
		cerr<<"Attemp to pop an empty Stack!"<<endl;
		exit(1);
	}
	// ��ջ��Ԫ�ظ���temp
	temp = stacklist[top];
	top--;
	return temp;
}

// ����ջ��Ԫ�ص�ֵ
template <class TS>
TS Stack<TS>::Peek(void)const
{
	// ��ջΪ�գ��������ֹ
	if(top==-1)
	{
		cerr<<"Attemp to peek an empty Stack!"<<endl;
		exit(1);
	}
	return stacklist[top];
}

// ���ջ�Ƿ�Ϊ��
template <class TS>
int Stack<TS>::StackEmpty(void)const
{
	// ����top==-1
	return top==-1;
}

// ���ջ�Ƿ�Ϊ��
template <class TS>
int Stack<TS>::StackFull(void)const
{
	// ���top��λ��
	return top==(MaxStackSize-1);
}

// ��ջ���������Ԫ��
template <class TS>
void Stack<TS>::ClearStrack(void)
{
	top=-1;
}

#endif

