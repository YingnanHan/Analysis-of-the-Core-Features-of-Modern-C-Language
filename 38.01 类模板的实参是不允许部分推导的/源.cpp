#include<iostream>

using namespace std;

template<class T1, class T2>
void foo1(T1, T2) 
{

}

template<class T1, class T2>
struct foo
{
	foo(T1, T2) {}
};


int main()
{
	// ����ģ�� OK
	foo1<int>(5, 6.8);
	// ��ģ���Ƶ�
	foo v1(5, 6.8);					// ����ɹ�
	// foo<> v2(5, 6.8);				// ������� <> ȷ������ʵ������
	// foo<int> v3(5, 6.8);			// ������� ���������Ƶ�
	foo<int, double> v4(5, 6.8);	// ����ɹ�
	return 0;
}
