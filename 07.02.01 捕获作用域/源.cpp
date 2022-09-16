#include<iostream>

using namespace std;

int x = 1;

int main()
{
	int y = 2;
	static int z = 3;
	auto foo = [y]{return x + y + z; }; // [x]是捕获列表，他可以捕获当前函数作用域当中的变量
	cout << foo() << endl;
	return 0;
}