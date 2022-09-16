#include<iostream>

using namespace std;

union U
{
	int x1;
	float x2;
};

int main()
{
	U u;
	u.x1 = 5;
	cout << u.x1 << endl;
	cout << u.x2 << endl;

	u.x2 = 5.0;
	cout << u.x1 << endl;
	cout << u.x2 << endl;

	return 0;
}