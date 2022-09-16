#include<iostream>
#include<map>
#include<compare>

using namespace std;

int main()
{
	std::cout << typeid(decltype(11.2 <=> 22.3)).name() << std::endl;
	return 0;
}
