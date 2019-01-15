

#include "stdafx.h"

void HuffmanCoding(HuffmanTree & HT, HuffmanCode & HC, int * w, int n)
{
	// 算法 6.12
	// w 存放 n 个字符的权值(均>0)，构造哈夫曼树 HT，并求出 n 个字符的哈夫曼编码 HC
	int i, j;
	int m;			// 赫夫曼树结点数
	int s1, s2;
	int start;		//用来跟踪位置
	char * cd;
	unsigned int c, f;
	
	if (n <= 1) return;
	m = 2 * n - 1;	// 求结点总数
	HT = (HuffmanTree)malloc((m + 1) * sizeof(HTNode)); // 0号单元未用

	for (i = 1; i <= n; i++)		//初始化
	{
//		HT[i].info   = info[i - 1];
		HT[i].weight = w[i - 1];
		HT[i].parent = 0;
		HT[i].lchild = 0;
		HT[i].rchild = 0;
	}

	for (i = n + 1; i <= m; i++)	//初始化
	{
		HT[i].weight = 0;
		HT[i].parent = 0;
		HT[i].lchild = 0;
		HT[i].rchild = 0;
	}

	printf("\n哈夫曼树的构造过程如下所示：\n");

//	printf("HT 初态:\n");
//	printf("  结点  weight  parent  lchild  rchild");

//	for (i = 1; i <= m; i++)
//	{
//		printf("\n%4d%8d%8d%8d%8d", i, HT[i].weight, HT[i].parent, HT[i].lchild, HT[i].rchild);
//	}
//	printf("    按任意键，继续 ...");
//	getch();


	// 设置一个 m 长度的数组记录节点是否被访问过	
	int * flag = (int *)malloc( (m+1) * sizeof(int) );	//（下标也是从1开始，为了和上面的正好对应）
	int * temp = flag;
	temp++;
	for(i=1; i<=m; i++)
	{
		*(temp++) = 0;	// 初始化为 0 ，当有访问过，则赋值 1
	}
  
	// 建哈夫曼树
	// 在HT [1..i-1] 中选择 parent 为 0 且 weight 最小的两个结点，
	// 其序号分别为s1和s2。
	for (i = n + 1; i <= m; i++)
	{
		Select(HT, i - 1, s1, s2, flag);
		HT[s1].parent = i;
		HT[s2].parent = i;

		HT[i].lchild = s1;
		HT[i].rchild = s2;

		HT[i].weight = HT[s1].weight + HT[s2].weight;

//		printf("\nselect: s1=%d   s2=%d\n", s1, s2);
//		printf("  结点  weight  parent  lchild  rchild");
//		for (j = 1; j <= i; j++)
//		{
//			printf("\n%4d%8d%8d%8d%8d", j, HT[j].weight, HT[j].parent, HT[j].lchild, HT[j].rchild);
//		}
//		printf("    按任意键，继续 ...");
//		getch();
	}
	printf("  结点  weight  parent  lchild  rchild");
	for (j = 1; j <= i-1; j++)
	{
		printf("\n%4d%8d%8d%8d%8d", j, HT[j].weight, HT[j].parent, HT[j].lchild, HT[j].rchild);
	}
	printf("\n");

	FILE *fp = fopen("InitHuffmanTreeNodeInof.dat", "w");
	for (j = 1;j <= m;j++)
	{
		if (fp != NULL)
		{
			fprintf(fp, "%4d%8d%8d%8d%8d\n", j, HT[j].weight, HT[j].parent, HT[j].lchild, HT[j].rchild);
		}
	}
	printf("InitHuffmanTreeNodeInof has been saved in the file hfmTree.txt!\n");
	fclose(fp);

	//--- 从叶子到根逆向求每个字符的哈夫曼编码 ---

	cd = (char *)malloc(n * sizeof(char));	// 分配求编码的工作空间
	cd[n - 1] = '\0';						// 编码结束符。

	HC = (HuffmanCode)malloc((n + 1) * sizeof(char *));		// 分配空间

	for (i = 1; i <= n; ++i)		// 逐个字符求哈夫曼编码
	{
		start = n - 1;				// 编码结束符位置
		for (c = i, f = HT[i].parent; f != 0; c = f, f = HT[f].parent)
		{
			// 从叶子到根逆向求编码
			if (HT[f].lchild == c)
			{
				cd[--start] = '0';
			}
			else
			{
				cd[--start] = '1';
			}
		}
		HC[i] = (char *)malloc( (n - start)*sizeof(char) );
		
		// 为第i个字符编码分配空间
		strcpy(HC[i], &cd[start]);	// 从 cd 复制编码(串)到 HC
	}
	free(cd); // 释放工作空间
} // HuffmanCoding
