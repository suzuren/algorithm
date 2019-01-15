
#ifndef _INDEX_BF_H
#define _INDEX_BF_H

int Index_BF(SString S, SString T, int pos)
{// 返回子串T在主串S中第pos位置之后的位置，若不存在，返回0
	if(pos<1 || pos>S[0])
		exit(ERROR);
	int i = pos;
	int j = 1;
	while(i<=S[0] && j<=T[0])
	{
		if(S[i] == T[j])
		{
			++i;
			++j;
		}
		else
		{
			i = i-j+2; // 之前匹配了 i 个，到第 j 个不一样，所以 i-j+1 回到原来的地方，在继续 +1 进入下一个字符，从新匹配
			j = 1;
		}
	}
	if(j > T[0]) // 如果在 j-1 最后一个匹配成功的，所以就进行了 ++j 所以， 到最后 j 就大于 T[0], 
		return i-T[0]; // 也是在 i 个已经不匹配的了， 所以 i-T[0] 不需要 +1，就是刚刚之前开始匹配的位置了
	return ERROR;
}
/*
Brute-Force算法的基本思想是：
1) 从目标串s 的第一个字符起和模式串t的第一个字符进行比较，若相等，则继续逐个比较后续字符，
   否则从串s 的第二个字符起再重新和串t进行比较。
2) 依此类推，直至串t 中的每个字符依次和串s的一个连续的字符序列相等，则称模式匹配成功，此时
   串t的第一个字符在串s 中的位置就是t 在s中的位置，否则模式匹配不成功。
*/
#endif