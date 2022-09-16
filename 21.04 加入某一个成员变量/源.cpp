#include<iostream>
// 编译器默认实现的一些个函数中是含有noexcept的
struct M
{
	M()
	{

	}
	M(const M&)
	{

	}
	M(M&&)noexcept
	{

	}
	M operator=(const M&)noexcept
	{
		return *this;
	}
	M operator=(M&&)
	{
		return *this;
	}
};

#define PRINT_NOEXCEPT(x) std::cout<<#x<<" = "<<x<<std::endl;

int main()
{
	M x;
	std::cout << std::boolalpha;

	PRINT_NOEXCEPT(noexcept(M()));
	PRINT_NOEXCEPT(noexcept(M(x)));
	PRINT_NOEXCEPT(noexcept(M(std::move(x))));
	PRINT_NOEXCEPT(noexcept(x.operator=(x)));
	PRINT_NOEXCEPT(noexcept(x.operator=(std::move(x))));

	return 0;
}