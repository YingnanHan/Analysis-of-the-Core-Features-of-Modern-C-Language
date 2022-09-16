#include<iostream>

using namespace std;

enum class Color
{
	Red,
	Green,
	Blue
};

const char* ColorToStringv1(Color c)
{
	switch (c)
	{
	case Color::Blue:
		return "blue";
	case Color::Green:
		return "green";
	case Color::Red:
		return "red";
	default:
		return "none";
	}
}

const char* ColorToStringv2(Color c)
{
	using enum Color; // 将枚举类型导入
	switch (c)
	{
	case Blue:
		return "blue";
	case Green:
		return "green";
	case Red:
		return "red";
	default:
		return "none";
	}
}

const char* ColorToStringv3(Color c)
{
	using Color::Blue; //将枚举变量导入
	using Color::Green; //将枚举变量导入
	using Color::Red; //将枚举变量导入

	switch (c)
	{
	case Blue:
		return "blue";
	case Green:
		return "green";
	case Red:
		return "red";
	default:
		return "none";
	}
}

int main()
{
	return 0;
}