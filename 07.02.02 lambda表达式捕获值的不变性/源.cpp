#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	int y = 8;
	auto foo = [x, &y]() mutable
	{
		x += 1;
		y += 2;
		cout << "lambda x = " << x << ", y = " << y << endl;
		return x * y;
	};
	x = 9;
	y = 20;
	foo(); // ����ֵ���ݵĲ�����һֱ�����������lambda���ʽʱ���x��ֵ
	return 0;
}