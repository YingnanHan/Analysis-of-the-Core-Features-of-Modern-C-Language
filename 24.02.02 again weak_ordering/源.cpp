#include<iostream>
#include<compare>
#include<string>

using namespace std;

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

struct B
{
	int a;
	int b;
	auto operator<=>(const B&)const = default;
};

struct D : public B
{
	CIString c{ static_cast<const char*>(" ") };
	auto operator<=> (const D&) const = default;
};


int main()
{
	D w1, w2;
	cout << typeid(decltype(w1 <=> w2)).name();
	return 0;
}