
#ifndef _SERVER_H
#define _SERVER_H

Status sever(SString &str, SString &hstr)
{// ���ǿմ� str �ָ�������֣�hsubΪ��һ��������֮ǰ���Ӵ���strΪ֮����Ӵ�
	char ch;
	int i = 0;
	int k = 0; // k����δ��Ե������Ÿ���
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

