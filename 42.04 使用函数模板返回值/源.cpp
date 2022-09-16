#include <iostream>

template<class T>
constexpr T PI = static_cast<T>(3.1415926535897932385L);

int main()
{
	std::cout << PI<float> << std::endl;
}
