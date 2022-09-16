#include<iostream>

using namespace std;

template<class T1, class T2>
auto sum(T1 s1, T2 s2)
{
	return s1 + s2;
}

int main()
{
	cout << sum(1.1, 1) << endl;
	return 0;
}