// 18.01 ֧�ֳ�ʼ����if��� 01

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