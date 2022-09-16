#include<iostream>

using namespace std;

class NonTrival // 定义一个非平凡类
{
private:
	int i;
public:
	NonTrival(int n) : i(n)
	{

	}
	NonTrival()
	{

	}
	int j;
};

class Trival // 定义一个平凡类
{
private:
	int i;
public:
	Trival(int n) : i(n), j(n)
	{

	}
	Trival() = default; //将后面的这个形式为默认构造函数的构造函数设置为真正的默认构造函数
						//这样做以后这个类就会从一个非平凡类转化为一个平凡类
	int j;
};

int main()
{
	Trival a(5);
	Trival b;
	b = a;
	cout << "std::is_trival_v<Trival> = " << std::is_trivial_v<Trival> << endl;
	cout << "std::is_trival_v<NonTrival> = " << std::is_trivial_v<NonTrival> << endl;
	return 0;
}