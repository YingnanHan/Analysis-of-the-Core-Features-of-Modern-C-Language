#include<iostream>
#include<map>
#include<string>

using namespace std;

template<typename T>
using int_map = std::map<int, T>;

int main()
{
	int_map<string> int2string;
	int2string[11] = "eleven";
	return 0;
}