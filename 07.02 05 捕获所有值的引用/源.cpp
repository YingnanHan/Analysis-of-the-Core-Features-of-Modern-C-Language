#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	static int y = 8;
	auto foo = [&]() mutable // ��������ֵ�����ã�����̬������ʱ����Ҫ����mutable
	{
		x += 1;
		y += 1;
		return x * y;
	};
	cout << foo() << endl;
	cout << "x = " << x << ", y = " << y << endl;;
	return 0;
}