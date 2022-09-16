#include<iostream>

using namespace std;
using namespace rel_ops;

// ��Сд�����е��ַ����ȽϺ���
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

	bool r = s1 >= s2; // �����������Զ����ɵ�
	cout << boolalpha << r;
	
	return 0;
}