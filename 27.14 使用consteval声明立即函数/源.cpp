#include<iostream>

consteval int sqr(int n)
{
	return n * n;
}

int main()
{
	constexpr int r = sqr(100); // ����׶ο���ֵ
	int x = 100;
	// int r2 = sqr(x); // ����ʧ�� -- ����consteval����sqr����������Ч�ĳ������ʽ
	int y = sqr(sqr(100));
	// int z = sqr(sqr(x)); // ����ʧ�� -- ����consteval����sqr����������Ч�ĳ������ʽ 
	auto sqr = [](int n)consteval {return n * n; };
	int res = sqr(100);
	return 0;
}