#include <iostream>

template<class T>
T sum(T arg) // ¶¨Òåµİ¹é»ù
{
	return arg;
}

template<class T1, class... Args>
auto sum(T1 arg1, Args ...args)
{
	return arg1 + sum(args...);
}

int main()
{
	std::cout << sum(1, 5.0, 11.7) << std::endl;
}
