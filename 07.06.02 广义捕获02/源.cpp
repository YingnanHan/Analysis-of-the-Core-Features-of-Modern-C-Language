#include<iostream>
#include<string>

using namespace std;

int main()
{

	string x = "hello world!";
	//                             �������x��string x���ƶ�����
	auto foo = [x = std::move(x)]{ return x + " world"; };
	cout << foo() << endl;

	return 0;
}
