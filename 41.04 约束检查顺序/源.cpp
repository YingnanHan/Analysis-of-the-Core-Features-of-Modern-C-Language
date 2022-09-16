#include<iostream>

using namespace std;

template <class C>
concept ConstType = std::is_const_v<C>;

template <class C>
concept IntegralType = std::is_integral_v<C>;

template <ConstType T>requires std::is_pointer_v<T>
void foo(IntegralType auto) requires std::is_same_v<T, char* const> 
{

}

int main()
{
	foo<int>(1.5);
	foo<const int>(1.5);
	foo<int* const>(1.5);
	foo<int* const>(1);
	foo<char* const>(1);
}