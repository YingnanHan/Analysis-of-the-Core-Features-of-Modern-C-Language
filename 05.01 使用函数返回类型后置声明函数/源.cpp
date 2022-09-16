#include<iostream>

using namespace std;

int bar_impl(int x)
{
	return x;
}

auto foo2() -> int(*) (int) // 使用函数指针 表示返回一个函数指针类型，参数与返回值类型均为int
// 函数指针的一般声明形式为 <返回值类型>(*<函数指针名>)(<参数列表>) 做返回值的时候<函数指针名>被忽略
{
	return bar_impl;
}

int main()
{
	auto func = foo2();
	cout << func(50);

	return 0;
}