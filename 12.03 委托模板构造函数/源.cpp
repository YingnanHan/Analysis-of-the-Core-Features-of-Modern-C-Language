#include<iostream>
#include<list>
#include<deque>
#include<vector>

using namespace std;

class X
{
	template<typename T>
	X(T first, T last) :l_(first, last)
	{

	}
	std::list<int>l_;
public:
	X(std::vector<short>&);
	X(std::deque<int>&);
};

X::X(std::vector<short>& v) : X(v.begin(), v.end())
{

}

X::X(std::deque<int>& v) : X(v.begin(), v.end())
{

}

int main()
{
	std::vector<short> a{1,2,3,4,5};
	std::deque<int> b{1,2,3,4,5};
	X x1(a);
	X x2(b);
	return 0;
}
