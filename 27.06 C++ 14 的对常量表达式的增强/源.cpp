
constexpr int abs(int x)
{
	if (x > 0)
	{
		return x;
	}
	else
	{
		return -x;
	}
}

constexpr int sum(int x) // 常量表达式函数可以修改与函数本身生命周期相同的变量/对象
{
	int result = 0;
	while (x > 0)
	{
		result += x--;
	}
	return result;
}

int main()
{
	char buffer1[sum(5)] = { 0 };
	char buffer2[abs(-2)] = { 0 };

	return 0;
}