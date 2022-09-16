#include<iostream>
#include<iomanip>

using namespace std;

class X
{
public:
	inline static string text{ "Hello" };
};

int main()
{
	X::text += " world£¡";
	std::cout << X::text << std::endl;
	return 0;
}