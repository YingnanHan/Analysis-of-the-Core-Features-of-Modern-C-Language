#include<iostream>
#include<tuple>

using namespace std;

std::tuple<int, int> return_multiple_values()
{
	return make_tuple<int, int>(11, 7);
}

int main()
{
	int x = 0;
	int y = 0;
	// std::tie(x, y) 将 x y 以引用的方式绑定到 std::tuple<int&, int&>上
	std::tie(x, y) = return_multiple_values();
	return 0;
}