#include<iostream>

struct X
{
	constexpr virtual int f() const // �����������麯��f() ��������ʱ�����Ż��Ĺ����� y = f() �ᱻ�Ż�Ϊ y = 0
	{
		return 0;
	}
};

int main()
{
	X x;
	int u = x.f();
}