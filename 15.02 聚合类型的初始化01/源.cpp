#include<iostream>
#include<string>

using namespace std;

class MyStringWithIndex :public std::string 
{
public:
	MyStringWithIndex(const std::string& str, int idx) :std::string(str), index_(idx)
	{

	}
	
	int index_ = 0;
};

std::ostream& operator<<(std::ostream& os, const MyStringWithIndex& s)
{
	os << s.index_ << ":" << s.c_str();
	return os;
}

int main()
{
	MyStringWithIndex s("hello world!", 11);
	std::cout << s << std::endl;
	return 0;
}
