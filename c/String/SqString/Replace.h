
#ifndef _REPLACE_H
#define _REPLACE_H

Status Replace(SqString &S, SqString T,SqString V)
{
	/* 初始条件: 串S,T和V存在,T是非空串（此函数与串的存储结构无关） */  
    /* 操作结果: 用V替换主串S中出现的所有与T相等的不重叠的子串 */  
	int i = 0; /* 从串S的第一个字符起查找串T */ 
	if(StrEmpty(T))
	{
		return ERROR;
	}
	do
	{
		i = Index(S, T,i); /* 结果i为从上一个i之后找到的子串T的位置 */
		if(i) /* 串S中存在串T */
		{
			StrDelete(S, i, StrLength(T)); /* 删除该串T */
			StrInsert(S, i, V); /* 在原串T的位置插入串V */ 
			i = i+StrLength(V); /* 在插入的串V后面继续查找串T */
		}
	}while(i);
	return OK;
}

#endif