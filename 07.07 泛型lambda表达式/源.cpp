#include<iostream>

using namespace std;

int main()
{
	auto foo = [](auto a)
	{
		return a;
	};
	int three = foo(3);
	const char* hello = foo("hello");

	return 0;
}