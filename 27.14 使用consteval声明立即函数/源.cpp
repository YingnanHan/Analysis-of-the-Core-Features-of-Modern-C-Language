#include<iostream>

consteval int sqr(int n)
{
	return n * n;
}

int main()
{
	constexpr int r = sqr(100); // 编译阶段可求值
	int x = 100;
	// int r2 = sqr(x); // 编译失败 -- 调用consteval函数sqr不会生成有效的常数表达式
	int y = sqr(sqr(100));
	// int z = sqr(sqr(x)); // 编译失败 -- 调用consteval函数sqr不会生成有效的常数表达式 
	auto sqr = [](int n)consteval {return n * n; };
	int res = sqr(100);
	return 0;
}