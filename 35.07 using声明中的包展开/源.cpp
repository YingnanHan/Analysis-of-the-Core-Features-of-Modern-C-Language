#include<iostream>
#include<string>

using namespace std;

template<typename T>
class base
{
public:
	base()
	{

	}
	base(T t) : t_(t)
	{

	}
private:
	T t_;
};

template<typename... Args>
class Derived : base<Args>...
{
public:
	using base<Args>::base...;
};

int main()
{
	Derived<int, string, bool>d1 = 11;
	Derived<int, string, bool>d2 = string("hello");
	Derived<int, string, bool>d3 = true;
	return 0;
}