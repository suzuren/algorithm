
#ifndef _INDEX_KMP_H
#define _INDEX_KMP_H

int Index_KMP(SString S, SString T, int pos)
{   // 算法4.6

	// 利用模式串T的next函数求T在主串S中第pos个字符之后的位置
	// 的KMP算法。其中，T非空，1≤pos≤StrLength(S)。
	int next[255];
	int i = pos;
	int j = 1;
	get_nextval(T, next);
	while (i <= S[0] && j <= T[0])
	{
		if (j == 0 || S[i] == T[j])
		{
			++i; ++j; // 继续比较后继字符
		}
		else
			j = next[j]; // 模式串向右移动
	}
	if (j > T[0])
		return i - T[0]; // 匹配成功
	else
		return 0;
} // Index_KMP

#endif