
#include "stdafx.h"

void Decoding(HuffmanTree & HT,char *codechar, int n, const char * telegraphtextfilename, const char * decodingfilename)
{// 将 CodeCharacter.dat 中的电文进行译码并存入 DecodingFile.dat
	FILE *fpstream;
	
	char c;
	char * teletxet = ReadData(telegraphtextfilename);

	int m = 2*n-1;	// 求结点总数
	int i =  m;

	fpstream = fopen(decodingfilename, "w");
	if (fpstream == NULL)
	{
		printf("The file '%s' was not opened!\n",decodingfilename);
	}
	else
	{
		c = *teletxet;
		while (c != '\0')
		{
			// 遍历树
			while (HT[i].lchild != 0 && HT[i].rchild != 0)
			{
				if (c == '0')
				{
					i = HT[i].lchild;
				}
				else
				{
					i = HT[i].rchild;
				}
				c = *(++teletxet);
			}// 最后为所指向的位置.

			// 把译出的电文一个个写入文件
			fprintf(fpstream, "%c", *(codechar + i - 1) );
		}
	}
	fclose(fpstream);

	teletxet = ReadData(telegraphtextfilename);
	printf("Telegraph Text:");
	puts(teletxet);

	char *encodechar = ReadData(decodingfilename);
	printf("Decoding File:");
	puts(encodechar);

	printf("Decoding Text save in the file '%s'.\n",decodingfilename);
}
