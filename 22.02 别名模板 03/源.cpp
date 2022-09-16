#include<iostream>
#include<string>
#include<map>

template<typename T>
struct int_map
{
	typedef std::map<int, T> type;
};

template<typename T>
struct X
{
	typename int_map<T>::type int2other;
};

int main()
{
	X<std::string> x;
	x.int2other.insert({ 1, "one" });
	std::cout << x.int2other.begin()->first << " " << x.int2other.begin()->second << std::endl;
	return 0;
}