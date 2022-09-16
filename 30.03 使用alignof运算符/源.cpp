#include<iostream>

using namespace std;

int main()
{
	// alignof运算符用于获得运算符对齐长度，但是，他不可以获得使用alignas修改过的对齐长度
	// 如果需要获得使用alignas修改过的对齐长度，要是用MSVC中的__alignof
	auto x1 = alignof(int);
	auto x2 = alignof(void(*)());
	// C++ 不支持以下用法
	int a = 0;
	// auto x3 = alignof(a); // 不支持
	auto x3 = __alignof(a);  // 支持
	// 只有在默认对齐的情况下，下面的语句才起作用
	auto x4 = alignof(decltype(a));
	return 0;
}