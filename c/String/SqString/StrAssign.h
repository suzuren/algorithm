
#ifndef _STRASSIGN_H
#define _STRASSIGN_H

Status StrAssign(SqString &S,SElemType t[])
{// ´®¸³Öµ
	int i = ERROR;
	for(i=0; t[i] != '\0'; i++)
	{
		S.ch[i] = t[i];
	}
	S.len = i;
	return OK;
}

#endif