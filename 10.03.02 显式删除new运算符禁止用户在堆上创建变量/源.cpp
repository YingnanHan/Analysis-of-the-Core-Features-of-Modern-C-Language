#include<iostream>

using namespace std;

struct type
{
	void* operator new (std::size_t) = delete;
};

type gloabl_var;

int main()
{
	static type static_var;	// 创建在静态存储区
	type auto_var;			// 创建在栈
	//type* var = new type(); // 创建在堆 失败
	return 0;
}