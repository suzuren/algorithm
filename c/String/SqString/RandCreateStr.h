
#ifndef _RANDCREATESTR_H
#define _RANDCREATESTR_H

Status RandCreateStr(SElemType str[], int n)
{
	for(int i=0; i<(n-1); i++)
	{
		str[i] = 'A'+rand()%26;
	}
	str[n-1] = '\0';
	return OK;
}

#endif