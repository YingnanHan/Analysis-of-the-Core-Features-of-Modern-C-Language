#include<iostream>
#include<tuple>
#include<string>
#include<vector>

using namespace std;

struct BindTest
{
	int a = 42;
	string b = "Hello structed binding!";
};

int main()
{
	vector<BindTest> b = {
		{11, "hello"},
		{7, "C++"},
		{} // �������ʲô��ûд��Ĭ��ʹ��struct�ṹ�ڲ���ֵ
	};
	for (const auto& [x, y] : b)
	{
		cout << "x=" << x << "  y=" << y << endl;
	}
	return 0;
}