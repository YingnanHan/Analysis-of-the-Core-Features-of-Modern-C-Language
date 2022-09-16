template<class T, auto N>
struct X
{
	X(T(&)[N]) {}
};

int main()
{
	X x("hello");
}
