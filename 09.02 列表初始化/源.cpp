#include<iostream>

using namespace std;

struct C
{
	C(std::string a, int b)
	{

	}
	C(int a)
	{

	}
};

void foo(C)
{

}

C bar()
{
	return { "hello world", 5 }; //使用列表初始化隐式转换
}

int main()
{
	int x = { 5 };		// 拷贝初始化
	int x1(8);			// 直接初始化
	C x2 = { 4 };		// 拷贝初始化
	C x3(2);			// 直接初始化
	foo((8));			// 拷贝初始化
	foo( { "hello world", 8 } );		// 拷贝初始化
	C x4 = bar();		// 拷贝初始化
	C* x5 = new C("hi", 42);			// 直接初始化

	return 0;
}