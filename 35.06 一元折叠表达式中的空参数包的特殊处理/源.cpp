#include <iostream>

template<typename... Args>
auto andop(Args... args)
{
	return (args || ...);
}

int main()
{
	std::cout << std::boolalpha << andop();
}
