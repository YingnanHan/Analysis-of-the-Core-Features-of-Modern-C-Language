#include<iostream>
#include<compare>
#include<string>

using namespace std;

// 大小写不敏感的字符串比较函数
int ci_compare(const char *s1, const char *s2)
{
	while (tolower(*s1) == tolower(*s2))
	{
		if (*s1++ == '\0')
		{
			return 0;
		}
	}
	return tolower(*s1) - tolower(*--s2);
}

class CIString
{
public:
	CIString(const char* s) : str_s(s)
	{

	}
	weak_ordering operator<=>(const CIString& b)const
	{
		return ci_compare(str_s.c_str(), b.str_s.c_str()) <=> 0;
	}
private:
	string str_s;
};

int main()
{
	CIString s1("HELLO");
	CIString s2("hello"); // weak_ordering表达的是不可替换性

	cout <<std::boolalpha<< (s1 <=> s2 == 0) << endl; // s1 <=> s2 == 0 是一个整体一般加上括号，防止发生歧义

	return 0;
}