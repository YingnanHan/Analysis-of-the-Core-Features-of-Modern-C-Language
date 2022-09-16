#include<iostream>

using namespace std;

class Base
{
public:
	void foo(long&) = delete;
	void foo(int)
	{

	}
};

class Derived :public Base
{
public:
	using Base::foo;
	void foo(const char *)
	{

	}
};

int main()
{
	Derived d;
	d.foo("hello");
	d.foo(5);

	return 0;
}