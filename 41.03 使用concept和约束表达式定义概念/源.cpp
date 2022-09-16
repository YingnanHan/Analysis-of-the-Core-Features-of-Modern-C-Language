#include<iostream>

using namespace std;

template<typename C>
concept IntegerType = std::is_integral_v<C>; 

template<typename T>
concept TestConcept = true; 
static_assert(TestConcept<int>);

// ��ȡ
template<class C>
concept SignedIntegerType = std::is_integral_v<C> && std::is_signed_v<C>;

// ��ȡ
template<class C>
concept IntegerFloatingType = std::is_integral_v<C> || std::is_floating_point_v <C>;

// ʹ������ĸ�����Լ��ģ��ʵ��
template<SignedIntegerType T>
struct X
{

};

template<IntegerFloatingType T>
struct Y
{

};

int main()
{
	
	X<int> x1;
	// X<unsigned> x2; // ����ʧ�ܣ����Ͳ��������Լ��
	Y<int> y1;
	Y<double> y2;
	return 0;
}