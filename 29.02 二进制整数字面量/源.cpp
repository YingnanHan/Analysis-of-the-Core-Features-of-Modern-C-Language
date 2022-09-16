#include<iostream>

using namespace std;

int main()
{
	auto x = 0b11001101L + 0xcd1 + 077LL + 42;
	std::cout << "x = " << x << ", sizeof(x) = " << sizeof(x) << std::endl;
	return 0;
}