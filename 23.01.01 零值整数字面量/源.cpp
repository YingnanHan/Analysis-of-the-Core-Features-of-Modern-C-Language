#include<iostream>

using namespace std;

void f(int)
{
	cout << "int" << endl;
}

void f(char*)
{
	cout << "char*" << endl;
}

int main()
{ 
	// NULL����0
	f(NULL);
	f(reinterpret_cast<char*>(NULL));
}