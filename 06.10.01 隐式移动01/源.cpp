#include<iostream>

using namespace std;

struct X
{
	X() = default;
	X(const X&) = default;
	X(X&&)
	{
		cout << "move ctor" << endl;
	}
};

X f(X x)
{
	return x;
}

int main()
{
	X r = f(X{}); // ��������Գ�������Ż�������������ֵ�ƶ����帴�ƹ��캯��
}