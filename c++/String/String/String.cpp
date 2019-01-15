
#include "stdafx.h"

// 错误消息提示
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

// 构造函数。申请内存并拷入一个 C++ 串
String::String(char * s)
{
	 // 长度中包括 NULL 字符
	size = strlen(s) + 1;
	
	// 为串及 NULL 字符申请空间并将 s 拷入		
	str = new char[size];
	
	// 若申请失败，则退出程序
	if( str == NULL )
		Error(outOfMemory);	
	strcpy(str, s);
}

String::String(const String & s)
{
	// 长度中包括NULL字符
	size = strlen(s.str) + 1;

	// 为串及 NULL 字符申请空间并将s拷入
	str = new char[size];

	
	// 若申请失败，则退出程序
	if( str == NULL )
		Error(outOfMemory);	
	strcpy(str, s.str);
}


// 析构函数
String::~String()
{
	delete []str;
	size = 0;
}

// 赋值运算符。从 String 到 String
String& String::operator = (const String & s)
{
	// 若大小不符，则删除当前串，并重新申请内存
	if(s.size != this->size)
	{
		delete []str;
		this->str = new char[s.size];
		if( this->str == NULL )
			Error(outOfMemory);
	}
	
	// 将其 size 值赋值为 s 的 size 值
	this->size = s.size;

	// 拷贝 s.str 到新串中，并返回其指针
	strcpy(this->str, s.str);

	return *this;
}

String& String::operator = (char * s)
{
	// 若大小不符，则删除当前串，并重新申请内存
	if ( (int)(strlen(s)+1) != (this->size) )
	{
		delete []str;
		str = new char[strlen(s) + 1];	
		if( this->str == NULL )
			Error(outOfMemory);
	}

	strcpy(str, s);

	// 将其 size 值赋值为 s 的 size 值
	this->size = strlen(s) + 1;

	return *this;
}

// 关系运算符

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
int operator == (char * str, const String & s)	// C++ 串在左边的操作数
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

// 串拼接运算符

// ----------------------------------------------

// String + String
String String::operator + (const String & s) const
{
	
	// 在temp中建立一个长度为 len 的新串
	String temp;
	int len;

	//删除定义temp时产生的 NULL 串
	delete []temp.str;

	// 计算拼接后的串长度并为之申请内存
	len = size + s.size - 1; //只有一个NULL结尾

	temp.str = new char[len];
	if( temp.str == NULL )
		Error(outOfMemory);

	// 建立新串
	temp.size = len;
	strcpy(temp.str, str);		// 拷贝 str 到 temp;
	strcat(temp.str, s.str);	// 连接 s.str	
	return temp;				// 返回
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
		s.Error(outOfMemory); //友元函数只能访问数据成员，不能访问私有函数

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

// 从 Start 位置开始找首次出现的字符c
// 返回字符c所在的位置
int String::Find(char c, int start)const
{
	int ret;
	//判断 start 的有效性
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

// 返回字符c在串中的最后位置
int String::FindLast(char c) const
{
	int ret;
	char * p;
	// 用c++库函数 strchr。返回该字符在串中最后位置的指针
	p = strrchr(str, c);
	if (p != NULL)
		ret = int(p - str); // 计算下标
	else
		ret = -1;
	return ret;
}


// 返回从 index 开始共 count 个字符的子串
String String::Substr(int index, int count) const
{
	// 从 index 到串尾的字符个数
	int charsLeft = size - index - 1, i;

	// 建立子串temp;
	String *temp = new String;
	char *p, *q;

	// 若 index 越界，返回空串
	if (index >= size-1)
		return *temp;

	// 若 count > 剩下的字符，则只用剩下的字符
	if (count > charsLeft)
		count = charsLeft;

	if (index < 0 || count < 0)
		Error(indexError);

	// 删除定义temp时产生的空串
	delete[] temp->str;

	// 为子串申请动态内存
	temp->str = new char[count + 1];
	if( temp->str == NULL )
		Error(outOfMemory);

	// 从 str 中拷贝 count 个字符到 temp.str
	for (i = 0, p = temp->str, q = &(this->str[index]);   i < count;   i++)
		(*p++) = (*q++);

	// 用NULL结束该串
	*p = '\0';

	temp->size = count + 1;
	return *temp;
}

// 往 String 中插入另一个String
void String::Insert(const String & s, int index)
{
	// 检验index的有效性
	if (index < 0 || index >= size - 1 )
		Error(indexError);

	// 将原来的 this->str 寄存在 temp.str 中
	String temp;
	delete []temp.str;
	temp.str = new char[size];
	strcpy(temp.str, this->str);
	temp.size = this->size;

	// 获取剩下字符串
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
	
	// 截掉后半段字符
	this->str[index] = NULL;

	// 插入字符串
	strcat(this->str, s.str);
	strcat(this->str, p);
	size = len;	
}

void String::Insert(char * s, int index)
{
	// 检验 index 的有效性
	if (index < 0 || index >= int(size - 1))
		Error(indexError);
	// 将原来的 str 寄存在 temp 中
	String temp;
	delete []temp.str;
	temp.str = new char[size];
	strcpy(temp.str, str);
	temp.size = size;
		
	// 获取剩下字符串
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

	// 截掉后半段字符
	str[index] = NULL;

	// 插入字符串
	strcat(str, s);
	strcat(str, p);
	size = len;
}

// 删除子串
void String::Remove(int index, int count)
{
	// 检验 index,count 的有效性
	if (index < 0 || index >= int(size - 1) || count < 0)
		Error(indexError);

	// 如果 count 大于所剩下字符串个数，则按剩下的字符串个数算
	if (count > size - index - 1 )
		count = size - index - 1;
	
	// 获取剩下字符串
	char * p;
	int leftsize = size - index - 1;
	p = new char[leftsize];
	strcpy(p, str + index + count);
	
	// 截掉后半段字符
	str[index] = NULL;

	// q 寄存前半段字符
	char * q = new char[strlen(str) + 1];
	strcpy(q, str);
	
	int len;
	len = strlen(q) + strlen(p) + 1;
	delete []str;

	str = new char[len];
	if(str == NULL)
		Error(outOfMemory);

	// 重新组合字符串
	strcpy(str, q);
	strcat(str, p);	
	size = len;
}

// String 下标运算
char & String::operator[](int n)
{
	return str[n];
}

// String 的输入/ 输出
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
// 从流 istr 中读入一行文本
// 读入字符直到结束符
int String::ReadString(istream & istr, char delimiter )
{
	// 读入一行到tmp中
	char tmp[256];
	// 文件未结束，读入最多255个字符的一行
	if (istr.getline(tmp, 256, delimiter))
	{
		// 删除旧串并申请一个新串
		delete []str;
		size = strlen(tmp) + 1;

		str = new char[size];
		if(str == NULL)
			Error(outOfMemory);

		//拷贝 tmp，返回读入字符个数
		strcpy(str, tmp);
		return (int)size - 1;
	}
	else
		return -1; //文件结束时返回-1
}

// 其它函数
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


