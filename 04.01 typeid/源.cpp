#include<iostream>

using namespace std;

int main()
{
	int x1 = 0;
	double x2 = 5.5;
	// typeid(<obj>).name() 会返回obj对象的类型名称
	cout << typeid(x1).name() << endl;
	return 0;
}