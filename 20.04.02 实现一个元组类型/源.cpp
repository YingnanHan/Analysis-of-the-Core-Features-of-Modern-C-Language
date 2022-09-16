#include<iostream>
#include<tuple>

using namespace std;

class BindBase3
{
public:
	int a = 42;
};

class BindTest3 : public BindBase3
{
public:
	double b = 11.7;
	template<std::size_t Idx> auto& get() = delete;
};

template<> auto& BindTest3::get<0>()
{
	return a;
}

template<> auto& BindTest3::get<1>()
{
	return b;
}


namespace std
{
	template<> struct tuple_size<BindTest3>
	{
		static constexpr size_t value = 2;
	};

	template<> struct tuple_element<0, BindTest3>
	{
		using type = int;
	};

	template<> struct tuple_element<1, BindTest3>
	{
		using type = double;
	};
}

int main()
{
	BindTest3 bt3;
	auto& [x3, y3] = bt3;
	x3 = 78;
	cout << bt3.a << endl;
	return 0;
}