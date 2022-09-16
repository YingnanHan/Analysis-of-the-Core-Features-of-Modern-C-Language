#include<iostream>

using namespace std;

enum class Color //定义强枚举类型
{
	Red,
	Green,
	Blue
};

int main()
{
	Color c{ 5 }; // C++17 标准
	//Color c1 = 5; // 非列表初始化 报错
	//Color c2 = { 5 }; // 非列表初始化 报错
	//Color c3(0); // 非列表初始化 报错

	return 0;
}