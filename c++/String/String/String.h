
#ifndef _TSTACK_H
#define _TSTACK_H

class String
{
	
private:
	char * str; // ָ��̬����Ĵ���ָ��
	int size; // �����Ȱ���NULL�ַ�
	
	// ���󱨸溯��
	void Error(int errorType, int badIndex = 0)const;
public:
	
	// ���캯��
	String(char * s = "");		// ���캯������ʼ��
	String(const String & s);	// �������캯��

	// ��������
	~String(void);

	// ��ֵ�����
	// String = String, String = C + String
	String& operator = (const String & s);
	String& operator = (char * s);
	
	// ��ϵ�����

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
	
	// ��ƴ�������

	// String + String, String + C ++ String, C ++ String + String
	// String +=String, String +=C ++ String
	String operator + (const String & s)const;
	String operator + (char * s)const;
	friend String operator + (char * str, const String & s);
	void operator += (const String & s);
	void operator += (char * s);
	
	// �йش�����
	// �� Star tλ�ÿ�ʼ���״γ��ֵ��ַ� c
	int Find(char c, int start)const;

	// ���ַ� c ���һ�γ��ֵ�λ��
	int FindLast(char c)const;
	
	// ȡ�Ӵ�
	String Substr(int index, int count)const;

	// �� String �в�����һ�� String
	void Insert(const String & s, int index);

	//���� һ�� C++ ��
	void Insert(char * s, int index);

	// ɾ���Ӵ�
	void Remove(int index, int count);
	
	// String ���±�����
	char & operator[](int n);	
	
	// String ������/���
	friend ostream & operator << (ostream & ostr, const String & s);
	friend istream & operator >> (istream & ostr, String & s);
	
	// �����ַ�ֱ��������
	int ReadString(istream & is = cin, char delimiter = '\n');
	
	// ��������
	int Length(void)const;
	int IsEmpty(void)const;
	void Clear(void);
};

#endif
