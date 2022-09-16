#include <iostream>

template<class ...Args> void foo(Args ...args)
{
	std::cout << "foo sizeof...(args) = " << sizeof...(args) << std::endl;
}

template<class ...Args>
class bar
{
public:
	bar() {
		std::cout << "bar sizeof...(Args) = " << sizeof...(Args) << std::endl;
	}
};

int main()
{
	foo();
	foo(1, 2, 3);

	bar<> b1;
	bar<int, double> b2;
}
