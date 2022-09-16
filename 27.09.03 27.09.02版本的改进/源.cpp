#include<iostream>

template<typename T>
bool is_same_value(T a, T b)
{
	if constexpr (std::is_same<T, double>::value)
	{
		if (std::abs(a - b) < 0.001)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return a == b;
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