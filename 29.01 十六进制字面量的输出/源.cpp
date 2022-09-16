#include<iostream>

int main()
{
	double float_array[]{
		0x1.7p+2,
		0x1.f4p+9,
		0x1.df3b64p-4
	};
	for (auto elem : float_array)
	{
		std::cout << std::hexfloat << elem << " " << "=" << std::defaultfloat << elem << std::endl;
	}
	return 0;
}