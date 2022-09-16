#include<iostream>

using namespace std;

int main()
{

	int x = 5;
	int y = 8;
	auto foo = [=]
	{
		return x * y;
	};
	int z = foo();
	cout << z;

	return 0;
}