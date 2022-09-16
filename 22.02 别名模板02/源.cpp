#include<iostream>
#include<map>
#include<string>

using namespace std;

template<typename T>
struct int_map
{
	typedef std::map<int, T> type;
};

int main()
{
	int_map<string>::type int2string;
	int2string[11] = "eleven";
	return 0;
}