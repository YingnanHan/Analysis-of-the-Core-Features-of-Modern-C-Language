template<const char*> struct Y {};
int main()
{
	static const char str[] = "hello world";
	Y<str> y;
}
