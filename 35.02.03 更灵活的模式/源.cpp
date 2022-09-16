#include <iostream>

int add(int a, int b) { return a + b; };
int sub(int a, int b) { return a - b; };

template<class ...Args>
void foo(Args(*...args)(int, int))
{
	int tmp[] = { (std::cout << args(7, 11) << std::endl, 0) ... };
}

int main()
{
	foo(add, sub);
}
