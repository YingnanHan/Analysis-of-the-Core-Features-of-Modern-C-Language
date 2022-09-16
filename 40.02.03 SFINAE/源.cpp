#include<iostream>

using namespace std;

template<int I>
void foo(char(*)[I % 2 == 0] = 0)
{
	cout << "I % 2 == 0" << endl;
}

template<int I>
void foo(char(*)[I % 2 == 1] = 0)
{
	cout << "I % 2 == 1" << endl;
}

int main()
{
	char a[1] = {8};
	foo<1>(&a);
	foo<2>(&a);
	foo<3>(&a);
}