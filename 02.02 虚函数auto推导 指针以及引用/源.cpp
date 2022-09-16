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
	Base* d = new Derived(); // ʹ�ö�̬
	auto b = *d; // ����ǰ���ֵ���ݣ���ôauto���Ƶ���ʱ���ǰ��յȺ���ඨ��d������������ʵ�����͵�
	b.f();

	auto& e = *d; // ����ǰ������ô��ݣ���ôauto���Ƶ���ʱ���ǰ��յȺ��Ҳඨ��d������������ʵ�����͵�
	e.f();

	return 0;
}