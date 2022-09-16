#include<iostream>

class Base
{
public:
	virtual void log(const char*)const
	{

	}
	virtual void foo(int x)
	{

	}
};

class BaseWithFileLog : public Base
{
public:
	virtual void log(const char*) const override final // 重写基类的log并且禁止后面的子类继承log
	{

	}
};

class Derived : public BaseWithFileLog
{
public:
	void foo(int x)
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