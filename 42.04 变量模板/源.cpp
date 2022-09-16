#include <iostream>

template<class T>
constexpr T PI()
{
	return static_cast<T>(3.1415926535897932385);
}

int main()
{
	std::cout << PI<int>() << std::endl;
}
