#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	int y = 8;
	auto foo = [=] // [=] ��ʾ�������б�����ֵ
	{
		return x * y;
	};
	cout << foo() << endl;

	return 0;
}