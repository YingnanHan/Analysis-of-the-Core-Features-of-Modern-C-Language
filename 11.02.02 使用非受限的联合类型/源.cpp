#include<iostream>
#include<string>
#include<vector>

using namespace std;

union U
{
	U()
	{

	}
	~U()
	{

	}
	int x1;
	float x2;
	string x3;
	vector<int> x4;
};

int main()
{
	U u;
	// 为了确保灵活性 这里使用了placement new的技巧来初始化非平凡类型的对象
	new(&u.x3) string("hello world");
	cout << u.x3 << endl;
	u.x3.~basic_string();
	//
	new(&u.x4) vector<int>; // 将刚刚声明的vector对象分配内存
	u.x4.push_back(58); // 存入数据
	cout << u.x4[0] << endl;
	u.x4.~vector(); //销毁对象

	return 0;
}