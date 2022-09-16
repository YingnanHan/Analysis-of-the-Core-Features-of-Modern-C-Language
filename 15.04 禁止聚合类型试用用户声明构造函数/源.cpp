#include<iostream>

struct X
{
	X() = default;
};

struct Y
{
	Y() = delete;
};

int main()
{
	std::cout << std::boolalpha << "std::is_aggregate_v<X> : " << std::is_aggregate_v<X> << std::endl;
	std::cout << std::boolalpha << "std::is_aggregate_v<Y> : " << std::is_aggregate_v<Y> << std::endl;
	return 0;
}