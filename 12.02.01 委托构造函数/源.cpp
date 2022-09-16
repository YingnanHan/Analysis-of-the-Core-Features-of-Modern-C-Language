#include<iostream>

using namespace std;

class X
{
public:
	X() : X(0)
	{
		InitStep3();
	}
	X(int a) : X(a, 0.)
	{
		InitStep2();
	}
	X(double b) : X(0, b)
	{

	}
	X(int a, double b) : a_(a), b_(b)
	{
		InitStep1();
	}
private:
	void InitStep1()
	{
		cout << "InitStep1()" << endl;
	}
	void InitStep2()
	{
		cout << "InitStep2()" << endl;
	}
	void InitStep3()
	{
		cout << "InitStep3()" << endl;
	}
	int a_;
	double b_;
};

int main()
{
	X x;
	return 0;
}