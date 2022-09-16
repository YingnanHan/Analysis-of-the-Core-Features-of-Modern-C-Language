#include<iostream>
#include<compare>

using namespace std;

struct B
{
	int a;
	long b;
	auto operator<=> (const B&) const = default;// 默认情况下是不存在显示的spaceship运算符的，需要显式声明
};

struct D : B
{
	short c;
	auto operator<=> (const D&) const = default;
};

int main()
{
	D x1, x2;
	std::cout << typeid(decltype(x1 <=> x2)).name() << std::endl; // 由于都是成员基础类型，所以输出结果为strong_ordering
	return 0;
}