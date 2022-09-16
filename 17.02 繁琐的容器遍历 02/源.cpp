#include<iostream>
#include<map>
#include<set>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;

void print(std::map<int, string>::const_reference e)
{
	std::cout << "key = " << e.first << ", value = " << e.second << endl;
}

int main()
{
	map<int, string> index_map{
		{1, "hello"},
		{2, "world"},
		{3, "!"}
	};
	
	std::for_each(index_map.begin(), index_map.end(), print);

	return 0;
}