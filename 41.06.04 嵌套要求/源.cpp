#include<iostream>

using namespace std;

template <class T>
concept Check = requires(T a, T b) 
{
	requires std::same_as<decltype((a + b)), int>;
};

int main()
{
	return 0;
}