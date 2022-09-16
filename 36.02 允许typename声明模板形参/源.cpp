template <typename T> using A = int;
template <template <typename> class T> struct B {};
int main()
{
	B<A> ba;
}
