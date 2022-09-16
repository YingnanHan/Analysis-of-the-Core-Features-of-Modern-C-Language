#include<iostream>

using namespace std;

class Base final
{
public:
	virtual void foo(int x)
	{

	}
};

// ÕâÀï½ûÖ¹¼Ì³Ğ
class Derived : public Base
{
public:
	void foo(int x)
	{

	}
};

int main()
{

	return 0;
}