#include<iostream>
#include<string>

using namespace std;

int main()
{

	string x = "hello world!";
	//                             ↓这里的x是string x的移动复制
	auto foo = [x = std::move(x)]{ return x + " world"; };
	cout << foo() << endl;

	return 0;
}
