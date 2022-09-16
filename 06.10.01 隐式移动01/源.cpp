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
	X r = f(X{}); // 编译器会对程序进行优化，这里会调用右值移动语义复制构造函数
}