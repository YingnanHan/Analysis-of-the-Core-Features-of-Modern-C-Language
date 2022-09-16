#include<iostream>

using namespace std;

int main()
{
	int x = 9;
	int y = 9;

	auto foo = [=, this] {return x + y; };
	cout << foo();

	return 0;
}