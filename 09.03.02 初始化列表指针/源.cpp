#include<iostream>
#include<string>

using namespace std;

class C
{
public:
	C(std::initializer_list<std::string> a)
	{
		for (const std::string* item = a.begin(); item != a.end(); item++)
		{
			std::cout << item << "\t";
		}
		cout << endl;
	}
};

int main()
{
	C c({ "hello", "c++", "world" });
	cout << "sizeof(std::string) = " << hex << sizeof(std::string) << endl;

}