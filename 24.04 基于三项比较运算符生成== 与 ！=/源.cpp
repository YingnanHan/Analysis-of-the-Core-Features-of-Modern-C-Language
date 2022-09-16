#include<iostream>

using namespace std;

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

class CIString
{
public:
	CIString(const char* s) : str_(s)
	{

	}

	bool operator<(const CIString& b)const
	{
		return ci_compare(str_.c_str(), b.str_.c_str()) < 0;
	}

	bool operator==(const CIString& b)const
	{
		return ci_compare(str_.c_str(), b.str_.c_str()) == 0;
	}

	std::weak_ordering operator<=>(const CIString& b) const // ��ΪЧ������ != == ��Ҫ�Լ�����
	{
		return ci_compare(str_.c_str(), b.str_.c_str()) <=> 0;
	}

private:
	string str_;
};

int main()
{
	CIString s1 = "hello";
	CIString s2 = "world";

	bool r = s1 == s2; // ����������std::weak_ordering operator<=>(const CIString& b) const������Զ����ɵ�
	cout << boolalpha << r << endl;;
	r = s1 != s2; // ����������std::weak_ordering operator<=>(const CIString& b) const������Զ����ɵ�
	cout << boolalpha << r;
	return 0;
}