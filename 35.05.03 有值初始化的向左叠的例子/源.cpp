#include <iostream>
#include <string>

template<class ...Args>
void print(Args ...args)
{
	(std::cout << ... << args) << std::endl;
}

int main()
{
	print(std::string("hello "), "c++ ", "world");
}
