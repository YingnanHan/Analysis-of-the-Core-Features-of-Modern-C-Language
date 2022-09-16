#include<tuple>
#include<iostream>

using namespace std;

int main()
{

	auto t = std::make_tuple<int, string>(42, "Hello World!");
	// auto [x] = t; // 错误，无法忽视其中任何一个子元素
	int x;
	string y;
	std::tie(x, std::ignore) = t;
	std::tie(std::ignore, y) = t; //std::tie(x, std::ignore) = t;不可以重复声明在同一个位置
	cout << x << " " << y;

	return 0;
}