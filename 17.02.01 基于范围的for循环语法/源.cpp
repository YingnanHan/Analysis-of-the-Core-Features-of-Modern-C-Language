#include<iostream>
#include<string>
#include<map>

using namespace std;

std::map<int, std::string> index_map = {
	{1, "hello"},
	{2, "world"},
	{3, "!"}
};

int array[] = {0, 1, 2, 3, 4, 5, 6};

int main()
{
	for (const auto& e : index_map)
	{
		std::cout<<"key = "<<e.first<<", value = "<<e.second<<std::endl;
	}
	for (const auto &e : ::array)
	{
		std::cout << e << std::endl;
	}
	return 0;
}