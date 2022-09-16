#include<iostream>

using namespace std;

/*
void bar1()
{
	int x = 5;
	int y = 8;
	auto foo = [x, y] { // 默认情况下如不加引用，Lambda表达式内部修改变量会编译不通过,这里捕获的是常量
		x += 1;
		y += 2;
		return x * y;
	};
	cout << foo() << endl;
}
*/

void bar2()
{
	int x = 5;
	int y = 8;
	auto foo = [&x, &y] { // 默认情况下如不加引用，Lambda表达式内部修改变量会编译不通过
		x += 1;
		y += 2;
		return x * y;
	};
	cout << foo() << endl;
}

void bar3()
{
	int x = 5;
	int y = 8;
	auto foo = [x, y] () mutable { // 移除lambda表达式的常量特性，这里由于lambda表达式存在说明符，所以必须加上()
		x += 1;
		y += 2;
		return x * y;
	};
	cout << foo() << endl;
}

int main()
{
	// bar1();
	bar2();
	bar3();
	return 0;
}