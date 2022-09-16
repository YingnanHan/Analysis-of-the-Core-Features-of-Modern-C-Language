#include <iostream>

template<class T>
struct LambdaWarp
{
	LambdaWarp(T t) : func(t) {}
	template<class ... Args>
	void operator() (Args&& ... arg)
	{
		func(std::forward<Args>(arg)...);
	}
	T func;
};

int main()
{
	auto l = [](int a, int b) {
		std::cout << a + b << std::endl;
	};

	LambdaWarp<decltype(l)> x(l);
	x(11, 7);
}
