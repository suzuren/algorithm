

#ifndef _MERGELIST_SQ_H
#define _MERGELIST_SQ_H

// �㷨2.7
// ��֪˳�����Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ����С�
// �鲢La��Lb�õ��µ�˳�����Ա�Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ����С�

Status MergeList_Sq(SqList La, SqList Lb, SqList & Lc)
{
	ElemType * pa, *pb, *pc, *pa_last, *pb_last;

	pa = La.elem;
	pb = Lb.elem;

	Lc.listsize = Lc.length = La.length + Lb.length;
	pc = Lc.elem = (ElemType *)malloc(Lc.listsize * sizeof(ElemType));
	if (!Lc.elem)
		exit(OVERFLOW); // �洢����ʧ��

	pa_last = La.elem + La.length - 1;
	pb_last = Lb.elem + Lb.length - 1;

	while (pa <= pa_last && pb <= pb_last)
	{ // �鲢
		if (*pa <= *pb)
			*pc++ = *pa++;
		else
			* pc++ = *pb++;
	}
	while (pa <= pa_last)
		* pc++ = *pa++; // ����La��ʣ��Ԫ��
	while (pb <= pb_last)
		* pc++ = *pb++; // ����Lb��ʣ��Ԫ��

	return OK;
} // MergeList

#endif

