#include<cstddef>
#include<algorithm>
#include<iostream>

using namespace std;

template <typename T, std::size_t N>
struct basic_fixed_string
{
	constexpr basic_fixed_string(const T(&foo)[N + 1])
	{
		std::copy_n(foo, N + 1, data_);
	}

	T data_[N + 1];
};
template <typename T, std::size_t N>
basic_fixed_string(const T(&str)[N])->basic_fixed_string<T, N - 1>;

template <basic_fixed_string Str>
struct X 
{
	X() 
	{
		std::cout << Str.data_;
	}
};

int main()
{
	X<"hello world"> x;
}

