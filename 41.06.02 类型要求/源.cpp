#include<iostream>

using namespace std;

template<typename T, typename T::type = 0> 
struct S;

template<typename T> 
using Ref = T&;

template<typename T> concept C = requires 
{
	typename T::inner; 	// Ҫ��Ƕ������
	typename S<T>;		// Ҫ����ģ���ػ�
	typename Ref<T>; 		// Ҫ�����ģ���ػ�
};

template <C c>
struct M 
{

};

struct H 
{
	using type = int;
	using inner = double;
};

int main()
{
	M<H> m;
}

