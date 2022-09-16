#include<iostream>

template<typename T, typename U>
T baz(T t, U u)
{
	std::cout << t << ":" << u << std::endl;
	return t;
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
		foo(baz(&args, args)...);
	}
};

int main()
{
	bar<int, double, unsigned int> b(1, 5.0, 8);
}