#include<iostream>

using namespace std;

void foo() = delete;
static void bar() = delete;

int main()
{
	//foo();// ������ɾ��������ʧ��
	//bar();// ������ɾ��������ʧ��
	return 0;
}