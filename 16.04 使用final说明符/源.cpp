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
	void foo(int x) final // ������Derived�����������дfoo����
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