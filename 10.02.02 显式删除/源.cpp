#include<iostream>

using namespace std;

class NonCopyable
{
public:
	NonCopyable() = default;	// 显式添加默认构造函数
	NonCopyable(const NonCopyable&) = delete;	// 显示删除复制构造函数
	NonCopyable& operator=(const NonCopyable&) = delete;	// 显示删除复制赋值
};

int main()
{
	NonCopyable a, b;
	// a = b;// 会报错
	return 0;
}