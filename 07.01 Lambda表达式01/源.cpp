#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	auto foo = [x](int y)->int {return x * y; }; // [x]是捕获列表，他可以捕获当前函数作用域当中的变量
	cout << foo(x) << endl;
	return 0;
}