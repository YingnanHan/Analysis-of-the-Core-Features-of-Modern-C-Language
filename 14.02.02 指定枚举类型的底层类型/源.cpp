#include<iostream>

using namespace std;

enum E : unsigned int
{
	e1 = 1,
	e2 = 2,
	e3 = 3
};

int main()
{
	bool b = E::e1 < E::e3;
	cout << std::boolalpha << b << std::endl;

	return 0;
}