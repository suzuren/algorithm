
#ifndef _ATStack_H
#define _ATStack_H

// 初始化栈下标top
template <class TS>
Stack<TS>::Stack(void):top(-1)
{}

// 往栈中压入item
template <class TS>
void Stack<TS>::Push(const TS& item)
{
	// 若栈已满，则终止程序
	if(top==MaxStackSize-1)
	{
		cerr<<"Satck overflow!"<<endl;
		exit(1);
	}
	// 将top加1并将item拷贝到Stacklist中
	top++;
	stacklist[top]=item;
}

// 将栈顶元素弹出堆栈并返回其值
template <class TS>
TS Stack<TS>::Pop(void)
{
	TS temp;
	// 若栈为空，程序退出
	if(top==-1)
	{
		cerr<<"Attemp to pop an empty Stack!"<<endl;
		exit(1);
	}
	// 将栈顶元素赋给temp
	temp = stacklist[top];
	top--;
	return temp;
}

// 返回栈顶元素的值
template <class TS>
TS Stack<TS>::Peek(void)const
{
	// 若栈为空，则程序终止
	if(top==-1)
	{
		cerr<<"Attemp to peek an empty Stack!"<<endl;
		exit(1);
	}
	return stacklist[top];
}

// 检查栈是否为空
template <class TS>
int Stack<TS>::StackEmpty(void)const
{
	// 返回top==-1
	return top==-1;
}

// 检查栈是否为满
template <class TS>
int Stack<TS>::StackFull(void)const
{
	// 检测top的位置
	return top==(MaxStackSize-1);
}

// 从栈中清除所有元素
template <class TS>
void Stack<TS>::ClearStrack(void)
{
	top=-1;
}

#endif

