#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	int y = 8;
	auto foo = [x, &y]() mutable
	{
		x += 1;
		y += 2;
		cout << "lambda x = " << x << ", y = " << y << endl;
		return x * y;
	};
	x = 9;
	y = 20;
	foo(); // 捕获值传递的参数会一直延续最初定义lambda表达式时候的x的值
	return 0;
}