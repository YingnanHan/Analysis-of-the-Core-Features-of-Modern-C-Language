#include<iostream>

using namespace std;

struct type
{
	~type() = delete;
};

type global_var;			// 编译失败， 析构函数被删除无法隐式调用

int main()
{
	static type static_var;// 编译失败， 析构函数被删除无法隐式调用
	type auto_var;		   // 编译失败， 析构函数被删除无法隐式调用
	type* varptr = new type;// 编译失败， 析构函数被删除无法隐式调用
	delete varptr;			// 编译失败， 析构函数被删除无法隐式调用

	return 0;
}