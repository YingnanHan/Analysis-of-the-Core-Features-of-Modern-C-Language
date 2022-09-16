#include<iostream>

using namespace std;

int&& f()
{
	int i = 0;
	int k = 9;
	int sum = i + k;
	return static_cast<int &&>(sum); // 强制将一个左值引用转换为优右值引用
}

int main()
{

	int i=0;
	int&& f();
	auto xla = i;
	cout << typeid(xla).name() << endl;
	decltype(auto) x1d = i; // decltype(auto) 类型推导不可以结合指针引用
	cout << typeid(x1d).name() << endl;
	decltype(auto) x2d = (i); // decltype(auto) 类型推导不可以结合指针引用
	cout << typeid(x2d).name() << endl;
	auto x3a = f();	//这里的右值引用会被转换成引用
	cout << typeid(x3a).name() << endl;
	decltype(auto) x3d = f(); // x3d会被推导为右值引用
	// cout << typeid(x3d) << endl;
	auto x4a = { 1,2 }; // 这里会被推导为std::initializer_list<int>
	// cout << typeid(x4a) << endl;
	// decltype auto x4d = { 1,2 }; // 编译失败 {1,2}不是单值
	auto* x5a = &i;//x5a被推倒为int * auto为int
	// decltype(auto)* x5d = &i; //编译失败 delctype必须单独声明

	return 0;
}