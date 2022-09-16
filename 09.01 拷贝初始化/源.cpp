#include<iostream>

using namespace std;

struct C
{
	// explicit C(int a) // 关闭掉隐式初始化，让隐式初始化失效
	C(int a) 
	{

	}
};

void foo(C c)
{

}

C bar()
{
	return static_cast<C>(5); // 强制显式转换
}

/*
C bar()
{
	return 5; // 强制显式转换
}
*/

int main()
{
	foo(8);		// 拷贝初始化
	C c = bar();	// 拷贝初始化
	return 0;
}