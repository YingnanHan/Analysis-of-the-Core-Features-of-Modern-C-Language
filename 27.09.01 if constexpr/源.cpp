#include<iostream>

void check2()
{
	if constexpr (sizeof(int) > sizeof(float)) // ��������ı����ǳ������ʽ
	{
		std::cout << "sizeof(int) > sizeof(float)" << std::endl;
	}
	else
	{
		std::cout << "sizeof(int) <= sizeof(float)" << std::endl;
	}
}

int main()
{
	check2();
}