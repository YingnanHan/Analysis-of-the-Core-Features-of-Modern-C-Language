#include<iostream>
#include<string>

using namespace std;

template<auto N>
void f()
{
	cout << N << endl;
}

int main()
{
	f<5>();
	f<'c'>();
	return 0;
}