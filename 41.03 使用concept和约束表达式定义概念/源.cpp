#include<iostream>

using namespace std;

template<typename C>
concept IntegerType = std::is_integral_v<C>; 

template<typename T>
concept TestConcept = true; 
static_assert(TestConcept<int>);

// 合取
template<class C>
concept SignedIntegerType = std::is_integral_v<C> && std::is_signed_v<C>;

// 析取
template<class C>
concept IntegerFloatingType = std::is_integral_v<C> || std::is_floating_point_v <C>;

// 使用上面的概念来约束模板实参
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
	// X<unsigned> x2; // 编译失败，类型不满足概念约束
	Y<int> y1;
	Y<double> y2;
	return 0;
}