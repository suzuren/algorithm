
#ifndef _STACKEMPTY_H
#define _STACKEMPTY_H

Status StackEmpty(const SqStack S)  
{  
    if(S.top == 0)
        return TRUE;
    else  
        return FALSE;
}

#endif