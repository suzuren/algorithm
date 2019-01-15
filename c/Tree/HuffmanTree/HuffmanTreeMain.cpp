
#include "stdafx.h"

int main(int argc, char argv[])
{
//	char op;
	int n;
	char *codechar;

	HuffmanTree HT;
	HuffmanCode HC;

	codechar = ReadData("InitCodeCharacter.dat");
	printf("编码字符: ");
	puts(codechar);

	n = strlen(codechar);
	int w[27] = {186, 64, 13, 22, 32, 103, 21, 15, 47, 57, 1,  5, 32, 20,  57, 63, 15, 1,  48,  51, 80, 23, 8,  18, 1, 16, 1};

//	HuffmanCoding(HT, HC, w, n);
	
//	WriteData("EncodingChar.dat");

//	Encoding(HC, "EncodingChar.dat", "TelegraphText.dat");

//	Decoding(HT, codechar, n, "TelegraphText.dat", "DecodingFile.dat");


	char op;
	while (1)
	{
		printf("---------------------------------------------\n");
		printf(" 赫夫曼编码和译码 \n");
		printf(" 1.初始化 \n");
		printf(" 2.输入对应的正文内容 \n");
		printf(" 3.进行赫夫曼编码 \n");
		printf(" 4.进行赫夫曼译码 \n");
		printf(" 5.退出赫夫曼操作 \n");
		printf(" 请输入1.2.3.4.5  \n");
		printf(" ---------------------------------------------\n");
		//---
		scanf("%c", &op);
		fflush(stdin);
		switch (op)
		{
		case '1':
			{				
				HuffmanCoding(HT, HC, w, n);
			}
			break;

		case '2':
			{
				WriteData("EncodingChar.dat");
			}
			break;
		case '3':
			{
				Encoding(HC, "EncodingChar.dat", "TelegraphText.dat");
			}
			break;
		case '4':
			{
				Decoding(HT, codechar, n, "TelegraphText.dat", "DecodingFile.dat");
			}
			break;
		case '5':
			{
				exit(OK);
			}
			break;
		default:
			{
				system("cls");
				printf("输入错误!\n");
			}
		}
	}
	
	return OK;
}
