#include <iostream>

template<typename T> 
concept C = requires (T t) 
{ 
	t.f(); 
};

template<typename T>
struct S
{
	S()
	{
		std::cout << "1.template<typename T> struct S" << std::endl;
	}
};

template<C T> 
struct S<T> 
{
	S() 
	{
		std::cout << "2.template<C T> struct S<T>" << std::endl;
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