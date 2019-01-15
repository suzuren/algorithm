

#include "Structure.h"

void TableInsert(SLinkListType & SL, RedType D[], int n)
{ // ������D����n��Ԫ�صı��������ľ�̬����SL
	int i, p, q;
	SL.r[0].rc.key = MAX_INT;	// ��ͷ����¼�Ĺؼ���ȡ�������(�ǽ�������ı�β)
	SL.r[0].next = 0;			// next��Ϊ0��ʾ��β(��Ϊ�ձ���ʼ��)

	for (i = 0;i < n;i++)
	{
		SL.r[i + 1].rc = D[i];	// ������D��ֵ������̬����SL
		q = 0;
		p = SL.r[0].next;
		while (SL.r[p].rc.key <= SL.r[i + 1].rc.key)
		{ // ��̬���������
			q = p;
			p = SL.r[p].next;
		}
		SL.r[i + 1].next = p;	// ����ǰ��¼���뾲̬����
		SL.r[q].next = i + 1;
	}
	SL.length = n;
}

void Arrange(SLinkListType & SL)
{ // ���ݾ�̬����SL�и�����ָ��ֵ������¼λ�ã�ʹ��SL�м�¼���ؼ���
	// �ǵݼ�����˳������ �㷨10.3

	int i, p, q;
	SLNode t;
	p = SL.r[0].next; // pָʾ��һ����¼�ĵ�ǰλ��

	for (i = 1;i < SL.length;++i)
	{ // SL.r[1..i-1]�м�¼�Ѱ��ؼ�����������,��i����¼��SL�еĵ�ǰλ��Ӧ��С��i
		while (p < i)
		{
			p = SL.r[p].next;	// �ҵ���i����¼������pָʾ����SL�е�ǰλ��
		}
		q = SL.r[p].next;		// qָʾ��δ�����ı�β
		if (p != i)
		{
			t = SL.r[p];		// ������¼��ʹ��i����¼��λ
			SL.r[p] = SL.r[i];
			SL.r[i] = t;
			SL.r[i].next = p;	// ָ�����ߵļ�¼��ʹ���Ժ����whileѭ���һ�
		}
		p = q; // pָʾ��δ�����ı�β��Ϊ�ҵ�i+1����¼��׼��
	}
}