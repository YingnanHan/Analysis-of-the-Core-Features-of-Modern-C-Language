#include <iostream>

template<typename T> concept C = true; // 对模板函数T并没有限制

template<typename T> 
struct X 
{
	X() { std::cout << "1.template<typename T> struct X" << std::endl; }
};

template<typename T> 
struct X<T*> 
{
	X() 
	{ 
		std::cout << "2.template<typename T> struct X<T*>" << std::endl;
	}
};

template<C T> 
struct X<T> 
{
	X() 
	{ 
		std::cout << "3.template<C T> struct X<T>" << std::endl;
	}
};

int main()
{
	X<int*> s1;
	X<int> s2;
}
