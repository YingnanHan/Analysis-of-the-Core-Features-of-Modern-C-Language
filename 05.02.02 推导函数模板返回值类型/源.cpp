#include<iostream>

using namespace std;

template<typename T1, typename T2>
decltype(T1() + T2()) sum(T1 t1, T2 t2) // T1() + T2() 表示让编译器自动推导T1() + T2()结果的类型，条件是T1 T2必须有默认构造函数
{
	return t1 + t1;
}

int main()
{
	auto x1 = sum(1, 2);
	cout << x1;
	return 0;
}