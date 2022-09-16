#include<iostream>

using namespace std;

template<class T1, class T2>
void foo1(T1, T2) 
{

}

template<class T1, class T2>
struct foo
{
	foo(T1, T2) {}
};


int main()
{
	// 函数模板 OK
	foo1<int>(5, 6.8);
	// 类模板推导
	foo v1(5, 6.8);					// 编译成功
	// foo<> v2(5, 6.8);				// 编译错误 <> 确定不了实际类型
	// foo<int> v3(5, 6.8);			// 编译错误 不允许部分推导
	foo<int, double> v4(5, 6.8);	// 编译成功
	return 0;
}
