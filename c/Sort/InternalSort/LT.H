
#ifndef _LT_H
#define _LT_H

Status LT(KeyType i, KeyType j)
{
	if(i>=j) //假设 i 在 j 的后面，为了排序的稳定性，如果后面的那个和前面的相等就不需要插入
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

#endif

