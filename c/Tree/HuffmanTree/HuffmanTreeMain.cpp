
#include "stdafx.h"

int main(int argc, char argv[])
{
//	char op;
	int n;
	char *codechar;

	HuffmanTree HT;
	HuffmanCode HC;

	codechar = ReadData("InitCodeCharacter.dat");
	printf("�����ַ�: ");
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
		printf(" �շ������������ \n");
		printf(" 1.��ʼ�� \n");
		printf(" 2.�����Ӧ���������� \n");
		printf(" 3.���кշ������� \n");
		printf(" 4.���кշ������� \n");
		printf(" 5.�˳��շ������� \n");
		printf(" ������1.2.3.4.5  \n");
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
				printf("�������!\n");
			}
		}
	}
	
	return OK;
}
