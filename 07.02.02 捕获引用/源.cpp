#include<iostream>

using namespace std;

/*
void bar1()
{
	int x = 5;
	int y = 8;
	auto foo = [x, y] { // Ĭ��������粻�����ã�Lambda���ʽ�ڲ��޸ı�������벻ͨ��,���ﲶ����ǳ���
		x += 1;
		y += 2;
		return x * y;
	};
	cout << foo() << endl;
}
*/

void bar2()
{
	int x = 5;
	int y = 8;
	auto foo = [&x, &y] { // Ĭ��������粻�����ã�Lambda���ʽ�ڲ��޸ı�������벻ͨ��
		x += 1;
		y += 2;
		return x * y;
	};
	cout << foo() << endl;
}

void bar3()
{
	int x = 5;
	int y = 8;
	auto foo = [x, y] () mutable { // �Ƴ�lambda���ʽ�ĳ������ԣ���������lambda���ʽ����˵���������Ա������()
		x += 1;
		y += 2;
		return x * y;
	};
	cout << foo() << endl;
}

int main()
{
	// bar1();
	bar2();
	bar3();
	return 0;
}