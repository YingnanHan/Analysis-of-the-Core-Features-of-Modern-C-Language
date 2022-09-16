#include<iostream>

using namespace std;

template <class C>
concept IntegerType = std::is_integral_v<C>;

// IntegerType auto i1 = 5.2;	// ±‡“Î ß∞‹
IntegerType auto i2 = 11;	// ±‡“Î≥…π¶

// IntegerType decltype(auto) i3 = 4.8;	// ±‡“Î ß∞‹
IntegerType decltype(auto) i4 = 7;	// ±‡“Î≥…π¶

// IntegerType auto foo1() { return 1.1; }	// ±‡“Î ß∞‹
IntegerType auto foo2() 
{
	return 0; 
}	// ±‡“Î≥…π¶

// auto bar1 = []()->IntegerType auto{ return 1.0; };	// ±‡“Î ß∞‹
auto bar2 = []()->IntegerType auto
{ 
	return 10;
};	// ±‡“Î≥…π¶

const IntegerType auto i5 = 23;	// ±‡“Î≥…π¶
IntegerType auto const i6 = 8;	// ±‡“Î≥…π¶
// IntegerType const auto i7 = 6;	// ±‡“Î ß∞‹

int main()
{
	
	return 0;
}