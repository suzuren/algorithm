
#ifndef _TSTACK_H
#define _TSTACK_H

template <class TS>
class TStack
{

private:
	// 私有数据成员：堆栈数组及栈顶指针
	TS tstacklist[MaxTStackSize];
	int top;
public:

	// 构造函数，初始化top
	TStack(void);

	// 改变栈的操作
	void Push(const TS & item);
	TS Pop(void);
	void ClearTStrack(void);

	// 访问栈顶元素
	TS peek(void) const;

	// 检测栈状态的方法
	int TStackEmpty(void)const;
	int TStackFull(void)const;	//用数组实现

};

#endif
