#include<iostream>
// 编译器默认实现的一些个函数中是含有noexcept的
struct X
{

};

#define PRINT_NOEXCEPT(x) std::cout<<#x<<" = "<<x<<std::endl;

int main()
{
	X x;
	std::cout << std::boolalpha;

	PRINT_NOEXCEPT(noexcept(X()));
	PRINT_NOEXCEPT(noexcept(X(x)));
	PRINT_NOEXCEPT(noexcept(X(std::move(x))));
	PRINT_NOEXCEPT(noexcept(x.operator=(x)));
	PRINT_NOEXCEPT(noexcept(x.operator=(std::move(x))));

	return 0;
}