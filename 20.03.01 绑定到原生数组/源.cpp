#include<iostream>

using namespace std;

int main()
{
	int a[3]{ 1,3,5 };
	auto [x, y, z] = a; //原生数组的结构化绑定 拷贝
	cout << "[x, y, z] = [" << x << ", " << y << ", " << z << "]" << endl;
	return 0;
}