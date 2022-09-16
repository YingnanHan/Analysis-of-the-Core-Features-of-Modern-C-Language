[[deprecated("foo was deprecated , use bar instead")]] void foo() {}
class [[deprecated]] X {};
int main()
{
	X x;
	foo();
}
