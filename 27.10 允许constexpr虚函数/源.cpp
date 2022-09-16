#include<iostream>

struct X
{
	constexpr virtual int f() const // 对于这样的虚函数f() 调用它的时候在优化的过程中 y = f() 会被优化为 y = 0
	{
		return 0;
	}
};

int main()
{
	X x;
	int u = x.f();
}