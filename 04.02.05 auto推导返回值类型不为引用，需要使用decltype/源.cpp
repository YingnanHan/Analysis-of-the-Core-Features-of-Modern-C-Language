#include<iostream>

using namespace std;

template<typename T>
auto return_ref(T& t)->decltype(t) // 使用decltype，返回值可以是引用类型，并加上auto作为占位符
{
	return t;
}

int main()
{
	int x1 = 0;
	static_assert(
		std::is_reference_v<decltype(return_ref(x1))>
	);

	int i = 1;
	cout << (i,0);
	cout << (0,i);
	return 0;
}