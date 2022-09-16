#include<iostream>

class Base
{
public:
	virtual void foo(int x)
	{

	}
};

class Derived : public Base
{
public:
	void foo(int x) final // 不允许Derived的子类继续重写foo函数
	{

	}
};

class Derived2 : public Derived
{
public:
	void foo(int x) // 这里必然会报错
	{

	}
};

int main()
{
	return 0;
}