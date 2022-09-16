#include<iostream>
#include<algorithm>

using namespace std;

template<class ...Args> 
void foo(Args ...args) 
{

}

template<class ...Args>
class bar
{
public:
	bar(Args ...args) 
	{
		auto lm = [args ...] 
		{ 
			foo(&args...); 
		};
		lm();
	}
};

int main()
{
	bar<int, double> b2(5, 8.11);
}
