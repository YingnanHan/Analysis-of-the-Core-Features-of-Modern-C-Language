#include<iostream>

using namespace std;

class X
{
public:
	constexpr X() : X1(5)
	{

	}
	constexpr X(int i) : X1(i)
	{

	}
	constexpr int get()const
	{
		return X1;
	}
private:
	int X1;
};

int main()
{
	constexpr X x;
	char buffer[x.get()] = { 0 };
}