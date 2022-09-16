#include<iostream>
#include<string>

using namespace std;

template<typename T1, typename T2>
struct MyPair 
{
	MyPair(T1 x, T2 y)
		: first(x), second(y) 
	{

	}
	T1 first;
	T2 second;
};

// 类似于构造函数在类外部声明并且说明位置返回类型
MyPair(int, const char*)->MyPair<long long, std::string>;

int main()
{
	MyPair p8(5u, "hello");
	MyPair p9(5, "hello"); // MyPair(int, const char*)->MyPair<long long, std::string>; 的实例化
	return 0;
}