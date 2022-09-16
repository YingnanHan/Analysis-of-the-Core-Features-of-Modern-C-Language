class X {
public:
	[[nodiscard]] X() {}
	X(int a) {}
};

int main()
{
	X x;
	X{};
	X{ 42 };
}
