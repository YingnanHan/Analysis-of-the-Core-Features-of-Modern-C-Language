#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	int y = 8;
	auto foo = [x,y] {return x + y; }; // [x]是捕获列表，他可以捕获当前函数作用域当中的变量
	cout << foo() << endl;
	return 0;
}