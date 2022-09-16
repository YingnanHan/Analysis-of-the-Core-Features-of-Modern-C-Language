int v = 42;
constexpr int* foo() { return &v; }
template<const int*> struct X {};

int main()
{
	X<foo()> x;
}
