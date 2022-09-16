#include<iostream>

using namespace std;

class X
{
public:
	X()
	{
		cout << "X ctor " << endl;
	}

	X(const X& x)
	{
		cout << "X copy ctor " << endl;
	}
	~X()
	{
		cout << "X dtor" << endl;
	}
	void show()
	{
		cout << "Show X" << endl;
	}
};

X make_x()
{
	X x1;
	return x1;
}

int main()
{
	X&& x2 = make_x();
	x2.show();
	return 0;
}