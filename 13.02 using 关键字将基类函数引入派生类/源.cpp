#include<iostream>

using namespace std;

class Base
{
public:
	void foo(int)
	{

	}
};

class Derived : public Base
{
public:
	using Base::foo; // 使用using关键字导入基类的函数
	void foo(char*)
	{

	}
};

int main()
{
	Derived d;
	d.foo(5);
	return 0;
}