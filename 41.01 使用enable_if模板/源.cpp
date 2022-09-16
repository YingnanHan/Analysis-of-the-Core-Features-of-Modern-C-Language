#include<iostream>

using namespace std;

template <class T, class U = std::enable_if_t<std::is_integral_v<T>>>
struct X {};


int main()
{
	X<int> x1; // ±‡“Î≥…π¶
	// X<std::string> x2; // ±‡“Î ß∞‹
}

