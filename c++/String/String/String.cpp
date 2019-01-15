
#include "stdafx.h"

// ������Ϣ��ʾ
void String::Error(int errorType, int badIndex) const
{
	switch (errorType)
	{
		case outOfMemory:
			cerr << "Out Of Memory!" << endl; break;
		case indexError:
			cerr << "Index Error!" << endl; break;
	}
	exit(1);
}

// ���캯���������ڴ沢����һ�� C++ ��
String::String(char * s)
{
	 // �����а��� NULL �ַ�
	size = strlen(s) + 1;
	
	// Ϊ���� NULL �ַ�����ռ䲢�� s ����		
	str = new char[size];
	
	// ������ʧ�ܣ����˳�����
	if( str == NULL )
		Error(outOfMemory);	
	strcpy(str, s);
}

String::String(const String & s)
{
	// �����а���NULL�ַ�
	size = strlen(s.str) + 1;

	// Ϊ���� NULL �ַ�����ռ䲢��s����
	str = new char[size];

	
	// ������ʧ�ܣ����˳�����
	if( str == NULL )
		Error(outOfMemory);	
	strcpy(str, s.str);
}


// ��������
String::~String()
{
	delete []str;
	size = 0;
}

// ��ֵ��������� String �� String
String& String::operator = (const String & s)
{
	// ����С��������ɾ����ǰ���������������ڴ�
	if(s.size != this->size)
	{
		delete []str;
		this->str = new char[s.size];
		if( this->str == NULL )
			Error(outOfMemory);
	}
	
	// ���� size ֵ��ֵΪ s �� size ֵ
	this->size = s.size;

	// ���� s.str ���´��У���������ָ��
	strcpy(this->str, s.str);

	return *this;
}

String& String::operator = (char * s)
{
	// ����С��������ɾ����ǰ���������������ڴ�
	if ( (int)(strlen(s)+1) != (this->size) )
	{
		delete []str;
		str = new char[strlen(s) + 1];	
		if( this->str == NULL )
			Error(outOfMemory);
	}

	strcpy(str, s);

	// ���� size ֵ��ֵΪ s �� size ֵ
	this->size = strlen(s) + 1;

	return *this;
}

// ��ϵ�����

// ----------------------------------------------

// String == String
int String::operator == (const String & s) const
{
	return strcmp(str, s.str) == 0;
}

//  String == C ++ String
int String::operator == (char * s) const
{
	return strcmp(this->str, s) == 0;
}

// C ++ String == String
int operator == (char * str, const String & s)	// C++ ������ߵĲ�����
{
	return strcmp(str, s.str) == 0;
}

// ----------------------------------------------

// String != String
int String::operator != (const String & s) const
{
	return strcmp(str, s.str) != 0;
}

// String != C ++ String
int String::operator != (char * s) const
{
	return strcmp(str, s) != 0;
}

// C ++ String != String
int operator != (char * str, const String & s)
{
	return strcmp(str, s.str) != 0;
}

// ----------------------------------------------

// String < String
int String::operator < (const String & s) const
{
	return strcmp(str, s.str) < 0;
}

// String < C ++ String
int String::operator < (char * s) const
{
	return strcmp(str, s) < 0;
}

// C ++ String < String
int operator < (char * str, const String & s)
{
	return strcmp(str, s.str) < 0;
}

// ----------------------------------------------

// String <= String
int String::operator <= (const String & s) const
{
	return strcmp(str, s.str) <= 0;
}

// String <= C ++ String
int String::operator <= (char * s) const
{
	return strcmp(str, s) <= 0;
}

// C ++ String <= String
int operator <= (char * str, const String & s)
{
	return strcmp(str, s.str) <= 0;
}

// ----------------------------------------------

// String > String
int String::operator > (const String & s)const
{
	return strcmp(str, s.str) > 0;
}

// String > C ++ String
int String::operator > (char * s) const
{
	return strcmp(str, s) > 0;
}

// C ++ String > String
int operator > (char * str, const String & s)
{
	return strcmp(str, s.str) > 0;
}

// ----------------------------------------------

// String >= String
int String::operator >= (const String & s)const
{
	return strcmp(str, s.str) >= 0;
}

// String >= C ++ String
int String::operator >= (char * s) const
{
	return strcmp(str, s) >= 0;
}

