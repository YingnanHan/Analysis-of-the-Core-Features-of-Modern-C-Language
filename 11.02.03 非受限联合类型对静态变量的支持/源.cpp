#include<iostream>

using namespace std;

union U
{
	static int x1;
};

int U::x1 = 42; // 静态类型的变量只能在类外部初始化，这一点和类是一样的

int main()
{
	cout << U::x1 << endl;
	return 0;
}