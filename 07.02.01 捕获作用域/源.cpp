#include<iostream>

using namespace std;

int x = 1;

int main()
{
	int y = 2;
	static int z = 3;
	auto foo = [y]{return x + y + z; }; // [x]�ǲ����б������Բ���ǰ�����������еı���
	cout << foo() << endl;
	return 0;
}