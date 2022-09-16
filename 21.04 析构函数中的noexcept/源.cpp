#include<iostream>

struct M
{
	~M() noexcept(false)  // 默认情况下析构函数的noexcept属性是true
	{

	}
};

struct X
{

};

struct X1
{
	~X1()
	{

	}
};

struct X2
{
	~X2() noexcept(false)
	{

	}
};

struct X3
{
	M m;
};

#define PRINT_NOEXCEPT(x) std::cout<<#x<<" = "<<x<<std::endl

int main()
{
	X* x = new X;
	X1* x1 = new X1;
	X2* x2 = new X2;
	X3* x3 = new X3;

	std::cout << std::boolalpha;
	PRINT_NOEXCEPT(noexcept(x->~X()));
	PRINT_NOEXCEPT(noexcept(x1->~X1()));
	PRINT_NOEXCEPT(noexcept(x2->~X2()));
	PRINT_NOEXCEPT(noexcept(x3->~X3()));
	return 0;
}