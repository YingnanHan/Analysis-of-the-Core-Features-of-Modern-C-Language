/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

class IntWrap
{
public:
	IntWrap(int n) :n_(n)
	{

	}
	IntWrap operator+ (const IntWrap& other)
	{
		return IntWrap(n_ + other.n_);
	}
	int get()
	{
		return n_;
	}
private:
	int n_;
};

// Converts any type T to a reference type, making it possible to use member functions in decltype expressions without the need to go through constructors.
template<typename T>
T&& declval();

template<typename T1, typename T2>
decltype(declval<T1>() + declval<T2>()) sum4(T1 t1, T2 t2)
{
	return t1 + t2;
}

int main()
{
	sum4(IntWrap(1), IntWrap(2)); // 实际上这里返回的是IntWrap对象
	//cout << res.get() << endl;
	return 0;
}