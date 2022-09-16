#include<iostream>

template<typename T>
bool is_same_value(T a, T b)
{
	return a == b;
}

template<>
bool is_same_value(double a, double b)
{
	if (std::abs(a - b) < 0.0001)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	double x = 0.1 + 0.1 + 0.1 - 0.3;
	std::cout << std::boolalpha;
	std::cout << "is_same_value(5,5):" << is_same_value(5, 5) << std::endl;
	std::cout << "x == 0.0" << (x == 0.0) << std::endl;;
	std::cout << "is_same_value(x,0.):" << is_same_value(x, 0.0) << std::endl;
}