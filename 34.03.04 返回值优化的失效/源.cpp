#include <iostream>
#include <ctime>

class X {
public:
	X() { std::cout << "X ctor" << std::endl; }
	X(const X& x) { std::cout << "X copy ctor" << std::endl; }
	~X() { std::cout << "X dtor" << std::endl; }
};

X make_x()
{
	X x1, x2;
	if (std::time(nullptr) % 50 == 0) {
		return x1;
	}
	else {
		return x2;
	}
}

int main()
{
	X x3 = make_x();
}
