

#include "stdafx.h"


int main(int argc, int argv[])
{
	String s1("1234");

	String *s2 = new String;

	String s3("liangkaichan");
					
	*s2=s1;			// String& String::operator = (const String & s);

	if(*s2==s1)		// int operator == (const String & s)const;
		cout<<"0: s2 == s1"<<endl;
	else
		cout<<"0: s2 != s1"<<endl;

	*s2="suzuren";	// String& String::operator = (char * s);

	char t[]="suzuren";
	if(*s2==t)		// int operator == (char * s)const;
		cout<<"1: s2 == t"<<endl;
	else
		cout<<"1: s2 != t"<<endl;

	if(t==*s2)		// 	friend int operator == (char * str, const String& s);
		cout<<"2: t  == s2"<<endl;
	else
		cout<<"2: t  != s2"<<endl;

	if(t<=*s2)		// friend int operator <= (char * str, const String & s);
		cout<<"3: t  <= s2"<<endl;
	else
		cout<<"3: t  >  s2"<<endl;

	cout<<"1: s1 = "<< s1  <<endl;
	cout<<"1: s2 = "<< *s2 <<endl;
	cout<<"1: s3 = "<< s3  <<endl;


	s1+=s3;			// void String::operator += (const String & s)

	s3+=t;			// void String::operator += (char * s)

	*s2=(*s2)+s1;	// String String::operator + (const String & s) const;
					// String& String::operator = (const String & s);

	cout<<"2: s1 = "<< s1  <<endl;
	cout<<"2: s2 = "<< *s2 <<endl;
	cout<<"2: s3 = "<< s3  <<endl;

	int pos=0;
	pos = s1.Find('3',0);
	cout<<"Find s1 pos: "<< pos <<endl; // 从 0 开始数

	pos = s1.FindLast('i');
	cout<<"Find Last s1 pos: "<< pos <<endl; // 从 0 开始数

	*s2 = s2->Substr(3, 3);
	cout<<"Substr s2 = "<< *s2 <<endl;

	s3.Insert(*s2, 3);
	cout<<"Insert s3 = "<< s3  <<endl;

	char p[]="123";
	s2->Insert(p, 1);
	cout<<"Insert *s2 = "<< *s2  <<endl;

	s3.Remove(3, 5);
	cout<<"Insert s3 = "<< s3  <<endl;
	
	String *s4 = new String;
	cin>>*s4;
	cout<<" cin>>s4 = "<< *s4  <<endl;
	
	String *s5 = new String;
	s5->ReadString(cin, '\n');
	cout<<" cin>>*s5 = "<< *s5  <<endl;

	return 0;
}

