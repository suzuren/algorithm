
#ifndef _HEAPSORT_H
#define _HEAPSORT_H

void HeapAdjust(HeapType & H, int s, int m)
{   // �㷨10.10
	// ��֪H.r[s..m]�м�¼�Ĺؼ��ֳ�H.r[s].key֮�������ѵĶ��壬
	// ����������H.r[s]�Ĺؼ��֣�ʹH.r[s..m]��Ϊһ���󶥶�
	// �������м�¼�Ĺؼ��ֶ��ԣ�
	int j;
	RedType rc;
	rc = H.r[s]; // rc ��¼�� s ��Ԫ��
	for (j = 2 * s; j <= m; j *= 2) // ��key�ϴ�ĺ��ӽ������ɸѡ
	{
		if (j < m && H.r[j].key < H.r[j + 1].key) // jΪkey�ϴ�ļ�¼���±�
		{
			++ j; 
		}
		if (rc.key >= H.r[j].key) // rc Ӧ������λ��s��
		{
			break;
		}
		H.r[s] = H.r[j];
		s = j;
	}
	H.r[s] = rc; // ����
} // HeapAdjust

Status HeapSort(HeapType & H)
{ // �㷨10.11
	// ��˳���H���ж�����
	int i;
	RedType temp;
	for (i = H.length / 2; i > 0; --i) // ��H.r[1..H.length]���ɴ󶥶�
	{// �ӵ� length/2 ��Ԫ�ؿ�ʼɸѡ
		HeapAdjust (H, i, H.length);
	}
	for (i = H.length; i > 1; --i)
	{
		temp = H.r[i];
		H.r[i] = H.r[1];
		H.r[1] = temp; // ���Ѷ���¼�͵�ǰδ������������Hr[1..i]��
		// ���һ����¼�໥����
		HeapAdjust(H, 1, i - 1); // ��H.r[1..i-1] ���µ���Ϊ�󶥶�
	}
	return OK;
} // HeapSort

#endif

