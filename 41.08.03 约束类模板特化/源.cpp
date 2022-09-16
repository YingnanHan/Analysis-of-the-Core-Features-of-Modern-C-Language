#include <iostream>

template<typename T> 
struct S 
{
	S() 
	{
		std::cout << "1.call S()" << std::endl;
	}

	S() requires requires(T t)
	{ 
		t.f();
	} 
	{
		std::cout << "2.call S() requires requires(T t)" << std::endl;
	}
};
struct Arg 
{ 
	void f();
};

int main()
{
	S<int> s1;
	S<Arg> s2;
}