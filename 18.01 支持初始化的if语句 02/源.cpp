#include<iostream>

using namespace std;

bool foo()
{
	return true;
}

int main()
{
	bool b = foo();
	if (b)
	{
		cout << boolalpha << "good foo() = " << b << std::endl;
	}
}