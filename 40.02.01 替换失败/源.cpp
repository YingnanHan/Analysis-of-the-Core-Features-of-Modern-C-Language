#include<iostream>

using namespace std;

template<typename T>
T foo(T& t)
{
	T tt(t);
	return tt;
}

void foo(...)
{
	// ��������
}

class bar
{
public:
	bar()
	{

	}
	bar(bar&&)
	{

	}
};

int main()
{
	double x = 7.0;
	foo(x);
	foo(5);
	bar b;
	foo(b); // �����޷�����һ����ʽ�ĸ��ƹ��캯��