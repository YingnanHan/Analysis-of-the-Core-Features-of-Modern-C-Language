#include<iostream>

using namespace std;

struct A
{
	char a1;
	int a2;
	double a3;
};

struct B
{
	short b1;
	bool b2;
	double b3;
};

int main()
{
	std::cout << "sizeof(A::a1) + sizeof(A::a2) + sizeof(A::a3) = " << sizeof(A::a1) + sizeof(A::a2) + sizeof(A::a3) << std::endl;
	std::cout << "sizeof(B::b1) + sizeof(B::b2) + sizeof(B::b3) = " << sizeof(B::b1) + sizeof(B::b2) + sizeof(B::b3) << std::endl;
	std::cout << "sizeof(A) = " << sizeof(A) << std::endl;
	std::cout << "sizeof(B) = " << sizeof(B) << std::endl;
}
