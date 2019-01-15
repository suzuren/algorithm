#ifndef _INITSTACK_H
#define _INITSTACK_H

Status InitStack(SqStack &S)
{    
    S.top = 0;    //设置栈顶指针top，表示栈空
	return OK;
}

#endif