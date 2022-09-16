template <template <auto> class T, auto N> void foo()
{
	T<N> n;
}
template <auto> struct bar {};

int main()
{
	foo<bar, 5>();
}
