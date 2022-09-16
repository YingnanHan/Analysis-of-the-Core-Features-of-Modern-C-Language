// 18.01 支持初始化的if语句 01

#include<iostream>

using namespace std;

bool foo()
{
	return true;
}

int main()
{
	if (bool b = foo(); b)
	{
		cout << boolalpha << "good foo() = " << b << std::endl;
	}
}