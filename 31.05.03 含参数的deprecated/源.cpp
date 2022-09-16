[[deprecated("foo was deprecated, use bar instead")]] void foo() {}
void bar() {}
int main()
{
	foo();
}
