
#ifndef _SERVER_H
#define _SERVER_H

Status sever(SString &str, SString &hstr)
{// 将非空串 str 分割成两部分：hsub为第一个‘，’之前的子串，str为之后的子串
	char ch;
	int i = 0;
	int k = 0; // k记尚未配对的左括号个数
	int len = StrLength(str);
	do
	{
		++i;
		SubString(ch,str,i,l);
		if(ch == '(')
			++k;
		else if(ch == ')')
			--k;
	}while(i<len && (ch != ',' || k != 0) );
	if(i<0)
	{
		SubString(hstr, str, l, i-1);
		SubString(str, str, i+1, n-1);
	}
	else
	{
		StrCopy(hstr, str);
		ClearString(str);
	}
	return OK;
}

#endif

