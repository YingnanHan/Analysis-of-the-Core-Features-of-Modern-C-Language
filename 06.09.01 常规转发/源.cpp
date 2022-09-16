#include<iostream>
#include<string>

using namespace std;

template<typename T>
void show_type(T t)
{
	cout << typeid(t).name() << endl;
}

template<typename T>
void normal_forward(T t)
{
	show_type(t);
}

int main()
{
	string s = "hello world";
	normal_forward(s);
	return 0;
}