#include<iostream>
#include<vector>

using namespace std;

template <class T>
concept Check = requires 
{
	T().clear();
};

template <Check T>
struct G 
{

};

G<std::vector<char>> x; // 编译成功
G<std::string> y; // 编译成功
// G<std::array<char, 10>> z; // 编译失败 array没有clear()函数成员

int main()
{

	return 0;
}