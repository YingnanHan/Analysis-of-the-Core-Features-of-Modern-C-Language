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
	virtual void sone_func() override // ����
	{

	}
	virtual void fun(int &x) override //����
	{

	}
	virtual void bar() override // ����
	{

	}
	virtual void baz() override // baz() ��δ�ڻ��ඨ��
	{

	}
};


int main()
{

	return 0;
}