// C ++ String >= String
int operator >= (char * str, const String & s)
{
	return strcmp(str, s.str) >= 0;
}

// ----------------------------------------------

// ��ƴ�������

// ----------------------------------------------

// String + String
String String::operator + (const String & s) const
{
	
	// ��temp�н���һ������Ϊ len ���´�
	String temp;
	int len;

	//ɾ������tempʱ������ NULL ��
	delete []temp.str;

	// ����ƴ�Ӻ�Ĵ����Ȳ�Ϊ֮�����ڴ�
	len = size + s.size - 1; //ֻ��һ��NULL��β

	temp.str = new char[len];
	if( temp.str == NULL )
		Error(outOfMemory);

	// �����´�
	temp.size = len;
	strcpy(temp.str, str);		// ���� str �� temp;
	strcat(temp.str, s.str);	// ���� s.str	
	return temp;				// ����
}

// String + C ++ String
String String::operator + (char * s)const
{
	String temp;
	int len;
	delete []temp.str;
	len = size + strlen(s);

	temp.str = new char[len];
	if( temp.str == NULL )
		Error(outOfMemory);

	strcpy(temp.str, str);
	strcat(temp.str, s);
	temp.size = len;
	
	return temp;
}

// C ++ String + String
String operator + (char * str, const String & s)
{
	String temp;
	int len;
	delete []temp.str;
	len = s.size + strlen(str);
	
	temp.str = new char[len];
	if( temp.str == NULL )
		s.Error(outOfMemory); //��Ԫ����ֻ�ܷ������ݳ�Ա�����ܷ���˽�к���

	strcpy(temp.str, str);
	strcat(temp.str, s.str);
	temp.size = len;

	return temp;
}

// String +=String
void String::operator += (const String & s)
{
	char * temp;
	temp = new char[size];
	strcpy(temp, this->str);
	delete []str;
	int len;
	len = strlen(temp) + s.size;

	str = new char[len];
	if( str == NULL )
		Error(outOfMemory);
	
	strcpy(str, temp);
	strcat(str, s.str);
	size = len;	
}

// String +=C ++ String
void String::operator += (char * s)
{
	char * temp;
	temp = new char[size];
	strcpy(temp, this->str);
	delete []str;
	int len;
	len = strlen(temp) + strlen(s) + 1;
	
	str = new char[len];
	if( str == NULL )
		Error(outOfMemory);
	
	strcpy(this->str, temp);
	strcat(this->str, s);
	size = len;
}

// ----------------------------------------------

// �� Start λ�ÿ�ʼ���״γ��ֵ��ַ�c
// �����ַ�c���ڵ�λ��
int String::Find(char c, int start)const
{
	int ret;
	//�ж� start ����Ч��
	if (start < 0 || start > size - 1)
		Error(indexError);
	
	char * p;
	p = this->str;
	p = p + start;
	ret = start;
	
	while (*p != NULL)
	{
		
		if (*p == c)
		{
			return ret;
		}
		else
		{
			p++;
			ret++;
		}
	}
	ret = -1;
	return ret;
	
}

// �����ַ�c�ڴ��е����λ��
int String::FindLast(char c) const
{
	int ret;
	char * p;
	// ��c++�⺯�� strchr�����ظ��ַ��ڴ������λ�õ�ָ��
	p = strrchr(str, c);
	if (p != NULL)
		ret = int(p - str); // �����±�
	else
		ret = -1;
	return ret;
}


// ���ش� index ��ʼ�� count ���ַ����Ӵ�
String String::Substr(int index, int count) const
{
	// �� index ����β���ַ�����
	int charsLeft = size - index - 1, i;

	// �����Ӵ�temp;
	String *temp = new String;
	char *p, *q;

	// �� index Խ�磬���ؿմ�
	if (index >= size-1)
		return *temp;

	// �� count > ʣ�µ��ַ�����ֻ��ʣ�µ��ַ�
	if (count > charsLeft)
		count = charsLeft;

	if (index < 0 || count < 0)
		Error(indexError);

	// ɾ������tempʱ�����Ŀմ�
	delete[] temp->str;

	// Ϊ�Ӵ����붯̬�ڴ�
	temp->str = new char[count + 1];
	if( temp->str == NULL )
		Error(outOfMemory);

	// �� str �п��� count ���ַ��� temp.str
	for (i = 0, p = temp->str, q = &(this->str[index]);   i < count;   i++)
		(*p++) = (*q++);

	// ��NULL�����ô�
	*p = '\0';

	temp->size = count + 1;
	return *temp;
}

