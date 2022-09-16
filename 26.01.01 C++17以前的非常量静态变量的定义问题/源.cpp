#include<iostream>
#include<string>

using namespace std;

class X
{
public:
	static std::string text; // 类内声明静态变量
};

std::string X::text{ "hello" }; // 类外定义静态变量

int main()
{
	X::text += "world";
	std::cout << X::text << std::endl;
	return 0;
}