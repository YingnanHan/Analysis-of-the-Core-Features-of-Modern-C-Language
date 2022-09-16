#include<iostream>

using namespace std;

class Base
{
public:
	virtual void some_func()
	{

	}
	virtual void fun(int x)
	{

	}
	virtual void bar() const
	{

	}
	void baz()
	{

	}
};


class Derived : public Base
{
public:
	virtual void sone_func() override // 报错
	{

	}
	virtual void fun(int &x) override //报错
	{

	}
	virtual void bar() override // 报错
	{

	}
	virtual void baz() override // baz() 并未在基类定义
	{

	}
};


int main()
{

	return 0;
}