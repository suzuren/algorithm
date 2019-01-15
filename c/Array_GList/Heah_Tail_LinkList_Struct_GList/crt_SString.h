
#ifndef _CRT_SSTRING_H
#define _CRT_SSTRING_H

Status crt_SString(SString &S, char *T)
{
	int i=1;
	while (1)
	{ 
		if (*T == '\0')
			break;
		S[i++] = *T++;	
	}
	S[0] = i-1;
	return OK;
}

#endif

