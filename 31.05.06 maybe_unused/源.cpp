int foo(int a [[maybe_unused]], int b [[maybe_unused]] )
{
	return 5;
}

int main()
{
	foo(1, 2);
}
