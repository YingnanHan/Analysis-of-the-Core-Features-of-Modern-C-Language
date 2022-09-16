#include<iostream>

void check2()
{
	if constexpr (sizeof(int) > sizeof(float)) // 括号里面的必须是常量表达式
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