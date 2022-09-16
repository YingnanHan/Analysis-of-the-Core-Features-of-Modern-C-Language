#include<iostream>
#include<type_traits>

class A
{

};

class B : public A
{

};

class C  : public B // 去掉这行左侧的注释符号可运行代码
{

};

template<typename T>
class E // 模板类
{
	static_assert(std::is_base_of<A, T>::value, "T is not base of A");
};

int main()
{
	//static_assert < argc>0, "argc > 0" > ;
	E<C> X;
	static_assert(sizeof(int) >= 4, "sizeof(int) >= 4");
	E<B> y;
	return 0;
}