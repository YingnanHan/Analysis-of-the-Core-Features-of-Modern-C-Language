#include<iostream>
#include<vector>

using namespace std;

class City
{
private:
	string name;
	vector<string> street_name;
public:
	City()
	{
		// 添加无参构造函数会解决上述问题，但是显得很多余
	}
	City(const char* n) :name(n)
	{

	}

	City& operator=(const City& other)
	{
		name = other.name;
		street_name = other.street_name;
		return *this;
	}
};

int main()
{
	City a("wuhan");
	//	City b; // 编译失败 自定义构造函数会抑制默认构造函数
	//	a = b;
	return 0;
}