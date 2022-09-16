#include <iostream>
class X {
public:
	X() { std::cout << "X ctor" << std::endl; }
	~X() { std::cout << "X dtor" << std::endl; }
private:
	X(const X& x) { std::cout << "X copy ctor" << std::endl; }
};

X make_x()
{
	return X();
}

int main()
{
	X x2 = make_x();
}
