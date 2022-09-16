#include<iostream>
#include<vector>

using namespace std;

class City
{
	string name;
	vector<string> street_name;
};

int main()
{
	City a, b;
	a = b;
	return 0;
}