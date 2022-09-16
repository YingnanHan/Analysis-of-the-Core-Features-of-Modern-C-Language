#include <iostream>
void f1(int(&)[])
{
	std::cout << "call f(int(&)[])";
}
void f2(int(&)[1])
{
	std::cout << "call f(int(&)[1])";
}
int arr[1];

int main()
{
	f1(arr);
	f2(arr);
}
