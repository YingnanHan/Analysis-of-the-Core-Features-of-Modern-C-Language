constexpr char v = 42;
constexpr char foo() { return 42; }
template<int> struct X {};

int main()
{
	X<v> x1;
	X<foo()> x2;
}
