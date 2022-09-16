#include<iostream>

using namespace std;

class X
{
public:
	X()
	{

	}
	X(const X&)
	{

	}
	X& operator=(const X&)
	{
		return	*this;
	}

};

X make_X()
{
	return X();
}

int main()
{
	X x1;
	X x2(x1);
	X x3(make_X());
	x3 = make_X();
	return 0;
}