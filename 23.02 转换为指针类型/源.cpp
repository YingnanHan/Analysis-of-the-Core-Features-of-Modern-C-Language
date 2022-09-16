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
	// nullptr是一个nullptr_t类型的指针，他可以在MSVC中与0互相转化，在其他变异其中会报错
	f(nullptr);// 这会调用f(char*) 因为都是指针类型 这是一个唯一可以匹配nullptr的版本
}