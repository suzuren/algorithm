
#include "stdafx.h"

void Decoding(HuffmanTree & HT,char *codechar, int n, const char * telegraphtextfilename, const char * decodingfilename)
{// �� CodeCharacter.dat �еĵ��Ľ������벢���� DecodingFile.dat
	FILE *fpstream;
	
	char c;
	char * teletxet = ReadData(telegraphtextfilename);

	int m = 2*n-1;	// ��������
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
			// ������
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
			}// ���Ϊ��ָ���λ��.

			// ������ĵ���һ����д���ļ�
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
