#include<iostream>

using namespace std;

union U
{
	static int x1;
};

int U::x1 = 42; // ��̬���͵ı���ֻ�������ⲿ��ʼ������һ�������һ����

int main()
{
	cout << U::x1 << endl;
	return 0;
}