#include<iostream>

using namespace std;

bool foo()
{
	return true;
}

int main()
{
	if (bool b = foo() ; b)
	{
		cout << boolalpha << "good! foo() = " << b << std::endl;
	}
	else
	{
		cout << boolalpha << "bad ! foo() = " << b << std::endl;
	}
}