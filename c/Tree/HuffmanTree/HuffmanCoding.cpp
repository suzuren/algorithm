

#include "stdafx.h"

void HuffmanCoding(HuffmanTree & HT, HuffmanCode & HC, int * w, int n)
{
	// �㷨 6.12
	// w ��� n ���ַ���Ȩֵ(��>0)������������� HT������� n ���ַ��Ĺ��������� HC
	int i, j;
	int m;			// �շ����������
	int s1, s2;
	int start;		//��������λ��
	char * cd;
	unsigned int c, f;
	
	if (n <= 1) return;
	m = 2 * n - 1;	// ��������
	HT = (HuffmanTree)malloc((m + 1) * sizeof(HTNode)); // 0�ŵ�Ԫδ��

	for (i = 1; i <= n; i++)		//��ʼ��
	{
//		HT[i].info   = info[i - 1];
		HT[i].weight = w[i - 1];
		HT[i].parent = 0;
		HT[i].lchild = 0;
		HT[i].rchild = 0;
	}

	for (i = n + 1; i <= m; i++)	//��ʼ��
	{
		HT[i].weight = 0;
		HT[i].parent = 0;
		HT[i].lchild = 0;
		HT[i].rchild = 0;
	}

	printf("\n���������Ĺ������������ʾ��\n");

//	printf("HT ��̬:\n");
//	printf("  ���  weight  parent  lchild  rchild");

//	for (i = 1; i <= m; i++)
//	{
//		printf("\n%4d%8d%8d%8d%8d", i, HT[i].weight, HT[i].parent, HT[i].lchild, HT[i].rchild);
//	}
//	printf("    ������������� ...");
//	getch();


	// ����һ�� m ���ȵ������¼�ڵ��Ƿ񱻷��ʹ�	
	int * flag = (int *)malloc( (m+1) * sizeof(int) );	//���±�Ҳ�Ǵ�1��ʼ��Ϊ�˺���������ö�Ӧ��
	int * temp = flag;
	temp++;
	for(i=1; i<=m; i++)
	{
		*(temp++) = 0;	// ��ʼ��Ϊ 0 �����з��ʹ�����ֵ 1
	}
  
	// ����������
	// ��HT [1..i-1] ��ѡ�� parent Ϊ 0 �� weight ��С��������㣬
	// ����ŷֱ�Ϊs1��s2��
	for (i = n + 1; i <= m; i++)
	{
		Select(HT, i - 1, s1, s2, flag);
		HT[s1].parent = i;
		HT[s2].parent = i;

		HT[i].lchild = s1;
		HT[i].rchild = s2;

		HT[i].weight = HT[s1].weight + HT[s2].weight;

//		printf("\nselect: s1=%d   s2=%d\n", s1, s2);
//		printf("  ���  weight  parent  lchild  rchild");
//		for (j = 1; j <= i; j++)
//		{
//			printf("\n%4d%8d%8d%8d%8d", j, HT[j].weight, HT[j].parent, HT[j].lchild, HT[j].rchild);
//		}
//		printf("    ������������� ...");
//		getch();
	}
	printf("  ���  weight  parent  lchild  rchild");
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

	//--- ��Ҷ�ӵ���������ÿ���ַ��Ĺ��������� ---

	cd = (char *)malloc(n * sizeof(char));	// ���������Ĺ����ռ�
	cd[n - 1] = '\0';						// �����������

	HC = (HuffmanCode)malloc((n + 1) * sizeof(char *));		// ����ռ�

	for (i = 1; i <= n; ++i)		// ����ַ������������
	{
		start = n - 1;				// ���������λ��
		for (c = i, f = HT[i].parent; f != 0; c = f, f = HT[f].parent)
		{
			// ��Ҷ�ӵ������������
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
		
		// Ϊ��i���ַ��������ռ�
		strcpy(HC[i], &cd[start]);	// �� cd ���Ʊ���(��)�� HC
	}
	free(cd); // �ͷŹ����ռ�
} // HuffmanCoding