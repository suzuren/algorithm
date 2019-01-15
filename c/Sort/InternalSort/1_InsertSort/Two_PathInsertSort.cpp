
#include "Structure.h"

Status Two_PathInsertSort(SqList & L)
{ // 2_·��������
	int i, j, first, final;

	RedType * d = (RedType *)malloc(L.length * sizeof(RedType)); // ����L.length����¼����ʱ�ռ�

	d[0] = L.r[1];		// ��L�ĵ�1����¼Ϊd���ź���ļ�¼(��λ��[0])
	first = 0;			// first��final�ֱ�ָʾd���ź���ļ�¼�ĵ�1�������1����¼��λ��
	final = 0;

	for (i=2; i<=L.length; ++i) // ���ν�L�ĵ�2�������1����¼����d��
	{
		if (L.r[i].key < d[first].key)
		{ // �����¼С��d����Сֵ���嵽d[first]֮ǰ(�����ƶ�d�����Ԫ��)
			first = (first - 1 + L.length)%L.length; // ��dΪѭ������
			d[first] = L.r[i];
		}
		else if (L.r[i].key > d[final].key)
		{ // �����¼����d�����ֵ���嵽d[final]֮��(�����ƶ�d�����Ԫ��)
			final = final + 1;
			d[final] = L.r[i];
		}
		else
		{ // �����¼����d����Сֵ��С��d�����ֵ���嵽d���м�(��Ҫ�ƶ�d�����Ԫ��)
			j = final++; // �ƶ�d��β��Ԫ���Ա㰴������¼

			while (L.r[i].key < d[j].key)
			{
				d[(j + 1)%L.length] = d[j];
				j = (j - 1 + L.length)%L.length;
			}
			d[j + 1] = L.r[i];
		}
	}
	for (i = 1;i <= L.length;i++) // ��d����L.r
	{
			L.r[i] = d[(i+first-1)%L.length]; // ���Թ�ϵ
	}
	return OK;
}
