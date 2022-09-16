#include <iostream>

template<class T, int N>
T PI = static_cast<T>(3.1415926535897932385L) * N;

int main()
{
	// 使用变量模板
	PI<float, 2> *= 5;
	std::cout << PI<float, 2> << std::endl;
}
