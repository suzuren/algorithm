
#ifndef _SELECTSORT_H
#define _SELECTSORT_H

KeyType SelectMinKey(SqList L, int i)
{// ѡ��key��С�ļ�¼�����������±�
	int minkey = i;
	for(; i<L.length; i++)
	{
		if(L.r[minkey].key > L.r[i+1].key)
		{
			minkey = i+1;
		}
	}
	return minkey;
}

// ��ѡ������ʱ�临�Ӷ�Ϊ n ƽ��
Status SelectSort(SqList & L)
{	// �㷨10.9
	// ��˳���L����ѡ������
	int i, j;
	for (i = 1; i < L.length; ++i)
	{                           // ѡ���iС�ļ�¼����������λ
		j = SelectMinKey(L, i); // ��L.r[i..L.length]��ѡ��key��С�ļ�¼
		if (i != j)             // ���key��С���±�� i ��һ�����򽻻�
		{                       // L.r[i]����L.r[j];   ���i����¼����			
			L.r[0] = L.r[i];
			L.r[i] = L.r[j];
			L.r[j] = L.r[0];
		}
	}
	return OK;
} // SelectSort


#endif

