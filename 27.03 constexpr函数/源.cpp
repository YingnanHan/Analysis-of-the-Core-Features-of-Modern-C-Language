

constexpr int max_unsigned_char() // 函数的返回值在编译期间就可以确定下来
{
	return 0xff;
}

constexpr int square(int x)
{
	return x * x;
}

constexpr int abs(int x) 
{
	return x > 0 ? x : -x;
}

int main()
{
	char buffer1[max_unsigned_char()] = { 0 };
	char buffer2[square(5)] = { 0 };
	char buffer3[abs(-8)] = { 0 };
	return 0;
}