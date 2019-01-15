
#ifndef _ATTStack_H
#define _ATTStack_H

// ��ʼ��ջ�±�top
template <class TS>
TStack<TS>::TStack(void):top(-1)
{}

// ��ջ��ѹ��item
template <class TS>
void TStack<TS>::Push(const TS& item)
{
	// ��ջ����������ֹ����
	if(top==MaxTStackSize-1)
	{
		cerr<<"Satck overflow!"<<endl;
		exit(1);
	}
	// ��top��1����item������TStacklist��
	top++;
	tstacklist[top]=item;
}

// ��ջ��Ԫ�ص�����ջ��������ֵ
template <class TS>
TS TStack<TS>::Pop(void)
{
	TS temp;
	// ��ջΪ�գ������˳�
	if(top==-1)
	{
		cerr<<"Attemp to pop an empty TStack!"<<endl;
		exit(1);
	}
	// ��ջ��Ԫ�ظ���temp
	temp = tstacklist[top];
	top--;
	return temp;
}

// ����ջ��Ԫ�ص�ֵ
template <class TS>
TS TStack<TS>::peek(void)const
{
	// ��ջΪ�գ��������ֹ
	if(top==-1)
	{
		cerr<<"Attemp to peek an empty TStack!"<<endl;
		exit(1);
	}
	return tstacklist[top];
}

// ���ջ�Ƿ�Ϊ��
template <class TS>
int TStack<TS>::TStackEmpty(void)const
{
	// ����top==-1
	return top==-1;
}

// ���ջ�Ƿ�Ϊ��
template <class TS>
int TStack<TS>::TStackFull(void)const
{
	// ���top��λ��
	return top==(MaxTStackSize-1);
}

// ��ջ���������Ԫ��
template <class TS>
void TStack<TS>::ClearTStrack(void)
{
	top=-1;
}

#endif

