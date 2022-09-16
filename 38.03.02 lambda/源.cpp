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
	LambdaWarp x([](int a, int b) {
		std::cout << a + b << std::endl;
		});
	x(11, 7);
}
