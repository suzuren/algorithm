
#include "stdafx.h"

char * ReadData(const char * filename)
{
	char * buffer   = NULL;
	

	FILE * fpstream = NULL;

	fpstream = fopen(filename, "r");
	if (fpstream == NULL)
	{
		printf("The file '%s' was not opened!\n",filename);
	}
	
	long curpos=ftell(fpstream);
	fseek(fpstream, 0L, SEEK_END);
	long filesize = ftell(fpstream);

	buffer = (char *)malloc( filesize * (sizeof(char)) ) ;

	fseek(fpstream, 0L, SEEK_SET);

	char *head = buffer;
	char ch = fgetc(fpstream);

	while (ch != EOF)
	{
		*(buffer++) = ch;

		ch = fgetc(fpstream);
	}
	*buffer = '\0';
	fclose(fpstream);
	return head;
}