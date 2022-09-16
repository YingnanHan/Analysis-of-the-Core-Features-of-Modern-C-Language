#include<iostream>

using namespace std;
using namespace rel_ops;

// 大小写不敏感的字符串比较函数
int ci_compare(const char* s1, const char* s2)
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

class CIString2
{
public:
	CIString2(const char* s) : str_(s)
	{

	}
	bool operator<(const CIString2& b)const
	{
		return ci_compare(str_.c_str(), b.str_.c_str());
	}
private:
	string str_;
};

int main()
{
	CIString2 s1 = "hello";
	CIString2 s2 = "world";

	bool r = s1 >= s2; // 这个运算符是自动生成的
	cout << boolalpha << r;
	
	return 0;
}