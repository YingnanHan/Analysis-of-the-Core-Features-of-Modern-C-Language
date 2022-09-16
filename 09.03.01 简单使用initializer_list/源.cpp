#include<iostream>
#include<string>

using namespace std;

class C
{
public:
	C(std::initializer_list<std::string>a)
	{
		for (auto it = a.begin(); it != a.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
};

int main()
{
	C c({"a","aa","aaa"});
	return 0;
}