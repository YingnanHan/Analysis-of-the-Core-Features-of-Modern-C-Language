#include<tuple>
#include<iostream>

using namespace std;

int main()
{

	auto t = std::make_tuple<int, string>(42, "Hello World!");
	// auto [x] = t; // �����޷����������κ�һ����Ԫ��
	int x;
	string y;
	std::tie(x, std::ignore) = t;
	std::tie(std::ignore, y) = t; //std::tie(x, std::ignore) = t;�������ظ�������ͬһ��λ��
	cout << x << " " << y;

	return 0;
}