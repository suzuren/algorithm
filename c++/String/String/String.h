
#ifndef _TSTACK_H
#define _TSTACK_H

class String
{
	
private:
	char * str; // 指向动态申请的串的指针
	int size; // 串长度包括NULL字符
	
	// 错误报告函数
	void Error(int errorType, int badIndex = 0)const;
public:
	
	// 构造函数
	String(char * s = "");		// 构造函数，初始化
	String(const String & s);	// 拷贝构造函数

	// 析构函数
	~String(void);

	// 赋值运算符
	// String = String, String = C + String
	String& operator = (const String & s);
	String& operator = (char * s);
	
	// 关系运算符

	// String == String, String == C ++ String, C ++ String == String
	int operator == (const String & s)const;
	int operator == (char * s)const;
	friend int operator == (char * str, const String& s);
	
	// String != String, String != C ++ String, C ++ String != String
	int operator != (const String & s)const;
	int operator != (char * s)const;
	friend int operator != (char * str, const String& s);
	
	// String < String, String < C ++ String, C ++ String < String
	int operator < (const String & s)const;
	int operator < (char * s)const;
	friend int operator < (char * str, const String & s);

	// String <= String, String <= C ++ String, C ++ String <= String
	int operator <= (const String & s)const;
	int operator <= (char * s)const;
	friend int operator <= (char * str, const String & s);
	
	// String > String, String > C ++ String, C ++ String > String
	int operator > (const String & s)const;
	int operator > (char * s)const;
	friend int operator > (char * str, const String & s);

	// String >= String, String >= C ++ String, C ++ String >= String
	int operator >= (const String & s)const;
	int operator >= (char * s)const;
	friend int operator >= (char * str, const String & s);
	
	// 串拼接运算符

	// String + String, String + C ++ String, C ++ String + String
	// String +=String, String +=C ++ String
	String operator + (const String & s)const;
	String operator + (char * s)const;
	friend String operator + (char * str, const String & s);
	void operator += (const String & s);
	void operator += (char * s);
	
	// 有关串函数
	// 从 Star t位置开始找首次出现的字符 c
	int Find(char c, int start)const;

	// 找字符 c 最后一次出现的位置
	int FindLast(char c)const;
	
	// 取子串
	String Substr(int index, int count)const;

	// 往 String 中插入另一个 String
	void Insert(const String & s, int index);

	//插入 一个 C++ 串
	void Insert(char * s, int index);

	// 删除子串
	void Remove(int index, int count);
	
	// String 的下标运算
	char & operator[](int n);	
	
	// String 的输入/输出
	friend ostream & operator << (ostream & ostr, const String & s);
	friend istream & operator >> (istream & ostr, String & s);
	
	// 读入字符直到结束符
	int ReadString(istream & is = cin, char delimiter = '\n');
	
	// 其它函数
	int Length(void)const;
	int IsEmpty(void)const;
	void Clear(void);
};

#endif
