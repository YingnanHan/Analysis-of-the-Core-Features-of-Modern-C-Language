#include<iostream>

using namespace std;

template<typename T1, typename T2>
auto sum(T1 x, T2 y)->decltype(x+y)
{
	return x + y;
}

int main()
{
	auto z = sum<int, int>(1, 2);
	cout << 1 << " + " << 2 << " = " << z << endl;
	return 0;
}