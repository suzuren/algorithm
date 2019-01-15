
#ifndef _QUICKSORT_H
#define _QUICKSORT_H

int Partition(SqList & L, int low, int high)
{   // �㷨10.6(b)
	// ����˳���L��������L.r[low..high]�ļ�¼��ʹ�����¼��λ��
	// ������������λ�ã���ʱ������֮ǰ���󣩵ļ�¼������С������

	KeyType pivotkey;
	L.r[0] = L.r[low];        // ���ӱ�ĵ�һ����¼�������¼
	pivotkey = L.r[low].key;  // �����¼�ؼ���
	while (low < high)        // �ӱ�����˽�������м�ɨ��
	{
		while (low < high && L.r[high].key >= pivotkey)
			-- high;
		L.r[low] = L.r[high]; // ���������¼С�ļ�¼�Ƶ��Ͷ�
		while (low < high && L.r[low].key <= pivotkey)
			++ low;
		L.r[high] = L.r[low]; // ���������¼��ļ�¼�Ƶ��߶�
	}
	L.r[low] = L.r[0];        // �����¼��λ
	return low;               // ��������λ��
} // Partition


void QSort(SqList & L, int low, int high)
{   //�㷨10.7
	// ��˳���L�е�������L.r[low..high]���п�������
	int pivotloc;
	if (low < high) // ���ȴ���1
	{
		pivotloc = Partition(L, low, high); // ��L.r[low..high]һ��Ϊ��
		QSort(L, low, pivotloc - 1);        // �Ե��ӱ�ݹ�����pivotloc������λ��
		QSort(L, pivotloc + 1, high);       // �Ը��ӱ�ݹ�����
	}
} // QSort

// ��������ƽ��������ã�����ʼ��¼���а��ؼ���������߻�������ʱ������������Ϊ��������
Status QuickSort(SqList & L)
{   // �㷨10.8
	// ��˳���L���п�������
	QSort(L, 1, L.length);
	return OK;
} // QuickSort

#endif

