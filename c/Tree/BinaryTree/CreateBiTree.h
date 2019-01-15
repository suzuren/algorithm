
#ifndef _CREATEBITREE_H
#define _CREATEBITREE_H
// 算法6.4
// 按先序次序输入二叉树中结点的值（一个字符），空格字符表示空树，
// 构造二叉链表表示的二叉树T。

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
			// 按照先序次序
			BT->data = child; // 生成结点
			CreateBiTree(BT->lchild,definition); // 构造左子树
			CreateBiTree(BT->rchild,definition); // 构造右子树
		}
	}
	return BT;
}

#endif
