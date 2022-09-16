#include<iostream>

using namespace std;

class Base
{
public:
	virtual void f()
	{
		cout << "Base::f()" << endl;
	}
};

class Derived :public Base
{
public:
	virtual void f()
	{
		cout << "Derived::f()" << endl;
	}
};

int main()
{
	Base* d = new Derived(); // 使用多态
	auto b = *d; // 如果是按照值传递，那么auto在推导的时候是按照等号左侧定义d的类型来决定实际类型的
	b.f();

	auto& e = *d; // 如果是按照引用传递，那么auto在推导的时候是按照等号右侧定义d的类型来决定实际类型的
	e.f();

	return 0;
}