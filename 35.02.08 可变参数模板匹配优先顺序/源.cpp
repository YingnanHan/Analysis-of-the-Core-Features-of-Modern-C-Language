#include <iostream>

template<class... Args> void foo(Args... args)
{
	std::cout << "foo(Args... args)" << std::endl;
}

template<class T1, class... Args> void foo(T1 a1, Args... args)
{
	std::cout << "foo(T1 a1, Args... args)" << std::endl;
}

template<class T1, class T2> void foo(T1 a1, T2 a2)
{
	std::cout << "foo(T1 a1, T2 a2)" << std::endl;
}

int main()
{
	foo();
	foo(1, 2, 3);
	foo(1, 2);
}
