#include<iostream>

union alignas(256) X
{
	char a1;
	int a2;
	double a3;
};

int main()
{
	X* x = new X();
	std::cout << "X = " << x << std::endl;
	return 0;
}