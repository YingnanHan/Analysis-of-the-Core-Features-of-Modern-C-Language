#include<iostream>

using namespace std;

int main()
{
	int x1 = 0;
	double x2 = 5.5;
	// typeid(<obj>).name() �᷵��obj�������������
	cout << typeid(x1).name() << endl;
	return 0;
}