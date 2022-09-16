#include<iostream>

using namespace std;

template <class T, std::size_t N>
struct A {
	T array[N];
};


template <typename T>
struct B {
	T array[2];
};

int main()
{
	A a{ {1, 2, 3} };
	B b = { 0, 1 };

	return 0;
}