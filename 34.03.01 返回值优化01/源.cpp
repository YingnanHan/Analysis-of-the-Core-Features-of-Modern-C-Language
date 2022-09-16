#include <iostream>
class X {
public:
	X() { std::cout << "X ctor" << std::endl; }
	X(const X& x) { std::cout << "X copy ctor" << std::endl; }
	~X() { std::cout << "X dtor" << std::endl; }
};

X make_x()
{
	X x1;
	return x1;
}

int main()
{
	X x2 = make_x();
}
