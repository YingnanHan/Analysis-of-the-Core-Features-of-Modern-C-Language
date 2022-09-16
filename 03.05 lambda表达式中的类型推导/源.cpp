#include<iostream>
#include<assert.h>

using namespace std;

int main()
{
	// lambda 表达式返回值
	auto l = [](auto a1, auto v2)
	{
		return a1 + a1;
	};
	auto retval = l(12, 12);
	cout << retval;

	// lambda 表达式返回引用
	auto ll = [](int& i)->auto& // 等号左侧的auto就是一个占位符
	{
		return i;
	};
	auto x1 = 5;
	auto& x2 = ll(x1);

	assert(x1 == x2);

	return 0;
}