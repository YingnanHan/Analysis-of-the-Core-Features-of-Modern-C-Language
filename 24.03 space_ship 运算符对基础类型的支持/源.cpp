#include<iostream>
#include<iomanip>
#include<compare>

using namespace std;

enum Color
{
	red, //����
	orange,
	yellow,
	green,
};

int main()
{
	// �������͵Ĳ���
	std::cout << typeid(decltype(100 <=> 200)).name() << std::endl; //struct std::strong_ordering
	std::cout << typeid(decltype(100.0 <=> 200.0)).name() << std::endl; //struct std::partial_ordering
	// ��������ö�����͵Ĳ���
	std::cout << typeid(decltype(red <=> orange)).name() << std::endl; //struct std::strong_ordering
	// bool���͵Ĳ���
	std::cout << typeid(decltype(true <=> false)).name() << std::endl; //struct std::strong_ordering
	// ָ�����͵Ĳ���
	char arr1[5];
	char arr2[5];
	char* ptr = arr2;
	auto r = (ptr <=> arr1);
	std::cout << typeid(decltype(r)).name() << std::endl; //struct std::strong_ordering
	return 0;
}