
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

// 读取文件内容，参数为文件名，返回文件内容首地址
char * ReadData(const char *filename);

// 向文件写，参数为文件名
void WriteData(const char * filename);

// 把调用的字符按权值从小到大排序，挑出最小权值供 HuffmanCoding()
void Select(HuffmanTree HT, int n, int & s1, int & s2, int *flag);

// 建立赫夫曼树
void HuffmanCoding(HuffmanTree & HT, HuffmanCode & HC, int * w, int n);

// 对 'encondefilename' 文件内容进行编码，产生电文
void Encoding(HuffmanCode & HC, const char * encondefilename, const char * telegraphtextfilename);

//将 CodeCharacter.dat 中的电文进行译码并存入 DecodingFile
void Decoding(HuffmanTree & HT,char *codechar, int n, const char * telegraphtextfilename, const char * decodingfilename);

#endif