// �� String �в�����һ��String
void String::Insert(const String & s, int index)
{
	// ����index����Ч��
	if (index < 0 || index >= size - 1 )
		Error(indexError);

	// ��ԭ���� this->str �Ĵ��� temp.str ��
	String temp;
	delete []temp.str;
	temp.str = new char[size];
	strcpy(temp.str, this->str);
	temp.size = this->size;

	// ��ȡʣ���ַ���
	char * p;
	int leftsize = (this->size) - index -1;
	p = new char[leftsize];
	strcpy(p, (this->str) + index + 1);
	
	int len;
	len = s.size + temp.size - 1;
	delete []this->str;

	this->str = new char[len];
	if(this->str == NULL)
		Error(outOfMemory);
	
	strcpy(this->str, temp.str);
	
	// �ص������ַ�
	this->str[index] = NULL;

	// �����ַ���
	strcat(this->str, s.str);
	strcat(this->str, p);
	size = len;	
}

void String::Insert(char * s, int index)
{
	// ���� index ����Ч��
	if (index < 0 || index >= int(size - 1))
		Error(indexError);
	// ��ԭ���� str �Ĵ��� temp ��
	String temp;
	delete []temp.str;
	temp.str = new char[size];
	strcpy(temp.str, str);
	temp.size = size;
		
	// ��ȡʣ���ַ���
	char * p;
	int leftsize = size - index - 1;
	p = new char[leftsize];
	strcpy(p, str + index + 1);
	
	int len;
	len = strlen(s) + temp.size;
	delete []str;

	str = new char[len];
	if(str == NULL)
		Error(outOfMemory);

	strcpy(str, temp.str);

	// �ص������ַ�
	str[index] = NULL;

	// �����ַ���
	strcat(str, s);
	strcat(str, p);
	size = len;
}

// ɾ���Ӵ�
void String::Remove(int index, int count)
{
	// ���� index,count ����Ч��
	if (index < 0 || index >= int(size - 1) || count < 0)
		Error(indexError);

	// ��� count ������ʣ���ַ�����������ʣ�µ��ַ���������
	if (count > size - index - 1 )
		count = size - index - 1;
	
	// ��ȡʣ���ַ���
	char * p;
	int leftsize = size - index - 1;
	p = new char[leftsize];
	strcpy(p, str + index + count);
	
	// �ص������ַ�
	str[index] = NULL;

	// q �Ĵ�ǰ����ַ�
	char * q = new char[strlen(str) + 1];
	strcpy(q, str);
	
	int len;
	len = strlen(q) + strlen(p) + 1;
	delete []str;

	str = new char[len];
	if(str == NULL)
		Error(outOfMemory);

	// ��������ַ���
	strcpy(str, q);
	strcat(str, p);	
	size = len;
}

// String �±�����
char & String::operator[](int n)
{
	return str[n];
}

// String ������/ ���
ostream & operator << (ostream & ostr, const String & s)
{
	ostr << s.str;
	return ostr;
}

istream & operator >> (istream & istr, String & s)
{
	char temp[256];
	istr.getline(temp, 256);
	delete []s.str;
	s.size = strlen(temp)+1;
	s.str = new char[s.size];
	assert(s.str != NULL);
	strcpy(s.str, temp);
	return istr;
}
//int ReadString(istream & is = cin, char delimiter = '\n');
// ���� istr �ж���һ���ı�
// �����ַ�ֱ��������
int String::ReadString(istream & istr, char delimiter )
{
	// ����һ�е�tmp��
	char tmp[256];
	// �ļ�δ�������������255���ַ���һ��
	if (istr.getline(tmp, 256, delimiter))
	{
		// ɾ���ɴ�������һ���´�
		delete []str;
		size = strlen(tmp) + 1;

		str = new char[size];
		if(str == NULL)
			Error(outOfMemory);

		//���� tmp�����ض����ַ�����
		strcpy(str, tmp);
		return (int)size - 1;
	}
	else
		return -1; //�ļ�����ʱ����-1
}

// ��������
int String::Length(void)const
{
	return size;
}

int String::IsEmpty(void)const
{
	return size == 0;
}

void String::Clear(void)
{
	str[0] = NULL;
	size = 1;
}


