#include<iostream>
#include<map>
#include<set>
#include<list>
#include<vector>

using namespace std;


int main()
{
	map<int, string> index_map{
		{1, "hello"},
		{2, "world"},
		{3, "!"}
	};
	map<int, string>::iterator it = index_map.begin();
	for (; it != index_map.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
	}
	return 0;
}