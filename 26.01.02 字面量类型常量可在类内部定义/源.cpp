#include<iostream>
#include<string>

using namespace std;

class X
{
public:
	static const int num{ 5 };
};

int main()
{
	std::cout << X::num << std::endl;
}