#include<iostream>

using namespace std;

class X
{
public:
	X() : X(0, 0.)
	{
		throw 1; // �����õ������ʱ��ֱ���׳��쳣 catch���յ��쳣�Ժ�(...��ʾ���������쳣)ϵͳ��Ĭ�ϵ�����������
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