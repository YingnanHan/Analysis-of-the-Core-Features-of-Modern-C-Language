#include<iostream>

using namespace std;

bool foo()
{
	return false;
}

bool bar()
{
	return true;
}


int main()
{ // if语句内部定义的变量的作用域为if下的所有分支，也即贯穿整个if结构
	if (bool b = foo(); b)
	{
		cout << boolalpha << " foo() = " << b << std::endl;
	}
	else if(bool b1 = bar(); b1)
	{
		cout << boolalpha << " foo() = " << b << " bar() = " << b1 << std::endl;
	}
}