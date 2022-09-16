#include <iostream>
struct Empty {};

struct X {
	int i;
	Empty e;
};

/*

struct X {
	int i;
	[[no_unique_address ]]Empty e;
};

struct X {
	int i;
	[[no_unique_address]] Empty e, e1;
};

struct Empty {};
struct Empty1 {};

struct X {
	int i;
	[[no_unique_address]] Empty e;
	[[no_unique_address]] Empty1 e1;
};

*/

int main()
{
	std::cout << "sizeof(X) = " << sizeof(X) << std::endl
		<< "X::i address = " << &((X*)0)->i << std::endl
		<< "X::e address = " << &((X*)0)->e;

	/*

	std::cout << "sizeof(X) = " << sizeof(X) << std::endl
	<< "X::i address = " <<  &((X*)0)->i << std::endl
	<< "X::e address = " << &((X*)0)->e << std::endl
	<< "X::e1 address = " << &((X*)0)->e1 << std::endl;

	*/
}
