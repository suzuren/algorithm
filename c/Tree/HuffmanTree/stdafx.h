
#ifndef _STDAFX_H
#define _STDAFX_H

//#define	TRUE	1
//#define	FLASE	0
#define	OK		1
//#define	ERROR	0
//#define	INFEASIBLE	-1
//#define	OVERFLOW	-2

//#define INITSIZE	3
//#define ADDSIZE		1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "HTNode.h"

// ��ȡ�ļ����ݣ�����Ϊ�ļ����������ļ������׵�ַ
char * ReadData(const char *filename);

// ���ļ�д������Ϊ�ļ���
void WriteData(const char * filename);

// �ѵ��õ��ַ���Ȩֵ��С��������������СȨֵ�� HuffmanCoding()
void Select(HuffmanTree HT, int n, int & s1, int & s2, int *flag);

// �����շ�����
void HuffmanCoding(HuffmanTree & HT, HuffmanCode & HC, int * w, int n);

// �� 'encondefilename' �ļ����ݽ��б��룬��������
void Encoding(HuffmanCode & HC, const char * encondefilename, const char * telegraphtextfilename);

//�� CodeCharacter.dat �еĵ��Ľ������벢���� DecodingFile
void Decoding(HuffmanTree & HT,char *codechar, int n, const char * telegraphtextfilename, const char * decodingfilename);

#endif

