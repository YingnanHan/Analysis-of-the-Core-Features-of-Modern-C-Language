#include<iostream>

using namespace std;

class A
{
public:

	void print()
	{
		cout << "class A" << endl;
	}

	void test()
	{
		auto foo = [this]
		{
			this->print();
			x = 5;
		};
		foo();
	}
private:
	int x;
};

int main()
{
	A a;
	a.test();

	return 0;
}