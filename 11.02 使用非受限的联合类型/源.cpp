#include<iostream>
#include<vector>
#include<string>

using namespace std;

union U
{
	U():x3() // 对非平凡类型string x3进行初始化
	{
		// 存在非平凡的类型成员，必须提供构造函数
	}
	~U()
	{
		// 存在非平凡的类型成员，必须提供析构函数
		x3.~basic_string(); // 调用对应的字符串析构函数
	}
	int x1;
	float x2;
	string x3;
	vector<int> x4;
};

int main()
{
	U u;
	u.x3 = "hello world";
	cout << u.x3 << endl;
	return 0;
}