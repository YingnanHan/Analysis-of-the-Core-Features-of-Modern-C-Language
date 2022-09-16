#include<iostream>
// ������Ĭ��ʵ�ֵ�һЩ���������Ǻ���noexcept��
struct M
{
	M()
	{

	}
	M(const M&)
	{

	}
	M(M&&)noexcept
	{

	}
	M operator=(const M&)noexcept
	{
		return *this;
	}
	M operator=(M&&)
	{
		return *this;
	}
};

#define PRINT_NOEXCEPT(x) std::cout<<#x<<" = "<<x<<std::endl;

int main()
{
	M x;
	std::cout << std::boolalpha;

	PRINT_NOEXCEPT(noexcept(M()));
	PRINT_NOEXCEPT(noexcept(M(x)));
	PRINT_NOEXCEPT(noexcept(M(std::move(x))));
	PRINT_NOEXCEPT(noexcept(x.operator=(x)));
	PRINT_NOEXCEPT(noexcept(x.operator=(std::move(x))));

	return 0;
}