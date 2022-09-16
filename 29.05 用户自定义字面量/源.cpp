#include <iostream>

template<int scale, char ... unit_char> // 可变参数模板
struct LengthUnit {
	constexpr static int value = scale;
	constexpr static char unit_str[sizeof...(unit_char) + 1] = { unit_char..., '\0' };
};


template<class T>
class LengthWithUnit {
public:
	LengthWithUnit() : length_unit_(0) {}
	LengthWithUnit(unsigned long long length) : length_unit_(length* T::value) {}

	template<class U>
	LengthWithUnit<std::conditional_t<(T::value > U::value), U, T>> operator+(const LengthWithUnit<U>& rhs)
	{
		using unit_type = std::conditional_t<(T::value > U::value), U, T>;
		return LengthWithUnit<unit_type>((length_unit_ + rhs.get_length()) / unit_type::value);
	}

	unsigned long long get_length() const { return length_unit_; }
	constexpr static const char* get_unit_str() { return T::unit_str; }

private:
	unsigned long long length_unit_;
};


template<class T>
std::ostream& operator<< (std::ostream& out, const LengthWithUnit<T>& unit)
{
	out << unit.get_length() / T::value << LengthWithUnit<T>::get_unit_str();
	return out;
}

using MMUnit = LengthUnit<1, 'm', 'm'>;
using CMUnit = LengthUnit<10, 'c', 'm'>;
using DMUnit = LengthUnit<100, 'd', 'm'>;
using MUnit = LengthUnit<1000, 'm'>;
using KMUnit = LengthUnit<1000000, 'k', 'm'>;

using LengthWithMMUnit = LengthWithUnit<MMUnit>;
using LengthWithCMUnit = LengthWithUnit<CMUnit>;
using LengthWithDMUnit = LengthWithUnit<DMUnit>;
using LengthWithMUnit = LengthWithUnit<MUnit>;
using LengthWithKMUnit = LengthWithUnit<KMUnit>;

int main()
{
	auto total_length = LengthWithCMUnit(1) + LengthWithMUnit(2) + LengthWithMMUnit(4);
	std::cout << total_length;
}

/*

LengthWithMMUnit operator "" _mm(unsigned long long length)
{
	return LengthWithMMUnit(length);
}

LengthWithCMUnit operator "" _cm(unsigned long long length)
{
	return LengthWithCMUnit(length);
}

LengthWithDMUnit operator "" _dm(unsigned long long length)
{
	return LengthWithDMUnit(length);
}

LengthWithMUnit operator "" _m(unsigned long long length)
{
	return LengthWithMUnit(length);
}

LengthWithKMUnit operator "" _km(unsigned long long length)
{
	return LengthWithKMUnit(length);
}

int main()
{
	auto total_length = 1_cm + 2_m + 4_mm;
	std::cout << total_length;
}

*/