
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

constexpr int sum(int x) // �������ʽ���������޸��뺯����������������ͬ�ı���/����
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