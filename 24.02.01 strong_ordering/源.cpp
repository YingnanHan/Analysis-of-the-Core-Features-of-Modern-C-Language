#include<iostream>
#include<compare>

using namespace std;

struct B
{
	int a;
	long b;
	auto operator<=> (const B&) const = default;// Ĭ��������ǲ�������ʾ��spaceship������ģ���Ҫ��ʽ����
};

struct D : B
{
	short c;
	auto operator<=> (const D&) const = default;
};

int main()
{
	D x1, x2;
	std::cout << typeid(decltype(x1 <=> x2)).name() << std::endl; // ���ڶ��ǳ�Ա�������ͣ�����������Ϊstrong_ordering
	return 0;
}