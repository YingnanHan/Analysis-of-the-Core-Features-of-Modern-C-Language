#include<iostream>

using namespace std;

struct C
{
	C(std::string a, int b)
	{

	}
	C(int a)
	{

	}
};

void foo(C)
{

}

C bar()
{
	return { "hello world", 5 }; //ʹ���б��ʼ����ʽת��
}

int main()
{
	int x = { 5 };		// ������ʼ��
	int x1(8);			// ֱ�ӳ�ʼ��
	C x2 = { 4 };		// ������ʼ��
	C x3(2);			// ֱ�ӳ�ʼ��
	foo((8));			// ������ʼ��
	foo( { "hello world", 8 } );		// ������ʼ��
	C x4 = bar();		// ������ʼ��
	C* x5 = new C("hi", 42);			// ֱ�ӳ�ʼ��

	return 0;
}