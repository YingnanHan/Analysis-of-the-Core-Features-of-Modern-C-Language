#include<iostream>
#include<iomanip>
#include<compare>

using namespace std;

enum Color
{
	red, //整数
	orange,
	yellow,
	green,
};

int main()
{
	// 算数类型的操作
	std::cout << typeid(decltype(100 <=> 200)).name() << std::endl; //struct std::strong_ordering
	std::cout << typeid(decltype(100.0 <=> 200.0)).name() << std::endl; //struct std::partial_ordering
	// 无作用域枚举类型的操作
	std::cout << typeid(decltype(red <=> orange)).name() << std::endl; //struct std::strong_ordering
	// bool类型的操作
	std::cout << typeid(decltype(true <=> false)).name() << std::endl; //struct std::strong_ordering
	// 指针类型的操作
	char arr1[5];
	char arr2[5];
	char* ptr = arr2;
	auto r = (ptr <=> arr1);
	std::cout << typeid(decltype(r)).name() << std::endl; //struct std::strong_ordering
	return 0;
}