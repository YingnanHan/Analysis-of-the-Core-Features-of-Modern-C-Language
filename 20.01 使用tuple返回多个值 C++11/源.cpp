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
	// std::tie(x, y) �� x y �����õķ�ʽ�󶨵� std::tuple<int&, int&>��
	std::tie(x, y) = return_multiple_values();
	return 0;
}