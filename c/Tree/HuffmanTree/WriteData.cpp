
#include "stdafx.h"

void WriteData(const char * filename)
{
	char buffer[100];
	FILE * fpstream = NULL;

	fpstream = fopen(filename, "w");
	if (fpstream == NULL)
	{
		printf("The file '%s' was not opened!\n",filename);
	}
	else
	{
		printf("please in put a string:\n");
		gets(buffer);
		if (fputs(buffer, fpstream) != EOF)
		{
			printf("'%s' string save in the file '%s'.\n",buffer, filename);
		}
	}
	fclose(fpstream);
}

