
#ifndef _STACKEMPTY_H
#define _STACKEMPTY_H
Status StackEmpty(const SqStack S)  
{  
    if(S.base==S.top)  
        return OK;
    else  
        return ERROR;
}
#endif
