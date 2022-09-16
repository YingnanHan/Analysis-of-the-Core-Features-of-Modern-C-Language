#include<iostream>

using namespace std;

class X
{
public:
	X() : X(0, 0.)
	{
		throw 1; // 当调用到这里的时候直接抛出异常 catch接收到异常以后(...表示捕获所有异常)系统会默认调用析构函数
	}
	X(int a) : X(a, 0)
	{

	}
	X(double b) :X(0, b)
	{

	}
	X(int a, double b) :a_(a), b_(b)
	{
		CommonInit();
	}
	~X()
	{
		cout << "~X()" << endl;
	}
private:
	void CommonInit()
	{

	}
	int a_;
	double b_;
};

int main()
{
	try
	{
		X x;
	}
	catch (...)
	{

	}
	return 0;
}