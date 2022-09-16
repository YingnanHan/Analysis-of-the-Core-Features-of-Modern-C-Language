#include<iostream>
#include<tuple>
#include<string>

using namespace std;

struct BindTest
{
	int a = 42;
	string b = "Hello structed binding!";
};

int main()
{
	BindTest bt;
	auto [x, y] = bt;
	cout << "x = " << x << " y = " << y << endl;
	return 0;
}