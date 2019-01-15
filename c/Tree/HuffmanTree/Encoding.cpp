

#include "stdafx.h"

void Encoding(HuffmanCode & HC, const char * encondefilename, const char * telegraphtextfilename)
{
// 将 EncodingChar.dat 中的正文进行译码并存入 TelegraphText.dat
	FILE * fpstream = NULL;

	char *encodechar = ReadData(encondefilename);

	int  i;
	char c;
	char str[100] = {0};	// 定义且初始化
	fpstream = fopen(telegraphtextfilename, "w");
	if (fpstream == NULL)
	{
		printf("The file '%s' was not opened!\n",telegraphtextfilename);
	}
	else
	{
		c = *(encodechar);
		while (c != '\0')
		{
			if (c == ' ')
				i = 1;
			else
				i = c - 63;	// A - Z 是从 65 - 90
			
			strcpy(str, HC[i]);

			fputs(str, fpstream);
			c = *(++encodechar);
		}
	}

	fclose(fpstream);

	encodechar = ReadData(encondefilename);
	printf("Encoding Char:");
	puts(encodechar);

	char * teletext =ReadData(telegraphtextfilename);
	printf("Telegraph Text:");
	puts(teletext);

	printf("Telegraph Text save in the file '%s'.\n",telegraphtextfilename);
}
