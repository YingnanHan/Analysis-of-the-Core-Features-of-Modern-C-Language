#include<iostream>

using namespace std;

struct C
{
	// explicit C(int a) // �رյ���ʽ��ʼ��������ʽ��ʼ��ʧЧ
	C(int a) 
	{

	}
};

void foo(C c)
{

}

C bar()
{
	return static_cast<C>(5); // ǿ����ʽת��
}

/*
C bar()
{
	return 5; // ǿ����ʽת��
}
*/

int main()
{
	foo(8);		// ������ʼ��
	C c = bar();	// ������ʼ��
	return 0;
}