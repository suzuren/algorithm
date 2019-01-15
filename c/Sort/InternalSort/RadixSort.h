//
//#ifndef _RADIXSORT_H
//#define _RADIXSORT_H
//
//void Distribute(SLList & L, int i, ArrType & f, ArrType & e)
//{
//	// �㷨10.15
//	// ��̬����L��r���м�¼�Ѱ�(keys[0],...,keys[i-1])����
//	// ���㷨����i���ؼ���keys[i]����RADIX���ӱ�
//	// ʹͬһ�ӱ��м�¼��keys[i]��ͬ��f[0..RADIX-1]��e[0..RADIX-1]
//	// �ֱ�ָ����ӱ��е�һ�������һ����¼��
//	int j, p;
//	for (j = 0; j < RADIX; ++j)
//	{
//		f[j] = 0; // ���ӱ��ʼ��Ϊ�ձ�
//	}
//	for (p = L.r[0].next; p; p = L.r[p].next)
//	{
//		j = L.r[p].keys[i] - '0'; // ����¼�е�i���ؼ���ӳ�䵽[0..RADIX-1]��
//		if (!f[j])
//		{
//			f[j] = p;
//		}
//		else
//		{
//			L.r[e[j]].next = p;
//		}
//		e[j] = p; // ��p��ָ�Ľ������j���ӱ���
//	}
//} // Distribute
//
//void Collect(SLList & L, int i, ArrType f, ArrType e)
//{ // �㷨10.16
//	// ���㷨��keys[i]��С����ؽ�f[0..RADIX-1]��ָ���ӱ��������ӳ�
//	// һ������e[0..RADIX-1]Ϊ���ӱ��βָ��
//	int j, t;
//	for (j = 0; !f[j]; j++); // �ҵ�һ���ǿ��ӱ�succΪ���̺���: ++
//	L.r[0].next = f[j]; // L.r[0].nextָ���һ���ǿ��ӱ��е�һ�����
//	t = e[j];
//	while (j < RADIX)
//	{
//		for (j = j + 1; j < RADIX && !f[j]; j++); // ����һ���ǿ��ӱ�
//		if (j < RADIX) // ���������ǿ��ӱ�
//		{
//			L.r[t].next = f[j];
//			t = e[j];
//		}
//	}
//	L.r[t].next = 0; // tָ�����һ���ǿ��ӱ��е����һ�����
//} // Collect
//
//Status RadixSort(SLList & L)
//{ // �㷨10.17
//	// L�ǲ��þ�̬�����ʾ��˳���
//	// ��L����������ʹ��L��Ϊ���ؼ�����С���������̬����
//	// L.r[0]Ϊͷ��㡣
//	int i;
//	ArrType f, e;
//	for (i = 1; i < L.recnum; ++i) L.r[i - 1].next = i;
//	L.r[L.recnum].next = 0; // ��L����Ϊ��̬����
//	for (i = 0; i < L.keynum; ++i)
//	{
//		// �����λ�������ζԸ��ؼ��ֽ��з�����ռ�
//		Distribute(L, i, f, e); // ��i�˷���
//		Collect(L, i, f, e); // ��i���ռ�
//		print_SLList2(L, i);
//	}
//	return OK;
//} // RadixSort
//
//#endif
//
//
