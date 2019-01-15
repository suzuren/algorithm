
#ifndef _REPLACE_H
#define _REPLACE_H

Status Replace(SqString &S, SqString T,SqString V)
{
	/* ��ʼ����: ��S,T��V����,T�Ƿǿմ����˺����봮�Ĵ洢�ṹ�޹أ� */  
    /* �������: ��V�滻����S�г��ֵ�������T��ȵĲ��ص����Ӵ� */  
	int i = 0; /* �Ӵ�S�ĵ�һ���ַ�����Ҵ�T */ 
	if(StrEmpty(T))
	{
		return ERROR;
	}
	do
	{
		i = Index(S, T,i); /* ���iΪ����һ��i֮���ҵ����Ӵ�T��λ�� */
		if(i) /* ��S�д��ڴ�T */
		{
			StrDelete(S, i, StrLength(T)); /* ɾ���ô�T */
			StrInsert(S, i, V); /* ��ԭ��T��λ�ò��봮V */ 
			i = i+StrLength(V); /* �ڲ���Ĵ�V����������Ҵ�T */
		}
	}while(i);
	return OK;
}

#endif