#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	auto foo = [x](int y)->int {return x * y; }; // [x]�ǲ����б������Բ���ǰ�����������еı���
	cout << foo(x) << endl;
	return 0;
}