// 27.07 consexxpr and lambda expression

#include<iostream>

using namespace std;

constexpr int foo()
{
	return []() {return 58; }(); // []() {return 58; }��lambda���ʽ���󣬼�һ����������,����()���Ǻ���
}

int main()
{
	auto get_size = [](int i) {return i * 2; };
	char buffer1[foo()] = { 0 };
	char buffer2[get_size(5)] = { 0 };
	return 0;
}
