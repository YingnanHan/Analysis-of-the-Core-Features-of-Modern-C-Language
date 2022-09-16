#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	int y = 8;
	auto foo = [=] // [=] 表示捕获所有变量的值
	{
		return x * y;
	};
	cout << foo() << endl;

	return 0;
}