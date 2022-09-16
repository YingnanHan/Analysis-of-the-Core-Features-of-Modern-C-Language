#include<iostream>
#include<vector>

using namespace std;

struct X
{
	X()
	{
		std::cout << "default ctor" << std::endl;
	}
	X(const X& other)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

int main()
{
	vector<X>x(10000);
	std::cout << "for auto n : x" << std::endl;
	time_t start = time(0);
	time(&start);
	for (auto n : x)
	{

	}
	cout << "it consume: " << time(0) - start << std::endl;
	std::cout << "for const auto &n : x" << std::endl;
	start = time(0);
	for (const auto& n : x)
	{

	}
	cout << "it consume: " << time(0) - start << std::endl;
	return 0;
}