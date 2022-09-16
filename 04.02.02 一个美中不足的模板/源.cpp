#include<iostream>

using namespace std;

template<typename R, typename T1, typename T2>
R sum(T1 x, T2 y)
{
	return x + y;
}

int main()
{
	cout << sum<double, int, double>(1.0, 2);
	return 0;
}