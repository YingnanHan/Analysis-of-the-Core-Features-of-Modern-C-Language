#include<iostream>
#include<string>

using namespace std;

template<class... Args>
auto sum1(Args ...args)
{
	return (args + ...);
}

template<class... Args>
auto sum2(Args ...args)
{
	return (... + args);
}

int main()
{
	// std::cout << sum1(std::string("hello "), "c++ ", "world") << std::endl;	// ±àÒë´íÎó
	std::cout << sum2(std::string("hello "), "c++ ", "world") << std::endl;	// ±àÒë´íÎó
}
