#include<iostream>
#include<tuple>

using namespace std;

auto return_multiple_values()
{
	return make_tuple(11, 7);
}

int main()
{
	auto[x,y] = return_multiple_values();
	cout << "x=" << x << " " << "y=" << y << endl;
	return 0;
}