#include<iostream>

using namespace std;

constexpr double sum(double x)
{
	return x > 7 ? x + sum(x - 1) : 0;
}

int main()
{
	constexpr double x = sum(5);
	cout << x;
	return 0;
}