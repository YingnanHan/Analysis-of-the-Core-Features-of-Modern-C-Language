#include<iostream>

using namespace std;

template<typename ...Args>
auto sum(Args ...args)
{
	return (args + ...); // ...是一个折叠操作 因为运算符优先级的问题这里需要加上括号
}

int main()
{
	cout << sum(1, 2, 3, 4, 5, 6, 7, 8) << endl;
	return 0;
}