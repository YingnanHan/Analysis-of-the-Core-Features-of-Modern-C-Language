#include<iostream>

using namespace std;

int main()
{
	int x1 = 0;
	decltype(x1) x2 = 0;
	cout << typeid(x2).name() << endl;

	double x3 = 0;
	decltype(x1 + x3) x4 = 0.0;
	cout << typeid(x4).name() << endl;

	// dectltype()�еĲ��������Ǳ��ʽ
	// decltype({1 + 2}); ����

	return 0;
}
