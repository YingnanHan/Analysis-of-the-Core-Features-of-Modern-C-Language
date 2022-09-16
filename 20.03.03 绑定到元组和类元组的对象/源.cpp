#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<int, string> id2str{
		{1, "hello"},
		{3, "Structed"},
		{5, "Binding"}
	};

	for (const auto& elem : id2str)
	{
		cout << "id = " << elem.first << ", str = " << elem.second << endl;
	}
	return 0;
}