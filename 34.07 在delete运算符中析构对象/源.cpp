#include <iostream>
#include <new>
struct X {
	X() {}
	~X()
	{
		std::cout << "call dtor" << std::endl;
	}
	void* operator new(size_t s)
	{
		return ::operator new(s);
	}

	void operator delete(void* ptr)
	{
		std::cout << "call delete" << std::endl;
		::operator delete(ptr);
	}
};

int main()
{
	X* x = new X;
	delete x;
}
