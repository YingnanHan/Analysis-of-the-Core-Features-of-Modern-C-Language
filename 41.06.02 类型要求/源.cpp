#include<iostream>

using namespace std;

template<typename T, typename T::type = 0> 
struct S;

template<typename T> 
using Ref = T&;

template<typename T> concept C = requires 
{
	typename T::inner; 	// 要求嵌套类型
	typename S<T>;		// 要求类模板特化
	typename Ref<T>; 		// 要求别名模板特化
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

