#include<tuple>
#include<iostream>

using namespace std;

int main()
{
	auto t = make_tuple(42, "Hello World!");
	auto [x, ignore] = t;
	auto [ignore, y] = t;
	return 0;
}