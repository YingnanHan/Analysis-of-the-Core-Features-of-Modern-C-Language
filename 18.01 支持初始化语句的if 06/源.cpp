#include<iostream>
#include<string>

using namespace std;


int main()
{
	std::string str;
	if (char buf[10]{ 0 }; std::fgets(buf, 10, stdin))
	{
		str += buf;
	}
}