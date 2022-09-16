#include<iostream>
#include<string>

using namespace std;

class X
{
public:
	X()
	{

	}
	X(int x) : x_(x)
	{

	}
	X(double y) : y_(y)
	{

	}
	X(const string& c) : c_(c)
	{

	}
private:
	int x_{0};
	double y_{0.0};
	string c_ = "hello world!";
};

int main()
{
	X obj("hello");
	return 0;
}