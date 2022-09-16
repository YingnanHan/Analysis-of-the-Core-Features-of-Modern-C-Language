#include<iostream>

using namespace std;

template <class C>
concept IntegerType = std::is_integral_v<C>;

// IntegerType auto i1 = 5.2;	// ����ʧ��
IntegerType auto i2 = 11;	// ����ɹ�

// IntegerType decltype(auto) i3 = 4.8;	// ����ʧ��
IntegerType decltype(auto) i4 = 7;	// ����ɹ�

// IntegerType auto foo1() { return 1.1; }	// ����ʧ��
IntegerType auto foo2() 
{
	return 0; 
}	// ����ɹ�

// auto bar1 = []()->IntegerType auto{ return 1.0; };	// ����ʧ��
auto bar2 = []()->IntegerType auto
{ 
	return 10;
};	// ����ɹ�

const IntegerType auto i5 = 23;	// ����ɹ�
IntegerType auto const i6 = 8;	// ����ɹ�
// IntegerType const auto i7 = 6;	// ����ʧ��

int main()
{
	
	return 0;
}