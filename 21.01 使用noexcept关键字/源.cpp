#include<iostream>

using namespace std;

struct X
{
	int f() const noexcept
	{
		return 58;
	}
};

int foo() noexcept
{
	return 42;
}

int main()
{
	X x;
	cout << x.f() << " "<<foo() << endl;
	cout << endl;
}