#include<iostream>

using namespace std;

struct Legacy
{
	int n;
	bool operator==(const Legacy& rhs)const
	{
		return n == rhs.n;
	}
	bool operator<(const Legacy& rhs)const
	{
		return n < rhs.n;
	}
};

struct ThreeWay
{
	Legacy m;
	std::strong_ordering operator<=>(const ThreeWay& rhs) const
	{
		if (m < rhs.m)
		{
			return std::strong_ordering::less;
		}
		if (m == rhs.m)
		{
			return std::strong_ordering::equal;
		}
		return std::strong_ordering::greater;
	}
};


int main()
{
	ThreeWay t1(Legacy(1)); // 这里涉及两次隐式类型转换
	ThreeWay t2(Legacy(1));
	int res=(t1 <=> t2 == 0);
	cout <<boolalpha<< res;
	return 0;
}