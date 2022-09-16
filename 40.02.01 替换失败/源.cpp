#include<iostream>

using namespace std;

template<typename T>
T foo(T& t)
{
	T tt(t);
	return tt;
}

void foo(...)
{
	// 用来兜底
}

class bar
{
public:
	bar()
	{

	}
	bar(bar&&)
	{

	}
};

int main()
{
	double x = 7.0;
	foo(x);
	foo(5);
	bar b;
	foo(b); // 这里无法生成一个隐式的复制构造函数