#include<iostream>

using namespace std;

void foo() = delete;
static void bar() = delete;

int main()
{
	//foo();// º¯ÊıÒÑÉ¾³ı£¬±àÒëÊ§°Ü
	//bar();// º¯ÊıÒÑÉ¾³ı£¬±àÒëÊ§°Ü
	return 0;
}