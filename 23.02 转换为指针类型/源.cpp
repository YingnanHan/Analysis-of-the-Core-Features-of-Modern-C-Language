#include<iostream>

using namespace std;

void f(int)
{
	cout << "int" << endl;
}

void f(char*)
{
	cout << "char*" << endl;
}

int main()
{
	// nullptr��һ��nullptr_t���͵�ָ�룬��������MSVC����0����ת�����������������лᱨ��
	f(nullptr);// ������f(char*) ��Ϊ����ָ������ ����һ��Ψһ����ƥ��nullptr�İ汾
}