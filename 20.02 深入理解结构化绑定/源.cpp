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
	const auto [x, y] = bt; // 拷贝版本的结构化绑定，无法通过绑定后的成员修改原来的成员

	cout << "&bt.a = " << &bt.a << " &x = " << &x << endl;
	cout << "&bt.b = " << &bt.b << " &y = " << &y << endl;
	cout << "std::is_same_v<const int, decltype(x)> = " << std::is_same_v<const int, decltype(x)> << std::endl;
	cout << "std::is_same_v<const string, decltype(y)> = " << std::is_same_v<const string, decltype(y)> << std::endl;

	return 0;
}