// 27.07 consexxpr and lambda expression

#include<iostream>

using namespace std;

constexpr int foo()
{
	return []() {return 58; }(); // []() {return 58; }是lambda表达式对象，寄一个函数对象,加了()才是函数
}

int main()
{
	auto get_size = [](int i) {return i * 2; };
	char buffer1[foo()] = { 0 };
	char buffer2[get_size(5)] = { 0 };
	return 0;
}
