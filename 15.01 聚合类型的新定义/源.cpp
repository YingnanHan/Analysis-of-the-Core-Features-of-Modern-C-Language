#include<iostream>
#include<string>

class MyString : public std::string
{

};

int main()
{
	std::cout << "std::is_aggregate_v<std::string> = " << std::is_aggregate_v<std::string> << std::endl;
	std::cout << "std::is_aggregate_v<MyString> = " << std::is_aggregate_v<MyString> << std::endl;
}
