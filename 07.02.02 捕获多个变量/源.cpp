#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	int y = 8;
	auto foo = [x,y] {return x + y; }; // [x]�ǲ����б������Բ���ǰ�����������еı���
	cout << foo() << endl;
	return 0;
}