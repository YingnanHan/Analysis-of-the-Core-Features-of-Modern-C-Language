#include<vector>
#include<list>
#include<set>
#include<map>
#include<string>

using namespace std;

int main()
{
	int x[] = {1,2,3,4,5};
	int x1[]{ 1,2,3,4,5 };
	std::vector<int>x2{ 1,2,3,4,5 };
	std::vector<int>x3 = { 1,2,3,4,5 };
	std::list<int>x4{ 1,2,3,4,5 };
	std::list<int>x5 = { 1,2,3,4,5 };
	std::set<int>x6{ 1,2,3,4,5 };
	std::set<int>x7 = { 1,2,3,4,5 };
	std::map<string, int>x8{
		{"bear",4},
		{"cassowary",2},
		{"tiger",7}
	};
	std::map<string, int>x9 = {
		{"bear",4},
		{"cassowary",2},
		{"tiger",7}
	};

	return 0;
}