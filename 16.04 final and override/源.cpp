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
	virtual void log(const char*) const override final // ��д�����log���ҽ�ֹ���������̳�log
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
	void foo(int x) // �����Ȼ�ᱨ��
	{

	}
};

int main()
{
	return 0;
}