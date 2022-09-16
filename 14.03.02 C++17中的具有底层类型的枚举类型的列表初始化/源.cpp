#include<iostream>

using namespace std;

enum class Index : int
{

};

int main()
{
	Index a{ 1 }; // 列表初始化
	Index b{ 10 };
	cout << "a < b is:" << std::boolalpha << (a < b) << std::endl;
	return 0;
}