#ifndef _STACKCLASS_H
#define _STACKCLASS_H

#include "stdafx.h"

class Stack
{

private:
	DataType stacklist[MaxStackSize];
	int top;
public:

	// 构造函数，初始化top
	Stack(void);

	// 改变栈的操作
	void Push(const DataType & item);
	DataType Pop(void);
	void ClearStrack(void);

	// 访问栈顶元素
	DataType peek(void) const;

	// 检测栈状态的方法
	int StackEmpty(void)const;
	int StackFull(void)const;	//用数组实现

};

#endif
