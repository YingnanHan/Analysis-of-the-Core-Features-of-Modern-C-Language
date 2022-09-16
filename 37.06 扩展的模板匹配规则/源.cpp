template <template <typename> class T, class U>
void foo()
{
	T<U> n;
}
template <class, class = int> struct bar {};

int main()
{
	foo<bar, double>();
}
