#include<iostream>
#include<tuple>
#include<string>
#include<vector>

using namespace std;

struct BindTest
{
	int a = 42;
	string b = "Hello structed binding!";
};

int main()
{
	BindTest bt;
	auto &[x, y] = bt; // 引用的结构化绑定版本

	cout << "&bt.a = " << &bt.a << " &x = " << &x << endl;
	cout << "&bt.b = " << &bt.b << " &y = " << &y << endl;
	cout << "std::is_same_v<const int, decltype(x)> = " << std::is_same_v<const int, decltype(x)> << std::endl;
	cout << "std::is_same_v<const string, decltype(y)> = " << std::is_same_v<const string, decltype(y)> << std::endl;

	cout << "-----------------" << std::endl;
	cout << bt.a << " " << bt.b << endl;
	x = 100;
	y = "Hello World!";
	cout << "-----------------" << std::endl;
	cout << bt.a << " " << bt.b << endl;

	return 0;
}