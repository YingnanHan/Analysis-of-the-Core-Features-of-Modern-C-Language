#include<iostream>
#include<type_traits>

class A
{

};

class B : public A
{

};

class C  : public B // ȥ����������ע�ͷ��ſ����д���
{

};

template<typename T>
class E // ģ����
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