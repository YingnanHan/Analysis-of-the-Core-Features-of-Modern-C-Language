#include<iostream>

using namespace std;

template <class C>
concept IntegerType = std::is_integral_v<C>; 
//就相当于定义了一个模板的自子集，使得仅仅受限于IntegerType
//是一个整形模板 至于是什么样的整形 long ,long long ,int之类
//的则没有确切的要求
static_assert(IntegerType<int>); //实例化类型是一个纯右值
static_assert(IntegerType<long>); //实例化类型是一个纯右值
// static_assert(IntegerType<double>); //实例化类型是一个纯右值 这里不满足concept的约束

template <IntegerType T>
struct X {};

int main()
{

	return 0;
}