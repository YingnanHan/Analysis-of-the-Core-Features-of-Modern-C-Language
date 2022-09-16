#include <iostream>

template<class T, std::size_t N>
struct MyCountOf
{
	MyCountOf(T(&)[N]) {}
	std::size_t value = N;
};

int main()
{
	MyCountOf c("hello"); // T N都是由编译器来进行推导的
	std::cout << c.value << std::endl;
}
