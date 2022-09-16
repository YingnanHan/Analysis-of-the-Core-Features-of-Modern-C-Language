template<class ...Args>
void foo(Args ...args) {}

int main()
{
	unsigned int x = 8;
	foo();				// foo()
	foo(1);				// foo<int>(int)
	foo(1, 11.7);		// foo<int,double>(int,double)
	foo(1, 11.7, x);	// foo<int,double,unsigned int>(int,double,unsigned int)
}
