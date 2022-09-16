void bar() {}
void foo(int a)
{
	switch (a)
	{
	case 0:
		break;
	case 1:
		bar();
		[[fallthrough]];
	case 2:
		bar();
		break;
	default:
		break;
	}
}

int main()
{
	foo(1);
}
