#include<iostream>
#include<string>

using namespace std;

class X
{
public:
	static std::string text; // ����������̬����
};

std::string X::text{ "hello" }; // ���ⶨ�徲̬����

int main()
{
	X::text += "world";
	std::cout << X::text << std::endl;
	return 0;
}