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
	using Base::foo; // ʹ��using�ؼ��ֵ������ĺ���
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