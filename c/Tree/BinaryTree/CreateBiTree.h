
#ifndef _CREATEBITREE_H
#define _CREATEBITREE_H
// �㷨6.4
// �������������������н���ֵ��һ���ַ������ո��ַ���ʾ������
// ������������ʾ�Ķ�����T��

BiTree CreateBiTree(BiTree & BT, TElemType *definition)
{
	static int i = 0;
	char child = definition[i++];

	if (child == '#')
	{
		BT = NULL;
	}
	else
	{
		BT = (BiTNode *) malloc (sizeof(BiTNode));
		if(BT == NULL)
		{
			exit(OVERFLOW);
		}
		else
		{
			// �����������
			BT->data = child; // ���ɽ��
			CreateBiTree(BT->lchild,definition); // ����������
			CreateBiTree(BT->rchild,definition); // ����������
		}
	}
	return BT;
}

#endif
