#include<iostream>  //这段代码只有C++17才可以运行

using namespace std;

template<decltype(auto) N> // 在进行模板推到的时候N必须是一个常量
void f()
{
	cout << N << endl;
}

static const int x = 11;
static int y = 17; 

int main()
{
	f<x>(); // N -> const int
	f<(x)>(); // N -> const int &
	// f<y>(); // N这是不是一个常量，编译错误
	f<(y)>(); // (y) 被推断为一个引用类型，对于静态变量而言内存地址是固定的，(y)会被认为是一个常量

	return 0;
}