
#ifndef _SUBSTRING_H
#define _SUBSTRING_H

Status SubString(SString & Sub, SString S, int pos, int len)
{
	// 算法4.3
	// 用Sub返回串S的第pos个字符起长度为len的子串。
	// 其中，1≤pos≤StrLength(S)且0≤len≤StrLength(S)-pos+1。

	if (pos < 1 || pos > S[0] || len < 0 || len > S[0] - pos + 1)
	{
		return ERROR;
	}
	for (int i = 1; i <= len; i++)
	{
		Sub[i] = S[pos + i - 1];
	}
	Sub[0] = len;
	return OK;
} // SubString

#endif
