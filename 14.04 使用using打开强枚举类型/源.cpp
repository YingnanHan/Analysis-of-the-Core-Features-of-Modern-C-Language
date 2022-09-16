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
	using enum Color; // ��ö�����͵���
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
	using Color::Blue; //��ö�ٱ�������
	using Color::Green; //��ö�ٱ�������
	using Color::Red; //��ö�ٱ�������

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