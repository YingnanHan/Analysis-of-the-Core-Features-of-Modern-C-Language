#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

	vector<int>x = { 1,2,3,4,5 };
	cout << *find_if(x.begin(), x.end(),
		[](int i) {return (i % 3) == 0; }
	) << endl;

	return 0;
}