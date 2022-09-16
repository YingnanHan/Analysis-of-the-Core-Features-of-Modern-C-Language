#include<iostream>

using namespace std;

template<typename T> concept C =
	requires (T a, T b) {
	a + b;
};

int main()
{
	return 0;
}
