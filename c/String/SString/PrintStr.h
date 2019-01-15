
#ifndef _PRINTSTR_H
#define _PRINTSTR_H

Status PrintStr(SString S)
{
	for(int i=1; i<=S[0]; i++)
	{
		printf("%c",S[i]);
	}
	printf("\n");
	return OK;
}

#endif

