#include<iostream>

template<typename ...T>
int baz(T... t)
{
	return 0;
}

template<typename ...Args>
void foo(Args ...args)
{

}

template<typename ...Args>
class bar
{
public:
	bar(Args ...args)
	{
		foo(baz(args...) + args...);
	}
};

int main()
{
	bar<int, double, unsigned int> b(1, 5.0, 8);
}