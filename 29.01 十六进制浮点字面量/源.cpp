#include<iostream>

int main()
{
	double float_array[] = {5.875, 1000, 0.117};
	for (auto elem : float_array)
	{
		std::cout << std::hexfloat << elem << " = " << std::defaultfloat << elem << std::endl;
	}
	return 0;
}