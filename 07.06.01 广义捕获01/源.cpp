#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	auto foo = [x = x + 1]{ return x; };
	// µÈ¼ÛÓÚ
	auto bar = [r = x + 1]{ return r; };
	cout << foo();
	cout << endl;
	cout << bar();
	return 0;
}